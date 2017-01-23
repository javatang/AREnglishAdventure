﻿// ----------------------------------------------------------------------------------
//
// FXMaker
// Created by ismoon - 2012 - ismoonto@gmail.com
//
// ----------------------------------------------------------------------------------

// Attribute ------------------------------------------------------------------------
// Property -------------------------------------------------------------------------
// Loop Function --------------------------------------------------------------------
// Control Function -----------------------------------------------------------------
// Event Function -------------------------------------------------------------------

using UnityEngine;
using System.Collections;

public class NcDontActive : NcEffectBehaviour
{
	// --------------------------------------------------------------------------
	// --------------------------------------------------------------------------
	void Awake()
	{
#if UNITY_EDITOR
		if (IsCreatingEditObject() == false)
#endif
		{
#if (!UNITY_3_5)
			Object.Destroy(gameObject);
#else
			gameObject.active = false;
#endif
		}
	}

	void OnEnable()
	{
#if (!UNITY_3_5)
#else
		gameObject.active = false;
#endif
	}

	// --------------------------------------------------------------------------
}
