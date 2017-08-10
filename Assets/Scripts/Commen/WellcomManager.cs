using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WellcomManager : MonoBehaviour {


	void Start(){
		// 初始化SDK
		UIManager.Ins.SDKInitWithAppID ();
	}

	#region 事件
	public void OnStart(){
		UIManager.Ins.PlaySoundEffect (5);
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}

	public void SDKLogin(){
		UIManager.Ins.PlaySoundEffect (5);
		UIManager.Ins.SDKLogin ();
	}
	#endregion
}