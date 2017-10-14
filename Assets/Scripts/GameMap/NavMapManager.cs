using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavMapManager : MonoBehaviour {
	
	public Material[] skyboxs;

	int frame = 0;
	int maxframe = 100;
	int index = 0;
	int maxindex=0;
	// Use this for initialization
	void Start () {
		// 背景音乐
		//UIManager.Ins.PlayBgMusic(1);
		maxindex = skyboxs.Length;
	}
	
	// Update is called once per frame
	void Update () {
		frame++;
		if (frame > maxframe) {
			Camera.main.GetComponent<Skybox>().material = skyboxs[index%maxindex];
			index++;
			frame = 0;
		}
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
		UIManager.Ins.EnterLoadingScene ("MenuZoo");
	}

	// 动物园
	public void ARPlant () {
		UIManager.Ins.EnterLoadingScene ("MenuPlant");
	}

	// LBS
	public void LBSMap () {
		UIManager.Ins.EnterLoadingScene ("LBSMap");
	}
}