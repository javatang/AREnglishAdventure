using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.AI;
using System.Runtime.InteropServices;

public class UIManager : Singleton<UIManager> {

	public PlayerController player;
	private GameObject model;
	public GameObject UIContainer;

	// Use this for initialization
	void Start () {
		#if UNITY_EDITOR
		#else
		XFInitWithAppID ("");
		#endif
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			if(!model) model = GameObject.FindGameObjectWithTag("fairy");
			ReActive (model);
		}
	}

	// 动画重播
	void ReActive(GameObject obj) {
		obj.SetActive (false);
		obj.SetActive (true);
		#if UNITY_EDITOR
		#else
		XFState ("Wow! Wellcom to this magical world!");
		#endif
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

	//引入内部动态链接库函数  
	[DllImport("__Internal")]
	public static extern void XFInitWithAppID (string appid);
	public static extern void XFSpeak (string people, string content);  
	public static extern void XFState (string content);
}