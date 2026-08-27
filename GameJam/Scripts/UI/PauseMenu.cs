using Godot;
using System;

public partial class PauseMenu : CanvasLayer {

	[Export] private CanvasLayer[] subMenus;

	public override void _Ready() {
		base._Ready();

		Input.MouseMode = Input.MouseModeEnum.Captured;
		this.Visible = false;
		foreach (CanvasLayer menu in subMenus) {
			menu.Hide();
		}

	}

	public override void _Process(double delta) {
		base._Process(delta);

		if (Input.IsActionJustPressed("ui_cancel")) {
			GetTree().Paused = !GetTree().Paused;
			Input.MouseMode = GetTree().Paused ? Input.MouseModeEnum.Visible : Input.MouseModeEnum.Captured;
			this.Visible = GetTree().Paused;

			if (!this.Visible) {
				foreach (CanvasLayer menu in subMenus) {
					menu.Hide();
				}
			}
		}

	}

	public void Unpause() {
		GetTree().Paused = false;
		Input.MouseMode = Input.MouseModeEnum.Captured;
		this.Visible = false;

		foreach (CanvasLayer menu in subMenus) {
			menu.Hide();
		}
	}

	public void Quit() {
		SceneManager.Instance.Quit();
	}

}
