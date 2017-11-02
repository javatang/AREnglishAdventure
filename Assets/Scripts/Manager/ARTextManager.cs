using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using AR;

public class ARTextManager : Singleton<ARTextManager> {

	public Text text;
	public ARWord[] wordlist;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnHome() {
		UIManager.Ins.EnterLoadingScene ("NavMap");
	}

	public void ARTextFound(string _text){
		string res = "识别结果："+_text;
		for(int i=0; i<wordlist.Length; ++i){
			if (wordlist [i].word == _text) {
				res = "识别结果："+_text+"\n中文含义："+wordlist[i].chinese+"\n例句："+wordlist[i].sentence;
			}
		}
		text.text = res;
	}

	public void ARTextLost(string _text){
	}

	public void Pronunication(){
		//UIManager.Ins.UnityState (curWord);
	}
}
