﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleAnimation : MonoBehaviour {

	float radian = 0;           // 弧度  
	public float speed = 0.1f; // 每次变化的scale
	public float radius = 0.1f; // 半径  
	Vector3 oldScale;           // 开始scale 

	void Start()
	{
		oldScale = transform.localScale; // 最初的scale
	}

	void Update()
	{
		radian += speed; // 弧度每次加speed
		float ds = Mathf.Sin(radian) * radius; // dy定义的是针对y轴的变量，也可以使用sin，找到一个适合的值就可以  
		transform.localScale = oldScale + new Vector3(ds,ds,0);
	}
}
