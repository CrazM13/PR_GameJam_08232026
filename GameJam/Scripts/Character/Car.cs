using Godot;
using System;

public partial class Car : AnimatableBody3D {

	public void Hit(Node3D body) {
		if (body is Character character) {
			character.Knockback((-this.GlobalBasis.Z + Vector3.Up) * 10);
		}
	}

}
