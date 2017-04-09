using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerReactive : MonoBehaviour {

	public float interval = 5;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		StartCoroutine (Reactive());
	}

	IEnumerator Reactive(){
		yield return new WaitForSeconds (interval);
		gameObject.SetActive (false);
		gameObject.SetActive (true);
	}
}
