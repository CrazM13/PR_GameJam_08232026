using Godot;
using System;
using System.Collections.Generic;

public partial class CrowdBoid : Node3D {

	[Export] private PackedScene[] prefabs;
	[Export] private int count = 256;
	[Export] private Vector3 bounds;
	[Export] private Node3D container;

	private RandomNumberGenerator rng;

	private List<Character> boids;

	public override void _Ready() {
		base._Ready();

		rng = new RandomNumberGenerator();
		boids = new List<Character>();

		Vector3 extends = bounds / 2f;

		for (int i = 0; i < count; i++) {
			Character boid = prefabs[rng.RandiRange(0, prefabs.Length - 1)].Instantiate<Character>();
			boid.Position = new Vector3(rng.RandfRange(-extends.X, extends.X), 0, rng.RandfRange(-extends.Z, extends.Z));
			boid.Rotation = new Vector3(0, rng.RandfRange(-Mathf.Tau, Mathf.Tau), 0);
			container.AddChild(boid);
			boids.Add(boid);
		}

	}

	public override void _Process(double delta) {
		base._Process(delta);
		Vector3 extends = bounds / 2f;
		foreach (Character boid in boids) {

			// Wrap around bounds
			Vector3 localPos = boid.GlobalPosition - this.GlobalPosition;
			if (localPos.X > extends.X) {
				boid.GlobalPosition = new Vector3(boid.GlobalPosition.X - bounds.X, boid.GlobalPosition.Y, boid.GlobalPosition.Z);
			} else if (localPos.X < -extends.X) {
				boid.GlobalPosition = new Vector3(boid.GlobalPosition.X + bounds.X, boid.GlobalPosition.Y, boid.GlobalPosition.Z);
			}
			if (localPos.Z > extends.Z) {
				boid.GlobalPosition = new Vector3(boid.GlobalPosition.X, boid.GlobalPosition.Y, boid.GlobalPosition.Z - bounds.Z);
			} else if (localPos.Z < -extends.Z) {
				boid.GlobalPosition = new Vector3(boid.GlobalPosition.X, boid.GlobalPosition.Y, boid.GlobalPosition.Z + bounds.Z);
			}

			boid.Move(boid.Basis.Z);
		}
	}

}
