using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ARStoryManager : MonoBehaviour {

	public TrackableImageTarget target;
	int storyIndex = 0;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (target.isARFound) {
			UIManager.Ins.PlayStory (storyIndex);
			storyIndex++;
		} else {
			UIManager.Ins.StopAudioPlay ();
		}
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
