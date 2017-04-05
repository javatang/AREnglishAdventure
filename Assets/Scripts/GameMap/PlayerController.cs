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
	// Use this for initialization
	void Start () {
		agent = GetComponent<NavMeshAgent> ();
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
	}

	public void NavToDestination(Vector3 destination) {
		agent.SetDestination (destination);
	}

	// 延时进入
	public IEnumerator DelayEnterAR (float time) {
		yield return new WaitForSeconds (time);
		UIManager.Ins.EventEnterAR ();
	}
}
