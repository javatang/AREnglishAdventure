using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PlayerController : Singleton<PlayerController> {
	public Transform Button3DEnterARFight;
	public Transform Button3DEnterA;
	public Transform Button3DEnterB;
	public Transform Button3DEnterC;
	public Transform Button3DEnterSchool;
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

		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			ReActive ();
		}
		
		// 进入AR场景
		Vector2 pARFight = new Vector2(Button3DEnterARFight.position.x,Button3DEnterARFight.position.z);
		Vector2 pARSchool = new Vector2 (Button3DEnterSchool.position.x, Button3DEnterSchool.position.z);

		Vector2 pCur = new Vector2(transform.position.x,transform.position.z);

		float distanceARFight = (pARFight - pCur).magnitude;
		float distanceARSchool = (pARSchool - pCur).magnitude;

		// 到达目的地
		if(isNaving && agent.remainingDistance > 0 && agent.remainingDistance < 0.5) {
			
			animator.SetInteger ("Action",-1);
			isNaving = false;

			// 进入AR战斗场景
			if (distanceARFight < 1.0) {
				StartCoroutine (DelayEnterARFight(2.0f));
			}

			// 进入AR学院场景
			if (distanceARSchool < 1.0) {
				StartCoroutine(DelayEnterARSchool(2.0f));
			}
		}
	}

	// gui
	void OnGUI() {
		string remainDistance = agent.remainingDistance.ToString();//animator.GetInteger ("Action").ToString ();
		GUIStyle style = new GUIStyle();
		style.fontSize = 40;
		GUI.Button (new Rect(50,50,400,150),remainDistance,style);
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
	}

	// 延时进入AR战斗场景
	public IEnumerator DelayEnterARFight (float time) {
		yield return new WaitForSeconds (time);
		UIManager.Ins.DelayEnterARFight ();
	}

	// 延时进入AR学院场景
	public IEnumerator DelayEnterARSchool (float time) {
		yield return new WaitForSeconds (time);
		UIManager.Ins.DelayEnterARSchool ();
	}
}
