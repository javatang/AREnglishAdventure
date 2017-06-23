using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class iTweenCloudMove : MonoBehaviour {
	public float x = 1500;
	public float time = 10;
	// Use this for initialization
	void Start () {
		iTween.MoveBy(gameObject, iTween.Hash("x", x, "time", time, "easeType", "linear", "loopType", "pingPong", "delay", 0));
	}
}
