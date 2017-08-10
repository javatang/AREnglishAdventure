using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARFightManager : Singleton<ARFightManager> {
	public GameObject bulletPrefab;
	public Animator animator;
	// Use this for initialization
	void Start () {
		//UIManager.Ins.UnityState ("Let's fight together!");
	}

	// Update is called once per frame
	void Update () {
		if(Input.GetMouseButtonDown(0)){
			OnShot ();
		}

		//获取动画层 0 指Base Layer.
		AnimatorStateInfo stateinfo = animator.GetCurrentAnimatorStateInfo(0);
	}

	// 设置人物动画
	public void SetAction(int action) {
		animator.SetInteger ("Action", action);
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}

	public void OnShot() {
		UIManager.Ins.PlaySoundEffect (4);
		GameObject bullet = GameObject.Instantiate (bulletPrefab, Camera.main.transform.position, Camera.main.transform.rotation) as GameObject;
	}

	public void Pronunication() {
		UIManager.Ins.UnityState ("banana");
	}
}
