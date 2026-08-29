using Godot;
using System;

public partial class RandomizeColour : MeshInstance3D {

	[Export] private Color[] variants;

	private static RandomNumberGenerator rng;

	public override void _Ready() {
		base._Ready();

		rng ??= new RandomNumberGenerator();

		StandardMaterial3D newMat = new() {
			AlbedoColor = variants[rng.Randi() % variants.Length]
		};

		this.SetSurfaceOverrideMaterial(0, newMat);
	}

}
