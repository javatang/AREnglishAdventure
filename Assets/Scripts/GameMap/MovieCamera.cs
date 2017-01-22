using UnityEngine;
using System.Collections;

public class MovieCamera : MonoBehaviour
{

	public GameObject EnterARButton;

	public float speed = 10;
	private float endZ = -20;

	// Use this for initialization
	void Start ()
	{
	
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (transform.position.z < endZ) {
			transform.Translate (Vector3.forward * speed * Time.deltaTime);
		} else {
			EnterARButton.SetActive (true);
		}
	}
}
