using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Vuforia{
	public class TrackableImageTarget : DefaultTrackableEventHandler {
		public int index = 0;        // imagetarget数组下标
		public string objectName;    // 模型名字（语音文字）
		public string obejctComment; // 中英文字注释
		public GameObject ARObject;  // 要显示的VR模型

		public override void OnARObjectFound(){
			ARObject.SetActive (true);
			ARManager.Ins.curImageTarget = gameObject;
			ARManager.Ins.UpdateARModel ();
		}

		public override void OnARObjectLost(){
			ARObject.SetActive (false);
		}
	}
}
