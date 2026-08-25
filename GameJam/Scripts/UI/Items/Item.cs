using Godot;
using System;

public partial class Item : Resource {

	[Export] public string ID { get; private set; }
	[Export] public Texture2D Texture { get; private set; }

	public virtual void Use(ItemSlotContainer slot) { /* MT */ }

}
