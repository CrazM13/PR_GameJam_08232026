using Godot;
using System;
using System.Data.SqlTypes;

public partial class BounceOnHover : Node {

	[Export] private Control target;
	[Export] private float speed = 1;
	[Export] private float strength = 10;

	private float timer;

	private bool isBouncing = false;

	public override void _Ready() {
		base._Ready();

		target.MouseEntered += () => { isBouncing = true; };
		target.MouseExited += () => { isBouncing = false; };

	}

	public override void _Process(double delta) {
		base._Process(delta);

		timer += speed * (float) delta;

		target.OffsetTransformEnabled = isBouncing;

		target.OffsetTransformPosition = new Vector2(0, Mathf.Sin(timer) * strength);

	}

}
