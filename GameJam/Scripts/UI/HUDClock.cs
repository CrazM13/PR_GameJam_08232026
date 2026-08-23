using Godot;
using System;

public partial class HUDClock : Node {

	[Export] private Label text;

	public override void _Process(double delta) {
		base._Process(delta);

		GameManager.Time += (float) delta;

		text.Text = TimeSpan.FromSeconds(420 + GameManager.Time).ToString(@"mm\:ss") + " AM";
		text.SelfModulate = GameManager.Time > 60 ? (GameManager.Time > 90 ? Colors.Red : Colors.Yellow) : Colors.White;

	}

}
