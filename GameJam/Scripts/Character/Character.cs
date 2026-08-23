using Godot;
using System;

public partial class Character : CharacterBody3D {

	public override void _PhysicsProcess(double delta) {
		base._PhysicsProcess(delta);

		if (!this.IsOnFloor()) {
			this.Velocity += this.GetGravity() * 3f * (float) delta;
		}

		this.MoveAndSlide();

		this.Velocity = new Vector3(this.Velocity.X * 0.7f, this.Velocity.Y, this.Velocity.Z * 0.7f);
	}

	public void Move(Vector3 direction) {
		this.Velocity += direction;
	}

	public void AttemptJump() {
		if (this.IsOnFloor()) {
			this.Velocity += this.GetGravity() * -1f;
		}
	}

	public void ForceStop() {
		this.Velocity = Vector3.Zero;
	}

}
