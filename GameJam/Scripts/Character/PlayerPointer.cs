using Godot;
using System;

public partial class PlayerPointer : Node3D {

	private float timer;

	public override void _Process(double delta) {
		base._Process(delta);

		timer += 4 * (float) delta;

		this.GlobalPosition = new Vector3(this.GlobalPosition.X, 0.1f, this.GlobalPosition.Z);
		this.GlobalRotation = Vector3.Zero;

		((Node3D)this.GetChild(0)).Position = new Vector3(this.Position.X, this.Position.Y, (Mathf.Sin(timer) * 2) + 4);

	}

}
