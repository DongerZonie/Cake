using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Yarn.Unity;
using UnityEngine.UI;

public class BackgroundChange : MonoBehaviour {

    string sceneImageFolder;
    public Sprite background;

	// Use this for initialization
	void Start () {
        sceneImageFolder = SceneManager.GetActiveScene().name;
	}
    
    [YarnCommand("changeBackground")]
    public void Change(string file)
    {
        print("Images/Backgrounds/" + sceneImageFolder + "/" + file);
        background = Resources.Load<Sprite>("Images/Backgrounds/" + sceneImageFolder + "/" + file);
        GetComponent<Image>().sprite = background;
    }
}
