using Godot;
using Godot.Collections;
using System;

public partial class PlayerController : Node {

	public static Character player;
	public static PlayerController controller;

	[Export] private Character body;
	[Export] private Camera3D camera;
	[Export] private AudioStreamPlayer slapSFX;
	[Export] private AnimationPlayer firstPersonAnimations;

	[Export] private float speed = 1;

	private float slapCooldown = 0;

	public bool Enabled { get; set; } = true;

	public override void _Ready() {
		base._Ready();

		Input.MouseMode = Input.MouseModeEnum.Captured;

		player = body;
		controller = this;

	}

	public override void _Process(double delta) {
		base._Process(delta);

		if (Input.MouseMode == Input.MouseModeEnum.Captured && Input.IsActionJustPressed("ui_cancel")) {
			Input.MouseMode = Input.MouseModeEnum.Visible;
		} else if (Input.MouseMode == Input.MouseModeEnum.Visible && Input.IsMouseButtonPressed(MouseButton.Left)) {
			Input.MouseMode = Input.MouseModeEnum.Captured;
		}

		if (!Enabled) return;

		if (Input.IsActionPressed("move_jump")) {
			body.AttemptJump();
		}


		slapCooldown -= (float) delta;
		if (slapCooldown <= 0 && Input.IsMouseButtonPressed(MouseButton.Left)) {
			AttaptSlap();
		}

		Vector3 forward = body.Transform.Basis.X;
		Vector3 right = body.Transform.Basis.Z;

		Vector3 movement = (Input.GetAxis("move_left", "move_right") * forward) + (Input.GetAxis("move_forward", "move_backward") * right);

		body.Move(movement.Normalized() * speed);

		Vector2 mouseVel = Input.GetLastMouseVelocity() * (float)delta;
		body.RotateY(Mathf.DegToRad(-mouseVel.X * 0.25f));
		camera.Rotation = new Vector3(Mathf.Clamp(camera.Rotation.X + Mathf.DegToRad(-mouseVel.Y * 0.25f), -Mathf.Pi * 0.5f, Mathf.Pi * 0.5f), 0, 0);
	}

	private void AttaptSlap() {

		firstPersonAnimations.Play("slap");
		slapCooldown = 1f;

		GetTree().CreateTimer(0.2f).Timeout += () => {
			PhysicsDirectSpaceState3D spaceState = player.GetWorld3D().DirectSpaceState;
			PhysicsRayQueryParameters3D query = PhysicsRayQueryParameters3D.Create(camera.GlobalPosition, camera.GlobalPosition - (camera.GlobalTransform.Basis.Z * 3));
			Dictionary result = spaceState.IntersectRay(query);

			if (result.Count <= 0) return;

			Node target = (Node)result["collider"].AsGodotObject();

			if (target is Character enemy) {
				Vector3 hitDirection = -camera.GlobalTransform.Basis.Z;

				hitDirection = new Vector3(hitDirection.X, 0, hitDirection.Z);

				enemy.ForceStop();
				enemy.AttemptJump();
				enemy.Knockback(hitDirection * 10);

				slapSFX.Play();
			}
		};
	}

	public override void _ExitTree() {
		base._ExitTree();

		player = null;
		controller = null;
	}

}
