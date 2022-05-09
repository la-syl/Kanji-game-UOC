﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.TimeSpan[]
struct TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_tE715F6572D858174C1BDCF0076B3C6415B226CD0;
// UnityEngine.InputSystem.InputAction
struct InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42;

IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var;
struct DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_com;
struct DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826;
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.DateTimeOffset>
struct List_1_t6A1295D69B538887EB0A62B321F30014A5691173  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6A1295D69B538887EB0A62B321F30014A5691173, ____items_1)); }
	inline DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* get__items_1() const { return ____items_1; }
	inline DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6A1295D69B538887EB0A62B321F30014A5691173, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6A1295D69B538887EB0A62B321F30014A5691173, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6A1295D69B538887EB0A62B321F30014A5691173, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6A1295D69B538887EB0A62B321F30014A5691173_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6A1295D69B538887EB0A62B321F30014A5691173_StaticFields, ____emptyArray_5)); }
	inline DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Decimal>
struct List_1_t137B540BF717527106254AA05BE36A51A068C8F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t137B540BF717527106254AA05BE36A51A068C8F5, ____items_1)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get__items_1() const { return ____items_1; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t137B540BF717527106254AA05BE36A51A068C8F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t137B540BF717527106254AA05BE36A51A068C8F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t137B540BF717527106254AA05BE36A51A068C8F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t137B540BF717527106254AA05BE36A51A068C8F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t137B540BF717527106254AA05BE36A51A068C8F5_StaticFields, ____emptyArray_5)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Double>
struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____items_1)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__items_1() const { return ____items_1; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields, ____emptyArray_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int16>
struct List_1_t985353431229C8151763A38589D03FBD829D85E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5, ____items_1)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get__items_1() const { return ____items_1; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t985353431229C8151763A38589D03FBD829D85E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5_StaticFields, ____emptyArray_5)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int64>
struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____items_1)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get__items_1() const { return ____items_1; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4_StaticFields, ____emptyArray_5)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.SByte>
struct List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7, ____items_1)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get__items_1() const { return ____items_1; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7_StaticFields, ____emptyArray_5)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.TimeSpan>
struct List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3, ____items_1)); }
	inline TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* get__items_1() const { return ____items_1; }
	inline TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3_StaticFields, ____emptyArray_5)); }
	inline TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt16>
struct List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5, ____items_1)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get__items_1() const { return ____items_1; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5_StaticFields, ____emptyArray_5)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____items_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B, ____items_1)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__items_1() const { return ____items_1; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B_StaticFields, ____emptyArray_5)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763  : public RuntimeObject
{
public:

public:
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___firstValue_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___additionalValues_2)); }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___firstValue_1)); }
	inline Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___additionalValues_2)); }
	inline Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B 
{
public:
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* ___m_DeviceRequirements_2;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingGroup_1() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_BindingGroup_1)); }
	inline String_t* get_m_BindingGroup_1() const { return ___m_BindingGroup_1; }
	inline String_t** get_address_of_m_BindingGroup_1() { return &___m_BindingGroup_1; }
	inline void set_m_BindingGroup_1(String_t* value)
	{
		___m_BindingGroup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroup_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRequirements_2() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_DeviceRequirements_2)); }
	inline DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* get_m_DeviceRequirements_2() const { return ___m_DeviceRequirements_2; }
	inline DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A** get_address_of_m_DeviceRequirements_2() { return &___m_DeviceRequirements_2; }
	inline void set_m_DeviceRequirements_2(DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* value)
	{
		___m_DeviceRequirements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRequirements_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_com* ___m_DeviceRequirements_2;
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8, ___table_0)); }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8_marshaled_pinvoke
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8_marshaled_com
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4, ___m_State_0)); }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4_marshaled_pinvoke
{
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4_marshaled_com
{
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 
{
public:
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndexInMap
	int32_t ___m_BindingIndexInMap_2;

public:
	inline static int32_t get_offset_of_m_ActionMap_0() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_ActionMap_0)); }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * get_m_ActionMap_0() const { return ___m_ActionMap_0; }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 ** get_address_of_m_ActionMap_0() { return &___m_ActionMap_0; }
	inline void set_m_ActionMap_0(InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * value)
	{
		___m_ActionMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_Action_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingIndexInMap_2() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_BindingIndexInMap_2)); }
	inline int32_t get_m_BindingIndexInMap_2() const { return ___m_BindingIndexInMap_2; }
	inline int32_t* get_address_of_m_BindingIndexInMap_2() { return &___m_BindingIndexInMap_2; }
	inline void set_m_BindingIndexInMap_2(int32_t value)
	{
		___m_BindingIndexInMap_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999_marshaled_pinvoke
{
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999_marshaled_com
{
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * ___mapIndices_16;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionStates_7)); }
	inline TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___bindingStates_8)); }
	inline BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___interactionStates_9)); }
	inline InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_mapIndices_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___mapIndices_16)); }
	inline ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * get_mapIndices_16() const { return ___mapIndices_16; }
	inline ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC ** get_address_of_mapIndices_16() { return &___mapIndices_16; }
	inline void set_mapIndices_16(ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * value)
	{
		___mapIndices_16 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D, ___table_0)); }
	inline Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D_marshaled_pinvoke
{
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D_marshaled_com
{
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutTypes_1)); }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutStrings_2)); }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutStrings_2), (void*)value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutBuilders_3)); }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutBuilders_3), (void*)value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___baseLayoutTable_4)); }
	inline Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseLayoutTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutOverrides_5)); }
	inline Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrides_5), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrideNames_6() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutOverrideNames_6)); }
	inline HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * get_layoutOverrideNames_6() const { return ___layoutOverrideNames_6; }
	inline HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C ** get_address_of_layoutOverrideNames_6() { return &___layoutOverrideNames_6; }
	inline void set_layoutOverrideNames_6(HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * value)
	{
		___layoutOverrideNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrideNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_precompiledLayouts_7() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___precompiledLayouts_7)); }
	inline Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * get_precompiledLayouts_7() const { return ___precompiledLayouts_7; }
	inline Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 ** get_address_of_precompiledLayouts_7() { return &___precompiledLayouts_7; }
	inline void set_precompiledLayouts_7(Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * value)
	{
		___precompiledLayouts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___precompiledLayouts_7), (void*)value);
	}

	inline static int32_t get_offset_of_layoutMatchers_8() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutMatchers_8)); }
	inline List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * get_layoutMatchers_8() const { return ___layoutMatchers_8; }
	inline List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 ** get_address_of_layoutMatchers_8() { return &___layoutMatchers_8; }
	inline void set_layoutMatchers_8(List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * value)
	{
		___layoutMatchers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutMatchers_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4_marshaled_pinvoke
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4_marshaled_com
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>
struct CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_Callbacks_1)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_Callbacks_1)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___firstValue_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_firstValue_1() const { return ___firstValue_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___additionalValues_2)); }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___firstValue_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_firstValue_1() const { return ___firstValue_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___additionalValues_2)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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

// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t36893252EB5C7E071BBB35D65953AE6FE8271BA1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionPhase_t36893252EB5C7E071BBB35D65953AE6FE8271BA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E  : public RuntimeObject
{
public:

public:
};

struct InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputProcessor::s_Processors
	TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  ___s_Processors_0;

public:
	inline static int32_t get_offset_of_s_Processors_0() { return static_cast<int32_t>(offsetof(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields, ___s_Processors_0)); }
	inline TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  get_s_Processors_0() const { return ___s_Processors_0; }
	inline TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 * get_address_of_s_Processors_0() { return &___s_Processors_0; }
	inline void set_s_Processors_0(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  value)
	{
		___s_Processors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Processors_0))->___table_0), (void*)NULL);
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Xml.Schema.XmlTypeCode
struct XmlTypeCode_t8BCC3C3572E95AA39A6F53864E90CE04AB3290E1 
{
public:
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlTypeCode_t8BCC3C3572E95AA39A6F53864E90CE04AB3290E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  ___m_ControlScheme_2;

public:
	inline static int32_t get_offset_of_m_Asset_0() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_Asset_0)); }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * get_m_Asset_0() const { return ___m_Asset_0; }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE ** get_address_of_m_Asset_0() { return &___m_Asset_0; }
	inline void set_m_Asset_0(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * value)
	{
		___m_Asset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemeIndex_1() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_ControlSchemeIndex_1)); }
	inline int32_t get_m_ControlSchemeIndex_1() const { return ___m_ControlSchemeIndex_1; }
	inline int32_t* get_address_of_m_ControlSchemeIndex_1() { return &___m_ControlSchemeIndex_1; }
	inline void set_m_ControlSchemeIndex_1(int32_t value)
	{
		___m_ControlSchemeIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_ControlScheme_2() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_ControlScheme_2)); }
	inline InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  get_m_ControlScheme_2() const { return ___m_ControlScheme_2; }
	inline InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B * get_address_of_m_ControlScheme_2() { return &___m_ControlScheme_2; }
	inline void set_m_ControlScheme_2(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  value)
	{
		___m_ControlScheme_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_BindingGroup_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_DeviceRequirements_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6_marshaled_pinvoke
{
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6_marshaled_com
{
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t904B93767740996C64FD20D5C1425440048E7BBF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t904B93767740996C64FD20D5C1425440048E7BBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t * ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ExtendsLayout
	String_t* ___m_ExtendsLayout_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* ___m_Controls_8;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CdisplayNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_1() const { return ___U3CdisplayNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_1() { return &___U3CdisplayNameU3Ek__BackingField_1; }
	inline void set_U3CdisplayNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CtypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CstateFormatU3Ek__BackingField_3)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_U3CstateFormatU3Ek__BackingField_3() const { return ___U3CstateFormatU3Ek__BackingField_3; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_U3CstateFormatU3Ek__BackingField_3() { return &___U3CstateFormatU3Ek__BackingField_3; }
	inline void set_U3CstateFormatU3Ek__BackingField_3(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___U3CstateFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CstateSizeInBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CstateSizeInBytesU3Ek__BackingField_4() const { return ___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return &___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline void set_U3CstateSizeInBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CstateSizeInBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_ExtendsLayout_5() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_ExtendsLayout_5)); }
	inline String_t* get_m_ExtendsLayout_5() const { return ___m_ExtendsLayout_5; }
	inline String_t** get_address_of_m_ExtendsLayout_5() { return &___m_ExtendsLayout_5; }
	inline void set_m_ExtendsLayout_5(String_t* value)
	{
		___m_ExtendsLayout_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExtendsLayout_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CupdateBeforeRenderU3Ek__BackingField_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CupdateBeforeRenderU3Ek__BackingField_6() const { return ___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return &___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline void set_U3CupdateBeforeRenderU3Ek__BackingField_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CupdateBeforeRenderU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_7() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_ControlCount_7)); }
	inline int32_t get_m_ControlCount_7() const { return ___m_ControlCount_7; }
	inline int32_t* get_address_of_m_ControlCount_7() { return &___m_ControlCount_7; }
	inline void set_m_ControlCount_7(int32_t value)
	{
		___m_ControlCount_7 = value;
	}

	inline static int32_t get_offset_of_m_Controls_8() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_Controls_8)); }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* get_m_Controls_8() const { return ___m_Controls_8; }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3** get_address_of_m_Controls_8() { return &___m_Controls_8; }
	inline void set_m_Controls_8(ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* value)
	{
		___m_Controls_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_8), (void*)value);
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_t32BB7462BDA6CB64EE04F3375BD7F7754C259C22 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t32BB7462BDA6CB64EE04F3375BD7F7754C259C22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_t46A486E2DB0EE268818D207578A4F2BEAB17BE0A 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t46A486E2DB0EE268818D207578A4F2BEAB17BE0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t * ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Name_2)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Name_2() const { return ___m_Name_2; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Variants_4() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Variants_4)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Variants_4() const { return ___m_Variants_4; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Variants_4() { return &___m_Variants_4; }
	inline void set_m_Variants_4(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Variants_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_StateFormat_5() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_StateFormat_5)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_m_StateFormat_5() const { return ___m_StateFormat_5; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_m_StateFormat_5() { return &___m_StateFormat_5; }
	inline void set_m_StateFormat_5(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___m_StateFormat_5 = value;
	}

	inline static int32_t get_offset_of_m_StateSizeInBytes_6() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_StateSizeInBytes_6)); }
	inline int32_t get_m_StateSizeInBytes_6() const { return ___m_StateSizeInBytes_6; }
	inline int32_t* get_address_of_m_StateSizeInBytes_6() { return &___m_StateSizeInBytes_6; }
	inline void set_m_StateSizeInBytes_6(int32_t value)
	{
		___m_StateSizeInBytes_6 = value;
	}

	inline static int32_t get_offset_of_m_UpdateBeforeRender_7() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_UpdateBeforeRender_7)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_UpdateBeforeRender_7() const { return ___m_UpdateBeforeRender_7; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_UpdateBeforeRender_7() { return &___m_UpdateBeforeRender_7; }
	inline void set_m_UpdateBeforeRender_7(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_UpdateBeforeRender_7 = value;
	}

	inline static int32_t get_offset_of_m_BaseLayouts_8() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_BaseLayouts_8)); }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  get_m_BaseLayouts_8() const { return ___m_BaseLayouts_8; }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 * get_address_of_m_BaseLayouts_8() { return &___m_BaseLayouts_8; }
	inline void set_m_BaseLayouts_8(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  value)
	{
		___m_BaseLayouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BaseLayouts_8))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AppliedOverrides_9() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_AppliedOverrides_9)); }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  get_m_AppliedOverrides_9() const { return ___m_AppliedOverrides_9; }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 * get_address_of_m_AppliedOverrides_9() { return &___m_AppliedOverrides_9; }
	inline void set_m_AppliedOverrides_9(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  value)
	{
		___m_AppliedOverrides_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_AppliedOverrides_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CommonUsages_10() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_CommonUsages_10)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_CommonUsages_10() const { return ___m_CommonUsages_10; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_CommonUsages_10() { return &___m_CommonUsages_10; }
	inline void set_m_CommonUsages_10(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_CommonUsages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonUsages_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Controls_11() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Controls_11)); }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* get_m_Controls_11() const { return ___m_Controls_11; }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3** get_address_of_m_Controls_11() { return &___m_Controls_11; }
	inline void set_m_Controls_11(ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* value)
	{
		___m_Controls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_12() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_DisplayName_12)); }
	inline String_t* get_m_DisplayName_12() const { return ___m_DisplayName_12; }
	inline String_t** get_address_of_m_DisplayName_12() { return &___m_DisplayName_12; }
	inline void set_m_DisplayName_12(String_t* value)
	{
		___m_DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Description_13() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Description_13)); }
	inline String_t* get_m_Description_13() const { return ___m_Description_13; }
	inline String_t** get_address_of_m_Description_13() { return &___m_Description_13; }
	inline void set_m_Description_13(String_t* value)
	{
		___m_Description_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Description_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_14() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Flags_14)); }
	inline int32_t get_m_Flags_14() const { return ___m_Flags_14; }
	inline int32_t* get_address_of_m_Flags_14() { return &___m_Flags_14; }
	inline void set_m_Flags_14(int32_t value)
	{
		___m_Flags_14 = value;
	}
};

