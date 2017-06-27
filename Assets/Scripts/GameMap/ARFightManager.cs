using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARFightManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
