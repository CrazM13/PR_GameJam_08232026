using Godot;
using System;
using System.Collections.Generic;

public partial class CrowdBoid : Node3D {

	[Export] private PackedScene[] prefabs;
	[Export] private float speed = 0.5f;
	[Export] private int count = 256;
	[Export] private Vector3 bounds;
	[Export] private Node3D container;
	[Export] private AudioStream[] jeers;

	private RandomNumberGenerator rng;

	private float voCooldown = 0.1f;

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

		if (voCooldown > 0) voCooldown -= (float) delta;

		int skip = 3;

		Vector3 extends = bounds / 2f;
		foreach (Character boid in boids) {

			// Wrap around bounds
			Vector3 localPos = boid.GlobalPosition - this.GlobalPosition;
			if (localPos.X > extends.X) {
				boid.GlobalPosition = new Vector3(boid.GlobalPosition.X - bounds.X, boid.GlobalPosition.Y, boid.GlobalPosition.Z);
				boid.ForceStop();
			} else if (localPos.X < -extends.X) {
				boid.GlobalPosition = new Vector3(boid.GlobalPosition.X + bounds.X, boid.GlobalPosition.Y, boid.GlobalPosition.Z);
				boid.ForceStop();
			}
			if (localPos.Z > extends.Z) {
				boid.GlobalPosition = new Vector3(boid.GlobalPosition.X, boid.GlobalPosition.Y, boid.GlobalPosition.Z - bounds.Z);
				boid.ForceStop();
			} else if (localPos.Z < -extends.Z) {
				boid.GlobalPosition = new Vector3(boid.GlobalPosition.X, boid.GlobalPosition.Y, boid.GlobalPosition.Z + bounds.Z);
				boid.ForceStop();
			}

			if (voCooldown <= 0) {
				if (skip > 0) skip--;

				if (skip == 0 && !PlayerController.controllerInstance.IsBusy) {
					voCooldown = (GD.Randf() * 0.5f) + 0.1f;
					DropAudio(jeers[GD.Randi() % jeers.Length], boid.GlobalPosition);
				}
			}

			if (boid.IsOnFloor()) boid.Move(-boid.GlobalBasis.Z * speed);
		}
	}

	private void DropAudio(AudioStream audio, Vector3 position) {
		AudioStreamPlayer3D source = new() {
			Bus = "Voice",
			Stream = audio,
			MaxDistance = 9
		};

		source.Finished += source.QueueFree;

		GetTree().CurrentScene.AddChild(source);

		source.GlobalPosition = position;

		source.Play();

	}

}
