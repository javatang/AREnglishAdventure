using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Color oldColor = gameObject.GetComponent<Image> ().color;
		gameObject.GetComponent<Image>().color = new Color(oldColor.r, oldColor.g, oldColor.b, oldColor.a-0.01f);
	}

	// 进入AR场景
	public void EventEnterAR () {
		SceneManager.LoadScene("GameAR");
		//Application.LoadLevel ("GameAR");
	}
}
