using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ARStoryManager : MonoBehaviour {

	int storyIndex = 0;
	public AudioClip[] stories;
	public GameObject ARObjects;
	AudioSource storyaudio = null;
	// Use this for initialization
	void Start () {
		storyaudio = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (ARObjects.activeSelf && !storyaudio.isPlaying) {
			PlayStory ();
		}
	}

	void PlayStory(){
		storyIndex += (storyIndex+1)%stories.Length;
		storyaudio.clip = stories[storyIndex];
		storyaudio.Play ();
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}
}
