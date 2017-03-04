using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : Singleton<UIManager> {

	public GameObject player;
	public GameObject UIContainer;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void hideUI () {
		//UIManager.Ins.UIContainer.SetActive (false);
	}
	public void showUI () {
		UIManager.Ins.UIContainer.SetActive (true);
	}

	// 进入AR场景
	public void EventEnterAR () {
		SceneManager.LoadScene("GameAR");
		//Application.LoadLevel ("GameAR");
	}

	// 进入菜单场景
	public void EventEnterMap () {
		player.SetActive (true);
		hideUI ();
	}
}
