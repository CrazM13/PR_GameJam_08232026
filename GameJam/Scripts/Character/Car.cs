using Godot;
using System;

public partial class Car : AnimatableBody3D {

	[Export] private AudioStreamPlayer3D honk;

	private float honkCD;

	public override void _Ready() {
		base._Ready();

		honkCD = (GD.Randf() * 4f) + 1;
	}

	public override void _Process(double delta) {
		base._Process(delta);

		if (honkCD > 0) {
			honkCD -= (float)delta;
		}

	}

	public void Hit(Node3D body) {
		if (body is Character character) {
			character.Knockback((-this.GlobalBasis.Z + Vector3.Up) * 10);
			if (honkCD <= 0) {
				honk.Play();
				honkCD = (GD.Randf() * 4f) + 1;
			}
		}
	}

}
