using Godot;
using System;

public partial class RandomPlacer : Marker3D {

	[Export] private PackedScene[] prefabs;

	public override void _Process(double delta) {
		base._Process(delta);

		PackedScene selected = prefabs[GD.Randi() % prefabs.Length];

		Node3D prop = selected.Instantiate<Node3D>();

		GetParent().AddChild(prop);

		prop.GlobalPosition = this.GlobalPosition;
		prop.GlobalRotation = this.GlobalRotation;
		prop.Scale = this.Scale;

		this.QueueFree();
	}

}
