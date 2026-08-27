using Godot;
using System;

public partial class ItemAttackPower : ItemConsumable {

	[Export] private float modifier = 2;

	public override void StartEffect() {
		base.StartEffect();

		PlayerController.controllerInstance.GetAttributes().SetModifier(this.ID, Attributes.ATTACK_POWER, modifier);

	}

	public override void EndEffect() {
		base.EndEffect();

		PlayerController.controllerInstance.GetAttributes().ClearModifier(this.ID);

	}

}
