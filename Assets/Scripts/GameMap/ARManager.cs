using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Vuforia {
	public class ARManager : Singleton<ARManager> {

		public Text dialogText;
		public GameObject curImageTarget;

		// Use this for initialization
		void Start () {

		}

		// Update is called once per frame
		void Update () {

		}

		public void OnHome(){
			UIManager.Ins.EnterLoadingScene ("NavMap");
		}

		public void OnAction(){
			UpdateARModel();
		}

		public void UpdateARModel() {
			// 说话
			TrackableImageTarget curImgTarget = curImageTarget.GetComponent<TrackableImageTarget>();
			dialogText.text = curImgTarget.obejctComment;
			UIManager.Ins.UnityState (curImgTarget.objectName);
		}
	}
}
