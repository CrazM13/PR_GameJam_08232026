using Godot;
using System;
using System.Collections.Generic;
using System.IO;

public partial class DialogueMinigame : CanvasLayer {

	[Signal] public delegate void OnMinigameEndEventHandler(DialogueMinigame minigame);

	[Export] private PackedScene prefab;
	[Export] private Control mainGame;
	[Export] private DialoguePiece activePiece;
	[Export] private Control[] targets;
	[Export] private ProgressBar timeBar;
	[Export] private AudioStreamPlayer audio;
	[Export] private AudioStream[] sfxs;

	private float speed = 8;

	private float shakeStrength;
	private const float MAX_SHAKE = 40;

	private float duration;

	private Vector2 direction;

	private AudioStreamPlaybackPolyphonic polyphonic;

	public override void _Ready() {
		base._Ready();

		SetDuration(256);

		activePiece.Reset();

		audio.Play();
		polyphonic = (AudioStreamPlaybackPolyphonic) audio.GetStreamPlayback();

		direction = Vector2.Right;
	}

	public void SetDuration(float duration) {
		this.duration = duration;

		timeBar.MaxValue = duration;
		timeBar.Value = duration;
	}

	public override void _Process(double delta) {
		base._Process(delta);
		
		UpdatePiece();

		if (shakeStrength > 0) {

			mainGame.OffsetTransformPosition = Vector2.Zero + new Vector2(GD.Randf() * shakeStrength, 0);

			shakeStrength -= MAX_SHAKE * 2 * (float)delta;

			if (shakeStrength <= 0) {
				shakeStrength = 0;
				mainGame.OffsetTransformPosition = Vector2.Zero;
			}
		}

		duration -= (float)delta;
		if (duration <= 0) {
			EmitSignal(SignalName.OnMinigameEnd, this);
			this.QueueFree();
		}

		timeBar.Value = duration;
	}

	private void UpdatePiece() {
		DialoguePiece.PieceState currentState = activePiece.GetCurrentState();

		{
			activePiece.InnerOffset += direction * speed;

			Rect2 movingRect = activePiece.GetGlobalRect();

			movingRect.Position += activePiece.InnerOffset;

			bool finishedCheck = CheckTargets(activePiece, 0, "move_forward");
			if (!finishedCheck) finishedCheck = CheckTargets(activePiece, 1, "move_left");
			if (!finishedCheck) finishedCheck = CheckTargets(activePiece, 2, "move_backward");
			if (!finishedCheck) CheckTargets(activePiece, 3, "move_right");

			if (activePiece.InnerOffset.X < -540 || activePiece.InnerOffset.X > 540) {
				direction *= -1;
			}
		}
	}

	private bool CheckTargets(DialoguePiece piece, int target, string input) {
		Rect2 targetRect = targets[target].GetGlobalRect();
		Rect2 movingRect = piece.GetMovingRect();

		if (targetRect.Encloses(movingRect)) {
			

			if (Input.IsActionJustPressed(input)) {
				speed += 0.01f;
				polyphonic.PlayStream(sfxs[target]);

				piece.SetState(DialoguePiece.PieceState.ACTION);
				targets[target].Modulate = Colors.Green;

				duration -= 5f;
			}

			return true;

		} else if (targetRect.Intersects(movingRect)) {
			piece.SetState(DialoguePiece.PieceState.WARNING);
			targets[target].Modulate = Colors.Gray;

			return true;
		}

		return false;
	}

	private Vector2 GetRandomDirection() {
		return new Vector2(direction.X * -1, 0);
	}

}
