using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.AI;

public class UIManager : Singleton<UIManager> {

	public PlayerController player;
	public GameObject model;
	public GameObject UIContainer;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			ReActive (model);
		}
	}

	// 动画重播
	void ReActive(GameObject obj) {
		obj.SetActive (false);
		obj.SetActive (true);
	}

	// 进入AR场景
	public void EventEnterAR () {
		SceneManager.LoadScene("GameAR");
		model = GameObject.FindGameObjectWithTag("fairy");
	}

	// 进入菜单场景
	public void EventEnterMap () {
		player.gameObject.SetActive(true);
		model = GameObject.FindGameObjectWithTag("fairy");
		UIContainer.SetActive (true);
	}

	//  寻路到目的地
	public void NavToPoint(Vector3 destination) {
		player.NavToDestination (destination);
	}


}