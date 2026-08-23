using Godot;
using System;

public partial class ChaserController : Node {

	[Export] private Character body;
	[Export] private float duration = 5f;

	private bool isChasing = true;
	private bool hasCaught = false;

	public override void _Process(double delta) {
		base._Process(delta);

		if (PlayerController.player != null) {

			if (isChasing) {
				if (!hasCaught) {
					body.LookAt(new Vector3(PlayerController.player.Position.X, 0, PlayerController.player.Position.Z), Vector3.Up);
					body.Move(-body.Basis.Z);

					float distance = body.Position.DistanceSquaredTo(PlayerController.player.Position);

					if (distance < 4) {
						body.ForceStop();
						hasCaught = true;
						PlayerController.controller.Enabled = false;
						PlayerController.player.LookAt(body.Position);

						Engine.TimeScale = 10f;

						GetTree().CreateTimer(duration / Engine.TimeScale, true, false, true).Timeout += () => {
							isChasing = false;
							Engine.TimeScale = 1f;
							PlayerController.controller.Enabled = true;
							body.RotateY(GD.Randf() * Mathf.Pi);

							GetTree().CreateTimer(10, true, false, true).Timeout += () => {
								body.QueueFree();
							};
						};
					} else if (distance < 16) {
						Engine.TimeScale = 0.25f;
					}
				}
			} else {
				body.Move(-body.Basis.Z);
			}
		}


	}

}
