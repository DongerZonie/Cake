using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Yarn.Unity;

public class DontDestroyScript : MonoBehaviour {

    string characterName;

    private void Start()
    {
        DontDestroyOnLoad(this.gameObject);
        characterName = SceneManager.GetActiveScene().name;
    }

    [YarnCommand("startDebrief")]
    public void StartDebrief(string input)
    {
        SceneManager.LoadScene(characterName + "Debrief", LoadSceneMode.Single);
    }
}
