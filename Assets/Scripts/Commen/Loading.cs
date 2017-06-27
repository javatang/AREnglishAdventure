using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Loading : MonoBehaviour {
	//读取场景的进度，它的取值范围在0 - 1 之间。
	int progress = 0;
	//进度UI
	public Slider slider;
	public Text sliderText;
	//异步对象
	public AsyncOperation async = null;

	void Start() {
		StartCoroutine (loadScene());
	}

	void Update()
	{
		if (UIManager.scene == null)
			return;
		// 更新UI
		if(slider) {
			slider.value = async.progress;
		}
		if (sliderText) {
			progress =  (int)(async.progress *100);
			sliderText.text = "Loading..."+progress+"%";
		}
	}

	//注意这里返回值一定是IEnumerator
	IEnumerator loadScene()
	{
		//异步读取场景
		async = SceneManager.LoadSceneAsync(UIManager.scene);
		//读取完毕后返回， 系统会自动进入C场景
		yield return async;
	}
}