using Godot;
using System;

public partial class Character : CharacterBody3D {

	private Vector3 controlledVelocity;
	private Vector3 uncontrolledVelocity;

	public override void _PhysicsProcess(double delta) {
		base._PhysicsProcess(delta);

		if (!this.IsOnFloor()) {
			uncontrolledVelocity += this.GetGravity() * 0.03f;
		}

		this.Velocity = uncontrolledVelocity + controlledVelocity;

		this.MoveAndSlide();

		controlledVelocity = new Vector3(controlledVelocity.X * 0.7f, controlledVelocity.Y, controlledVelocity.Z * 0.7f);
		if (IsOnFloor()) uncontrolledVelocity = new Vector3(uncontrolledVelocity.X * 0.7f, uncontrolledVelocity.Y, uncontrolledVelocity.Z * 0.7f);
	}

	public void Move(Vector3 direction) {
		controlledVelocity += direction;
	}

	public void Knockback(Vector3 direction) {
		uncontrolledVelocity += direction;
	}

	public void AttemptJump() {
		if (this.IsOnFloor()) {
			controlledVelocity += this.GetGravity() * -1f;
		}
	}

	public void ForceStop() {
		controlledVelocity = uncontrolledVelocity = Vector3.Zero;
	}

}
