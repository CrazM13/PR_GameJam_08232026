using Godot;
using System;

public partial class ItemSpeed : ItemConsumable {

	[Export] private float speedModifier = 2;

	public override void StartEffect() {
		base.StartEffect();

		PlayerController.controllerInstance.GetAttributes().SetModifier(this.ID, Attributes.SPEED, speedModifier);
	}

	public override void EndEffect() {
		base.EndEffect();

		PlayerController.controllerInstance.GetAttributes().ClearModifier(this.ID);
	}

}
