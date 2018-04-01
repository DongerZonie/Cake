using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Yarn.Unity;
using UnityEngine.UI;

public class BackgroundChange : MonoBehaviour {
    
    public Sprite background;
    
    [YarnCommand("changeBackground")]
    public void Change(string file)
    {
        background = Resources.Load<Sprite>("Images/Backgrounds/" + file);
        GetComponent<Image>().sprite = background;
    }
}
