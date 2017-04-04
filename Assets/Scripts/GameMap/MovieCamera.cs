using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MovieCamera : MonoBehaviour
{
	public Image UIBackground;
	public GameObject player;
	public float speed = 10;
	private float endZ = 50;

	// Use this for initialization
	void Start () {
		UIManager.Ins.hideUI ();
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.z < endZ) {
			transform.Translate (Vector3.forward * speed * Time.deltaTime);

			Color oldColor = UIBackground.color;
			UIBackground.color = new Color(oldColor.r, oldColor.g, oldColor.b, oldColor.a-0.01f);
		} else {
			//UIManager.Ins.showUI ();
			player.SetActive(true);
			UIBackground.gameObject.SetActive (false);
			//UIBackground.color = new Color(0, 0, 0, 0);
			gameObject.SetActive (false);
		}
	}
}
