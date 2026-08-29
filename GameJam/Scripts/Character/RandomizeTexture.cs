using Godot;
using System;

public partial class RandomizeTexture : MeshInstance3D {

	[Export] private Texture2D[] variants;

	private static RandomNumberGenerator rng;

	public override void _Ready() {
		base._Ready();

		rng ??= new RandomNumberGenerator();

		StandardMaterial3D newMat = new() {
			AlbedoTexture = variants[rng.Randi() % variants.Length]
		};

		this.SetSurfaceOverrideMaterial(0, newMat);
	}

}
