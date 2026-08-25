using Godot;
using System;

public partial class ItemCoffee : ItemConsumable {

	[Export] private float coffeeSpeed = 2;

	public override void StartEffect() {
		base.StartEffect();

		PlayerController.controllerInstance.GetAttributes().SetModifier(this.ID, Attributes.SPEED, coffeeSpeed);
	}

	public override void EndEffect() {
		base.EndEffect();

		PlayerController.controllerInstance.GetAttributes().ClearModifier(this.ID);
	}

}