struct InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;

public:
	inline static int32_t get_offset_of_s_DefaultVariant_0() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_DefaultVariant_0)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_s_DefaultVariant_0() const { return ___s_DefaultVariant_0; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_s_DefaultVariant_0() { return &___s_DefaultVariant_0; }
	inline void set_s_DefaultVariant_0(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___s_DefaultVariant_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_Layouts_15() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_Layouts_15)); }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  get_s_Layouts_15() const { return ___s_Layouts_15; }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 * get_address_of_s_Layouts_15() { return &___s_Layouts_15; }
	inline void set_s_Layouts_15(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  value)
	{
		___s_Layouts_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___precompiledLayouts_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutMatchers_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_CacheInstance_16() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_CacheInstance_16)); }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  get_s_CacheInstance_16() const { return ___s_CacheInstance_16; }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D * get_address_of_s_CacheInstance_16() { return &___s_CacheInstance_16; }
	inline void set_s_CacheInstance_16(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  value)
	{
		___s_CacheInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_CacheInstance_16))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_CacheInstanceRef_17() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_CacheInstanceRef_17)); }
	inline int32_t get_s_CacheInstanceRef_17() const { return ___s_CacheInstanceRef_17; }
	inline int32_t* get_address_of_s_CacheInstanceRef_17() { return &___s_CacheInstanceRef_17; }
	inline void set_s_CacheInstanceRef_17(int32_t value)
	{
		___s_CacheInstanceRef_17 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55  : public XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763
{
public:
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA * ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t * ___clrTypeDefault_2;

public:
	inline static int32_t get_offset_of_schemaType_0() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55, ___schemaType_0)); }
	inline XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA * get_schemaType_0() const { return ___schemaType_0; }
	inline XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA ** get_address_of_schemaType_0() { return &___schemaType_0; }
	inline void set_schemaType_0(XmlSchemaType_t390DB79F0EB746B12C400BD1897CDB9F3557FCBA * value)
	{
		___schemaType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaType_0), (void*)value);
	}

	inline static int32_t get_offset_of_typeCode_1() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55, ___typeCode_1)); }
	inline int32_t get_typeCode_1() const { return ___typeCode_1; }
	inline int32_t* get_address_of_typeCode_1() { return &___typeCode_1; }
	inline void set_typeCode_1(int32_t value)
	{
		___typeCode_1 = value;
	}

	inline static int32_t get_offset_of_clrTypeDefault_2() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55, ___clrTypeDefault_2)); }
	inline Type_t * get_clrTypeDefault_2() const { return ___clrTypeDefault_2; }
	inline Type_t ** get_address_of_clrTypeDefault_2() { return &___clrTypeDefault_2; }
	inline void set_clrTypeDefault_2(Type_t * value)
	{
		___clrTypeDefault_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clrTypeDefault_2), (void*)value);
	}
};

