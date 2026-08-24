using Godot;
using System;
using System.Collections.Generic;
using System.IO;

public partial class DialogueMinigame : CanvasLayer {

	[Signal] public delegate void OnMinigameEndEventHandler(DialogueMinigame minigame);

	[Export] private PackedScene prefab;
	[Export] private Control mainGame;
	[Export] private Control container;
	[Export] private Control[] targets;
	[Export] private AudioStreamPlayer audio;
	[Export] private AudioStream[] sfxs;

	private float speed = 8;

	private float shakeStrength;
	private const float MAX_SHAKE = 40;

	private float duration;

	private Vector2 direction;
	private DialoguePiece activePiece;

	private AudioStreamPlaybackPolyphonic polyphonic;

	public override void _Ready() {
		base._Ready();

		activePiece = container.GetChild<DialoguePiece>(0);
		activePiece.Reset();

		audio.Play();
		polyphonic = (AudioStreamPlaybackPolyphonic) audio.GetStreamPlayback();

		direction = GetRandomDirection();
	}

	public void SetDuration(float duration) {
		this.duration = duration;
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

	}

	private void UpdatePiece() {
		DialoguePiece.PieceState currentState = activePiece.GetCurrentState();

		if (currentState == DialoguePiece.PieceState.RETURN) {
			activePiece.InnerOffset = activePiece.InnerOffset.MoveToward(Vector2.Zero, speed * 2);

			if (activePiece.InnerOffset == Vector2.Zero) {
				activePiece.Reset();
				direction = GetRandomDirection();

				for (int i = 0; i < targets.Length; i++) targets[i].Modulate = Colors.Gray;
			}
		} else {
			activePiece.InnerOffset += direction * speed;

			Rect2 movingRect = activePiece.GetGlobalRect();

			movingRect.Position += activePiece.InnerOffset;

			bool finishedCheck = CheckTargets(activePiece, 0, "move_forward");
			if (!finishedCheck) finishedCheck = CheckTargets(activePiece, 1, "move_left");
			if (!finishedCheck) finishedCheck = CheckTargets(activePiece, 2, "move_backward");
			if (!finishedCheck) CheckTargets(activePiece, 3, "move_right");
		}
	}

	private bool CheckTargets(DialoguePiece piece, int target, string input) {
		Rect2 targetRect = targets[target].GetGlobalRect();
		Rect2 movingRect = piece.GetMovingRect();

		if (targetRect.Encloses(movingRect)) {
			piece.SetState(DialoguePiece.PieceState.ACTION);
			targets[target].Modulate = Colors.Yellow;

			if (Input.IsActionJustPressed(input)) {
				speed += 0.01f;
				polyphonic.PlayStream(sfxs[target]);

				piece.SetState(DialoguePiece.PieceState.RETURN);
				targets[target].Modulate = Colors.Green;

				duration -= 5f;
			}

			return true;

		} else if (targetRect.Intersects(movingRect)) {
			if (piece.GetCurrentState() == DialoguePiece.PieceState.ACTION) {
				piece.SetState(DialoguePiece.PieceState.RETURN);
				targets[target].Modulate = Colors.Gray;
				shakeStrength = MAX_SHAKE;
			} else {
				piece.SetState(DialoguePiece.PieceState.WARNING);
				targets[target].Modulate = Colors.Gray;
			}

			return true;
		}

		return false;
	}

	private static Vector2 GetRandomDirection() {
		return (GD.Randi() % 4) switch {
			0 => Vector2.Up,
			1 => Vector2.Down,
			2 => Vector2.Left,
			3 => Vector2.Right,
			_ => Vector2.Up
		};
	}

}
