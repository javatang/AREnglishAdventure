using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PlayerController : MonoBehaviour {
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
		if ((Button3DEnterAR.position - transform.position).magnitude < 1) {
			UIManager.Ins.EventEnterAR ();
		}
	}

	public void NavToDestination(Vector3 destination) {
		agent.SetDestination (destination);
	}
}
