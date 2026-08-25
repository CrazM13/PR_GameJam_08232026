using Godot;
using System;

public abstract partial class ItemEffect : Node {

	public abstract void Use(ItemSlotContainer slot);

}
