using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Vuforia {
	public class ARManager : Singleton<ARManager> {

		public Text dialogText;
		public GameObject recording;
		public GameObject curImageTarget;

		// Use this for initialization
		void Start () {

		}

		// Update is called once per frame
		void Update () {

		}

		public void AudioRecord(){
			if (Microphone.IsRecording (null)) {
				recording.SetActive (true);
			} else {
				recording.SetActive (false);
			}
			UIManager.Ins.XHRecordStart ();
		}

		public void AudioPlay(){
			UIManager.Ins.XHRecordPlay ();
		}

		public void MenuPlant(){
			UIManager.Ins.EnterLoadingScene ("MenuPlant");
		}

		public void MenuZoo(){
			UIManager.Ins.EnterLoadingScene ("MenuZoo");
		}

		public void OnAction(){
			UpdateARModel();
		}

		public void UpdateARModel() {
			// 说话
			TrackableImageTarget curImgTarget = curImageTarget.GetComponent<TrackableImageTarget>();
			dialogText.text = curImgTarget.obejctComment;
			UIManager.Ins.UnityState (curImgTarget.objectName);
			Debug.Log (curImgTarget.objectName);
		}
	}
}
