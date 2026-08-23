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
			boid.Rotation = new Vector3(0, Mathf.Pi + rng.RandfRange(-Mathf.Pi, Mathf.Pi), 0);
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

			// Get neighbors
			List<Character> closeNeighbors = new List<Character>();
			List<Character> tooCloseNeighbors = new List<Character>();
			for (int i = 0; i < boids.Count; i++) {
				if (boids[i] == boid) continue; // Skip self

				float distance = boids[i].GlobalPosition.DistanceSquaredTo(boid.GlobalPosition);
				if (distance < 25) { // Very close
					tooCloseNeighbors.Add(boids[i]);
				} else if (distance < 100) { // Close
					closeNeighbors.Add(boids[i]);
				}
			}

			// Calculate steering forces
			Vector3 steer;
			Vector3 separation = Vector3.Zero;
			Vector3 alignment = Vector3.Zero;
			Vector3 cohesion = Vector3.Zero;

			// Separation - avoid crowding
			foreach (Character neighbor in tooCloseNeighbors) {
				Vector3 diff = boid.GlobalPosition - neighbor.GlobalPosition;
				diff = diff.Normalized();
				diff /= diff.Length(); // Weight by distance
				separation += diff;
			}
			separation = separation.Normalized();
			
			// Alignment - match velocity of neighbors
			alignment += boid.Basis.Z.Normalized();
			foreach (Character neighbor in closeNeighbors) {
				alignment += neighbor.Basis.Z.Normalized();
			}
			alignment = alignment.Normalized();

			// Cohesion - move toward center of mass
			Vector3 center = boid.GlobalPosition;
			foreach (Character neighbor in closeNeighbors) {
				center += neighbor.GlobalPosition;
			}

			if (closeNeighbors.Count > 0) {
				center /= closeNeighbors.Count;
				cohesion = (center - boid.GlobalPosition).Normalized();
			}
			cohesion = cohesion.Normalized();

			// Apply weights
			separation *= 8.5f;
			alignment *= 2.0f;
			cohesion *= 1.0f;

			// Combine forces
			steer = separation + alignment + cohesion;
			steer = new Vector3(steer.X, 0, steer.Z);

			if (steer.Length() > 0) {
				steer = steer.Normalized();

				//boid.LookAt(boid.GlobalPosition + steer, Vector3.Up);

				boid.Rotation = boid.Rotation.Lerp(new Vector3(0, Mathf.Atan2(steer.Z, steer.X), 0), (float) delta);
			}

			boid.Move(boid.Basis.Z);
		}
	}

}
