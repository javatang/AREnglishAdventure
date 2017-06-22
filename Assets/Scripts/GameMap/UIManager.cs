using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.AI;
using System.Runtime.InteropServices;

public class UIManager : Singleton<UIManager> {

	// Use this for initialization
	void Start () {
		// 讯飞初始化
		#if !UNITY_EDITOR
		XFInitWithAppID ("");
		EventEnterMap();
		#endif
	}
	// Update is called once per frame
	void Update () {
		
	}

	/*** 场景切换 ***/

	// 进入AR学院场景
	public void DelayEnterARSchool () {
		SceneManager.LoadScene("GameARSchool");
	}

	// 进入AR战斗场景
	public void DelayEnterARFight () {
		SceneManager.LoadScene("GameARFight");
	}


	/*** 按钮事件 ***/

	// 进入菜单场景
	public void EventEnterMap () {
		SceneManager.LoadScene ("GameMap");
		//UnitySpeak ("vixying","Hello, wellcome back!");
	}


	/*** 接口 ***/

	//  寻路到目的地
	public void NavToPoint(Vector3 destination) {
		PlayerController.Ins.NavToDestination (destination);
	}

	// Speak
	public void UnityState(string content) {
		#if !UNITY_EDITOR
		XFState (content);
		#endif
	}
	public void UnitySpeak(string people, string content) {
		#if !UNITY_EDITOR
		XFSpeak (people, content);
		#endif
	}

	//引入内部动态链接库函数  
	[DllImport("__Internal")]
	public static extern void XFInitWithAppID (string appid);
	[DllImport("__Internal")]
	public static extern void XFSpeak (string people, string content);
	[DllImport("__Internal")]
	public static extern void XFState (string content);
}