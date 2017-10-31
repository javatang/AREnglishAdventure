using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class ARSchoolManager : MonoBehaviour {
	public Text dialogText;
	public TrackableImageTarget target;
	public AudioClip[] dialogs;
	AudioSource audio = null;
	// Use this for initialization
	void Start () {
		audio = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (target.isARFound) {
		} else {
		}
	}

	public void PlayDialog(){
		// 说话
		audio.clip = dialogs[0];
		audio.Play ();
	}

	public void OnHome(){
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}

	public void showEnglish(){
		string engstr = "Lily: Hello. Is Becky there, please?\nMrs. Green: Just a moment, please. I’ll see if she’s free.\nLily: Thanks.\nMrs. Green: Sorry, Becky can’t come to the phone right now.\nLily: That’s okay. I’ll call back later.";
		dialogText.text = engstr;
	}
	public void showChinese(){
		string cnstr = "莉莉：喂，请问贝齐在家吗？\n格林夫人:请等一下，我去看她是否有空。\n莉莉：谢谢。\n格林夫人:不好意思，贝齐现在接不了电话。\n莉莉：没关系，我等一下再打。\n";
		dialogText.text = cnstr;
	}
}
