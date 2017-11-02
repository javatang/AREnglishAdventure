using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof(AudioSource))]

public class XHMicroPhone : MonoBehaviour {
	
	public AudioSource recordaudio;
	public const int sFrequency = 8000;
	// Use this for initialization
	void Start () {
		recordaudio = gameObject.GetComponent<AudioSource> ();
		string[] mpdevices = Microphone.devices;
		int mpdevcount = mpdevices.Length;
		if (mpdevcount <= 0) {
			Debug.Log ("no device found");
		} else {
			Debug.Log (mpdevices);
		}
	}

	public void StartRecord()
	{
		Microphone.End (null);
		recordaudio.Stop();
		recordaudio.loop = false;
		recordaudio.mute = true;
		recordaudio.clip = Microphone.Start(null, false, 10, sFrequency);    
		Debug.Log ("start record");
	}
	public void StopRecord()
	{
		if (!Microphone.IsRecording(null))
		{
			return;
		}
		Microphone.End(null);
		recordaudio.Stop();
	}

	public void PlayRecord()
	{
		if (Microphone.IsRecording(null))
		{
			return;
		}
		if (recordaudio.clip == null)
		{
			return;
		}
		recordaudio.mute = false;
		recordaudio.loop = false;
		recordaudio.Play();
	}

}
