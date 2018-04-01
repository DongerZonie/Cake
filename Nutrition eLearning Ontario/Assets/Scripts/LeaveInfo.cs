using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LeaveInfo : MonoBehaviour {
    public GameObject characterInfo, metricInfo;
    public Image Holder, character;
    public Sprite changeTo;

    public void OnClick()
    {
        characterInfo.SetActive(true);
        metricInfo.SetActive(false);
        Holder.sprite = changeTo;
        character.gameObject.SetActive(true);
    }
}
