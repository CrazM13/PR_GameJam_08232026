using Godot;
using System;

public partial class HUDClock : Node {

	[Export] private Label text;

	public override void _Process(double delta) {
		base._Process(delta);

		GameManager.Time += (float) delta;

		text.Text = (DateTime.Today + TimeSpan.FromSeconds((402 + GameManager.Time) * 60)).ToString(@"hh\:mm tt");
		text.SelfModulate = GameManager.Time > 78 ? (GameManager.Time > 138 ? Colors.Red : Colors.Yellow) : Colors.White;

	}

}
