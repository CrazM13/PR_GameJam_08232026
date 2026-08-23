using Godot;
using System;

public partial class PlayerController : Node {

	[Export] private Character body;
	[Export] private Camera3D camera;

	[Export] private float speed = 1;

	public override void _Ready() {
		base._Ready();

		Input.MouseMode = Input.MouseModeEnum.Captured;

	}

	public override void _Process(double delta) {
		base._Process(delta);

		if (Input.IsActionPressed("move_jump")) {
			body.AttemptJump();
		}

		Vector3 forward = body.Transform.Basis.X;
		Vector3 right = body.Transform.Basis.Z;

		Vector3 movement = (Input.GetAxis("move_left", "move_right") * forward) + (Input.GetAxis("move_forward", "move_backward") * right);

		body.Move(movement.Normalized() * speed);

		Vector2 mouseVel = Input.GetLastMouseVelocity() * (float)delta;
		body.RotateY(Mathf.DegToRad(-mouseVel.X * 0.25f));
		camera.Rotation = new Vector3(Mathf.Clamp(camera.Rotation.X + Mathf.DegToRad(-mouseVel.Y * 0.25f), -Mathf.Pi * 0.5f, Mathf.Pi * 0.5f), 0, 0);

		if (Input.MouseMode == Input.MouseModeEnum.Captured && Input.IsActionJustPressed("ui_cancel")) {
			Input.MouseMode = Input.MouseModeEnum.Visible;
		} else if (Input.MouseMode == Input.MouseModeEnum.Visible && Input.IsMouseButtonPressed(MouseButton.Left)) {
			Input.MouseMode = Input.MouseModeEnum.Captured;
		}
	}

}
