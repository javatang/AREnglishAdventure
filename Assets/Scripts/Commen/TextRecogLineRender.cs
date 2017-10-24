using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextRecogLineRender : MonoBehaviour {

	public Transform[] anchorpoints;
	private LineRenderer line;
	private Vector3[] positions;

	// Use this for initialization
	void Start () {
		line = GetComponent<LineRenderer> ();

		positions = new Vector3[5];
		for (int i=0; i < anchorpoints.Length; ++i) {
			positions [i] = anchorpoints [i].position;
		}
	}
	
	// Update is called once per frame
	void Update () {
		line.SetPositions (positions);
	}
}
