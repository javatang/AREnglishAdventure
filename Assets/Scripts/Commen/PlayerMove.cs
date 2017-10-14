using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour {

	public float m_speed = 1f;
	bool isWalking = false;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(isWalking){
			MoveForward();
		}
	}
	public void ToogleWalking(){
		isWalking = !isWalking;
	}

	public void MoveForward(){
		this.transform.Translate(Vector3.forward*m_speed*Time.deltaTime);
	}
	public void MoveLeft(){
		this.transform.Translate(Vector3.right*-m_speed*Time.deltaTime);
	}
	public void MoveRight(){
		this.transform.Translate(Vector3.right*m_speed*Time.deltaTime);
	}
	public void MoveBack(){
		this.transform.Translate(Vector3.forward*-m_speed*Time.deltaTime);
	}
}
