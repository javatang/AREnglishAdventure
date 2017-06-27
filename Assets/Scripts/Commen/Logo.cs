using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Logo : MonoBehaviour {

	// Use this for initialization
	void Start () {
		StartCoroutine (Enter());
	}

	IEnumerator Enter() {
		yield return new WaitForSeconds(2);
		UIManager.Ins.EnterLoadingScene ("Wellcome");
		yield return 0;
	}
}
