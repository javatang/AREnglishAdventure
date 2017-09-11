using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavMapManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		// 背景音乐
		UIManager.Ins.PlayBgMusic(1);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	// 进入AR战斗场景
	public void ARFight() {
		UIManager.Ins.EnterLoadingScene ("ARFight");
	}

	// 进入AR学院场景
	public void ARSchool () {
		UIManager.Ins.EnterLoadingScene ("ARSchool");
	}

	// 植物园
	public void ARZoo () {
		UIManager.Ins.EnterLoadingScene ("ARZoo");
	}

	// 动物园
	public void ARPlant () {
		UIManager.Ins.EnterLoadingScene ("ARPlant");
	}

	// LBS
	public void LBSMap () {
		UIManager.Ins.EnterLoadingScene ("LBSMap");
	}
}