using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Vuforia{
	public class TrackableImageTarget : DefaultTrackableEventHandler {
		public int index = 0;               // imagetarget数组下标
		public string objectName = null;    // 模型名字（语音文字）
		public string obejctComment = null; // 中英文字注释
		public GameObject ARObject = null;  // 要显示的VR模型
		public bool isARFound = false;

		public override void OnARObjectFound(){
			ARObject.SetActive (true);
			ARManager.Ins.curImageTarget = gameObject;
			ARManager.Ins.UpdateARModel ();
			isARFound = true;
		}

		public override void OnARObjectLost(){
			ARObject.SetActive (false);
			isARFound = false;
		}
	}
}
