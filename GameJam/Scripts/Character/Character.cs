using Godot;
using System;

public partial class Character : CharacterBody3D {

	private const float RAGDOLL_POWER = 50f;

	[Export] private PhysicalBoneSimulator3D ragdoll;

	private Vector3 controlledVelocity;
	private Vector3 uncontrolledVelocity;

	public float GravityModifier { get; set; } = 1;

	public override void _PhysicsProcess(double delta) {
		base._PhysicsProcess(delta);

		this.Velocity = uncontrolledVelocity + controlledVelocity;

		this.MoveAndSlide();

		controlledVelocity = new Vector3(controlledVelocity.X * 0.7f, controlledVelocity.Y, controlledVelocity.Z * 0.7f);
		if (IsOnFloor()) {
			uncontrolledVelocity = new Vector3(uncontrolledVelocity.X * 0.7f, 0, uncontrolledVelocity.Z * 0.7f);
			controlledVelocity = new Vector3(controlledVelocity.X, 0, controlledVelocity.Z);

			if (ragdoll?.IsSimulatingPhysics() ?? false) {
				ragdoll?.PhysicalBonesStopSimulation();
			}
		} else {
			uncontrolledVelocity += this.GetGravity() * 0.03f * GravityModifier;
		}

		
	}

	public void Move(Vector3 direction) {
		controlledVelocity += direction;
	}

	public void Knockback(Vector3 direction) {
		uncontrolledVelocity += direction;

		
		

		if (ragdoll != null) {
			ragdoll.PhysicalBonesStartSimulation();

			foreach (Node child in ragdoll.GetChildren()) {
				if (child is PhysicalBone3D bone && child.Name != "Root") {
					bone.AngularVelocity = new Vector3(GD.Randf() * RAGDOLL_POWER, GD.Randf() * RAGDOLL_POWER, GD.Randf() * RAGDOLL_POWER);
				}
			}
		}

	}

	public void AttemptJump() {
		if (this.IsOnFloor()) {
			uncontrolledVelocity += this.GetGravity() * -0.75f;
		}
	}

	public void ForceStop() {
		controlledVelocity = uncontrolledVelocity = Vector3.Zero;
	}

}
