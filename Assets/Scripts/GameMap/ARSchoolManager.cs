using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ARSchoolManager : MonoBehaviour {
	public Text dialogText;
	// Use this for initialization
	void Start () {
		UIManager.Ins.UnityState ("Wellcome to learn english with me!");
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
		}
	}

	public void Speak(){
		// 说话
		UIManager.Ins.UnityState ("My name is lily. \rI am the manager of the company!");
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
