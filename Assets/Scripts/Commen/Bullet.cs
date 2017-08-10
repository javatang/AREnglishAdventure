using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour {

	public Vector3 startPos;
	public float speed = 600;
	public float maxShotDistance = 1000;

	private Vector3 direction;
	private float distance = 0;

	private int action = 0;

	// Use this for initialization
	void Start () {
		startPos = Camera.main.transform.position;
		// 子弹运动方向为相机z轴朝向
		direction = Camera.main.transform.up;
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 step = direction * speed * Time.deltaTime;
		distance += speed * Time.deltaTime;
		// 子弹移动
		transform.Translate(step, Camera.main.transform);

		if (distance > maxShotDistance) {
			Destroy (gameObject);
		}
	}

	void OnTriggerEnter(Collider collider) {
		ARFightManager.Ins.SetAction(action); // action
		UIManager.Ins.PlaySoundEffect(2);
		action = (action + 1) % 8;
		Destroy (gameObject);
	}
}