using Godot;
using Godot.Collections;
using System;

public partial class PlayerController : Node {

	private readonly Attributes attributes = new Attributes();
	public static Character playerInstance;
	public static PlayerController controllerInstance;
	public static Inventory inventoryInstance;

	[Export] private Character body;
	[Export] private Camera3D camera;
	[Export] private AudioStreamPlayer slapSFX;
	[Export] private AnimationPlayer firstPersonAnimations;
	[Export] private Inventory inventory;

	[Export] private float speed = 1;
	[Export] private Item[] startingItems;

	private float slapCooldown = 0;

	public bool Enabled { get; set; } = true;
	public bool IsBusy { get; set; } = true;

	public override void _Ready() {
		base._Ready();

		

		playerInstance = body;
		controllerInstance = this;
		inventoryInstance = inventory;

		if (startingItems?.Length > 0) {
			foreach (Item item in startingItems) {
				inventory.Add(item);
			}
		}

	}

	public override void _Process(double delta) {
		base._Process(delta);

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

		if (movement.LengthSquared() != 0) {
			if (!firstPersonAnimations.IsPlaying()) {
				firstPersonAnimations.Play("movement");
			}
		} else if (firstPersonAnimations.CurrentAnimation == "movement") {
			firstPersonAnimations.Stop();
		}
		

		body.Move(movement.Normalized() * (speed * attributes.Get(Attributes.SPEED)) * (Input.IsActionPressed("move_sprint") ? 2 : 1));

		Vector2 mouseVel = Input.GetLastMouseVelocity() * (float)delta;
		body.RotateY(Mathf.DegToRad(-mouseVel.X * 0.25f));
		camera.Rotation = new Vector3(Mathf.Clamp(camera.Rotation.X + Mathf.DegToRad(-mouseVel.Y * 0.25f), -Mathf.Pi * 0.5f, Mathf.Pi * 0.5f), 0, 0);

		body.GravityModifier = attributes.Get(Attributes.GRAVITY_STRENGTH);

		if (body.GlobalPosition.Y < -50) {
			SceneManager.Instance.ReloadScene();
		}
	}

	private void AttaptSlap() {

		firstPersonAnimations.Play("slap");
		slapCooldown = 1f;

		GetTree().CreateTimer(0.2f).Timeout += () => {
			PhysicsDirectSpaceState3D spaceState = playerInstance.GetWorld3D().DirectSpaceState;
			PhysicsRayQueryParameters3D query = PhysicsRayQueryParameters3D.Create(camera.GlobalPosition, camera.GlobalPosition - (camera.GlobalTransform.Basis.Z * 3));
			Dictionary result = spaceState.IntersectRay(query);

			if (result.Count <= 0) return;

			Node target = (Node)result["collider"].AsGodotObject();

			if (target is Character enemy) {
				Vector3 hitDirection = -camera.GlobalTransform.Basis.Z;

				hitDirection = new Vector3(hitDirection.X, 0, hitDirection.Z);

				enemy.ForceStop();
				enemy.AttemptJump();
				enemy.Knockback(hitDirection * 10 * this.attributes.Get(Attributes.ATTACK_POWER));

				slapSFX.Play();
			}
		};
	}

	public override void _ExitTree() {
		base._ExitTree();

		playerInstance = null;
		controllerInstance = null;
		inventoryInstance = null;
	}

	public Attributes GetAttributes() {
		return attributes;
	}

}
