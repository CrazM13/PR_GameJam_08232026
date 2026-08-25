using Godot;
using System;

public partial class ChaserController : Node {

	[Export] private Character body;
	[Export] private float duration = 5f;
	[Export] private AudioStreamPlayer audio;
	[Export] private PackedScene minigamePrefab;
	[Export] private bool playMinigame;
	[Export] private Item giftedItem;

	private bool isChasing = true;
	private bool isClose = false;
	private bool hasCaught = false;

	public override void _Process(double delta) {
		base._Process(delta);

		if (PlayerController.playerInstance != null) {

			if (isChasing) {
				if (!hasCaught) {
					if (Engine.TimeScale == 1) {
						body.LookAt(new Vector3(PlayerController.playerInstance.GlobalPosition.X, 0, PlayerController.playerInstance.GlobalPosition.Z), Vector3.Up);
						body.Move(-body.Basis.Z);

						float distance = body.GlobalPosition.DistanceSquaredTo(PlayerController.playerInstance.GlobalPosition);

						if (distance < 4) {
							body.ForceStop();
							hasCaught = true;
							PlayerController.controllerInstance.Enabled = false;
							PlayerController.playerInstance.LookAt(body.GlobalPosition);

							audio.Play();

							Engine.TimeScale = 5f;

							if (playMinigame) {
								DialogueMinigame minigame = minigamePrefab.Instantiate<DialogueMinigame>();
								minigame.SetDuration(duration);
								minigame.OnMinigameEnd += _ => {
									isChasing = false;
									Engine.TimeScale = 1f;
									PlayerController.controllerInstance.Enabled = true;
									body.RotateY(GD.Randf() * Mathf.Pi);

									GetTree().CreateTimer(10, true, false, true).Timeout += () => {
										body.QueueFree();
									};

									audio.Stop();

									if (giftedItem != null) {
										PlayerController.inventoryInstance.Add(giftedItem);
									}
								};

								AddChild(minigame);
							} else {
								GetTree().CreateTimer(duration).Timeout += () => {
									isChasing = false;
									Engine.TimeScale = 1f;
									PlayerController.controllerInstance.Enabled = true;
									body.RotateY(GD.Randf() * Mathf.Pi);

									GetTree().CreateTimer(10, true, false, true).Timeout += () => {
										body.QueueFree();
									};

									audio.Stop();

									if (giftedItem != null) {
										PlayerController.inventoryInstance.Add(giftedItem);
									}
								};
							}

							
						} else if (distance < 36) {
							isClose = true;
						} else if (isClose) {
							isChasing = false;
						}
					}
				} else {
					body.LookAt(PlayerController.playerInstance.GlobalPosition);
					PlayerController.playerInstance.LookAt(body.GlobalPosition);
				}
			} else {
				body.Move(-body.GlobalTransform.Basis.Z);
			}
		}


	}

}
