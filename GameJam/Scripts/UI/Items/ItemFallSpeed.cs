using Godot;
using System;

public partial class ItemFallSpeed : ItemConsumable {

	[Export] private float modifier = 2;

	public override void StartEffect() {
		base.StartEffect();

		PlayerController.controllerInstance.GetAttributes().SetModifier(this.ID, Attributes.GRAVITY_STRENGTH, modifier);

	}

	public override void EndEffect() {
		base.EndEffect();

		PlayerController.controllerInstance.GetAttributes().ClearModifier(this.ID);

	}

}
