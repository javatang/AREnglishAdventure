using UnityEngine;  
using UnityEngine.Events;  
using UnityEngine.EventSystems;  
using System.Collections;  


public class RecordButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerExitHandler, IPointerClickHandler  
{  
	public float interval = 0.1f;

	[SerializeField]  
	UnityEvent m_OnLongpress = new UnityEvent();  
	private bool isPointDown = false;  
	private float lastInvokeTime;  

	// Update is called once per frame  
	void Update()  
	{  
		if (isPointDown)  
		{  
			if (Time.time - lastInvokeTime > interval)  
			{  
				//触发点击;  
				m_OnLongpress.Invoke();  
				lastInvokeTime = Time.time;  
				Debug.Log("long press"); 

				UIManager.Ins.XHRecordPlay ();
			}  
		}
	}  


	public void OnPointerDown(PointerEventData eventData)  
	{  
		m_OnLongpress.Invoke();
		isPointDown = true;  


		lastInvokeTime = Time.time;  
		Debug.Log("button down");  
	}

	public void OnPointerUp(PointerEventData eventData)  
	{
		isPointDown = false;  
		Debug.Log("button up"); 

		if (Microphone.IsRecording (null)) {
			UIManager.Ins.XHRecordStop ();
		}
	}  


	public void OnPointerExit(PointerEventData eventData)  
	{  
		isPointDown = false;  
		Debug.Log("button exit");  
	}  
	public void OnPointerClick(PointerEventData eventData)  
	{
		isPointDown = false;  
		Debug.Log("button click");  
	}
}
