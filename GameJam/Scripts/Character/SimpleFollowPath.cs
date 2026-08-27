using Godot;
using System;

public partial class SimpleFollowPath : PathFollow3D {

	[Export] private float speed = 1;

	public override void _Process(double delta) {
		base._Process(delta);

		this.Progress += speed *(float)delta;
	}

}
