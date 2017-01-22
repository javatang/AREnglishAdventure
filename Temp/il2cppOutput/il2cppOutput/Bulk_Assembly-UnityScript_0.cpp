#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// cameraViewObject
struct cameraViewObject_t3398071479;
// UnityEngine.GUITexture[]
struct GUITextureU5BU5D_t119295451;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DUnityScript_cameraViewObject3398071479.h"
#include "AssemblyU2DUnityScript_cameraViewObject3398071479MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIElement3381083099MethodDeclarations.h"
#include "mscorlib_System_Array3829468939MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUITexture1909122990.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t3614634134* GameObject_GetComponentsInChildren_TisIl2CppObject_m1163966231_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponentsInChildren_TisIl2CppObject_m1163966231(__this, method) ((  ObjectU5BU5D_t3614634134* (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisIl2CppObject_m1163966231_gshared)(__this, method)
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.GUITexture>()
#define GameObject_GetComponentsInChildren_TisGUITexture_t1909122990_m2261042644(__this, method) ((  GUITextureU5BU5D_t119295451* (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisIl2CppObject_m1163966231_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cameraViewObject::.ctor()
extern "C"  void cameraViewObject__ctor_m420722603 (cameraViewObject_t3398071479 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void cameraViewObject::Start()
extern "C"  void cameraViewObject_Start_m1608919831 (cameraViewObject_t3398071479 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void cameraViewObject::Update()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponentsInChildren_TisGUITexture_t1909122990_m2261042644_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1307534077;
extern Il2CppCodeGenString* _stringLiteral1307534078;
extern const uint32_t cameraViewObject_Update_m1928519776_MetadataUsageId;
extern "C"  void cameraViewObject_Update_m1928519776 (cameraViewObject_t3398071479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cameraViewObject_Update_m1928519776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUITextureU5BU5D_t119295451* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t2243707580  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t2243707580  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector3_t2243707580  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t2243707580  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	Vector3_t2243707580  V_12;
	memset(&V_12, 0, sizeof(V_12));
	{
		V_0 = (bool)0;
		GameObject_t1756533147 * L_0 = __this->get_guiObject_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		GameObject_t1756533147 * L_2 = __this->get_guiObject_2();
		NullCheck(L_2);
		GUITextureU5BU5D_t119295451* L_3 = GameObject_GetComponentsInChildren_TisGUITexture_t1909122990_m2261042644(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisGUITexture_t1909122990_m2261042644_MethodInfo_var);
		V_1 = L_3;
		V_2 = 0;
		goto IL_003e;
	}

IL_0026:
	{
		GUITextureU5BU5D_t119295451* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GUITexture_t1909122990 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_8 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_9 = GUIElement_HitTest_m3066714724(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_003a:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_2;
		GUITextureU5BU5D_t119295451* L_12 = V_1;
		NullCheck((Il2CppArray *)(Il2CppArray *)L_12);
		int32_t L_13 = Array_get_Length_m1498215565((Il2CppArray *)(Il2CppArray *)L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0026;
		}
	}

IL_004a:
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_15 = Input_GetMouseButton_m464100923(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetMouseButton_m464100923(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00cd;
		}
	}

IL_0066:
	{
		Vector2_t2243707579 * L_17 = __this->get_address_of_rotationVelocity_3();
		Vector2_t2243707579 * L_18 = __this->get_address_of_rotationVelocity_3();
		float L_19 = L_18->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_20 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534077, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_21 = fabsf(L_20);
		float L_22 = powf(L_21, (1.5f));
		float L_23 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534077, /*hidden argument*/NULL);
		float L_24 = Mathf_Sign_m2039143327(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		L_17->set_x_0(((float)((float)L_19+(float)((float)((float)L_22*(float)L_24)))));
		Vector2_t2243707579 * L_25 = __this->get_address_of_rotationVelocity_3();
		Vector2_t2243707579 * L_26 = __this->get_address_of_rotationVelocity_3();
		float L_27 = L_26->get_y_1();
		float L_28 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534078, /*hidden argument*/NULL);
		L_25->set_y_1(((float)((float)L_27-(float)((float)((float)L_28*(float)(0.04f))))));
	}

IL_00cd:
	{
		Transform_t3275118058 * L_29 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t2243707580  L_30 = Transform_get_position_m1104419803(L_29, /*hidden argument*/NULL);
		V_7 = L_30;
		float L_31 = (&V_7)->get_y_2();
		Vector2_t2243707579 * L_32 = __this->get_address_of_rotationVelocity_3();
		float L_33 = L_32->get_y_1();
		float L_34 = ((float)((float)L_31+(float)L_33));
		V_3 = L_34;
		Transform_t3275118058 * L_35 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t2243707580  L_36 = Transform_get_position_m1104419803(L_35, /*hidden argument*/NULL);
		Vector3_t2243707580  L_37 = L_36;
		V_4 = L_37;
		float L_38 = V_3;
		float L_39 = L_38;
		V_8 = L_39;
		(&V_4)->set_y_2(L_39);
		float L_40 = V_8;
		Transform_t3275118058 * L_41 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_42 = V_4;
		Vector3_t2243707580  L_43 = L_42;
		V_9 = L_43;
		NullCheck(L_41);
		Transform_set_position_m2469242620(L_41, L_43, /*hidden argument*/NULL);
		Vector3_t2243707580  L_44 = V_9;
		Transform_t3275118058 * L_45 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_46 = Vector3_get_zero_m1527993324(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_47 = Vector3_get_up_m2725403797(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2243707579 * L_48 = __this->get_address_of_rotationVelocity_3();
		float L_49 = L_48->get_x_0();
		NullCheck(L_45);
		Transform_RotateAround_m3410686872(L_45, L_46, L_47, L_49, /*hidden argument*/NULL);
		Vector2_t2243707579  L_50 = __this->get_rotationVelocity_3();
		Vector2_t2243707579  L_51 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_52 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2243707579  L_53 = Vector2_Lerp_m1511850087(NULL /*static, unused*/, L_50, L_51, ((float)((float)L_52*(float)(10.0f))), /*hidden argument*/NULL);
		__this->set_rotationVelocity_3(L_53);
		Transform_t3275118058 * L_54 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t2243707580  L_55 = Transform_get_position_m1104419803(L_54, /*hidden argument*/NULL);
		V_10 = L_55;
		float L_56 = (&V_10)->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_57 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_56, (((float)((float)0))), (((float)((float)5))), /*hidden argument*/NULL);
		float L_58 = L_57;
		V_5 = L_58;
		Transform_t3275118058 * L_59 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t2243707580  L_60 = Transform_get_position_m1104419803(L_59, /*hidden argument*/NULL);
		Vector3_t2243707580  L_61 = L_60;
		V_6 = L_61;
		float L_62 = V_5;
		float L_63 = L_62;
		V_11 = L_63;
		(&V_6)->set_y_2(L_63);
		float L_64 = V_11;
		Transform_t3275118058 * L_65 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_66 = V_6;
		Vector3_t2243707580  L_67 = L_66;
		V_12 = L_67;
		NullCheck(L_65);
		Transform_set_position_m2469242620(L_65, L_67, /*hidden argument*/NULL);
		Vector3_t2243707580  L_68 = V_12;
		Transform_t3275118058 * L_69 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_70;
		memset(&L_70, 0, sizeof(L_70));
		Vector3__ctor_m2638739322(&L_70, (((float)((float)0))), (((float)((float)1))), (((float)((float)0))), /*hidden argument*/NULL);
		NullCheck(L_69);
		Transform_LookAt_m3314153180(L_69, L_70, /*hidden argument*/NULL);
		return;
	}
}
// System.Void cameraViewObject::Main()
extern "C"  void cameraViewObject_Main_m3266451712 (cameraViewObject_t3398071479 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
