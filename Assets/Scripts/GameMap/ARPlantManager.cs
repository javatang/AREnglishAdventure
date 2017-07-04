﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ARPlantManager : MonoBehaviour {

	public Text dialogText;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			// 说话
			UIManager.Ins.UnityState ("dragon");
			dialogText.text = "Dragon\n龙";
		}
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
