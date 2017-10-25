using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.AI;
using System.Runtime.InteropServices;

public class UIManager : Singleton<UIManager> {
	
	public static string scene = null; // 将要加载的场景名

	public AudioClip[] bg_sounds;
	public AudioClip[] effect_sounds;
	public AudioClip[] story_sounds;
	public AudioClip[] dialog_sounds;
	private AudioSource audio = null;

	#region 脚本生命周期
	// Use this for initialization
	void Start () {
		// 讯飞初始化
		#if !UNITY_EDITOR
		XFInitWithAppID ("");
		#endif

		audio = GetComponent<AudioSource> ();
	}
	// Update is called once per frame
	void Update () {
		
	}
	#endregion


	#region 按钮事件

	#endregion


	#region 对外接口
	// 异步加载场景
	public void EnterLoadingScene (string sceneName) {
		// 停止背景音乐
		audio.Stop();
		scene = sceneName;
		SceneManager.LoadScene ("Process");
	}
	public void LoadSceneAsyc(string sceneName) {
		scene = sceneName;
		StartCoroutine (loadScene ());
	}

	//  寻路到目的地
	//public void NavToPoint(Vector3 destination) {
	//	PlayerController.Ins.NavToDestination (destination);
	//}

	// 播放背景音乐
	public void PlayBgMusic(int index) {
		int i = index % bg_sounds.Length;
		audio.clip = bg_sounds [i];
		audio.Play ();
	}
	// 播放音效
	public void PlaySoundEffect(int index) {
		int i = index % effect_sounds.Length;
		audio.clip = effect_sounds [i];
		audio.Play ();
	}
	// 播放英语故事
	public void PlayStory(int index) {
		int i = index % story_sounds.Length;
		audio.clip = story_sounds[i];
		audio.Play ();
	}
	// 播放英语对话
	public void PLayDialog(int index) {
		int i = index % dialog_sounds.Length;
		audio.clip = dialog_sounds[i];
		audio.Play ();
	}

	// 停止播放
	public void StopAudioPlay(){
		audio.Stop ();
	}
	// 暂停播放
	public void PauseAudio(){
		audio.Pause ();
	}
	// 继续播放
	public void ResumeAudio(){
		audio.UnPause ();
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
}