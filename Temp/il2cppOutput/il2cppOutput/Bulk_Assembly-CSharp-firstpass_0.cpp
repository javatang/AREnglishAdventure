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

// WaterSimple
struct WaterSimple_t1331722801;
// UnityEngine.Renderer
struct Renderer_t257310565;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WaterSimple1331722801.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WaterSimple1331722801MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector42243707581MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t257310565_m2803939486(__this, method) ((  Renderer_t257310565 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WaterSimple::.ctor()
extern "C"  void WaterSimple__ctor_m401163906 (WaterSimple_t1331722801 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WaterSimple::Update()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t257310565_m2803939486_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3402504634;
extern Il2CppCodeGenString* _stringLiteral1816258960;
extern Il2CppCodeGenString* _stringLiteral3749796871;
extern Il2CppCodeGenString* _stringLiteral1593254681;
extern Il2CppCodeGenString* _stringLiteral3156675763;
extern const uint32_t WaterSimple_Update_m1745101191_MetadataUsageId;
extern "C"  void WaterSimple_Update_m1745101191 (WaterSimple_t1331722801 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaterSimple_Update_m1745101191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_t193706927 * V_0 = NULL;
	Vector4_t2243707581  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector4_t2243707581  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector4_t2243707581  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t2243707580  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Matrix4x4_t2933234003  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Renderer_t257310565 * L_0 = Component_GetComponent_TisRenderer_t257310565_m2803939486(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m2803939486_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Renderer_t257310565 * L_2 = Component_GetComponent_TisRenderer_t257310565_m2803939486(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m2803939486_MethodInfo_var);
		NullCheck(L_2);
		Material_t193706927 * L_3 = Renderer_get_sharedMaterial_m155010392(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Material_t193706927 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		Material_t193706927 * L_6 = V_0;
		NullCheck(L_6);
		Vector4_t2243707581  L_7 = Material_GetVector_m4150288440(L_6, _stringLiteral3402504634, /*hidden argument*/NULL);
		V_1 = L_7;
		Material_t193706927 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = Material_GetFloat_m562289878(L_8, _stringLiteral1816258960, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_10/(float)(20.0f)));
		Vector4_t2243707581  L_11 = V_1;
		float L_12 = V_3;
		float L_13 = V_2;
		Vector4_t2243707581  L_14 = Vector4_op_Multiply_m3204903356(NULL /*static, unused*/, L_11, ((float)((float)L_12*(float)L_13)), /*hidden argument*/NULL);
		V_4 = L_14;
		float L_15 = (&V_4)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Repeat_m943844734(NULL /*static, unused*/, L_15, (1.0f), /*hidden argument*/NULL);
		float L_17 = (&V_4)->get_y_2();
		float L_18 = Mathf_Repeat_m943844734(NULL /*static, unused*/, L_17, (1.0f), /*hidden argument*/NULL);
		float L_19 = (&V_4)->get_z_3();
		float L_20 = Mathf_Repeat_m943844734(NULL /*static, unused*/, L_19, (1.0f), /*hidden argument*/NULL);
		float L_21 = (&V_4)->get_w_4();
		float L_22 = Mathf_Repeat_m943844734(NULL /*static, unused*/, L_21, (1.0f), /*hidden argument*/NULL);
		Vector4__ctor_m1222289168((&V_5), L_16, L_18, L_20, L_22, /*hidden argument*/NULL);
		Material_t193706927 * L_23 = V_0;
		Vector4_t2243707581  L_24 = V_5;
		NullCheck(L_23);
		Material_SetVector_m3298399397(L_23, _stringLiteral3749796871, L_24, /*hidden argument*/NULL);
		float L_25 = V_2;
		float L_26 = V_2;
		Vector3__ctor_m2638739322((&V_6), ((float)((float)(1.0f)/(float)L_25)), ((float)((float)(1.0f)/(float)L_26)), (1.0f), /*hidden argument*/NULL);
		float L_27 = (&V_5)->get_x_1();
		float L_28 = (&V_5)->get_y_2();
		Vector3_t2243707580  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Vector3__ctor_m2638739322(&L_29, L_27, L_28, (0.0f), /*hidden argument*/NULL);
		Quaternion_t4030073918  L_30 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_31 = V_6;
		Matrix4x4_t2933234003  L_32 = Matrix4x4_TRS_m1913765359(NULL /*static, unused*/, L_29, L_30, L_31, /*hidden argument*/NULL);
		V_7 = L_32;
		Material_t193706927 * L_33 = V_0;
		Matrix4x4_t2933234003  L_34 = V_7;
		NullCheck(L_33);
		Material_SetMatrix_m1387972957(L_33, _stringLiteral1593254681, L_34, /*hidden argument*/NULL);
		float L_35 = (&V_5)->get_z_3();
		float L_36 = (&V_5)->get_w_4();
		Vector3_t2243707580  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector3__ctor_m2638739322(&L_37, L_35, L_36, (0.0f), /*hidden argument*/NULL);
		Quaternion_t4030073918  L_38 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_39 = V_6;
		Vector3_t2243707580  L_40 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_39, (0.45f), /*hidden argument*/NULL);
		Matrix4x4_t2933234003  L_41 = Matrix4x4_TRS_m1913765359(NULL /*static, unused*/, L_37, L_38, L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		Material_t193706927 * L_42 = V_0;
		Matrix4x4_t2933234003  L_43 = V_7;
		NullCheck(L_42);
		Material_SetMatrix_m1387972957(L_42, _stringLiteral3156675763, L_43, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
