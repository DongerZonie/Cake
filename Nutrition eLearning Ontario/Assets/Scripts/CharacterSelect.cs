using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterSelect : MonoBehaviour {

    public Image characterObjectInScene;
    public Sprite character;
    public GameObject infoPrefab;
    private GameObject info;

    private void Start()
    {
        info = GameObject.Find("Info Texts");
    }

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
        characterObjectInScene.sprite = character;
        for(int i = 0; i <= info.transform.childCount; i++)
        {
            if (info.transform.GetChild(i).gameObject == infoPrefab)
                info.transform.GetChild(i).gameObject.SetActive(true);
            else
                info.transform.GetChild(i).gameObject.SetActive(false);
        }
    }
}
