using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.AI;
using System.Runtime.InteropServices;
[RequireComponent(typeof(AudioSource))]

public class UIManager : Singleton<UIManager> {
	
	public static string scene = null; // 将要加载的场景名

	public AudioClip[] bg_sounds;
	public AudioClip[] effect_sounds;
	public AudioClip[] story_sounds;
	public AudioClip[] dialog_sounds;
	private AudioSource araudio = null;

	public const int sFrequency = 8000;

	#region 脚本生命周期
	// Use this for initialization
	void Start () {
		// 讯飞初始化
		#if !UNITY_EDITOR
		XFInitWithAppID ("");
		#endif

		araudio = GetComponent<AudioSource> ();
	}
	#endregion



	#region 对外接口

	// 异步加载场景
	public void EnterLoadingScene (string sceneName) {
		// 停止背景音乐
		araudio.Stop();
		scene = sceneName;
		SceneManager.LoadScene ("Process");
	}
	public void LoadSceneAsyc(string sceneName) {
		scene = sceneName;
		StartCoroutine (loadScene ());
	}


	// 播放背景音乐
	public void PlayBgMusic(int index) {
		int i = index % bg_sounds.Length;
		araudio.clip = bg_sounds [i];
		araudio.Play ();
	}
	// 播放音效
	public void PlaySoundEffect(int index) {
		int i = index % effect_sounds.Length;
		araudio.clip = effect_sounds [i];
		araudio.Play ();
	}
	// 播放英语故事
	public void PlayStory(int index) {
		int i = index % story_sounds.Length;
		araudio.clip = story_sounds[i];
		araudio.Play ();
	}
	// 播放英语对话
	public void PLayDialog(int index) {
		int i = index % dialog_sounds.Length;
		araudio.clip = dialog_sounds[i];
		araudio.Play ();
	}
	// 停止播放
	public void StopAudioPlay(){
		araudio.Stop ();
	}
	// 暂停播放
	public void PauseAudio(){
		araudio.Pause ();
	}
	// 继续播放
	public void ResumeAudio(){
		araudio.UnPause ();
	}


	public void XHRecordStart()
	{
		Microphone.End(null);
		araudio.Stop();
		Debug.Log ("stop record");
	}
	public void XHRecordStop(){
		Microphone.End (null);
		araudio.Stop();
		araudio.loop = false;
		araudio.mute = true;
		araudio.clip = Microphone.Start(null, false, 10, sFrequency);    
		Debug.Log ("start record");
	}

	public void XHRecordPlay()
	{
		if (Microphone.IsRecording(null))
		{
			return;
		}
		if (araudio.clip == null)
		{
			return;
		}
		araudio.mute = false;
		araudio.loop = false;
		araudio.Play();
	}


	// Speak
	public void UnityState(string content) {
		#if !UNITY_EDITOR
		XFState (content);
		#endif
		Debug.Log (content);
	}
	public void UnitySpeak(string people, string content) {
		#if !UNITY_EDITOR
		XFSpeak (people, content);
		#endif
		Debug.Log (content);
	}
	public void SDKLogin(){
		#if !UNITY_EDITOR
		XHLogin ();
		#endif
	}
	public void SDKInitWithAppID(){
		#if !UNITY_EDITOR
		XHSDKInitWithAppID ("1234567890");
		#endif
	}
	public void AddLBSMap(){
		#if !UNITY_EDITOR
		XHLBSMap ();
		#endif
	}

	#endregion

	#region 私有函数
	//注意这里返回值一定是IEnumerator
	IEnumerator loadScene()
	{
		//异步读取场景
		AsyncOperation async = SceneManager.LoadSceneAsync(scene);
		//读取完毕后返回， 系统会自动进入C场景
		yield return async;
	}
	#endregion

	#region iOS回调函数
	public void IOSMessage(){
		Debug.Log ("IOS message sucess!");
		UnityState ("IOS message sucess!");
	}
	#endregion

	//引入内部动态链接库函数  
	[DllImport("__Internal")]
	public static extern void XFInitWithAppID (string appid);
	[DllImport("__Internal")]
	public static extern void XFSpeak (string people, string content);
	[DllImport("__Internal")]
	public static extern void XFState (string content);

	[DllImport("__Internal")]
	public static extern void XHSDKInitWithAppID (string appid);
	[DllImport("__Internal")]
	public static extern void XHLogin ();
	[DllImport("__Internal")]
	public static extern void XHLBSMap ();

	// 录音与播放
	[DllImport("__Internal")]
	public static extern void XHAudioRecordInit ();
	[DllImport("__Internal")]
	public static extern void XHAudioRecordStart ();
	[DllImport("__Internal")]
	public static extern void XHAudioRecordStop ();
	[DllImport("__Internal")]
	public static extern void XHAudioRecordPause ();
	[DllImport("__Internal")]
	public static extern void XHAudioRecordPlay ();
	[DllImport("__Internal")]
	public static extern float XHAudioRecordGetPower ();

}