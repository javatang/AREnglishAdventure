using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARVideoManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}

	public void Back(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
