using Godot;
using System;

public partial class WinTrigger : Node {

	private bool isTriggered = false;

	public void Trigger(Node3D triggerBy) {
		if (!isTriggered) {
			isTriggered = true;
			Input.MouseMode = Input.MouseModeEnum.Visible;

			if (GameManager.Time > 138) {
				// TODO LOSE
				SceneManager.Instance.LoadScene("res://Scenes/LoseCutscene.tscn");
			} else {
				SceneManager.Instance.LoadScene("res://Scenes/WinCutscene.tscn");
			}
			
		}
	}

}
