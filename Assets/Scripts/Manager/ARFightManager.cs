using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARFightManager : Singleton<ARFightManager> {
	public GameObject bulletPrefab;
	public GameObject explodePrefab;
	public GameObject target;
	public Animator animator;
	public LineRenderer linerender;

	private int action = 0;
	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
		linerender.SetPosition (0, Camera.main.transform.position);
		linerender.SetPosition (1, Vector3.zero);

		if(Input.GetMouseButtonDown(0)){
		}

		//获取动画层 0 指Base Layer.
		AnimatorStateInfo stateinfo = animator.GetCurrentAnimatorStateInfo(0);
	}

	// 设置人物动画
	public void SetAction(int action) {
		animator.SetInteger ("Action", action);
	}

	public void OnHome() {
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}

	public void OnShot() {
		GameObject bullet = GameObject.Instantiate (bulletPrefab, Camera.main.transform.position, Camera.main.transform.rotation) as GameObject;
		GameObject explode = GameObject.Instantiate (explodePrefab, target.transform.position + new Vector3(0,1,0), target.transform.rotation) as GameObject;
		UIManager.Ins.PlaySoundEffect (4);
		++action;
		SetAction (action%7+1);
	}

	public void Pronunication() {
		UIManager.Ins.UnityState ("banana");
	}
}
