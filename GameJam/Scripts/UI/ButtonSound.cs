using Godot;
using System;

public partial class ButtonSound : AudioStreamPlayer {

	[Export] private AudioStream hover;
	[Export] private AudioStream press;

	public void PlayHover() {
		this.Stream = hover;
		this.Play();
	}

	public void PlayPress() {
		this.Stream = press;
		this.Play();
	}

}
