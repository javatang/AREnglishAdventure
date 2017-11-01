using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuSchoolManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ARSchool(){
		UIManager.Ins.EnterLoadingScene ("ARSchool");
	}

	public void Back(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}

	public void STICKHERO(){
		UIManager.Ins.EnterLoadingScene ("Menu");
	}
}
