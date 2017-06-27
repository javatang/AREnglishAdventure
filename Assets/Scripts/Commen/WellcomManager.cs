using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WellcomManager : MonoBehaviour {

	public void OnStart(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
