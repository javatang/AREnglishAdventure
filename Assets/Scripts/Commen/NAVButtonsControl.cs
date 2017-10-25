using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NAVButtonsControl : MonoBehaviour {

	public GameObject nav1;
	public GameObject nav2;

	private bool isOpen = true;

	void Start(){
		openNav ();
	}

	public void toogleNav(){
		if (isOpen) {
			closeNav ();
		} else {
			openNav ();
		}
	}

	void openNav(){
		nav1.SetActive (true);
		nav2.SetActive (true);
		isOpen = true;
	}

	void closeNav(){
		nav1.SetActive (false);
		nav2.SetActive (false);
		isOpen = false;
	}
}
