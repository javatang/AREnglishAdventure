using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavButton : MonoBehaviour {

	public Transform EnterPoint;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnClick(){
		UIManager.Ins.NavToPoint (EnterPoint.position);
	}

	public void OnHome(){
		UIManager.Ins.EventEnterMap ();
	}
}
