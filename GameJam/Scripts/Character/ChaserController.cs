using Godot;
using System;

public partial class ChaserController : Node {

	[Export] private Character body;
	[Export] private AudioStreamPlayer3D audio;
	[Export] private PackedScene minigamePrefab;
	[Export] private ChaserBehaviour behaviour;

	private bool isChasing = true;
	private bool isClose = false;
	private bool hasCaught = false;

	public override void _Ready() {
		base._Ready();

		body.OnSlapped += this.OnSlapped;
	}

	private void OnSlapped() {
		isChasing = false;

		audio.Stream = behaviour.SlappedAudio;
		audio.Play();
	}

	public override void _Process(double delta) {
		base._Process(delta);

		if (PlayerController.playerInstance != null) {

			if (isChasing) {
				if (!hasCaught) {
					if (!PlayerController.controllerInstance.IsBusy) {
						body.LookAt(new Vector3(PlayerController.playerInstance.GlobalPosition.X, 0, PlayerController.playerInstance.GlobalPosition.Z), Vector3.Up);
						body.Move(-body.Basis.Z);

						float distance = body.GlobalPosition.DistanceSquaredTo(PlayerController.playerInstance.GlobalPosition);

						if (distance < 4) {
							body.ForceStop();
							hasCaught = true;
							PlayerController.controllerInstance.Enabled = false;
							PlayerController.controllerInstance.IsBusy = true;
							PlayerController.playerInstance.LookAt(body.GlobalPosition);

							if (behaviour.PaymentItem != null) {
								if (PlayerController.inventoryInstance.HasItem(behaviour.PaymentItem)) {
									audio.Stream = behaviour.SuccessAudio;
								} else {
									audio.Stream = behaviour.FailAudio;
								}
							} else {
								audio.Stream = behaviour.SuccessAudio;
							}

							audio.Play();

							//Engine.TimeScale = 5f;

							if (behaviour.PlayMinigame) {
								DialogueMinigame minigame = minigamePrefab.Instantiate<DialogueMinigame>();
								minigame.SetDuration((float) audio.Stream.GetLength());
								minigame.OnMinigameEnd += _ => {
									isChasing = false;
									//Engine.TimeScale = 1f;
									PlayerController.controllerInstance.Enabled = true;
									PlayerController.controllerInstance.IsBusy = false;
									body.RotateY(GD.Randf() * Mathf.Pi);

									GetTree().CreateTimer(10, true, false, true).Timeout += () => {
										body.QueueFree();
									};

									audio.Stop();

									AttemptGift();
								};

								AddChild(minigame);
							} else {
								GetTree().CreateTimer((float)audio.Stream.GetLength()).Timeout += () => {
									isChasing = false;
									//Engine.TimeScale = 1f;
									PlayerController.controllerInstance.Enabled = true;
									PlayerController.controllerInstance.IsBusy = false;
									body.RotateY(GD.Randf() * Mathf.Pi);

									GetTree().CreateTimer(10, true, false, true).Timeout += () => {
										body.QueueFree();
									};

									audio.Stop();

									AttemptGift();
								};
							}

							
						} else if (distance < 36) {
							isClose = true;
						} else if (isClose) {
							//isChasing = false;
						}
					}
				} else {
					Vector3 playerPos = new Vector3(PlayerController.playerInstance.GlobalPosition.X, body.GlobalPosition.Y, PlayerController.playerInstance.GlobalPosition.Z);
					Vector3 chaserPos = new Vector3(body.GlobalPosition.X, PlayerController.playerInstance.GlobalPosition.Y, body.GlobalPosition.Z);

					body.LookAt(playerPos);
					PlayerController.playerInstance.LookAt(chaserPos);
				}
			} else {
				body.Move(-body.GlobalTransform.Basis.Z);
			}
		}


	}

	private void AttemptGift() {
		if (behaviour.PaymentItem != null) {
			if (PlayerController.inventoryInstance.RemoveItem(behaviour.PaymentItem)) {
				if (behaviour.GiftedItem != null) {
					PlayerController.inventoryInstance.Add(behaviour.GiftedItem);
				}
			}
		} else if (behaviour.GiftedItem != null) {
			PlayerController.inventoryInstance.Add(behaviour.GiftedItem);
		}
	}

}
