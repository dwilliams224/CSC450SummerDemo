using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class LoadScene : MonoBehaviour {


    public void LoadVR()
    {
        SceneManager.LoadSceneAsync("TableScene");
    }

    public void LoadSplash()
    {
        SceneManager.LoadSceneAsync("MenuScene");
    }
		
}
