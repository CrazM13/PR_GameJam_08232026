using Godot;
using System;

[GlobalClass]
public partial class ChaserBehaviour : Resource {

	[Export] public bool PlayMinigame { get; set; } = true;
	[Export] public Item PaymentItem { get; set; }
	[Export] public Item GiftedItem { get; set; }

	[Export] public AudioStream SuccessAudio { get; set; }
	[Export] public AudioStream FailAudio { get; set; }
	[Export] public AudioStream SlappedAudio { get; set; }



}
