using Godot;
using System;
using System.Collections.Generic;

public class Attributes {

	public const string SPEED = "SPEED";
	public const string GRAVITY_STRENGTH = "GRAVITY";
	public const string ATTACK_POWER = "ATTACK_POWER";

	public Dictionary<string, float> attributes;
	public Dictionary<string, (string, float)> modifiers;

	public Attributes() {
		attributes = [];
		modifiers = [];
	}

	public void SetModifier(string key, string attribute, float value) {
		if (!modifiers.TryAdd(key, (attribute, value))) {
			modifiers[key] = (attribute, value);
		}
	}

	public void ClearModifier(string key) {
		modifiers.Remove(key);
	}

	public (string, float) GetModifier(string key) {
		if (modifiers.TryGetValue(key, out (string, float) value)) {
			return value;
		}

		return ("NULL", 0);
	}

	public float Get(string key) {
		float baseValue = 1;

		foreach (KeyValuePair<string, (string, float)> modifier in modifiers) {
			if (modifier.Value.Item1 == key) {
				baseValue += modifier.Value.Item2;
			}
		}

		return baseValue;

	}

}
