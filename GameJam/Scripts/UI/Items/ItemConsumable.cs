using Godot;
using System;

public partial class ItemConsumable : Item {

	[Export] private float duration;

	public override void Use(ItemSlotContainer slot) {
		base.Use(slot);

		StartEffect();
		slot.SetCooldown(duration);
	}

	public virtual void StartEffect() { /* MT */ }
	public virtual void EndEffect() { /* MT */ }

}
