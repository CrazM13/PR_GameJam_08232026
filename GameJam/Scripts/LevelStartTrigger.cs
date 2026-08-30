using Godot;
using System;

public partial class LevelStartTrigger : Area3D {

	[Export] private Node splash;

	public override void _Ready() {
		base._Ready();

		this.BodyEntered += this.OnBodyEntered;
	}

	private void OnBodyEntered(Node3D body) {
		if (body == PlayerController.playerInstance) {
			PlayerController.controllerInstance.IsBusy = false;
			this.QueueFree();

			splash.QueueFree();
		}
	}
}
