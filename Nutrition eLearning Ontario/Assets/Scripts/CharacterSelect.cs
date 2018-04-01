using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CharacterSelect : MonoBehaviour {

    public Image characterObjectInScene;
    public Sprite character;
    public GameObject infoPrefab;
    public GameObject info;
    private Image image;
    bool selected;
    public Button nutton;

    private void Start()
    {
        image = GetComponent<Image>();
        selected = false;
    }

    public void Highlight()
    {
        //Put code here to highlight button, also keyboard press should trigger this
        if (!selected)
        {
            Color color = image.color;
            color.a = 124;
            image.color = color;
        }
    }
    public void RemoveHighlight()
    {
        //lose focus
        if (!selected)
        {
            Color color = image.color;
            color.a = 0;
            image.color = color;
        }
    }

    public void SetCharacter()
    {
        Color color;
        characterObjectInScene.sprite = character;
        for (int i = 0; i < info.transform.childCount; i++)
        {

            if (info.transform.GetChild(i).gameObject == infoPrefab)
            {
                info.transform.GetChild(i).gameObject.SetActive(true);
            }
            else
            {
                info.transform.GetChild(i).gameObject.SetActive(false);
            }
        }
        for(int i = 0;  i < transform.parent.childCount; i++)
        {
            transform.parent.GetChild(i).gameObject.GetComponent<CharacterSelect>().selected = false;
            color = transform.parent.GetChild(i).gameObject.GetComponent<Image>().color;
            color.a = 0;
            transform.parent.GetChild(i).gameObject.GetComponent<Image>().color = color;
        }
        if(nutton!=null)
            nutton.gameObject.SetActive(true);
        selected = true;
        color = image.color;
        color.a = 124;
        image.color = color;
    }
}
