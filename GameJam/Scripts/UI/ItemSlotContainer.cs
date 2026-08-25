using Godot;
using System;

public partial class ItemSlotContainer : Control {

	[Export] public string ItemID { get; private set; }
	[Export] public string Action { get; private set; }
	[Export] private string actionDisplay;
	[Export] private Texture2D icon;
	[Export] private ItemEffect effect;

	[ExportGroup("References")]
	[Export] private Label keyDisplay;
	[Export] private TextureRect iconDisplay;
	[Export] private Label countDisplay;
	[Export] private TextureProgressBar progressDisplay;

	private float progress = 1;

	private int count = 0;

	private Vector2 targetPosition;

	public override void _Ready() {
		base._Ready();

		this.OffsetTransformPosition = targetPosition = new Vector2(0, 640);

		UpdateVisuals();
	}

	public override void _Process(double delta) {
		base._Process(delta);

		this.OffsetTransformPosition = this.OffsetTransformPosition.MoveToward(targetPosition, 64 * (float) delta);

	}

	private void UpdateVisuals() {
		countDisplay.Text = $"x{count}";
		keyDisplay.Text = actionDisplay;
		if (icon != null) iconDisplay.Texture = icon;
		iconDisplay.SelfModulate = count > 0 ? Colors.White : Colors.Gray;
		progressDisplay.Value = progress;

		targetPosition = count > 0 ? Vector2.Zero : new Vector2(0, 640);
	}

	public int Count {
		get { 
			return count;
		}
		set { 
			count = value;
			UpdateVisuals();
		}
	}

	public void Use() {
		if (count > 0) {
			effect?.Use(this);
			Count--;
		}
	}

}
