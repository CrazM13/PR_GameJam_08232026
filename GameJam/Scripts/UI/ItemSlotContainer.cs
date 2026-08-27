using Godot;
using System;

public partial class ItemSlotContainer : Control {

	[Export] public string Action { get; private set; }
	[Export] private string actionDisplay;

	[ExportGroup("References")]
	[Export] private Label keyDisplay;
	[Export] private TextureRect iconDisplay;
	[Export] private TextureProgressBar progressDisplay;

	private float progress = -1;

	private Item item = null;

	private Vector2 targetPosition;

	public override void _Ready() {
		base._Ready();

		this.OffsetTransformPosition = targetPosition = new Vector2(0, 128);
		this.progressDisplay.Visible = false;

		UpdateVisuals();
	}

	public override void _Process(double delta) {
		base._Process(delta);

		this.OffsetTransformPosition = this.OffsetTransformPosition.MoveToward(targetPosition, 256 * (float) delta);

		if (this.progressDisplay.Visible) {
			progress -= (float) delta;
			progressDisplay.Value = progress;

			if (progress <= 0) {

				if (this.item is ItemConsumable consumable) {
					consumable.EndEffect();
				}

				this.SetItem(null);
				UpdateVisuals();
				this.progressDisplay.Visible = false;
			}
		}
	}

	private void UpdateVisuals() {
		if (item != null) {
			iconDisplay.Texture = item.Texture;
		} else {
			iconDisplay.Texture = null;
		}

		keyDisplay.Text = actionDisplay;

		
		progressDisplay.Value = progress;

		targetPosition = item != null ? Vector2.Zero : new Vector2(0, 128);
	}

	public void Use() {
		if (!this.progressDisplay.Visible) item.Use(this);
	}

	public Item GetItem() {
		return item;
	}

	public void SetItem(Item item) {
		this.item = item;
		UpdateVisuals();
	}

	public void SetCooldown(float cooldown) {
		this.progress = cooldown;
		this.progressDisplay.Value = this.progressDisplay.MaxValue = cooldown;
		this.progressDisplay.Visible = true;
	}

}
