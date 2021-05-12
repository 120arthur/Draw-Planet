#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Chegada
struct Chegada_t32A35138DA0A5FA5E3F9132ABAAA4AE4F47C2025;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DesenhoNaTela
struct DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// FactoryCriadorDePernas
struct FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GeradorDePernas
struct GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Movimentacao
struct Movimentacao_t6AF67DD9B7E0C3450F9B4352FAC6A69B26523037;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PernaSimples
struct PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Rotacionar
struct Rotacionar_t24D8B51C6C7061467C256475A89CA7CC0806F970;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Ui
struct Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// PernaSimples/<GerarPernas>d__1
struct U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E;

IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral8376980C2B2557B485C1D6BDC0B911D130BA6681;
IL2CPP_EXTERN_C String_t* _stringLiteralCACE2A04B451A6EF7D28A98B6F5A5233434637C6;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGerarPernasU3Ed__1_System_Collections_IEnumerator_Reset_m996A7D7E7F764918BDCD9C19FFD0E74723FE5AD5_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct  List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____items_1)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__items_1() const { return ____items_1; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields, ____emptyArray_5)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// PernaSimples/<GerarPernas>d__1
struct  U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E  : public RuntimeObject
{
public:
	// System.Int32 PernaSimples/<GerarPernas>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PernaSimples/<GerarPernas>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PernaSimples PernaSimples/<GerarPernas>d__1::<>4__this
	PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3[] PernaSimples/<GerarPernas>d__1::PontosDeDobraDaPerna
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___PontosDeDobraDaPerna_3;
	// UnityEngine.Vector3[] PernaSimples/<GerarPernas>d__1::<PosicaoAtualizada>5__2
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CPosicaoAtualizadaU3E5__2_4;
	// UnityEngine.Vector3 PernaSimples/<GerarPernas>d__1::<zeroPosition>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CzeroPositionU3E5__3_5;
	// System.Int32 PernaSimples/<GerarPernas>d__1::<i>5__4
	int32_t ___U3CiU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E, ___U3CU3E4__this_2)); }
	inline PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_PontosDeDobraDaPerna_3() { return static_cast<int32_t>(offsetof(U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E, ___PontosDeDobraDaPerna_3)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_PontosDeDobraDaPerna_3() const { return ___PontosDeDobraDaPerna_3; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_PontosDeDobraDaPerna_3() { return &___PontosDeDobraDaPerna_3; }
	inline void set_PontosDeDobraDaPerna_3(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___PontosDeDobraDaPerna_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PontosDeDobraDaPerna_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPosicaoAtualizadaU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E, ___U3CPosicaoAtualizadaU3E5__2_4)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CPosicaoAtualizadaU3E5__2_4() const { return ___U3CPosicaoAtualizadaU3E5__2_4; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CPosicaoAtualizadaU3E5__2_4() { return &___U3CPosicaoAtualizadaU3E5__2_4; }
	inline void set_U3CPosicaoAtualizadaU3E5__2_4(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CPosicaoAtualizadaU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPosicaoAtualizadaU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzeroPositionU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E, ___U3CzeroPositionU3E5__3_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CzeroPositionU3E5__3_5() const { return ___U3CzeroPositionU3E5__3_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CzeroPositionU3E5__3_5() { return &___U3CzeroPositionU3E5__3_5; }
	inline void set_U3CzeroPositionU3E5__3_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CzeroPositionU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E, ___U3CiU3E5__4_6)); }
	inline int32_t get_U3CiU3E5__4_6() const { return ___U3CiU3E5__4_6; }
	inline int32_t* get_address_of_U3CiU3E5__4_6() { return &___U3CiU3E5__4_6; }
	inline void set_U3CiU3E5__4_6(int32_t value)
	{
		___U3CiU3E5__4_6 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.LineRenderer
struct  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Chegada
struct  Chegada_t32A35138DA0A5FA5E3F9132ABAAA4AE4F47C2025  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DesenhoNaTela
struct  DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GeradorDePernas DesenhoNaTela::geradorDePernas
	GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * ___geradorDePernas_4;
	// UnityEngine.LineRenderer DesenhoNaTela::lRDesenhoDaPerna
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRDesenhoDaPerna_5;
	// UnityEngine.Vector3[] DesenhoNaTela::pontosDeDobraDaPerna
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___pontosDeDobraDaPerna_6;
	// System.Boolean DesenhoNaTela::iniciarDesenho
	bool ___iniciarDesenho_7;
	// UnityEngine.Vector3 DesenhoNaTela::posicaoDoMause
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posicaoDoMause_8;
	// System.Int32 DesenhoNaTela::indexAtual
	int32_t ___indexAtual_9;
	// System.Boolean DesenhoNaTela::Desenhando
	bool ___Desenhando_10;
	// UnityEngine.Camera DesenhoNaTela::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_11;

public:
	inline static int32_t get_offset_of_geradorDePernas_4() { return static_cast<int32_t>(offsetof(DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7, ___geradorDePernas_4)); }
	inline GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * get_geradorDePernas_4() const { return ___geradorDePernas_4; }
	inline GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B ** get_address_of_geradorDePernas_4() { return &___geradorDePernas_4; }
	inline void set_geradorDePernas_4(GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * value)
	{
		___geradorDePernas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___geradorDePernas_4), (void*)value);
	}

	inline static int32_t get_offset_of_lRDesenhoDaPerna_5() { return static_cast<int32_t>(offsetof(DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7, ___lRDesenhoDaPerna_5)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lRDesenhoDaPerna_5() const { return ___lRDesenhoDaPerna_5; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lRDesenhoDaPerna_5() { return &___lRDesenhoDaPerna_5; }
	inline void set_lRDesenhoDaPerna_5(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lRDesenhoDaPerna_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lRDesenhoDaPerna_5), (void*)value);
	}

	inline static int32_t get_offset_of_pontosDeDobraDaPerna_6() { return static_cast<int32_t>(offsetof(DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7, ___pontosDeDobraDaPerna_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_pontosDeDobraDaPerna_6() const { return ___pontosDeDobraDaPerna_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_pontosDeDobraDaPerna_6() { return &___pontosDeDobraDaPerna_6; }
	inline void set_pontosDeDobraDaPerna_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___pontosDeDobraDaPerna_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pontosDeDobraDaPerna_6), (void*)value);
	}

	inline static int32_t get_offset_of_iniciarDesenho_7() { return static_cast<int32_t>(offsetof(DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7, ___iniciarDesenho_7)); }
	inline bool get_iniciarDesenho_7() const { return ___iniciarDesenho_7; }
	inline bool* get_address_of_iniciarDesenho_7() { return &___iniciarDesenho_7; }
	inline void set_iniciarDesenho_7(bool value)
	{
		___iniciarDesenho_7 = value;
	}

	inline static int32_t get_offset_of_posicaoDoMause_8() { return static_cast<int32_t>(offsetof(DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7, ___posicaoDoMause_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_posicaoDoMause_8() const { return ___posicaoDoMause_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_posicaoDoMause_8() { return &___posicaoDoMause_8; }
	inline void set_posicaoDoMause_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___posicaoDoMause_8 = value;
	}

	inline static int32_t get_offset_of_indexAtual_9() { return static_cast<int32_t>(offsetof(DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7, ___indexAtual_9)); }
	inline int32_t get_indexAtual_9() const { return ___indexAtual_9; }
	inline int32_t* get_address_of_indexAtual_9() { return &___indexAtual_9; }
	inline void set_indexAtual_9(int32_t value)
	{
		___indexAtual_9 = value;
	}

	inline static int32_t get_offset_of_Desenhando_10() { return static_cast<int32_t>(offsetof(DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7, ___Desenhando_10)); }
	inline bool get_Desenhando_10() const { return ___Desenhando_10; }
	inline bool* get_address_of_Desenhando_10() { return &___Desenhando_10; }
	inline void set_Desenhando_10(bool value)
	{
		___Desenhando_10 = value;
	}

	inline static int32_t get_offset_of_camera_11() { return static_cast<int32_t>(offsetof(DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7, ___camera_11)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_11() const { return ___camera_11; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_11() { return &___camera_11; }
	inline void set_camera_11(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_11), (void*)value);
	}
};


// FactoryCriadorDePernas
struct  FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject FactoryCriadorDePernas::prefabDoJoelho
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabDoJoelho_4;
	// UnityEngine.LineRenderer FactoryCriadorDePernas::lRPernaUm
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRPernaUm_5;
	// UnityEngine.LineRenderer FactoryCriadorDePernas::lRPernaDois
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRPernaDois_6;
	// UnityEngine.GameObject[] FactoryCriadorDePernas::joelhosDaPernaUm
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___joelhosDaPernaUm_7;
	// UnityEngine.GameObject[] FactoryCriadorDePernas::joelhosDaPernaDois
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___joelhosDaPernaDois_8;

public:
	inline static int32_t get_offset_of_prefabDoJoelho_4() { return static_cast<int32_t>(offsetof(FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5, ___prefabDoJoelho_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabDoJoelho_4() const { return ___prefabDoJoelho_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabDoJoelho_4() { return &___prefabDoJoelho_4; }
	inline void set_prefabDoJoelho_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabDoJoelho_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabDoJoelho_4), (void*)value);
	}

	inline static int32_t get_offset_of_lRPernaUm_5() { return static_cast<int32_t>(offsetof(FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5, ___lRPernaUm_5)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lRPernaUm_5() const { return ___lRPernaUm_5; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lRPernaUm_5() { return &___lRPernaUm_5; }
	inline void set_lRPernaUm_5(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lRPernaUm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lRPernaUm_5), (void*)value);
	}

	inline static int32_t get_offset_of_lRPernaDois_6() { return static_cast<int32_t>(offsetof(FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5, ___lRPernaDois_6)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lRPernaDois_6() const { return ___lRPernaDois_6; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lRPernaDois_6() { return &___lRPernaDois_6; }
	inline void set_lRPernaDois_6(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lRPernaDois_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lRPernaDois_6), (void*)value);
	}

	inline static int32_t get_offset_of_joelhosDaPernaUm_7() { return static_cast<int32_t>(offsetof(FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5, ___joelhosDaPernaUm_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_joelhosDaPernaUm_7() const { return ___joelhosDaPernaUm_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_joelhosDaPernaUm_7() { return &___joelhosDaPernaUm_7; }
	inline void set_joelhosDaPernaUm_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___joelhosDaPernaUm_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joelhosDaPernaUm_7), (void*)value);
	}

	inline static int32_t get_offset_of_joelhosDaPernaDois_8() { return static_cast<int32_t>(offsetof(FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5, ___joelhosDaPernaDois_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_joelhosDaPernaDois_8() const { return ___joelhosDaPernaDois_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_joelhosDaPernaDois_8() { return &___joelhosDaPernaDois_8; }
	inline void set_joelhosDaPernaDois_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___joelhosDaPernaDois_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joelhosDaPernaDois_8), (void*)value);
	}
};


// GeradorDePernas
struct  GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GeradorDePernas::prefabDoJoelho
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabDoJoelho_4;
	// UnityEngine.LineRenderer GeradorDePernas::lRPernaUm
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRPernaUm_5;
	// UnityEngine.LineRenderer GeradorDePernas::lRPernaDois
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRPernaDois_6;
	// UnityEngine.GameObject[] GeradorDePernas::joelhosDaPernaUm
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___joelhosDaPernaUm_7;
	// UnityEngine.GameObject[] GeradorDePernas::joelhosDaPernaDois
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___joelhosDaPernaDois_8;
	// FactoryCriadorDePernas GeradorDePernas::CriadorDePernaSimples
	FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * ___CriadorDePernaSimples_9;

public:
	inline static int32_t get_offset_of_prefabDoJoelho_4() { return static_cast<int32_t>(offsetof(GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B, ___prefabDoJoelho_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefabDoJoelho_4() const { return ___prefabDoJoelho_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefabDoJoelho_4() { return &___prefabDoJoelho_4; }
	inline void set_prefabDoJoelho_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefabDoJoelho_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabDoJoelho_4), (void*)value);
	}

	inline static int32_t get_offset_of_lRPernaUm_5() { return static_cast<int32_t>(offsetof(GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B, ___lRPernaUm_5)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lRPernaUm_5() const { return ___lRPernaUm_5; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lRPernaUm_5() { return &___lRPernaUm_5; }
	inline void set_lRPernaUm_5(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lRPernaUm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lRPernaUm_5), (void*)value);
	}

	inline static int32_t get_offset_of_lRPernaDois_6() { return static_cast<int32_t>(offsetof(GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B, ___lRPernaDois_6)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lRPernaDois_6() const { return ___lRPernaDois_6; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lRPernaDois_6() { return &___lRPernaDois_6; }
	inline void set_lRPernaDois_6(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lRPernaDois_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lRPernaDois_6), (void*)value);
	}

	inline static int32_t get_offset_of_joelhosDaPernaUm_7() { return static_cast<int32_t>(offsetof(GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B, ___joelhosDaPernaUm_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_joelhosDaPernaUm_7() const { return ___joelhosDaPernaUm_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_joelhosDaPernaUm_7() { return &___joelhosDaPernaUm_7; }
	inline void set_joelhosDaPernaUm_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___joelhosDaPernaUm_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joelhosDaPernaUm_7), (void*)value);
	}

	inline static int32_t get_offset_of_joelhosDaPernaDois_8() { return static_cast<int32_t>(offsetof(GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B, ___joelhosDaPernaDois_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_joelhosDaPernaDois_8() const { return ___joelhosDaPernaDois_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_joelhosDaPernaDois_8() { return &___joelhosDaPernaDois_8; }
	inline void set_joelhosDaPernaDois_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___joelhosDaPernaDois_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joelhosDaPernaDois_8), (void*)value);
	}

	inline static int32_t get_offset_of_CriadorDePernaSimples_9() { return static_cast<int32_t>(offsetof(GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B, ___CriadorDePernaSimples_9)); }
	inline FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * get_CriadorDePernaSimples_9() const { return ___CriadorDePernaSimples_9; }
	inline FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 ** get_address_of_CriadorDePernaSimples_9() { return &___CriadorDePernaSimples_9; }
	inline void set_CriadorDePernaSimples_9(FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * value)
	{
		___CriadorDePernaSimples_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CriadorDePernaSimples_9), (void*)value);
	}
};


// Movimentacao
struct  Movimentacao_t6AF67DD9B7E0C3450F9B4352FAC6A69B26523037  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody Movimentacao::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_4;
	// System.Int32 Movimentacao::velocidade
	int32_t ___velocidade_5;
	// UnityEngine.Transform Movimentacao::chaoVerificador
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___chaoVerificador_6;
	// System.Boolean Movimentacao::estaNoChao
	bool ___estaNoChao_7;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(Movimentacao_t6AF67DD9B7E0C3450F9B4352FAC6A69B26523037, ___rb_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_velocidade_5() { return static_cast<int32_t>(offsetof(Movimentacao_t6AF67DD9B7E0C3450F9B4352FAC6A69B26523037, ___velocidade_5)); }
	inline int32_t get_velocidade_5() const { return ___velocidade_5; }
	inline int32_t* get_address_of_velocidade_5() { return &___velocidade_5; }
	inline void set_velocidade_5(int32_t value)
	{
		___velocidade_5 = value;
	}

	inline static int32_t get_offset_of_chaoVerificador_6() { return static_cast<int32_t>(offsetof(Movimentacao_t6AF67DD9B7E0C3450F9B4352FAC6A69B26523037, ___chaoVerificador_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_chaoVerificador_6() const { return ___chaoVerificador_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_chaoVerificador_6() { return &___chaoVerificador_6; }
	inline void set_chaoVerificador_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___chaoVerificador_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chaoVerificador_6), (void*)value);
	}

	inline static int32_t get_offset_of_estaNoChao_7() { return static_cast<int32_t>(offsetof(Movimentacao_t6AF67DD9B7E0C3450F9B4352FAC6A69B26523037, ___estaNoChao_7)); }
	inline bool get_estaNoChao_7() const { return ___estaNoChao_7; }
	inline bool* get_address_of_estaNoChao_7() { return &___estaNoChao_7; }
	inline void set_estaNoChao_7(bool value)
	{
		___estaNoChao_7 = value;
	}
};


// Rotacionar
struct  Rotacionar_t24D8B51C6C7061467C256475A89CA7CC0806F970  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Rotacionar::velocidade
	float ___velocidade_4;

public:
	inline static int32_t get_offset_of_velocidade_4() { return static_cast<int32_t>(offsetof(Rotacionar_t24D8B51C6C7061467C256475A89CA7CC0806F970, ___velocidade_4)); }
	inline float get_velocidade_4() const { return ___velocidade_4; }
	inline float* get_address_of_velocidade_4() { return &___velocidade_4; }
	inline void set_velocidade_4(float value)
	{
		___velocidade_4 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Ui
struct  Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Ui::gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverPanel_5;

public:
	inline static int32_t get_offset_of_gameOverPanel_5() { return static_cast<int32_t>(offsetof(Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA, ___gameOverPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverPanel_5() const { return ___gameOverPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverPanel_5() { return &___gameOverPanel_5; }
	inline void set_gameOverPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPanel_5), (void*)value);
	}
};

struct Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_StaticFields
{
public:
	// Ui Ui::instanceUi
	Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * ___instanceUi_4;

public:
	inline static int32_t get_offset_of_instanceUi_4() { return static_cast<int32_t>(offsetof(Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_StaticFields, ___instanceUi_4)); }
	inline Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * get_instanceUi_4() const { return ___instanceUi_4; }
	inline Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA ** get_address_of_instanceUi_4() { return &___instanceUi_4; }
	inline void set_instanceUi_4(Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * value)
	{
		___instanceUi_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceUi_4), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// PernaSimples
struct  PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3  : public FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  m_Items[1];

public:
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_gshared (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_gshared (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Ui::LigarPainel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_LigarPainel_m758968195CE58E0F836886CBD602ED2B0CCDC7FD (Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Panel0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean DesenhoNaTela::PodeDesenhar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesenhoNaTela_PodeDesenhar_m017126539ACE8BB92DC6582C96AF19EA163B9E09 (DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7 * __this, const RuntimeMethod* method);
// System.Void DesenhoNaTela::ComecarADesenhar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesenhoNaTela_ComecarADesenhar_mE6EC5734112A9BEC43CDE5A68C12DABED7DD8BFD (DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void DesenhoNaTela::PararDeDesenhar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesenhoNaTela_PararDeDesenhar_mE23C3C6BFEB6F8B8AB976B7B660631CF3D004BFA (DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LineRenderer::get_positionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.LineRenderer::GetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LineRenderer_GetPosition_mF178A172512025B616E18F6CCF7C7D919931CBAD (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3 (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_m45A359AEC0BED3D47B50A862A2F69911373DE934 (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * ___raycastResults1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, int32_t, const RuntimeMethod*))List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9 (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline)(__this, method);
}
// UnityEngine.GameObject[] FactoryCriadorDePernas::get_JoelhosDaPernaUm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* FactoryCriadorDePernas_get_JoelhosDaPernaUm_m39798B1EF4874977A70143AA98AAFC19DB90FA13_inline (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject[] FactoryCriadorDePernas::get_JoelhosDaPernaDois()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* FactoryCriadorDePernas_get_JoelhosDaPernaDois_m79B3B2CCE00F46C37C60AA07A5C9799E96E11484_inline (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] GeradorDePernas::get_JoelhosDaPernaUm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GeradorDePernas_get_JoelhosDaPernaUm_m358D88529D1BA98455D8F0985D0D5B494695BD24_inline (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] GeradorDePernas::get_JoelhosDaPernaDois()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GeradorDePernas_get_JoelhosDaPernaDois_m16C79A47099DED6CE0C4A611C13CFD9E9290FB26_inline (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, const RuntimeMethod* method);
// System.Void PernaSimples::.ctor(UnityEngine.GameObject,UnityEngine.LineRenderer,UnityEngine.LineRenderer,UnityEngine.GameObject[],UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PernaSimples__ctor_mAA244EA2C504BE4F8AD1AF9701EC887490864C2A (PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabDoJoelho0, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRPernaUm1, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRPernaDois2, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___joelhosDaPernaUm3, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___joelhosDaPernaDois4, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A (String_t* ___layerName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m25738A0CE44A9EDC8D2259CD95313E1F5727839D (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void FactoryCriadorDePernas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryCriadorDePernas__ctor_m3FB049D8925E85BD8831A148740362CEC8DE894C (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method);
// System.Void FactoryCriadorDePernas::set_JoelhosDaPernaUm(UnityEngine.GameObject[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FactoryCriadorDePernas_set_JoelhosDaPernaUm_m997F58FC998D62FE62A23FE93404796389287E70_inline (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___value0, const RuntimeMethod* method);
// System.Void FactoryCriadorDePernas::set_JoelhosDaPernaDois(UnityEngine.GameObject[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FactoryCriadorDePernas_set_JoelhosDaPernaDois_mA88D86B00FD08884BDB47150B9E3628926E98E13_inline (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___value0, const RuntimeMethod* method);
// System.Void PernaSimples/<GerarPernas>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGerarPernasU3Ed__1__ctor_m7E9248BCEBA6F00DDC51781DF911AA93F2319222 (U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis0, float ___angle1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void FactoryCriadorDePernas::DeletarPernasExistentes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryCriadorDePernas_DeletarPernasExistentes_m5F011EE4C5F22DE3010A9339F701CD1D444D7BCB (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Chegada::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chegada_OnTriggerEnter_m666869934605E499400A6D14EA6CAA4C8CD2D6EC (Chegada_t32A35138DA0A5FA5E3F9132ABAAA4AE4F47C2025 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Player")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// Ui.instanceUi.LigarPainel(Ui.instanceUi.gameOverPanel);
		Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * L_4 = ((Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_StaticFields*)il2cpp_codegen_static_fields_for(Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_il2cpp_TypeInfo_var))->get_instanceUi_4();
		Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * L_5 = ((Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_StaticFields*)il2cpp_codegen_static_fields_for(Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_il2cpp_TypeInfo_var))->get_instanceUi_4();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_gameOverPanel_5();
		NullCheck(L_4);
		Ui_LigarPainel_m758968195CE58E0F836886CBD602ED2B0CCDC7FD(L_4, L_6, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Chegada::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chegada__ctor_mA393304DBA661B774A3729832BA733E693D41A5E (Chegada_t32A35138DA0A5FA5E3F9132ABAAA4AE4F47C2025 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DesenhoNaTela::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesenhoNaTela_Update_m20BBA9BFF039726CD303F3780C25D7492BFA8558 (DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Desenhando == false && Input.GetButtonDown("Fire1") && PodeDesenhar())
		bool L_0 = __this->get_Desenhando_10();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = DesenhoNaTela_PodeDesenhar_m017126539ACE8BB92DC6582C96AF19EA163B9E09(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// ComecarADesenhar();
		DesenhoNaTela_ComecarADesenhar_mE6EC5734112A9BEC43CDE5A68C12DABED7DD8BFD(__this, /*hidden argument*/NULL);
		// }
		goto IL_004e;
	}

IL_0024:
	{
		// else if (PodeDesenhar() == false && Desenhando == true || Input.GetButtonUp("Fire1") && Desenhando == true)
		bool L_3;
		L_3 = DesenhoNaTela_PodeDesenhar_m017126539ACE8BB92DC6582C96AF19EA163B9E09(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		bool L_4 = __this->get_Desenhando_10();
		if (L_4)
		{
			goto IL_0048;
		}
	}

IL_0034:
	{
		bool L_5;
		L_5 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		bool L_6 = __this->get_Desenhando_10();
		if (!L_6)
		{
			goto IL_004e;
		}
	}

IL_0048:
	{
		// PararDeDesenhar();
		DesenhoNaTela_PararDeDesenhar_mE23C3C6BFEB6F8B8AB976B7B660631CF3D004BFA(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// if (iniciarDesenho)
		bool L_7 = __this->get_iniciarDesenho_7();
		if (!L_7)
		{
			goto IL_0140;
		}
	}
	{
		// if (Time.frameCount % 30 == 0)
		int32_t L_8;
		L_8 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_8%(int32_t)((int32_t)30))))
		{
			goto IL_0068;
		}
	}
	{
		// System.GC.Collect();
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9(/*hidden argument*/NULL);
	}

IL_0068:
	{
		// Vector3 Dist = posicaoDoMause - Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_posicaoDoMause_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// float Distance_SqrMag = Dist.sqrMagnitude;
		float L_12;
		L_12 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// if (Distance_SqrMag > 500f)
		if ((!(((float)L_12) > ((float)(500.0f)))))
		{
			goto IL_0140;
		}
	}
	{
		// lRDesenhoDaPerna.SetPosition(indexAtual, camera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.z + 4f)));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_13 = __this->get_lRDesenhoDaPerna_5();
		int32_t L_14 = __this->get_indexAtual_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = __this->get_camera_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_21 = L_20.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), L_17, L_19, ((float)il2cpp_codegen_add((float)L_21, (float)(4.0f))), /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_15, L_22, /*hidden argument*/NULL);
		NullCheck(L_13);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_13, L_14, L_23, /*hidden argument*/NULL);
		// posicaoDoMause = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_posicaoDoMause_8(L_24);
		// indexAtual++;
		int32_t L_25 = __this->get_indexAtual_9();
		__this->set_indexAtual_9(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		// lRDesenhoDaPerna.positionCount = indexAtual + 1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_26 = __this->get_lRDesenhoDaPerna_5();
		int32_t L_27 = __this->get_indexAtual_9();
		NullCheck(L_26);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_26, ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)), /*hidden argument*/NULL);
		// lRDesenhoDaPerna.SetPosition(indexAtual, camera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.z + 4f)));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_28 = __this->get_lRDesenhoDaPerna_5();
		int32_t L_29 = __this->get_indexAtual_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = __this->get_camera_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), L_32, L_34, ((float)il2cpp_codegen_add((float)L_36, (float)(4.0f))), /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_30, L_37, /*hidden argument*/NULL);
		NullCheck(L_28);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_28, L_29, L_38, /*hidden argument*/NULL);
	}

IL_0140:
	{
		// }
		return;
	}
}
// System.Void DesenhoNaTela::ComecarADesenhar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesenhoNaTela_ComecarADesenhar_mE6EC5734112A9BEC43CDE5A68C12DABED7DD8BFD (DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// Desenhando = true;
		__this->set_Desenhando_10((bool)1);
		// iniciarDesenho = true;
		__this->set_iniciarDesenho_7((bool)1);
		// posicaoDoMause = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_posicaoDoMause_8(L_0);
		// lRDesenhoDaPerna.positionCount = 2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1 = __this->get_lRDesenhoDaPerna_5();
		NullCheck(L_1);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_1, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DesenhoNaTela::PararDeDesenhar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesenhoNaTela_PararDeDesenhar_mE23C3C6BFEB6F8B8AB976B7B660631CF3D004BFA (DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// Desenhando = false;
		__this->set_Desenhando_10((bool)0);
		// iniciarDesenho = false;
		__this->set_iniciarDesenho_7((bool)0);
		// lRDesenhoDaPerna.useWorldSpace = false;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lRDesenhoDaPerna_5();
		NullCheck(L_0);
		LineRenderer_set_useWorldSpace_m53AA0FE659EFB041647DB6A29826D20D52CBE148(L_0, (bool)0, /*hidden argument*/NULL);
		// pontosDeDobraDaPerna = new Vector3[lRDesenhoDaPerna.positionCount];
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1 = __this->get_lRDesenhoDaPerna_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_1, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_pontosDeDobraDaPerna_6(L_3);
		// for (int i = 0; i < lRDesenhoDaPerna.positionCount; i++)
		V_0 = 0;
		goto IL_005a;
	}

IL_003e:
	{
		// pontosDeDobraDaPerna[i] = lRDesenhoDaPerna.GetPosition(i);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = __this->get_pontosDeDobraDaPerna_6();
		int32_t L_5 = V_0;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6 = __this->get_lRDesenhoDaPerna_5();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = LineRenderer_GetPosition_mF178A172512025B616E18F6CCF7C7D919931CBAD(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8);
		// for (int i = 0; i < lRDesenhoDaPerna.positionCount; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_005a:
	{
		// for (int i = 0; i < lRDesenhoDaPerna.positionCount; i++)
		int32_t L_10 = V_0;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_11 = __this->get_lRDesenhoDaPerna_5();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = LineRenderer_get_positionCount_m599A1E6BE97C3E5C88164D171628D38D86F09E01(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		// StartCoroutine(geradorDePernas.CriadorDePernaSimples.GerarPernas(pontosDeDobraDaPerna));
		GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * L_13 = __this->get_geradorDePernas_4();
		NullCheck(L_13);
		FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * L_14 = L_13->get_CriadorDePernaSimples_9();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_15 = __this->get_pontosDeDobraDaPerna_6();
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = VirtFuncInvoker1< RuntimeObject*, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* >::Invoke(4 /* System.Collections.IEnumerator FactoryCriadorDePernas::GerarPernas(UnityEngine.Vector3[]) */, L_14, L_15);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
		// lRDesenhoDaPerna.positionCount = 0;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_18 = __this->get_lRDesenhoDaPerna_5();
		NullCheck(L_18);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_18, 0, /*hidden argument*/NULL);
		// indexAtual = 0;
		__this->set_indexAtual_9(0);
		// }
		return;
	}
}
// System.Boolean DesenhoNaTela::PodeDesenhar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesenhoNaTela_PodeDesenhar_m017126539ACE8BB92DC6582C96AF19EA163B9E09 (DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCACE2A04B451A6EF7D28A98B6F5A5233434637C6);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_0 = NULL;
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * V_1 = NULL;
	int32_t V_2 = 0;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// pointerEventData.position = Input.mousePosition;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline(L_2, L_4, /*hidden argument*/NULL);
		// List<RaycastResult> raycastResultList = new List<RaycastResult>();
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_5 = (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)il2cpp_codegen_object_new(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3(L_5, /*hidden argument*/List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		V_1 = L_5;
		// EventSystem.current.RaycastAll(pointerEventData, raycastResultList);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_6;
		L_6 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = V_0;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_8 = V_1;
		NullCheck(L_6);
		EventSystem_RaycastAll_m45A359AEC0BED3D47B50A862A2F69911373DE934(L_6, L_7, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < raycastResultList.Count; i++)
		V_2 = 0;
		goto IL_0060;
	}

IL_0031:
	{
		// if (raycastResultList[i].gameObject.tag != "PainelDeDesenho")
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_11;
		L_11 = List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_RuntimeMethod_var);
		V_3 = L_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_13, _stringLiteralCACE2A04B451A6EF7D28A98B6F5A5233434637C6, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		// raycastResultList.RemoveAt(i);
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9(L_15, L_16, /*hidden argument*/List_1_RemoveAt_mD80FD09162C46F1311E55015092EBE4E8312CCF9_RuntimeMethod_var);
		// i--;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
	}

IL_005c:
	{
		// for (int i = 0; i < raycastResultList.Count; i++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < raycastResultList.Count; i++)
		int32_t L_19 = V_2;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_20, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0031;
		}
	}
	{
		// return raycastResultList.Count > 0;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_22, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		return (bool)((((int32_t)L_23) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void DesenhoNaTela::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesenhoNaTela__ctor_m49EE49D1BC8B9258C6716F7FB47BB15A8401D7D7 (DesenhoNaTela_t51F56C6A69ABDDE9BBD0DF655A0F7F6BE0D6C4B7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject[] FactoryCriadorDePernas::get_JoelhosDaPernaDois()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* FactoryCriadorDePernas_get_JoelhosDaPernaDois_m79B3B2CCE00F46C37C60AA07A5C9799E96E11484 (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_joelhosDaPernaDois_8();
		return L_0;
	}
}
// System.Void FactoryCriadorDePernas::set_JoelhosDaPernaDois(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryCriadorDePernas_set_JoelhosDaPernaDois_mA88D86B00FD08884BDB47150B9E3628926E98E13 (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___value0;
		__this->set_joelhosDaPernaDois_8(L_0);
		return;
	}
}
// UnityEngine.GameObject[] FactoryCriadorDePernas::get_JoelhosDaPernaUm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* FactoryCriadorDePernas_get_JoelhosDaPernaUm_m39798B1EF4874977A70143AA98AAFC19DB90FA13 (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_joelhosDaPernaUm_7();
		return L_0;
	}
}
// System.Void FactoryCriadorDePernas::set_JoelhosDaPernaUm(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryCriadorDePernas_set_JoelhosDaPernaUm_m997F58FC998D62FE62A23FE93404796389287E70 (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___value0;
		__this->set_joelhosDaPernaUm_7(L_0);
		return;
	}
}
// System.Void FactoryCriadorDePernas::DeletarPernasExistentes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryCriadorDePernas_DeletarPernasExistentes_m5F011EE4C5F22DE3010A9339F701CD1D444D7BCB (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < joelhosDaPernaUm.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// Destroy(JoelhosDaPernaUm[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = FactoryCriadorDePernas_get_JoelhosDaPernaUm_m39798B1EF4874977A70143AA98AAFC19DB90FA13_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// Destroy(JoelhosDaPernaDois[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4;
		L_4 = FactoryCriadorDePernas_get_JoelhosDaPernaDois_m79B3B2CCE00F46C37C60AA07A5C9799E96E11484_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// for (int i = 0; i < joelhosDaPernaUm.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < joelhosDaPernaUm.Length; i++)
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_joelhosDaPernaUm_7();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FactoryCriadorDePernas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryCriadorDePernas__ctor_m3FB049D8925E85BD8831A148740362CEC8DE894C (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected GameObject[] joelhosDaPernaUm = new GameObject[0];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_joelhosDaPernaUm_7(L_0);
		// protected GameObject[] joelhosDaPernaDois = new GameObject[0];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_joelhosDaPernaDois_8(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject[] GeradorDePernas::get_JoelhosDaPernaDois()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GeradorDePernas_get_JoelhosDaPernaDois_m16C79A47099DED6CE0C4A611C13CFD9E9290FB26 (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_joelhosDaPernaDois_8();
		return L_0;
	}
}
// System.Void GeradorDePernas::set_JoelhosDaPernaDois(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeradorDePernas_set_JoelhosDaPernaDois_m9BED8AC1F9941804A733584B17CD63D93E506D2F (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___value0;
		__this->set_joelhosDaPernaDois_8(L_0);
		return;
	}
}
// UnityEngine.GameObject[] GeradorDePernas::get_JoelhosDaPernaUm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GeradorDePernas_get_JoelhosDaPernaUm_m358D88529D1BA98455D8F0985D0D5B494695BD24 (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_joelhosDaPernaUm_7();
		return L_0;
	}
}
// System.Void GeradorDePernas::set_JoelhosDaPernaUm(UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeradorDePernas_set_JoelhosDaPernaUm_mB7768709690AD564A792D320EE904481A327E554 (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___value0;
		__this->set_joelhosDaPernaUm_7(L_0);
		return;
	}
}
// System.Void GeradorDePernas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeradorDePernas_Start_m743A545166159555EC9C5EE8C32F5828755EEFB8 (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CriadorDePernaSimples = new PernaSimples(
		//     prefabDoJoelho,
		//     lRPernaUm,
		//     lRPernaDois,
		//     JoelhosDaPernaUm,
		//     JoelhosDaPernaDois);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_prefabDoJoelho_4();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1 = __this->get_lRPernaUm_5();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lRPernaDois_6();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3;
		L_3 = GeradorDePernas_get_JoelhosDaPernaUm_m358D88529D1BA98455D8F0985D0D5B494695BD24_inline(__this, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4;
		L_4 = GeradorDePernas_get_JoelhosDaPernaDois_m16C79A47099DED6CE0C4A611C13CFD9E9290FB26_inline(__this, /*hidden argument*/NULL);
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_5 = (PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 *)il2cpp_codegen_object_new(PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3_il2cpp_TypeInfo_var);
		PernaSimples__ctor_mAA244EA2C504BE4F8AD1AF9701EC887490864C2A(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_CriadorDePernaSimples_9(L_5);
		// }
		return;
	}
}
// System.Void GeradorDePernas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeradorDePernas__ctor_m6F67728EB3F64F03BA66B9DB5D433E7B4F118144 (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GameObject[] joelhosDaPernaUm = new GameObject[0];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_joelhosDaPernaUm_7(L_0);
		// private GameObject[] joelhosDaPernaDois = new GameObject[0];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_joelhosDaPernaDois_8(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Movimentacao::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movimentacao_FixedUpdate_m33F7367F0063E2CA17828E7FA300079C7F0B97ED (Movimentacao_t6AF67DD9B7E0C3450F9B4352FAC6A69B26523037 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8376980C2B2557B485C1D6BDC0B911D130BA6681);
		s_Il2CppMethodInitialized = true;
	}
	{
		// estaNoChao = Physics.Linecast(transform.position, chaoVerificador.position, 1 << LayerMask.NameToLayer("Chao"));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_chaoVerificador_6();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteral8376980C2B2557B485C1D6BDC0B911D130BA6681, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Physics_Linecast_m25738A0CE44A9EDC8D2259CD95313E1F5727839D(L_1, L_3, ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
		__this->set_estaNoChao_7(L_5);
		// if(estaNoChao == false)
		bool L_6 = __this->get_estaNoChao_7();
		if (L_6)
		{
			goto IL_006b;
		}
	}
	{
		// rb.velocity = new Vector3 (1 * velocidade * Time.deltaTime, rb.velocity.y, 0);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7 = __this->get_rb_4();
		int32_t L_8 = __this->get_velocidade_5();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = __this->get_rb_4();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), ((float)il2cpp_codegen_multiply((float)((float)((float)L_8)), (float)L_9)), L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_7, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006b:
	{
		// rb.velocity = new Vector3(0.0f, rb.velocity.y, 0);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_14 = __this->get_rb_4();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_15 = __this->get_rb_4();
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (0.0f), L_17, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_14, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Movimentacao::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movimentacao__ctor_m12E3FAC108BE945D628D1D9EB6707E4D1FED2189 (Movimentacao_t6AF67DD9B7E0C3450F9B4352FAC6A69B26523037 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PernaSimples::.ctor(UnityEngine.GameObject,UnityEngine.LineRenderer,UnityEngine.LineRenderer,UnityEngine.GameObject[],UnityEngine.GameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PernaSimples__ctor_mAA244EA2C504BE4F8AD1AF9701EC887490864C2A (PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefabDoJoelho0, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRPernaUm1, LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lRPernaDois2, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___joelhosDaPernaUm3, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___joelhosDaPernaDois4, const RuntimeMethod* method)
{
	{
		// public PernaSimples(GameObject prefabDoJoelho, LineRenderer lRPernaUm, LineRenderer lRPernaDois, GameObject[] joelhosDaPernaUm, GameObject[] joelhosDaPernaDois)
		FactoryCriadorDePernas__ctor_m3FB049D8925E85BD8831A148740362CEC8DE894C(__this, /*hidden argument*/NULL);
		// this.prefabDoJoelho = prefabDoJoelho;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___prefabDoJoelho0;
		((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)__this)->set_prefabDoJoelho_4(L_0);
		// this.lRPernaUm = lRPernaUm;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1 = ___lRPernaUm1;
		((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)__this)->set_lRPernaUm_5(L_1);
		// this.lRPernaDois = lRPernaDois;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = ___lRPernaDois2;
		((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)__this)->set_lRPernaDois_6(L_2);
		// JoelhosDaPernaUm = joelhosDaPernaUm;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = ___joelhosDaPernaUm3;
		FactoryCriadorDePernas_set_JoelhosDaPernaUm_m997F58FC998D62FE62A23FE93404796389287E70_inline(__this, L_3, /*hidden argument*/NULL);
		// JoelhosDaPernaDois = joelhosDaPernaDois;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = ___joelhosDaPernaDois4;
		FactoryCriadorDePernas_set_JoelhosDaPernaDois_mA88D86B00FD08884BDB47150B9E3628926E98E13_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PernaSimples::GerarPernas(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PernaSimples_GerarPernas_mC662BE233CCE67959F6C848FD6107C8373A51FB1 (PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___PontosDeDobraDaPerna0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * L_0 = (U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E *)il2cpp_codegen_object_new(U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E_il2cpp_TypeInfo_var);
		U3CGerarPernasU3Ed__1__ctor_m7E9248BCEBA6F00DDC51781DF911AA93F2319222(L_0, 0, /*hidden argument*/NULL);
		U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * L_2 = L_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = ___PontosDeDobraDaPerna0;
		NullCheck(L_2);
		L_2->set_PontosDeDobraDaPerna_3(L_3);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotacionar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotacionar_Update_m0FEFDF3491E7A93039660C514076AA0CE4078B9C (Rotacionar_t24D8B51C6C7061467C256475A89CA7CC0806F970 * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(Vector3.forward, -velocidade * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_2 = __this->get_velocidade_4();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC(L_0, L_1, ((float)il2cpp_codegen_multiply((float)((-L_2)), (float)L_3)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotacionar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotacionar__ctor_m845DF53985AAC5BB11CDADA3A3728814B0AB9260 (Rotacionar_t24D8B51C6C7061467C256475A89CA7CC0806F970 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ui::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_Awake_m4659784FF64E305E9BED2A3F40E793CE5D7C696E (Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instanceUi = this;
		((Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_StaticFields*)il2cpp_codegen_static_fields_for(Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA_il2cpp_TypeInfo_var))->set_instanceUi_4(__this);
		// }
		return;
	}
}
// System.Void Ui::LigarPainel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_LigarPainel_m758968195CE58E0F836886CBD602ED2B0CCDC7FD (Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Panel0, const RuntimeMethod* method)
{
	{
		// Panel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___Panel0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ui::DesligarPainel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_DesligarPainel_mAE8A8A62FF55C148B34225796CA01FA78D77D262 (Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Panel0, const RuntimeMethod* method)
{
	{
		// Panel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___Panel0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ui::CarregarCena(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui_CarregarCena_mB422B5C7C7D4FE20B0FE8B8C11EF9EC61C84B322 (Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * __this, String_t* ___nomeDaCena0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(nomeDaCena);
		String_t* L_0 = ___nomeDaCena0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ui__ctor_mEDD8B66DC931B8C70B38E69423C1FE68750542F4 (Ui_t6E07575701FB9FE67DD93AFA5ABD96BCA6F69EFA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PernaSimples/<GerarPernas>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGerarPernasU3Ed__1__ctor_m7E9248BCEBA6F00DDC51781DF911AA93F2319222 (U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PernaSimples/<GerarPernas>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGerarPernasU3Ed__1_System_IDisposable_Dispose_m8524B2FA949CC0AF67DF3E4CA63AF59B08B50656 (U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PernaSimples/<GerarPernas>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGerarPernasU3Ed__1_MoveNext_mACADFAA520055988D5B23CCB6B173F475E455240 (U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_025f;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// DeletarPernasExistentes();
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_4 = V_1;
		NullCheck(L_4);
		FactoryCriadorDePernas_DeletarPernasExistentes_m5F011EE4C5F22DE3010A9339F701CD1D444D7BCB(L_4, /*hidden argument*/NULL);
		// Vector3[] PosicaoAtualizada = PontosDeDobraDaPerna;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = __this->get_PontosDeDobraDaPerna_3();
		__this->set_U3CPosicaoAtualizadaU3E5__2_4(L_5);
		// Vector3 zeroPosition = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_U3CzeroPositionU3E5__3_5(L_6);
		// JoelhosDaPernaUm = new GameObject[PontosDeDobraDaPerna.Length];
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_7 = V_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_8 = __this->get_PontosDeDobraDaPerna_3();
		NullCheck(L_8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))));
		NullCheck(L_7);
		FactoryCriadorDePernas_set_JoelhosDaPernaUm_m997F58FC998D62FE62A23FE93404796389287E70_inline(L_7, L_9, /*hidden argument*/NULL);
		// JoelhosDaPernaDois = new GameObject[PontosDeDobraDaPerna.Length];
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_10 = V_1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = __this->get_PontosDeDobraDaPerna_3();
		NullCheck(L_11);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
		NullCheck(L_10);
		FactoryCriadorDePernas_set_JoelhosDaPernaDois_mA88D86B00FD08884BDB47150B9E3628926E98E13_inline(L_10, L_12, /*hidden argument*/NULL);
		// for (int i = 0; i < PontosDeDobraDaPerna.Length; i++)
		__this->set_U3CiU3E5__4_6(0);
		goto IL_0276;
	}

IL_007f:
	{
		// lRPernaUm.positionCount = i + 1;
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_13 = V_1;
		NullCheck(L_13);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_14 = ((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)L_13)->get_lRPernaUm_5();
		int32_t L_15 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_14);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		// lRPernaDois.positionCount = i + 1;
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_16 = V_1;
		NullCheck(L_16);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_17 = ((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)L_16)->get_lRPernaDois_6();
		int32_t L_18 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_17);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_17, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
		// if (i == 0)
		int32_t L_19 = __this->get_U3CiU3E5__4_6();
		if (L_19)
		{
			goto IL_010d;
		}
	}
	{
		// zeroPosition = PontosDeDobraDaPerna[i];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = __this->get_PontosDeDobraDaPerna_3();
		int32_t L_21 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->set_U3CzeroPositionU3E5__3_5(L_23);
		// PontosDeDobraDaPerna[i] = new Vector3(0, 0, 0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24 = __this->get_PontosDeDobraDaPerna_3();
		int32_t L_25 = __this->get_U3CiU3E5__4_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_26);
		// PosicaoAtualizada[i] = PontosDeDobraDaPerna[i];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_27 = __this->get_U3CPosicaoAtualizadaU3E5__2_4();
		int32_t L_28 = __this->get_U3CiU3E5__4_6();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_29 = __this->get_PontosDeDobraDaPerna_3();
		int32_t L_30 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_32);
		// }
		goto IL_016c;
	}

IL_010d:
	{
		// PosicaoAtualizada[i] = new Vector3(PontosDeDobraDaPerna[i].x - zeroPosition.x, PontosDeDobraDaPerna[i].y - zeroPosition.y, 0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_33 = __this->get_U3CPosicaoAtualizadaU3E5__2_4();
		int32_t L_34 = __this->get_U3CiU3E5__4_6();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_35 = __this->get_PontosDeDobraDaPerna_3();
		int32_t L_36 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_35);
		float L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_38 = __this->get_address_of_U3CzeroPositionU3E5__3_5();
		float L_39 = L_38->get_x_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_40 = __this->get_PontosDeDobraDaPerna_3();
		int32_t L_41 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_40);
		float L_42 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_43 = __this->get_address_of_U3CzeroPositionU3E5__3_5();
		float L_44 = L_43->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_45), ((float)il2cpp_codegen_subtract((float)L_37, (float)L_39)), ((float)il2cpp_codegen_subtract((float)L_42, (float)L_44)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_45);
	}

IL_016c:
	{
		// lRPernaUm.SetPosition(i, PosicaoAtualizada[i]);
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_46 = V_1;
		NullCheck(L_46);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_47 = ((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)L_46)->get_lRPernaUm_5();
		int32_t L_48 = __this->get_U3CiU3E5__4_6();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_49 = __this->get_U3CPosicaoAtualizadaU3E5__2_4();
		int32_t L_50 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_47);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_47, L_48, L_52, /*hidden argument*/NULL);
		// JoelhosDaPernaUm[i] = Instantiate(prefabDoJoelho, lRPernaUm.transform);
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_53 = V_1;
		NullCheck(L_53);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_54;
		L_54 = FactoryCriadorDePernas_get_JoelhosDaPernaUm_m39798B1EF4874977A70143AA98AAFC19DB90FA13_inline(L_53, /*hidden argument*/NULL);
		int32_t L_55 = __this->get_U3CiU3E5__4_6();
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_56 = V_1;
		NullCheck(L_56);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = ((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)L_56)->get_prefabDoJoelho_4();
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_58 = V_1;
		NullCheck(L_58);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_59 = ((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)L_58)->get_lRPernaUm_5();
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61;
		L_61 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_57, L_60, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_61);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_61);
		// JoelhosDaPernaUm[i].transform.localPosition = PosicaoAtualizada[i];
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_62 = V_1;
		NullCheck(L_62);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_63;
		L_63 = FactoryCriadorDePernas_get_JoelhosDaPernaUm_m39798B1EF4874977A70143AA98AAFC19DB90FA13_inline(L_62, /*hidden argument*/NULL);
		int32_t L_64 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_66, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_68 = __this->get_U3CPosicaoAtualizadaU3E5__2_4();
		int32_t L_69 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_68);
		int32_t L_70 = L_69;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_67);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_67, L_71, /*hidden argument*/NULL);
		// lRPernaDois.SetPosition(i, PosicaoAtualizada[i]);
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_72 = V_1;
		NullCheck(L_72);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_73 = ((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)L_72)->get_lRPernaDois_6();
		int32_t L_74 = __this->get_U3CiU3E5__4_6();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_75 = __this->get_U3CPosicaoAtualizadaU3E5__2_4();
		int32_t L_76 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_75);
		int32_t L_77 = L_76;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_73);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_73, L_74, L_78, /*hidden argument*/NULL);
		// JoelhosDaPernaDois[i] = Instantiate(prefabDoJoelho, lRPernaDois.transform);
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_79 = V_1;
		NullCheck(L_79);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_80;
		L_80 = FactoryCriadorDePernas_get_JoelhosDaPernaDois_m79B3B2CCE00F46C37C60AA07A5C9799E96E11484_inline(L_79, /*hidden argument*/NULL);
		int32_t L_81 = __this->get_U3CiU3E5__4_6();
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_82 = V_1;
		NullCheck(L_82);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = ((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)L_82)->get_prefabDoJoelho_4();
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_84 = V_1;
		NullCheck(L_84);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_85 = ((FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 *)L_84)->get_lRPernaDois_6();
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_85, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87;
		L_87 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_83, L_86, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_87);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_87);
		// JoelhosDaPernaDois[i].transform.localPosition = PosicaoAtualizada[i];
		PernaSimples_tDFD490F3EFAD6F308F5E7E560060D7F07E0E4BD3 * L_88 = V_1;
		NullCheck(L_88);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_89;
		L_89 = FactoryCriadorDePernas_get_JoelhosDaPernaDois_m79B3B2CCE00F46C37C60AA07A5C9799E96E11484_inline(L_88, /*hidden argument*/NULL);
		int32_t L_90 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_89);
		int32_t L_91 = L_90;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_92, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_94 = __this->get_U3CPosicaoAtualizadaU3E5__2_4();
		int32_t L_95 = __this->get_U3CiU3E5__4_6();
		NullCheck(L_94);
		int32_t L_96 = L_95;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_93);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_93, L_97, /*hidden argument*/NULL);
		// yield return new WaitForSecondsRealtime(0.01f);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_98 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_98, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_98);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_025f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < PontosDeDobraDaPerna.Length; i++)
		int32_t L_99 = __this->get_U3CiU3E5__4_6();
		V_2 = L_99;
		int32_t L_100 = V_2;
		__this->set_U3CiU3E5__4_6(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1)));
	}