struct XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields
{
public:
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t * ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t * ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t * ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t * ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t * ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t * ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t * ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t * ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t * ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t * ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t * ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t * ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t * ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t * ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t * ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t * ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t * ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t * ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t * ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t * ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t * ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t * ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t * ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t * ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t * ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t * ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t * ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t * ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t * ___XPathNavigatorType_31;

public:
	inline static int32_t get_offset_of_ICollectionType_3() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___ICollectionType_3)); }
	inline Type_t * get_ICollectionType_3() const { return ___ICollectionType_3; }
	inline Type_t ** get_address_of_ICollectionType_3() { return &___ICollectionType_3; }
	inline void set_ICollectionType_3(Type_t * value)
	{
		___ICollectionType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ICollectionType_3), (void*)value);
	}

	inline static int32_t get_offset_of_IEnumerableType_4() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___IEnumerableType_4)); }
	inline Type_t * get_IEnumerableType_4() const { return ___IEnumerableType_4; }
	inline Type_t ** get_address_of_IEnumerableType_4() { return &___IEnumerableType_4; }
	inline void set_IEnumerableType_4(Type_t * value)
	{
		___IEnumerableType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IEnumerableType_4), (void*)value);
	}

	inline static int32_t get_offset_of_IListType_5() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___IListType_5)); }
	inline Type_t * get_IListType_5() const { return ___IListType_5; }
	inline Type_t ** get_address_of_IListType_5() { return &___IListType_5; }
	inline void set_IListType_5(Type_t * value)
	{
		___IListType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IListType_5), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectArrayType_6() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___ObjectArrayType_6)); }
	inline Type_t * get_ObjectArrayType_6() const { return ___ObjectArrayType_6; }
	inline Type_t ** get_address_of_ObjectArrayType_6() { return &___ObjectArrayType_6; }
	inline void set_ObjectArrayType_6(Type_t * value)
	{
		___ObjectArrayType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectArrayType_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringArrayType_7() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___StringArrayType_7)); }
	inline Type_t * get_StringArrayType_7() const { return ___StringArrayType_7; }
	inline Type_t ** get_address_of_StringArrayType_7() { return &___StringArrayType_7; }
	inline void set_StringArrayType_7(Type_t * value)
	{
		___StringArrayType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringArrayType_7), (void*)value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueArrayType_8() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___XmlAtomicValueArrayType_8)); }
	inline Type_t * get_XmlAtomicValueArrayType_8() const { return ___XmlAtomicValueArrayType_8; }
	inline Type_t ** get_address_of_XmlAtomicValueArrayType_8() { return &___XmlAtomicValueArrayType_8; }
	inline void set_XmlAtomicValueArrayType_8(Type_t * value)
	{
		___XmlAtomicValueArrayType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlAtomicValueArrayType_8), (void*)value);
	}

	inline static int32_t get_offset_of_DecimalType_9() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___DecimalType_9)); }
	inline Type_t * get_DecimalType_9() const { return ___DecimalType_9; }
	inline Type_t ** get_address_of_DecimalType_9() { return &___DecimalType_9; }
	inline void set_DecimalType_9(Type_t * value)
	{
		___DecimalType_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DecimalType_9), (void*)value);
	}

	inline static int32_t get_offset_of_Int32Type_10() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___Int32Type_10)); }
	inline Type_t * get_Int32Type_10() const { return ___Int32Type_10; }
	inline Type_t ** get_address_of_Int32Type_10() { return &___Int32Type_10; }
	inline void set_Int32Type_10(Type_t * value)
	{
		___Int32Type_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int32Type_10), (void*)value);
	}

	inline static int32_t get_offset_of_Int64Type_11() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___Int64Type_11)); }
	inline Type_t * get_Int64Type_11() const { return ___Int64Type_11; }
	inline Type_t ** get_address_of_Int64Type_11() { return &___Int64Type_11; }
	inline void set_Int64Type_11(Type_t * value)
	{
		___Int64Type_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int64Type_11), (void*)value);
	}

	inline static int32_t get_offset_of_StringType_12() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___StringType_12)); }
	inline Type_t * get_StringType_12() const { return ___StringType_12; }
	inline Type_t ** get_address_of_StringType_12() { return &___StringType_12; }
	inline void set_StringType_12(Type_t * value)
	{
		___StringType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringType_12), (void*)value);
	}

	inline static int32_t get_offset_of_XmlAtomicValueType_13() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___XmlAtomicValueType_13)); }
	inline Type_t * get_XmlAtomicValueType_13() const { return ___XmlAtomicValueType_13; }
	inline Type_t ** get_address_of_XmlAtomicValueType_13() { return &___XmlAtomicValueType_13; }
	inline void set_XmlAtomicValueType_13(Type_t * value)
	{
		___XmlAtomicValueType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlAtomicValueType_13), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectType_14() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___ObjectType_14)); }
	inline Type_t * get_ObjectType_14() const { return ___ObjectType_14; }
	inline Type_t ** get_address_of_ObjectType_14() { return &___ObjectType_14; }
	inline void set_ObjectType_14(Type_t * value)
	{
		___ObjectType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectType_14), (void*)value);
	}

	inline static int32_t get_offset_of_ByteType_15() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___ByteType_15)); }
	inline Type_t * get_ByteType_15() const { return ___ByteType_15; }
	inline Type_t ** get_address_of_ByteType_15() { return &___ByteType_15; }
	inline void set_ByteType_15(Type_t * value)
	{
		___ByteType_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ByteType_15), (void*)value);
	}

	inline static int32_t get_offset_of_Int16Type_16() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___Int16Type_16)); }
	inline Type_t * get_Int16Type_16() const { return ___Int16Type_16; }
	inline Type_t ** get_address_of_Int16Type_16() { return &___Int16Type_16; }
	inline void set_Int16Type_16(Type_t * value)
	{
		___Int16Type_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Int16Type_16), (void*)value);
	}

	inline static int32_t get_offset_of_SByteType_17() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___SByteType_17)); }
	inline Type_t * get_SByteType_17() const { return ___SByteType_17; }
	inline Type_t ** get_address_of_SByteType_17() { return &___SByteType_17; }
	inline void set_SByteType_17(Type_t * value)
	{
		___SByteType_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SByteType_17), (void*)value);
	}

	inline static int32_t get_offset_of_UInt16Type_18() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___UInt16Type_18)); }
	inline Type_t * get_UInt16Type_18() const { return ___UInt16Type_18; }
	inline Type_t ** get_address_of_UInt16Type_18() { return &___UInt16Type_18; }
	inline void set_UInt16Type_18(Type_t * value)
	{
		___UInt16Type_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt16Type_18), (void*)value);
	}

	inline static int32_t get_offset_of_UInt32Type_19() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___UInt32Type_19)); }
	inline Type_t * get_UInt32Type_19() const { return ___UInt32Type_19; }
	inline Type_t ** get_address_of_UInt32Type_19() { return &___UInt32Type_19; }
	inline void set_UInt32Type_19(Type_t * value)
	{
		___UInt32Type_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt32Type_19), (void*)value);
	}

	inline static int32_t get_offset_of_UInt64Type_20() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___UInt64Type_20)); }
	inline Type_t * get_UInt64Type_20() const { return ___UInt64Type_20; }
	inline Type_t ** get_address_of_UInt64Type_20() { return &___UInt64Type_20; }
	inline void set_UInt64Type_20(Type_t * value)
	{
		___UInt64Type_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UInt64Type_20), (void*)value);
	}

	inline static int32_t get_offset_of_XPathItemType_21() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___XPathItemType_21)); }
	inline Type_t * get_XPathItemType_21() const { return ___XPathItemType_21; }
	inline Type_t ** get_address_of_XPathItemType_21() { return &___XPathItemType_21; }
	inline void set_XPathItemType_21(Type_t * value)
	{
		___XPathItemType_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XPathItemType_21), (void*)value);
	}

	inline static int32_t get_offset_of_DoubleType_22() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___DoubleType_22)); }
	inline Type_t * get_DoubleType_22() const { return ___DoubleType_22; }
	inline Type_t ** get_address_of_DoubleType_22() { return &___DoubleType_22; }
	inline void set_DoubleType_22(Type_t * value)
	{
		___DoubleType_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DoubleType_22), (void*)value);
	}

	inline static int32_t get_offset_of_SingleType_23() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___SingleType_23)); }
	inline Type_t * get_SingleType_23() const { return ___SingleType_23; }
	inline Type_t ** get_address_of_SingleType_23() { return &___SingleType_23; }
	inline void set_SingleType_23(Type_t * value)
	{
		___SingleType_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SingleType_23), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeType_24() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___DateTimeType_24)); }
	inline Type_t * get_DateTimeType_24() const { return ___DateTimeType_24; }
	inline Type_t ** get_address_of_DateTimeType_24() { return &___DateTimeType_24; }
	inline void set_DateTimeType_24(Type_t * value)
	{
		___DateTimeType_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeType_24), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeOffsetType_25() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___DateTimeOffsetType_25)); }
	inline Type_t * get_DateTimeOffsetType_25() const { return ___DateTimeOffsetType_25; }
	inline Type_t ** get_address_of_DateTimeOffsetType_25() { return &___DateTimeOffsetType_25; }
	inline void set_DateTimeOffsetType_25(Type_t * value)
	{
		___DateTimeOffsetType_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeOffsetType_25), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanType_26() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___BooleanType_26)); }
	inline Type_t * get_BooleanType_26() const { return ___BooleanType_26; }
	inline Type_t ** get_address_of_BooleanType_26() { return &___BooleanType_26; }
	inline void set_BooleanType_26(Type_t * value)
	{
		___BooleanType_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanType_26), (void*)value);
	}

	inline static int32_t get_offset_of_ByteArrayType_27() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___ByteArrayType_27)); }
	inline Type_t * get_ByteArrayType_27() const { return ___ByteArrayType_27; }
	inline Type_t ** get_address_of_ByteArrayType_27() { return &___ByteArrayType_27; }
	inline void set_ByteArrayType_27(Type_t * value)
	{
		___ByteArrayType_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ByteArrayType_27), (void*)value);
	}

	inline static int32_t get_offset_of_XmlQualifiedNameType_28() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___XmlQualifiedNameType_28)); }
	inline Type_t * get_XmlQualifiedNameType_28() const { return ___XmlQualifiedNameType_28; }
	inline Type_t ** get_address_of_XmlQualifiedNameType_28() { return &___XmlQualifiedNameType_28; }
	inline void set_XmlQualifiedNameType_28(Type_t * value)
	{
		___XmlQualifiedNameType_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XmlQualifiedNameType_28), (void*)value);
	}

	inline static int32_t get_offset_of_UriType_29() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___UriType_29)); }
	inline Type_t * get_UriType_29() const { return ___UriType_29; }
	inline Type_t ** get_address_of_UriType_29() { return &___UriType_29; }
	inline void set_UriType_29(Type_t * value)
	{
		___UriType_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriType_29), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanType_30() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___TimeSpanType_30)); }
	inline Type_t * get_TimeSpanType_30() const { return ___TimeSpanType_30; }
	inline Type_t ** get_address_of_TimeSpanType_30() { return &___TimeSpanType_30; }
	inline void set_TimeSpanType_30(Type_t * value)
	{
		___TimeSpanType_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanType_30), (void*)value);
	}

	inline static int32_t get_offset_of_XPathNavigatorType_31() { return static_cast<int32_t>(offsetof(XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55_StaticFields, ___XPathNavigatorType_31)); }
	inline Type_t * get_XPathNavigatorType_31() const { return ___XPathNavigatorType_31; }
	inline Type_t ** get_address_of_XPathNavigatorType_31() { return &___XPathNavigatorType_31; }
	inline void set_XPathNavigatorType_31(Type_t * value)
	{
		___XPathNavigatorType_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XPathNavigatorType_31), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808 
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState/GlobalState::globalList
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionChange
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionControlsChanged
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;

