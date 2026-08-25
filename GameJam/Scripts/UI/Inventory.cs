using Godot;
using System;

public partial class Inventory : Control {

	[Export] private ItemSlotContainer[] slots;

	public override void _Process(double delta) {
		base._Process(delta);

		foreach (ItemSlotContainer slot in slots) {
			if (Input.IsActionJustPressed(slot.Action)) slot.Use();
		}

	}

	public void Add(Item item) {
		foreach (ItemSlotContainer slot in slots) {
			if (slot.GetItem() == null) {
				slot.SetItem(item);
				break;
			}
		}
	}

}
