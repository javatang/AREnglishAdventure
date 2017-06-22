using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MovieCamera : MonoBehaviour
{
	public Image UIFog;
	public GameObject EnterButton;
	public float speed = 10;
	private float endZ = 53;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.z < endZ) {
			transform.Translate (Vector3.forward * speed * Time.deltaTime);

			Color oldColor = UIFog.color;
			UIFog.color = new Color(oldColor.r, oldColor.g, oldColor.b, oldColor.a-0.01f);
		} else {
			UIFog.gameObject.SetActive (false);
			// 显示欢迎主界面
			EnterButton.SetActive(true);
			// 播放欢迎声音
			UIManager.Ins.UnitySpeak("vixying","Hello,Wellcome back!");
		}
	}

	public IEnumerator DelayEnterGame() {
		yield return new WaitForSeconds (3.0f);
		UIManager.Ins.EventEnterMap ();
	}
}