IL_0276:
	{
		// for (int i = 0; i < PontosDeDobraDaPerna.Length; i++)
		int32_t L_101 = __this->get_U3CiU3E5__4_6();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_102 = __this->get_PontosDeDobraDaPerna_3();
		NullCheck(L_102);
		if ((((int32_t)L_101) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_007f;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PernaSimples/<GerarPernas>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGerarPernasU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE913DBEA4FFA4E6122690457687671615BE756C (U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PernaSimples/<GerarPernas>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGerarPernasU3Ed__1_System_Collections_IEnumerator_Reset_m996A7D7E7F764918BDCD9C19FFD0E74723FE5AD5 (U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGerarPernasU3Ed__1_System_Collections_IEnumerator_Reset_m996A7D7E7F764918BDCD9C19FFD0E74723FE5AD5_RuntimeMethod_var)));
	}
}
// System.Object PernaSimples/<GerarPernas>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGerarPernasU3Ed__1_System_Collections_IEnumerator_get_Current_m7E695D4569E582ED8248C17357955A81A43F331F (U3CGerarPernasU3Ed__1_t8426413B0282671927FA9ACD00BCB8F847AF652E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_GameObject; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_GameObject_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* FactoryCriadorDePernas_get_JoelhosDaPernaUm_m39798B1EF4874977A70143AA98AAFC19DB90FA13_inline (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_joelhosDaPernaUm_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* FactoryCriadorDePernas_get_JoelhosDaPernaDois_m79B3B2CCE00F46C37C60AA07A5C9799E96E11484_inline (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_joelhosDaPernaDois_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GeradorDePernas_get_JoelhosDaPernaUm_m358D88529D1BA98455D8F0985D0D5B494695BD24_inline (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_joelhosDaPernaUm_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GeradorDePernas_get_JoelhosDaPernaDois_m16C79A47099DED6CE0C4A611C13CFD9E9290FB26_inline (GeradorDePernas_t44BFB4459BCDE1F9D161B0534ACF0B44E203306B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_joelhosDaPernaDois_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FactoryCriadorDePernas_set_JoelhosDaPernaUm_m997F58FC998D62FE62A23FE93404796389287E70_inline (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaUm { get => joelhosDaPernaUm; set => joelhosDaPernaUm = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___value0;
		__this->set_joelhosDaPernaUm_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FactoryCriadorDePernas_set_JoelhosDaPernaDois_mA88D86B00FD08884BDB47150B9E3628926E98E13_inline (FactoryCriadorDePernas_t7F1762C1E892BC9E38100954ED4C30452FAF1FA5 * __this, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject[] JoelhosDaPernaDois { get => joelhosDaPernaDois; set => joelhosDaPernaDois = value; }
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = ___value0;
		__this->set_joelhosDaPernaDois_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  List_1_get_Item_m8CAD57C6E350E1DA232EAAC07A84ED0C10D29CDB_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* L_2 = (RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D*)L_2, (int32_t)L_3);
		return (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
