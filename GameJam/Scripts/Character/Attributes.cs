using Godot;
using System;
using System.Collections.Generic;

public class Attributes {

	public const string SPEED = "SPEED";

	public Dictionary<string, float> attributes;
	public Dictionary<string, (string, float)> modifiers;

	public Attributes() {
		attributes = [];
		modifiers = [];
	}

	public void SetBase(string key, float value) {
		if (!attributes.TryAdd(key, value)) {
			attributes[key] = value;
		}
	}

	public float GetBase(string key) {
		if (attributes.TryGetValue(key, out float value)) {
			return value;
		}

		return 0;
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
		float baseValue = GetBase(key);

		foreach (KeyValuePair<string, (string, float)> modifier in modifiers) {
			if (modifier.Value.Item1 == key) {
				baseValue += modifier.Value.Item2;
			}
		}

		return baseValue;

	}

}
