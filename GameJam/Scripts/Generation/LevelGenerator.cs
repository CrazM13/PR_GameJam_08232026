using Godot;
using System;
using System.Collections;
using System.Collections.Generic;

public partial class LevelGenerator : Node3D {

	[Export] private PackedScene[] prefabs;
	[Export] private PackedScene winPrefab;
	private List<Node3D> levelComponents;

	private int tilesSpawned = 0;

	public override void _Ready() {
		base._Ready();

		levelComponents = new List<Node3D>();
		

	}

	public override void _Process(double delta) {
		base._Process(delta);

		if (levelComponents.Count == 0) {
			Spawn(this);
		} else {
			float distance = PlayerController.playerInstance.GlobalPosition.DistanceSquaredTo(levelComponents[^1].GlobalPosition);

			if (distance < 1600) {
				Spawn(levelComponents[^1]);
			}
		}

	}

	private void Spawn(Node3D last) {

		PackedScene selected = prefabs[0];

		if (tilesSpawned < 32) {
			selected = prefabs[GD.Randi() % prefabs.Length];
		} else if (tilesSpawned == 32) {
			selected = winPrefab;
		}

		Node3D prop = selected.Instantiate<Node3D>();

		GetParent().AddChild(prop);

		prop.GlobalPosition = last.GlobalPosition + new Vector3(0, 0, 20);

		levelComponents.Add(prop);

		if (levelComponents.Count > 10) {
			levelComponents[0].QueueFree();
			levelComponents.RemoveAt(0);
		}

		tilesSpawned++;
	}

}
