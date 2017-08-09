using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WellcomManager : MonoBehaviour {


	void Start(){
		UIManager.Ins.SDKInitWithAppID ();
	}

	#region 事件
	public void OnStart(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}

	public void SDKLogin(){
		UIManager.Ins.SDKLogin ();
	}
	#endregion
}