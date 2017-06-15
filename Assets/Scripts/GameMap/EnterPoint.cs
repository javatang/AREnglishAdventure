using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnterPoint : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter(Collision collider) {
		string name = collider.gameObject.name;
		//StartCoroutine (PlayerController.Ins.DelayEnterAR(2.0f));
	}
}
