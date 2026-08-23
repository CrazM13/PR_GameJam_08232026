using Godot;
using System;

public partial class WinTrigger : Node {

	private bool isTriggered = false;

	public void Trigger(Node3D triggerBy) {
		if (!isTriggered) {
			isTriggered = true;
			Input.MouseMode = Input.MouseModeEnum.Visible;
			SceneManager.Instance.LoadScene("res://Scenes/MainMenu.tscn");
		}
	}

}
