using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ARSchoolManager : MonoBehaviour {
	public Text dialogText;
	// Use this for initialization
	void Start () {
		UIManager.Ins.UnityState ("Wellcome to learn english with us!");
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			// 说话
			UIManager.Ins.UnityState (dialogText.text);
		}
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
