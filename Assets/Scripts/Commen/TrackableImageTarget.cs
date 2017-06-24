using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Vuforia{
	public class TrackableImageTarget : DefaultTrackableEventHandler {
		public GameObject ARObject;
		public override void OnARObjectFound(){
			ARObject.SetActive (true);
		}

		public override void OnARObjectLost(){
			ARObject.SetActive (false);
		}
	}
}
