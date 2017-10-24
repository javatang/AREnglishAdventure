using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ARTextManager : Singleton<ARTextManager> {

	public Text text;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}

	public void ARTextFound(string _text){
		text.text = _text;
	}

	public void ARTextLost(string _text){
		text.text = "text lost";
	}
}
