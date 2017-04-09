using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.AI;
using System.Runtime.InteropServices;

public class UIManager : Singleton<UIManager> {



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
			PlayerController.Ins.ReActive ();
		}
	}

	// 进入AR场景
	public void EventEnterAR () {
		SceneManager.LoadScene("GameAR");
	}

	// 进入菜单场景
	public void EventEnterMap () {
		UIContainer.SetActive (true);
		PlayerController.Ins.ReActive ();
	}

	//  寻路到目的地
	public void NavToPoint(Vector3 destination) {
		PlayerController.Ins.NavToDestination (destination);
	}

	// Speak
	public void UnityState(string content) {
		XFState (content);
	}
	public void UnitySpeak(string people, string content) {
		XFSpeak (people, content);
	}

	//引入内部动态链接库函数  
	[DllImport("__Internal")]
	public static extern void XFInitWithAppID (string appid);
	[DllImport("__Internal")]
	public static extern void XFSpeak (string people, string content);
	[DllImport("__Internal")]
	public static extern void XFState (string content);
}