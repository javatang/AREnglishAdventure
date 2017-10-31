using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Vuforia{
	public class TrackableText : DefaultTrackableEventHandler{

		public override void OnARTextFound(){
			string text = mTrackableBehaviour.TrackableName;
			ARTextManager.Ins.ARTextFound (text);
		}

		public override void OnARTextLost(){
			string text = mTrackableBehaviour.TrackableName;
			ARTextManager.Ins.ARTextLost (text);
		}
	}
}
