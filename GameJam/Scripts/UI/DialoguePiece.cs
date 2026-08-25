using Godot;
using System;
using static DialoguePiece;

public partial class DialoguePiece : Control {

	[Export] private Control visual;
	[Export] private Line2D tail;

	private Vector2 targetScale;
	private Vector2 currentScale; // Track actual current scale for smooth transitions
	private bool isAnimating = false;
	private float animationTime = 0f;
	private float animationDuration = 0.3f; // Adjust as needed
	private float bounceStiffness = 0.8f; // Controls bounce intensity (0-1)
	private Vector2 initialScale;
	private Vector2 targetScaleForAnimation;

	public enum PieceState {
		READY,
		WARNING,
		ACTION
	}

	private PieceState currentState = PieceState.READY;

	public void Reset() {
		tail.Points = [Vector2.Zero];
		InnerOffset = Vector2.Zero;
		InnerScale = Vector2.One;
		currentState = PieceState.READY;
		Modulate = Colors.White;
	}

	public override void _Process(double delta) {
		base._Process(delta);

		tail.AddPoint(visual.OffsetTransformPosition);

		if (tail.GetPointCount() > 50) {
			tail.RemovePoint(0);
		}

		if (isAnimating) {
			animationTime += (float)delta;
			// Calculate bounce animation using easing function
			float progress = animationTime / animationDuration;
			// Clamp progress to 1 to prevent overshoot
			progress = Mathf.Min(progress, 1.0f);
			// Create bounce effect using a custom easing function
			float bounceProgress = BounceEaseOut(progress);
			// Interpolate between initial and target scale with bounce effect
			Vector2 newScale = initialScale.Lerp(targetScaleForAnimation, bounceProgress);
			visual.OffsetTransformScale = newScale;
			// Check if animation is complete
			if (progress >= 1.0f) {
				isAnimating = false;
				visual.OffsetTransformScale = targetScaleForAnimation;
			}
		} else {
			// Smoothly move towards target scale when not animating
			if (visual.OffsetTransformScale != targetScale) {
				visual.OffsetTransformScale = visual.OffsetTransformScale.MoveToward(targetScale, 20 * (float)delta);
			}
		}
	}

	public Vector2 InnerOffset {
		get => visual.OffsetTransformPosition;
		set => visual.OffsetTransformPosition = value;
	}

	public Vector2 InnerScale {
		get => targetScale;
		set {
			if (isAnimating) {
				// Update the initial scale to current scale for smooth transition
				initialScale = visual.OffsetTransformScale;
			} else {
				initialScale = visual.OffsetTransformScale;
			}
			targetScaleForAnimation = value;
			targetScale = value;
			isAnimating = true;
			animationTime = 0f;
		}
	}

	private float BounceEaseOut(float t) {
		return 1 - Mathf.Pow(1 - t, 2) * Mathf.Sin(t * Mathf.Pi);
	}

	public void SetState(PieceState state) {
		if (currentState == state) return;

		currentState = state;

		if (currentState == PieceState.ACTION) {
			InnerScale = Vector2.One * 1.5f;
			Modulate = new Color(0x00ff7cff);
		} else {
			InnerScale = Vector2.One;
			Modulate = Colors.White;
		}
	}

	public PieceState GetCurrentState() => currentState;

	public Rect2 GetMovingRect() {
		Rect2 movingRect =  this.GetGlobalRect();
		movingRect.Position += InnerOffset;
		return movingRect;
	}

}
