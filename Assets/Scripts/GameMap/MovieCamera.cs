using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MovieCamera : MonoBehaviour
{
	public Image UIBackground;
	public float speed = 10;
	private float endZ = 53;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.z < endZ) {
			transform.Translate (Vector3.forward * speed * Time.deltaTime);

			Color oldColor = UIBackground.color;
			UIBackground.color = new Color(oldColor.r, oldColor.g, oldColor.b, oldColor.a-0.01f);
		} else {
			UIBackground.gameObject.SetActive (false);
			StartCoroutine (DelayEnterGame());
		}
	}

	public IEnumerator DelayEnterGame() {
		yield return new WaitForSeconds (3.0f);
		UIManager.Ins.EventEnterMap ();
	}
}