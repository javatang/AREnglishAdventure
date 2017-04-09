using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PlayerController : Singleton<PlayerController> {
	public Transform Button3DEnterAR;
	public Transform Button3DEnterA;
	public Transform Button3DEnterB;
	public Transform Button3DEnterC;
	public Transform Button3DEnterD;
	private NavMeshAgent agent;
	private Animator animator;
	private GameObject avatar;
	private bool isNaving = false;

	// Use this for initialization
	void Start () {
		agent = GetComponent<NavMeshAgent> ();
		animator = GetComponentInChildren<Animator> ();
		avatar = GameObject.FindGameObjectWithTag ("fairy");
	}

	// Update is called once per frame
	void Update () {
		
		// 进入AR场景
		Vector3 p1 = new Vector3(Button3DEnterAR.position.x,0,Button3DEnterAR.position.z);
		Vector3 p2 = new Vector3 (transform.position.x,0,transform.position.z);
		float distance = (p1 - p2).magnitude;
		if (distance < 1.0) {
			StartCoroutine (DelayEnterAR(2.0f));
		}

		// idel
		if(isNaving && agent.remainingDistance > 0 && agent.remainingDistance < 0.5) {
			animator.SetInteger ("Action",-1);
			isNaving = false;
		}
	}

	// gui
	void OnGUI() {
		string state = agent.remainingDistance.ToString();//animator.GetInteger ("Action").ToString ();
		GUIStyle style = new GUIStyle();
		style.fontSize = 80;
		GUI.Button (new Rect(50,50,400,150),"Current state:"+state,style);
	}

	// 寻路
	public void NavToDestination(Vector3 destination) {
		agent.SetDestination (destination);
		isNaving = true;
		animator.SetInteger ("Action",0);
	}

	// 动画
	public void ReActive() {
		avatar.SetActive (false);
		avatar.SetActive (true);
		if (isNaving) {
			animator.SetInteger ("Action", 0);
		} else {
			animator.SetInteger ("Action",-1);
		}

		#if UNITY_EDITOR
		#else
		UIManager.Ins.UnityState ("Wow! Wellcom to this magical world!");
		#endif
	}

	// 延时进入AR场景
	public IEnumerator DelayEnterAR (float time) {
		yield return new WaitForSeconds (time);
		UIManager.Ins.EventEnterAR ();
	}
}
