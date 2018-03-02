using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterSelect : MonoBehaviour {

    public Image character;
    public Sprite thisOne;

    public void Highlight()
    {
        print("Mouse is over " + gameObject.name);
    }
    public void RemoveHighlight()
    {
        print("Mouse is not over " + gameObject.name);
    }

    public void SetCharacter()
    {
        character.sprite = thisOne;
    }
}
