using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavMapManager : MonoBehaviour {

	public GameObject previewCamera;
	// Use this for initialization
	void Start () {
		// 背景音乐
		UIManager.Ins.PlayBgMusic(1);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void openPreView() {
		previewCamera.SetActive(true);
	}

	public void closePreview() {
		previewCamera.SetActive (false);
	}
}