public:
	inline static int32_t get_offset_of_globalList_0() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___globalList_0)); }
	inline InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  get_globalList_0() const { return ___globalList_0; }
	inline InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535 * get_address_of_globalList_0() { return &___globalList_0; }
	inline void set_globalList_0(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  value)
	{
		___globalList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___globalList_0))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_onActionChange_1() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___onActionChange_1)); }
	inline CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  get_onActionChange_1() const { return ___onActionChange_1; }
	inline CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40 * get_address_of_onActionChange_1() { return &___onActionChange_1; }
	inline void set_onActionChange_1(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  value)
	{
		___onActionChange_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onActionControlsChanged_2() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___onActionControlsChanged_2)); }
	inline CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  get_onActionControlsChanged_2() const { return ___onActionControlsChanged_2; }
	inline CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88 * get_address_of_onActionControlsChanged_2() { return &___onActionControlsChanged_2; }
	inline void set_onActionControlsChanged_2(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  value)
	{
		___onActionControlsChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808_marshaled_pinvoke
{
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808_marshaled_com
{
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD 
{
public:
	// T System.Nullable`1::value
	InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___value_0)); }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  get_value_0() const { return ___value_0; }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.InputSystem.InputActionState
struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_InProcessControlStateChange
	bool ___m_InProcessControlStateChange_10;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnBeforeUpdateDelegate_11;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_12;

public:
	inline static int32_t get_offset_of_maps_1() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___maps_1)); }
	inline InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* get_maps_1() const { return ___maps_1; }
	inline InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E** get_address_of_maps_1() { return &___maps_1; }
	inline void set_maps_1(InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* value)
	{
		___maps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_1), (void*)value);
	}

	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___controls_2)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_controls_2() const { return ___controls_2; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controls_2), (void*)value);
	}

	inline static int32_t get_offset_of_interactions_3() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___interactions_3)); }
	inline IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* get_interactions_3() const { return ___interactions_3; }
	inline IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512** get_address_of_interactions_3() { return &___interactions_3; }
	inline void set_interactions_3(IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* value)
	{
		___interactions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactions_3), (void*)value);
	}

	inline static int32_t get_offset_of_processors_4() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___processors_4)); }
	inline InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* get_processors_4() const { return ___processors_4; }
	inline InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4** get_address_of_processors_4() { return &___processors_4; }
	inline void set_processors_4(InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* value)
	{
		___processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_composites_5() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___composites_5)); }
	inline InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* get_composites_5() const { return ___composites_5; }
	inline InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF** get_address_of_composites_5() { return &___composites_5; }
	inline void set_composites_5(InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* value)
	{
		___composites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composites_5), (void*)value);
	}

	inline static int32_t get_offset_of_totalProcessorCount_6() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___totalProcessorCount_6)); }
	inline int32_t get_totalProcessorCount_6() const { return ___totalProcessorCount_6; }
	inline int32_t* get_address_of_totalProcessorCount_6() { return &___totalProcessorCount_6; }
	inline void set_totalProcessorCount_6(int32_t value)
	{
		___totalProcessorCount_6 = value;
	}

	inline static int32_t get_offset_of_memory_7() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___memory_7)); }
	inline UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  get_memory_7() const { return ___memory_7; }
	inline UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584 * get_address_of_memory_7() { return &___memory_7; }
	inline void set_memory_7(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  value)
	{
		___memory_7 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateHooked_8() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnBeforeUpdateHooked_8)); }
	inline bool get_m_OnBeforeUpdateHooked_8() const { return ___m_OnBeforeUpdateHooked_8; }
	inline bool* get_address_of_m_OnBeforeUpdateHooked_8() { return &___m_OnBeforeUpdateHooked_8; }
	inline void set_m_OnBeforeUpdateHooked_8(bool value)
	{
		___m_OnBeforeUpdateHooked_8 = value;
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateHooked_9() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnAfterUpdateHooked_9)); }
	inline bool get_m_OnAfterUpdateHooked_9() const { return ___m_OnAfterUpdateHooked_9; }
	inline bool* get_address_of_m_OnAfterUpdateHooked_9() { return &___m_OnAfterUpdateHooked_9; }
	inline void set_m_OnAfterUpdateHooked_9(bool value)
	{
		___m_OnAfterUpdateHooked_9 = value;
	}

	inline static int32_t get_offset_of_m_InProcessControlStateChange_10() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_InProcessControlStateChange_10)); }
	inline bool get_m_InProcessControlStateChange_10() const { return ___m_InProcessControlStateChange_10; }
	inline bool* get_address_of_m_InProcessControlStateChange_10() { return &___m_InProcessControlStateChange_10; }
	inline void set_m_InProcessControlStateChange_10(bool value)
	{
		___m_InProcessControlStateChange_10 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateDelegate_11() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnBeforeUpdateDelegate_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnBeforeUpdateDelegate_11() const { return ___m_OnBeforeUpdateDelegate_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnBeforeUpdateDelegate_11() { return &___m_OnBeforeUpdateDelegate_11; }
	inline void set_m_OnBeforeUpdateDelegate_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnBeforeUpdateDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnBeforeUpdateDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_12() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnAfterUpdateDelegate_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_12() const { return ___m_OnAfterUpdateDelegate_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_12() { return &___m_OnAfterUpdateDelegate_12; }
	inline void set_m_OnAfterUpdateDelegate_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_12), (void*)value);
	}
};

struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126_StaticFields
{
public:
	// UnityEngine.InputSystem.InputActionState/GlobalState UnityEngine.InputSystem.InputActionState::s_GlobalState
	GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  ___s_GlobalState_13;

public:
	inline static int32_t get_offset_of_s_GlobalState_13() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126_StaticFields, ___s_GlobalState_13)); }
	inline GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  get_s_GlobalState_13() const { return ___s_GlobalState_13; }
	inline GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808 * get_address_of_s_GlobalState_13() { return &___s_GlobalState_13; }
	inline void set_s_GlobalState_13(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  value)
	{
		___s_GlobalState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_13))->___globalList_0))->___additionalValues_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Xml.Schema.XmlListConverter
struct XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D  : public XmlBaseConverter_t4F695A2F48A15F26227A564201074D2EBF094C55
{
public:
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * ___atomicConverter_32;

public:
	inline static int32_t get_offset_of_atomicConverter_32() { return static_cast<int32_t>(offsetof(XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D, ___atomicConverter_32)); }
	inline XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * get_atomicConverter_32() const { return ___atomicConverter_32; }
	inline XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 ** get_address_of_atomicConverter_32() { return &___atomicConverter_32; }
	inline void set_atomicConverter_32(XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * value)
	{
		___atomicConverter_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atomicConverter_32), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * ___m_StartingActuations_31;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ActionToRebind_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_BindingMask_2)); }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExpectedLayout_4)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Candidates_19)); }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnComplete_20)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnCancel_21)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnPotentialMatch_22)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnGeneratePath_23)); }
	inline Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnComputeScore_24)); }
	inline Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnApplyBinding_25)); }
	inline Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnEventDelegate_26)); }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_LayoutCache_28)); }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuations_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_StartingActuations_31)); }
	inline Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * get_m_StartingActuations_31() const { return ___m_StartingActuations_31; }
	inline Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 ** get_address_of_m_StartingActuations_31() { return &___m_StartingActuations_31; }
	inline void set_m_StartingActuations_31(Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * value)
	{
		___m_StartingActuations_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuations_31), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  m_Items[1];

public:
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		m_Items[index] = value;
	}
};
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  m_Items[1];

public:
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  m_Items[1];

public:
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};


// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputExtensions::IsInProgress(UnityEngine.InputSystem.InputActionPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520 (int32_t ___phase0, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_bindingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
inline float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::ThrowIfRebindInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_mB2F2D1ECFCC24D57DC8027C0EF426DD47C417570 (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * RebindingOperation_WithExpectedControlType_m4E9CECE0DF038E90E3B73B930631DAECF3303CA6 (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC (TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Utilities.InternedString::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___str0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_m064BA21DC5FD3B43EAF7B997A398D73574582A5E (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, String_t* ___interaction0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
inline BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  (*) (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *, const RuntimeMethod*))BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_m4132AC6063E201139EF430A3BCC2675EBDD9C37F (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, String_t* ___processor0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
inline BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9 (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  (*) (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *, const RuntimeMethod*))BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::TryFindLayoutForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  Collection_TryFindLayoutForType_mFCC2016FF39C1851AF868A20F5192AE0543AB96B (Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 * __this, Type_t * ___layoutType0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_m5492402BB76228A8640E86DC193EC91DBDF1DD43 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, Type_t * ___value0, const RuntimeMethod* method);
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTimeOffset>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* XmlListConverter_ToArray_TisDateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_m2A061FA61E22BBF8945BA0FBDB26239E6338263D_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t6A1295D69B538887EB0A62B321F30014A5691173 * V_1 = NULL;
	DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* L_4 = (DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*)(DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )((*(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* L_19 = V_2;
		return (DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t6A1295D69B538887EB0A62B321F30014A5691173 * L_21 = (List_1_t6A1295D69B538887EB0A62B321F30014A5691173 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t6A1295D69B538887EB0A62B321F30014A5691173 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t6A1295D69B538887EB0A62B321F30014A5691173 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t6A1295D69B538887EB0A62B321F30014A5691173 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t6A1295D69B538887EB0A62B321F30014A5691173 *, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t6A1295D69B538887EB0A62B321F30014A5691173 *)L_25, (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 )((*(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t6A1295D69B538887EB0A62B321F30014A5691173 * L_37 = V_1;
		DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* L_38;
		L_38 = ((  DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826* (*) (List_1_t6A1295D69B538887EB0A62B321F30014A5691173 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t6A1295D69B538887EB0A62B321F30014A5691173 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (DateTimeOffsetU5BU5D_t81746224316E5FC7189685EFB35488C8CED41826*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Decimal>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* XmlListConverter_ToArray_TisDecimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_m7084411DEE501307DEA2EA40122704E7152D9BFF_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t137B540BF717527106254AA05BE36A51A068C8F5 * V_1 = NULL;
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* L_4 = (DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA*)(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* L_19 = V_2;
		return (DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t137B540BF717527106254AA05BE36A51A068C8F5 * L_21 = (List_1_t137B540BF717527106254AA05BE36A51A068C8F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t137B540BF717527106254AA05BE36A51A068C8F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t137B540BF717527106254AA05BE36A51A068C8F5 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t137B540BF717527106254AA05BE36A51A068C8F5 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t137B540BF717527106254AA05BE36A51A068C8F5 *, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t137B540BF717527106254AA05BE36A51A068C8F5 *)L_25, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 )((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t137B540BF717527106254AA05BE36A51A068C8F5 * L_37 = V_1;
		DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* L_38;
		L_38 = ((  DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* (*) (List_1_t137B540BF717527106254AA05BE36A51A068C8F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t137B540BF717527106254AA05BE36A51A068C8F5 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Double>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* XmlListConverter_ToArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m6BEBA60BA179707839A4456F1FA3690E77BCE813_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * V_1 = NULL;
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (double)((*(double*)((double*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_19 = V_2;
		return (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_21 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, double, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_25, (double)((*(double*)((double*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_37 = V_1;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_38;
		L_38 = ((  DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* XmlListConverter_ToArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_mD928FA7E155D7BC8014BD995E2A4A184347990F7_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t985353431229C8151763A38589D03FBD829D85E5 * V_1 = NULL;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int16_t)((*(int16_t*)((int16_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = V_2;
		return (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t985353431229C8151763A38589D03FBD829D85E5 * L_21 = (List_1_t985353431229C8151763A38589D03FBD829D85E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t985353431229C8151763A38589D03FBD829D85E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t985353431229C8151763A38589D03FBD829D85E5 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t985353431229C8151763A38589D03FBD829D85E5 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t985353431229C8151763A38589D03FBD829D85E5 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t985353431229C8151763A38589D03FBD829D85E5 *)L_25, (int16_t)((*(int16_t*)((int16_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t985353431229C8151763A38589D03FBD829D85E5 * L_37 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_38;
		L_38 = ((  Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* (*) (List_1_t985353431229C8151763A38589D03FBD829D85E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t985353431229C8151763A38589D03FBD829D85E5 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* XmlListConverter_ToArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m15714A23D7C6701FB536EBFBDAA15DE6C97DEB81_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = V_2;
		return (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_21 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_25, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_37 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38;
		L_38 = ((  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* XmlListConverter_ToArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mDD1F72EF7560BCCDA6DB25FC9D441BD204763DCB_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * V_1 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_19 = V_2;
		return (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * L_21 = (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)L_25, (int64_t)((*(int64_t*)((int64_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * L_37 = V_1;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_38;
		L_38 = ((  Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* (*) (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Object>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* XmlListConverter_ToArray_TisRuntimeObject_m67401E3B3A55B23E4975F0ACDB6D71CB12C00F7F_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = V_2;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_21 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_25, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_37 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38;
		L_38 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.SByte>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* XmlListConverter_ToArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m4BE75BE01AD0B9442E284F30311EFE22BE4853F6_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 * V_1 = NULL;
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_4 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int8_t)((*(int8_t*)((int8_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_19 = V_2;
		return (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 * L_21 = (List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 *, int8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 *)L_25, (int8_t)((*(int8_t*)((int8_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 * L_37 = V_1;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_38;
		L_38 = ((  SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* (*) (List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t7F0E10DCBF1EBD7FBCA81F990C2A8D07D7A611F7 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Single>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* XmlListConverter_ToArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m732749002501767553BB0EC8E96EAB7E85628666_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * V_1 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (float)((*(float*)((float*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = V_2;
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_21 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_25, (float)((*(float*)((float*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_37 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38;
		L_38 = ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.TimeSpan>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* XmlListConverter_ToArray_TisTimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_mC083BFA043EC296F49553CC3771F3FE741CE8A15_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 * V_1 = NULL;
	TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* L_4 = (TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545*)(TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* L_19 = V_2;
		return (TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 * L_21 = (List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 *)L_25, (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 )((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 * L_37 = V_1;
		TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* L_38;
		L_38 = ((  TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545* (*) (List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t6CC60BBD48A742FE583491EABD97557A9B169FC3 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (TimeSpanU5BU5D_t93A1470C8423F710E4D26493EE109A5A5920D545*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* XmlListConverter_ToArray_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m586B58E3697C0A2474F4154812CF23D753E69482_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 * V_1 = NULL;
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_4 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_19 = V_2;
		return (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 * L_21 = (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *, uint16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)L_25, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 * L_37 = V_1;
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* L_38;
		L_38 = ((  UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* (*) (List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* XmlListConverter_ToArray_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m5307DF081EBEE484E60F40EB50C8D20BDB43AE96_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * V_1 = NULL;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_4 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_19 = V_2;
		return (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_21 = (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)L_25, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_37 = V_1;
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_38;
		L_38 = ((  UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* XmlListConverter_ToArray_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB1B5B6225DD0325B4EFED267FCF77EAAE38B4B1C_gshared (XmlListConverter_t58F692567B1B34BF5171B647F1BE66EC017D4F4D * __this, RuntimeObject * ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * V_1 = NULL;
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = ___list0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_4 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)L_4;
		V_3 = (int32_t)0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_7 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject * L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (int32_t)L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject * L_14;
		L_14 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_7, (RuntimeObject *)L_10, (Type_t *)L_12, (RuntimeObject*)L_13);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_14, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_19 = V_2;
		return (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)L_19;
	}

IL_0052:
	{
		RuntimeObject * L_20 = ___list0;
		List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * L_21 = (List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 3));
		((  void (*) (List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)(L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		V_1 = (List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *)L_21;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)));
		V_4 = (RuntimeObject*)L_22;
	}

IL_0065:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0067:
		{
			RuntimeObject* L_23 = V_4;
			RuntimeObject * L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_5 = (RuntimeObject *)L_24;
			List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * L_25 = V_1;
			XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 * L_26 = (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)__this->get_atomicConverter_32();
			RuntimeObject * L_27 = V_5;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_29;
			L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_28, /*hidden argument*/NULL);
			RuntimeObject* L_30 = ___nsResolver1;
			RuntimeObject * L_31;
			L_31 = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, Type_t *, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, (XmlValueConverter_t18B2DCDB3B3F7609F3E43D5C46D2095BD09E6763 *)L_26, (RuntimeObject *)L_27, (Type_t *)L_29, (RuntimeObject*)L_30);
			((  void (*) (List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, uint64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *)L_25, (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_31, IL2CPP_RGCTX_DATA(method->rgctx_data, 2))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		}

IL_0093:
		{
			RuntimeObject* L_32 = V_4;
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			if (L_33)
			{
				goto IL_0067;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			V_6 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_6;
			if (!L_35)
			{
				goto IL_00b2;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_36 = V_6;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
	}

IL_00b3:
	{
		List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * L_37 = V_1;
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_38;
		L_38 = ((  UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* (*) (List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6)->methodPointer)((List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
		return (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)L_38;
	}
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_3 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3, (int32_t)L_4, (int32_t)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_6;
	}

IL_0036:
	{
		// return value;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = V_0;
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_7;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_3 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		float L_6;
		L_6 = ((  float (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3, (int32_t)L_4, (int32_t)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (float)L_6;
	}

IL_0036:
	{
		// return value;
		float L_7 = V_0;
		return (float)L_7;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_3 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3, (int32_t)L_4, (int32_t)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6;
	}

IL_0036:
	{
		// return value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_7;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_3 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_3, (int32_t)L_4, (int32_t)L_5, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
	}

IL_0036:
	{
		// return value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_7;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * RebindingOperation_WithExpectedControlType_TisRuntimeObject_mBA6BE8CEC8B7EB2CBA1ECA0816AC71C921A76EE6_gshared (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThrowIfRebindInProgress();
		RebindingOperation_ThrowIfRebindInProgress_mB2F2D1ECFCC24D57DC8027C0EF426DD47C417570((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this, /*hidden argument*/NULL);
		// return WithExpectedControlType(typeof(TControl));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m4E9CECE0DF038E90E3B73B930631DAECF3303CA6((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)L_2;
	}
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var interactionName = InputProcessor.s_Processors.FindNameForType(typeof(TInteraction));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_4;
		L_4 = TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC((TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(((InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_3, /*hidden argument*/NULL);
		V_0 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_4;
		// if (interactionName.IsEmpty())
		bool L_5;
		L_5 = InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TInteraction)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_9 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var)));
	}

IL_004b:
	{
		// return WithInteraction(interactionName);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_10, /*hidden argument*/NULL);
		BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  L_12;
		L_12 = BindingSyntax_WithInteraction_m064BA21DC5FD3B43EAF7B997A398D73574582A5E((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, (String_t*)L_11, /*hidden argument*/NULL);
		return (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 )L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * _thisAdjusted = reinterpret_cast<BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *>(__this + _offset);
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var processorName = InputProcessor.s_Processors.FindNameForType(typeof(TProcessor));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_4;
		L_4 = TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC((TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(((InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_3, /*hidden argument*/NULL);
		V_0 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_4;
		// if (processorName.IsEmpty())
		bool L_5;
		L_5 = InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TProcessor)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_7, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_9 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_9, (String_t*)L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var)));
	}

IL_004b:
	{
		// return WithProcessor(processorName);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_10, /*hidden argument*/NULL);
		BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  L_12;
		L_12 = BindingSyntax_WithProcessor_m4132AC6063E201139EF430A3BCC2675EBDD9C37F((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, (String_t*)L_11, /*hidden argument*/NULL);
		return (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 )L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * _thisAdjusted = reinterpret_cast<BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *>(__this + _offset);
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var layoutName = InputControlLayout.s_Layouts.TryFindLayoutForType(typeof(TDevice)).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_2;
		L_2 = Collection_TryFindLayoutForType_mFCC2016FF39C1851AF868A20F5192AE0543AB96B((Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 *)(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 *)(((InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var))->get_address_of_s_Layouts_15()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_1 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_m5492402BB76228A8640E86DC193EC91DBDF1DD43((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_1), /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		// if (string.IsNullOrEmpty(layoutName))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C((String_t*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// layoutName = typeof(TDevice).Name;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_7);
		V_0 = (String_t*)L_8;
	}

IL_003b:
	{
		// return $"<{layoutName}>";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, (String_t*)L_9, (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		return (String_t*)L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * Builder_WithType_TisRuntimeObject_mF3C7336CC3DDF12C9B5B2CBACE3B5B5BBEB0498D_gshared (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline((Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return this;
		return (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)__this;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_2(L_0);
		return;
	}
}