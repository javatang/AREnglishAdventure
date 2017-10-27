using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace AR{
	public class ARModel : MonoBehaviour {
	}

	[Serializable]
	public class ARWord{
		public string word;       // 英语单词
		public string chinese;    // 汉语翻译
		public string sentence;   // 例句
	}
}