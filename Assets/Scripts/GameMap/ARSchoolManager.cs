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
			// 说话
			UIManager.Ins.UnitySpeak ("vixq", "Hello, My name is Sapphi. I will be your teacher to help you learning english!");
		}
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
