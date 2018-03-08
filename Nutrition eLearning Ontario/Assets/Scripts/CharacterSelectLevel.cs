using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CharacterSelectLevel : MonoBehaviour {
    public string sceneName;

    public void changeScene()
    {
        print("Changing to " + sceneName + " scene.");
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
    }
}
