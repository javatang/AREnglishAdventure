using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ARStoryManager : MonoBehaviour {

	public TrackableImageTarget target;
	int storyIndex = 0;
	public AudioClip[] stories;
	AudioSource audio = null;
	// Use this for initialization
	void Start () {
		audio = GetComponent<AudioSource> ();
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

	public void PlayStory(){
		audio.clip = stories[0];
		audio.Play ();
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
