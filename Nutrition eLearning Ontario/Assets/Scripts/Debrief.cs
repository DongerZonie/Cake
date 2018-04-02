using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Debrief : MonoBehaviour {
    ExampleDialogueUI dial;
    public float money, food, wellbeing;

	// Use this for initialization
	void Start () {
        dial = GameObject.Find("Dialogue").GetComponent<ExampleDialogueUI>();
        money = dial.variableStorage.GetValue("$money").AsNumber;
        food = dial.variableStorage.GetValue("$food").AsNumber;
        wellbeing = dial.variableStorage.GetValue("$well").AsNumber;
        Destroy(dial.gameObject);
    }
}
