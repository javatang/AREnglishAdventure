using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WellcomManager : MonoBehaviour {


	void Start(){
	}

	#region 事件
	public void OnStart(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
	#endregion
}
