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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ExampleDialogueUI
struct ExampleDialogueUI_t4244439102;
// Yarn.Unity.DialogueUIBehaviour
struct DialogueUIBehaviour_t637706657;
// Yarn.Value
struct Value_t881556609;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Component
struct Component_t1923634451;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t1232139915;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.UI.Button
struct Button_t4055032469;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// ExampleDialogueUI/<RunLine>c__Iterator0
struct U3CRunLineU3Ec__Iterator0_t2630282661;
// Yarn.OptionChooser
struct OptionChooser_t101959131;
// ExampleDialogueUI/<RunOptions>c__Iterator1
struct U3CRunOptionsU3Ec__Iterator1_t3229436336;
// ExampleDialogueUI/<RunCommand>c__Iterator2
struct U3CRunCommandU3Ec__Iterator2_t2265219509;
// ExampleDialogueUI/<DialogueStarted>c__Iterator3
struct U3CDialogueStartedU3Ec__Iterator3_t2346652362;
// ExampleDialogueUI/<DialogueComplete>c__Iterator4
struct U3CDialogueCompleteU3Ec__Iterator4_t163110549;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// UnityEngine.UI.Text
struct Text_t1901882714;
// ExampleVariableStorage
struct ExampleVariableStorage_t1372347222;
// System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>
struct Dictionary_2_t666812908;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// Yarn.Unity.VariableStorageBehaviour
struct VariableStorageBehaviour_t3802685183;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// ExampleVariableStorage/DefaultVariable
struct DefaultVariable_t730926445;
// MobileOnly
struct MobileOnly_t759008739;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// Yarn.Unity.DialogueRunner
struct DialogueRunner_t3655145191;
// Yarn.Dialogue
struct Dialogue_t3789480790;
// Yarn.VariableStorage
struct VariableStorage_t3035966368;
// Yarn.Logger
struct Logger_t1351394572;
// UnityEngine.TextAsset
struct TextAsset_t3022178571;
// System.Collections.Generic.List`1<Yarn.Unity.LocalisedStringGroup>
struct List_1_t2087016253;
// System.Collections.Generic.IEnumerable`1<Yarn.Unity.LocalisedStringGroup>
struct IEnumerable_1_t3889761696;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Predicate`1<Yarn.Unity.LocalisedStringGroup>
struct Predicate_1_t1440235635;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// Yarn.Unity.LocalisedStringGroup
struct LocalisedStringGroup_t614941511;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.IO.StringReader
struct StringReader_t3465604688;
// CsvHelper.CsvReader
struct CsvReader_t3469035837;
// System.IO.TextReader
struct TextReader_t283511965;
// Yarn.LocalisedLine
struct LocalisedLine_t3499156542;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0
struct U3CRunDialogueU3Ec__Iterator0_t386284222;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.String[]>
struct List_1_t2753864082;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2007329276;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361;
// Yarn.Unity.YarnCommandAttribute
struct YarnCommandAttribute_t3061396875;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Collections.Generic.IEnumerable`1<Yarn.Dialogue/RunnerResult>
struct IEnumerable_1_t1979762143;
// Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0
struct U3CDialogueStartedU3Ec__Iterator0_t1414164849;
// Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1
struct U3CNodeCompleteU3Ec__Iterator1_t1861394254;
// Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2
struct U3CDialogueCompleteU3Ec__Iterator2_t3834094128;
// Yarn.Unity.Example.CameraFollow
struct CameraFollow_t3245689759;
// UnityEngine.Transform
struct Transform_t3600365921;
// Yarn.Unity.Example.NPC
struct NPC_t623034359;
// Yarn.Unity.Example.PlayerCharacter
struct PlayerCharacter_t3157521029;
// Yarn.Unity.Example.NPC[]
struct NPCU5BU5D_t1030391374;
// System.Collections.Generic.List`1<Yarn.Unity.Example.NPC>
struct List_1_t2095109101;
// System.Collections.Generic.IEnumerable`1<Yarn.Unity.Example.NPC>
struct IEnumerable_1_t3897854544;
// System.Predicate`1<Yarn.Unity.Example.NPC>
struct Predicate_1_t1448328483;
// Yarn.Unity.Example.SpriteSwitcher
struct SpriteSwitcher_t999038117;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Attribute
struct Attribute_t861562559;
// CsvHelper.ICsvParser
struct ICsvParser_t1817339969;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t4208276794;
// System.Collections.Generic.Dictionary`2<System.Type,System.Delegate>
struct Dictionary_2_t3632739877;
// CsvHelper.Configuration.CsvConfiguration
struct CsvConfiguration_t3291253986;
// System.String[][]
struct StringU5BU5DU5BU5D_t2611993717;
// System.Collections.Generic.IEnumerator`1<Yarn.Dialogue/RunnerResult>
struct IEnumerator_1_t3432479722;
// Yarn.Dialogue/RunnerResult
struct RunnerResult_t2999909254;
// Yarn.Dialogue/LineResult
struct LineResult_t2535281287;
// Yarn.Dialogue/OptionSetResult
struct OptionSetResult_t1063237441;
// Yarn.Dialogue/CommandResult
struct CommandResult_t297730970;
// Yarn.Dialogue/NodeCompleteResult
struct NodeCompleteResult_t2657442789;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// Yarn.Value[]
struct ValueU5BU5D_t3927385180;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Yarn.Value,System.Collections.DictionaryEntry>
struct Transform_1_t2777796896;
// Yarn.Unity.LocalisedStringGroup[]
struct LocalisedStringGroupU5BU5D_t2868870078;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2297175928;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3662770472;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2280021157;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// Yarn.Loader
struct Loader_t2154734863;
// Yarn.Program
struct Program_t188249568;
// Yarn.Library
struct Library_t2380415395;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// Yarn.VirtualMachine
struct VirtualMachine_t3539650220;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t2780361322;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// Yarn.Unity.Example.SpriteSwitcher/SpriteInfo[]
struct SpriteInfoU5BU5D_t4206874749;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// ExampleVariableStorage/DefaultVariable[]
struct DefaultVariableU5BU5D_t403142208;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2085849998;
extern String_t* _stringLiteral3529553316;
extern String_t* _stringLiteral499779291;
extern String_t* _stringLiteral1167832485;
extern String_t* _stringLiteral1949161934;
extern String_t* _stringLiteral3114692927;
extern const uint32_t ExampleDialogueUI_Update_m2166985994_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2873996484_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1139535682_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1799784902_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4268479888_RuntimeMethod_var;
extern const uint32_t ExampleDialogueUI_Awake_m3007356087_MetadataUsageId;
extern RuntimeClass* U3CRunLineU3Ec__Iterator0_t2630282661_il2cpp_TypeInfo_var;
extern const uint32_t ExampleDialogueUI_RunLine_m3363845529_MetadataUsageId;
extern RuntimeClass* U3CRunOptionsU3Ec__Iterator1_t3229436336_il2cpp_TypeInfo_var;
extern const uint32_t ExampleDialogueUI_RunOptions_m3897047627_MetadataUsageId;
extern RuntimeClass* U3CRunCommandU3Ec__Iterator2_t2265219509_il2cpp_TypeInfo_var;
extern const uint32_t ExampleDialogueUI_RunCommand_m2971340280_MetadataUsageId;
extern RuntimeClass* U3CDialogueStartedU3Ec__Iterator3_t2346652362_il2cpp_TypeInfo_var;
extern const uint32_t ExampleDialogueUI_DialogueStarted_m1959274686_MetadataUsageId;
extern RuntimeClass* U3CDialogueCompleteU3Ec__Iterator4_t163110549_il2cpp_TypeInfo_var;
extern const uint32_t ExampleDialogueUI_DialogueComplete_m2263387707_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t ExampleDialogueUI_CheckVars_m1893885946_MetadataUsageId;
extern RuntimeClass* Value_t881556609_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2395666946;
extern const uint32_t ExampleDialogueUI_ParseVariable_m2353810914_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1125101030;
extern const uint32_t U3CDialogueCompleteU3Ec__Iterator4_MoveNext_m1940120515_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CDialogueCompleteU3Ec__Iterator4_Reset_m2083668477_MetadataUsageId;
extern String_t* _stringLiteral1071301008;
extern const uint32_t U3CDialogueStartedU3Ec__Iterator3_MoveNext_m1414077673_MetadataUsageId;
extern const uint32_t U3CDialogueStartedU3Ec__Iterator3_Reset_m1625103898_MetadataUsageId;
extern String_t* _stringLiteral2660104188;
extern const uint32_t U3CRunCommandU3Ec__Iterator2_MoveNext_m252438833_MetadataUsageId;
extern const uint32_t U3CRunCommandU3Ec__Iterator2_Reset_m4227997529_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t U3CRunLineU3Ec__Iterator0_MoveNext_m2522026433_MetadataUsageId;
extern const uint32_t U3CRunLineU3Ec__Iterator0_Reset_m2754916848_MetadataUsageId;
extern RuntimeClass* ICollection_1_t380635627_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t827303578_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2280021157_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Count_m2761165869_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m733523066_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m970686954_RuntimeMethod_var;
extern String_t* _stringLiteral1906315872;
extern const uint32_t U3CRunOptionsU3Ec__Iterator1_MoveNext_m854050396_MetadataUsageId;
extern const uint32_t U3CRunOptionsU3Ec__Iterator1_Reset_m3795277266_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t666812908_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m709135621_RuntimeMethod_var;
extern const uint32_t ExampleVariableStorage__ctor_m661885336_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2923956810;
extern String_t* _stringLiteral3452614524;
extern const uint32_t ExampleVariableStorage_ResetToDefaults_m1033294291_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m1636383447_RuntimeMethod_var;
extern const uint32_t ExampleVariableStorage_SetValue_m3070257014_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2215268282_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1350177375_RuntimeMethod_var;
extern const uint32_t ExampleVariableStorage_GetValue_m1687377792_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Clear_m2842195990_RuntimeMethod_var;
extern const uint32_t ExampleVariableStorage_Clear_m1909965068_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m1675868483_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1381002348_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m675960855_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m267502843_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1849118330_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m645817517_RuntimeMethod_var;
extern String_t* _stringLiteral3660674904;
extern const uint32_t ExampleVariableStorage_Update_m2167185522_MetadataUsageId;
extern const uint32_t MobileOnly_Awake_m2228041044_MetadataUsageId;
extern String_t* _stringLiteral2707270972;
extern const uint32_t DialogueRunner__ctor_m1279525964_MetadataUsageId;
extern RuntimeClass* Dialogue_t3789480790_il2cpp_TypeInfo_var;
extern RuntimeClass* DialogueRunner_t3655145191_il2cpp_TypeInfo_var;
extern RuntimeClass* Logger_t1351394572_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DialogueRunner_U3Cget_dialogueU3Em__0_m1313327199_RuntimeMethod_var;
extern const RuntimeMethod* DialogueRunner_U3Cget_dialogueU3Em__1_m3720649706_RuntimeMethod_var;
extern const uint32_t DialogueRunner_get_dialogue_m939767586_MetadataUsageId;
extern RuntimeClass* List_1_t2087016253_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t1440235635_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2903844167_RuntimeMethod_var;
extern const RuntimeMethod* DialogueRunner_U3CStartU3Em__2_m143397084_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m2354984221_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Find_m3290463380_RuntimeMethod_var;
extern String_t* _stringLiteral1418722237;
extern String_t* _stringLiteral3138390117;
extern const uint32_t DialogueRunner_Start_m889855216_MetadataUsageId;
extern String_t* _stringLiteral3788460617;
extern const uint32_t DialogueRunner_AddScript_m3343935133_MetadataUsageId;
extern const uint32_t DialogueRunner_AddScript_m1771112184_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern RuntimeClass* CsvReader_t3469035837_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2479009431_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3931727010_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2052512498_RuntimeMethod_var;
extern const RuntimeMethod* CsvReader_GetRecords_TisLocalisedLine_t3499156542_m1712063853_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3977940946_RuntimeMethod_var;
extern const uint32_t DialogueRunner_AddStringTable_m1804123334_MetadataUsageId;
extern RuntimeClass* U3CRunDialogueU3Ec__Iterator0_t386284222_il2cpp_TypeInfo_var;
extern const uint32_t DialogueRunner_RunDialogue_m3837872158_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3690676198;
extern const uint32_t DialogueRunner_Clear_m1795976217_MetadataUsageId;
extern const RuntimeType* YarnCommandAttribute_t3061396875_0_0_0_var;
extern const RuntimeType* StringU5BU5D_t1281789340_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2753864082_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* YarnCommandAttributeU5BU5D_t1263584234_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5DU5BU5D_t2611993717_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1644775029_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3409323257_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveRange_m1321683783_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponents_TisMonoBehaviour_t3962482529_m1010550534_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3983937259_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2276455407_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3695741953_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2391743910_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1088469001_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3696521377_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1279945376_RuntimeMethod_var;
extern String_t* _stringLiteral3443056090;
extern String_t* _stringLiteral504753313;
extern String_t* _stringLiteral541307304;
extern const uint32_t DialogueRunner_DispatchCommand_m1217170754_MetadataUsageId;
extern const uint32_t DialogueRunner_U3Cget_dialogueU3Em__0_m1313327199_MetadataUsageId;
extern const uint32_t DialogueRunner_U3Cget_dialogueU3Em__1_m3720649706_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1979762143_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3432479722_il2cpp_TypeInfo_var;
extern RuntimeClass* LineResult_t2535281287_il2cpp_TypeInfo_var;
extern RuntimeClass* OptionSetResult_t1063237441_il2cpp_TypeInfo_var;
extern RuntimeClass* CommandResult_t297730970_il2cpp_TypeInfo_var;
extern RuntimeClass* NodeCompleteResult_t2657442789_il2cpp_TypeInfo_var;
extern const uint32_t U3CRunDialogueU3Ec__Iterator0_MoveNext_m3764227800_MetadataUsageId;
extern const uint32_t U3CRunDialogueU3Ec__Iterator0_Dispose_m430273133_MetadataUsageId;
extern const uint32_t U3CRunDialogueU3Ec__Iterator0_Reset_m3588706996_MetadataUsageId;
extern RuntimeClass* U3CDialogueStartedU3Ec__Iterator0_t1414164849_il2cpp_TypeInfo_var;
extern const uint32_t DialogueUIBehaviour_DialogueStarted_m2666921491_MetadataUsageId;
extern RuntimeClass* U3CNodeCompleteU3Ec__Iterator1_t1861394254_il2cpp_TypeInfo_var;
extern const uint32_t DialogueUIBehaviour_NodeComplete_m1275476203_MetadataUsageId;
extern RuntimeClass* U3CDialogueCompleteU3Ec__Iterator2_t3834094128_il2cpp_TypeInfo_var;
extern const uint32_t DialogueUIBehaviour_DialogueComplete_m2757680011_MetadataUsageId;
extern const uint32_t U3CDialogueCompleteU3Ec__Iterator2_Reset_m2917566167_MetadataUsageId;
extern const uint32_t U3CDialogueStartedU3Ec__Iterator0_Reset_m2827406992_MetadataUsageId;
extern const uint32_t U3CNodeCompleteU3Ec__Iterator1_Reset_m179667025_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t CameraFollow_Update_m2344725257_MetadataUsageId;
extern const uint32_t NPC__ctor_m2690201207_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisDialogueRunner_t3655145191_m2051441236_RuntimeMethod_var;
extern const uint32_t NPC_Start_m1051759_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern const uint32_t PlayerCharacter_OnDrawGizmosSelected_m513026917_MetadataUsageId;
extern String_t* _stringLiteral1828639942;
extern const uint32_t PlayerCharacter_Update_m1915632138_MetadataUsageId;
extern RuntimeClass* List_1_t2095109101_il2cpp_TypeInfo_var;
extern RuntimeClass* Predicate_1_t1448328483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisNPC_t623034359_m2319331115_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2919220833_RuntimeMethod_var;
extern const RuntimeMethod* PlayerCharacter_U3CCheckForNearbyNPCU3Em__0_m2170893532_RuntimeMethod_var;
extern const RuntimeMethod* Predicate_1__ctor_m1154457369_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Find_m2540802572_RuntimeMethod_var;
extern const uint32_t PlayerCharacter_CheckForNearbyNPC_m4254660837_MetadataUsageId;
extern const uint32_t PlayerCharacter_U3CCheckForNearbyNPCU3Em__0_m2170893532_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m4089200052_RuntimeMethod_var;
extern String_t* _stringLiteral2619560846;
extern const uint32_t SpriteSwitcher_UseSprite_m725549410_MetadataUsageId;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern const uint32_t VariableStorageBehaviour_SetNumber_m3115685783_MetadataUsageId;
extern const uint32_t VariableStorageBehaviour_GetNumber_m1166801113_MetadataUsageId;
extern const uint32_t VariableStorageBehaviour_GetValue_m261576785_MetadataUsageId;
extern const uint32_t VariableStorageBehaviour_Clear_m2247870883_MetadataUsageId;

struct DefaultVariableU5BU5D_t403142208;
struct ObjectU5BU5D_t2843939325;
struct TextAssetU5BU5D_t2780361322;
struct LocalisedStringGroupU5BU5D_t2868870078;
struct StringU5BU5D_t1281789340;
struct MonoBehaviourU5BU5D_t2007329276;
struct MethodInfoU5BU5D_t2572182361;
struct YarnCommandAttributeU5BU5D_t1263584234;
struct ParameterInfoU5BU5D_t390618515;
struct StringU5BU5DU5BU5D_t2611993717;
struct CharU5BU5D_t3528271667;
struct NPCU5BU5D_t1030391374;
struct SpriteInfoU5BU5D_t4206874749;


#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef CSVREADER_T3469035837_H
#define CSVREADER_T3469035837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CsvHelper.CsvReader
struct  CsvReader_t3469035837  : public RuntimeObject
{
public:
	// System.Boolean CsvHelper.CsvReader::disposed
	bool ___disposed_0;
	// System.Boolean CsvHelper.CsvReader::hasBeenRead
	bool ___hasBeenRead_1;
	// System.String[] CsvHelper.CsvReader::currentRecord
	StringU5BU5D_t1281789340* ___currentRecord_2;
	// System.String[] CsvHelper.CsvReader::headerRecord
	StringU5BU5D_t1281789340* ___headerRecord_3;
	// CsvHelper.ICsvParser CsvHelper.CsvReader::parser
	RuntimeObject* ___parser_4;
	// System.Int32 CsvHelper.CsvReader::currentIndex
	int32_t ___currentIndex_5;
	// System.Boolean CsvHelper.CsvReader::doneReading
	bool ___doneReading_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> CsvHelper.CsvReader::namedIndexes
	Dictionary_2_t4208276794 * ___namedIndexes_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Delegate> CsvHelper.CsvReader::recordFuncs
	Dictionary_2_t3632739877 * ___recordFuncs_8;
	// CsvHelper.Configuration.CsvConfiguration CsvHelper.CsvReader::configuration
	CsvConfiguration_t3291253986 * ___configuration_9;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_hasBeenRead_1() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___hasBeenRead_1)); }
	inline bool get_hasBeenRead_1() const { return ___hasBeenRead_1; }
	inline bool* get_address_of_hasBeenRead_1() { return &___hasBeenRead_1; }
	inline void set_hasBeenRead_1(bool value)
	{
		___hasBeenRead_1 = value;
	}

	inline static int32_t get_offset_of_currentRecord_2() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___currentRecord_2)); }
	inline StringU5BU5D_t1281789340* get_currentRecord_2() const { return ___currentRecord_2; }
	inline StringU5BU5D_t1281789340** get_address_of_currentRecord_2() { return &___currentRecord_2; }
	inline void set_currentRecord_2(StringU5BU5D_t1281789340* value)
	{
		___currentRecord_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentRecord_2), value);
	}

	inline static int32_t get_offset_of_headerRecord_3() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___headerRecord_3)); }
	inline StringU5BU5D_t1281789340* get_headerRecord_3() const { return ___headerRecord_3; }
	inline StringU5BU5D_t1281789340** get_address_of_headerRecord_3() { return &___headerRecord_3; }
	inline void set_headerRecord_3(StringU5BU5D_t1281789340* value)
	{
		___headerRecord_3 = value;
		Il2CppCodeGenWriteBarrier((&___headerRecord_3), value);
	}

	inline static int32_t get_offset_of_parser_4() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___parser_4)); }
	inline RuntimeObject* get_parser_4() const { return ___parser_4; }
	inline RuntimeObject** get_address_of_parser_4() { return &___parser_4; }
	inline void set_parser_4(RuntimeObject* value)
	{
		___parser_4 = value;
		Il2CppCodeGenWriteBarrier((&___parser_4), value);
	}

	inline static int32_t get_offset_of_currentIndex_5() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___currentIndex_5)); }
	inline int32_t get_currentIndex_5() const { return ___currentIndex_5; }
	inline int32_t* get_address_of_currentIndex_5() { return &___currentIndex_5; }
	inline void set_currentIndex_5(int32_t value)
	{
		___currentIndex_5 = value;
	}

	inline static int32_t get_offset_of_doneReading_6() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___doneReading_6)); }
	inline bool get_doneReading_6() const { return ___doneReading_6; }
	inline bool* get_address_of_doneReading_6() { return &___doneReading_6; }
	inline void set_doneReading_6(bool value)
	{
		___doneReading_6 = value;
	}

	inline static int32_t get_offset_of_namedIndexes_7() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___namedIndexes_7)); }
	inline Dictionary_2_t4208276794 * get_namedIndexes_7() const { return ___namedIndexes_7; }
	inline Dictionary_2_t4208276794 ** get_address_of_namedIndexes_7() { return &___namedIndexes_7; }
	inline void set_namedIndexes_7(Dictionary_2_t4208276794 * value)
	{
		___namedIndexes_7 = value;
		Il2CppCodeGenWriteBarrier((&___namedIndexes_7), value);
	}

	inline static int32_t get_offset_of_recordFuncs_8() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___recordFuncs_8)); }
	inline Dictionary_2_t3632739877 * get_recordFuncs_8() const { return ___recordFuncs_8; }
	inline Dictionary_2_t3632739877 ** get_address_of_recordFuncs_8() { return &___recordFuncs_8; }
	inline void set_recordFuncs_8(Dictionary_2_t3632739877 * value)
	{
		___recordFuncs_8 = value;
		Il2CppCodeGenWriteBarrier((&___recordFuncs_8), value);
	}

	inline static int32_t get_offset_of_configuration_9() { return static_cast<int32_t>(offsetof(CsvReader_t3469035837, ___configuration_9)); }
	inline CsvConfiguration_t3291253986 * get_configuration_9() const { return ___configuration_9; }
	inline CsvConfiguration_t3291253986 ** get_address_of_configuration_9() { return &___configuration_9; }
	inline void set_configuration_9(CsvConfiguration_t3291253986 * value)
	{
		___configuration_9 = value;
		Il2CppCodeGenWriteBarrier((&___configuration_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSVREADER_T3469035837_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef LOCALISEDLINE_T3499156542_H
#define LOCALISEDLINE_T3499156542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.LocalisedLine
struct  LocalisedLine_t3499156542  : public RuntimeObject
{
public:
	// System.String Yarn.LocalisedLine::<LineCode>k__BackingField
	String_t* ___U3CLineCodeU3Ek__BackingField_0;
	// System.String Yarn.LocalisedLine::<LineText>k__BackingField
	String_t* ___U3CLineTextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLineCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LocalisedLine_t3499156542, ___U3CLineCodeU3Ek__BackingField_0)); }
	inline String_t* get_U3CLineCodeU3Ek__BackingField_0() const { return ___U3CLineCodeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CLineCodeU3Ek__BackingField_0() { return &___U3CLineCodeU3Ek__BackingField_0; }
	inline void set_U3CLineCodeU3Ek__BackingField_0(String_t* value)
	{
		___U3CLineCodeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLineCodeU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CLineTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalisedLine_t3499156542, ___U3CLineTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CLineTextU3Ek__BackingField_1() const { return ___U3CLineTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CLineTextU3Ek__BackingField_1() { return &___U3CLineTextU3Ek__BackingField_1; }
	inline void set_U3CLineTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CLineTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLineTextU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALISEDLINE_T3499156542_H
#ifndef LIST_1_T2753864082_H
#define LIST_1_T2753864082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String[]>
struct  List_1_t2753864082  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5DU5BU5D_t2611993717* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2753864082, ____items_1)); }
	inline StringU5BU5DU5BU5D_t2611993717* get__items_1() const { return ____items_1; }
	inline StringU5BU5DU5BU5D_t2611993717** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5DU5BU5D_t2611993717* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2753864082, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2753864082, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2753864082_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5DU5BU5D_t2611993717* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2753864082_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5DU5BU5D_t2611993717* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5DU5BU5D_t2611993717** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5DU5BU5D_t2611993717* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2753864082_H
#ifndef U3CRUNDIALOGUEU3EC__ITERATOR0_T386284222_H
#define U3CRUNDIALOGUEU3EC__ITERATOR0_T386284222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0
struct  U3CRunDialogueU3Ec__Iterator0_t386284222  : public RuntimeObject
{
public:
	// System.String Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::startNode
	String_t* ___startNode_0;
	// System.Collections.Generic.IEnumerator`1<Yarn.Dialogue/RunnerResult> Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::$locvar0
	RuntimeObject* ___U24locvar0_1;
	// Yarn.Dialogue/RunnerResult Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::<step>__1
	RunnerResult_t2999909254 * ___U3CstepU3E__1_2;
	// Yarn.Dialogue/LineResult Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::<lineResult>__2
	LineResult_t2535281287 * ___U3ClineResultU3E__2_3;
	// Yarn.Dialogue/OptionSetResult Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::<optionSetResult>__3
	OptionSetResult_t1063237441 * ___U3CoptionSetResultU3E__3_4;
	// Yarn.Dialogue/CommandResult Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::<commandResult>__4
	CommandResult_t297730970 * ___U3CcommandResultU3E__4_5;
	// Yarn.Dialogue/NodeCompleteResult Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::<nodeResult>__5
	NodeCompleteResult_t2657442789 * ___U3CnodeResultU3E__5_6;
	// Yarn.Unity.DialogueRunner Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::$this
	DialogueRunner_t3655145191 * ___U24this_7;
	// System.Object Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::$disposing
	bool ___U24disposing_9;
	// System.Int32 Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_startNode_0() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___startNode_0)); }
	inline String_t* get_startNode_0() const { return ___startNode_0; }
	inline String_t** get_address_of_startNode_0() { return &___startNode_0; }
	inline void set_startNode_0(String_t* value)
	{
		___startNode_0 = value;
		Il2CppCodeGenWriteBarrier((&___startNode_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U24locvar0_1)); }
	inline RuntimeObject* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline RuntimeObject** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(RuntimeObject* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U3CstepU3E__1_2() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U3CstepU3E__1_2)); }
	inline RunnerResult_t2999909254 * get_U3CstepU3E__1_2() const { return ___U3CstepU3E__1_2; }
	inline RunnerResult_t2999909254 ** get_address_of_U3CstepU3E__1_2() { return &___U3CstepU3E__1_2; }
	inline void set_U3CstepU3E__1_2(RunnerResult_t2999909254 * value)
	{
		___U3CstepU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstepU3E__1_2), value);
	}

	inline static int32_t get_offset_of_U3ClineResultU3E__2_3() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U3ClineResultU3E__2_3)); }
	inline LineResult_t2535281287 * get_U3ClineResultU3E__2_3() const { return ___U3ClineResultU3E__2_3; }
	inline LineResult_t2535281287 ** get_address_of_U3ClineResultU3E__2_3() { return &___U3ClineResultU3E__2_3; }
	inline void set_U3ClineResultU3E__2_3(LineResult_t2535281287 * value)
	{
		___U3ClineResultU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClineResultU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U3CoptionSetResultU3E__3_4() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U3CoptionSetResultU3E__3_4)); }
	inline OptionSetResult_t1063237441 * get_U3CoptionSetResultU3E__3_4() const { return ___U3CoptionSetResultU3E__3_4; }
	inline OptionSetResult_t1063237441 ** get_address_of_U3CoptionSetResultU3E__3_4() { return &___U3CoptionSetResultU3E__3_4; }
	inline void set_U3CoptionSetResultU3E__3_4(OptionSetResult_t1063237441 * value)
	{
		___U3CoptionSetResultU3E__3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CoptionSetResultU3E__3_4), value);
	}

	inline static int32_t get_offset_of_U3CcommandResultU3E__4_5() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U3CcommandResultU3E__4_5)); }
	inline CommandResult_t297730970 * get_U3CcommandResultU3E__4_5() const { return ___U3CcommandResultU3E__4_5; }
	inline CommandResult_t297730970 ** get_address_of_U3CcommandResultU3E__4_5() { return &___U3CcommandResultU3E__4_5; }
	inline void set_U3CcommandResultU3E__4_5(CommandResult_t297730970 * value)
	{
		___U3CcommandResultU3E__4_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcommandResultU3E__4_5), value);
	}

	inline static int32_t get_offset_of_U3CnodeResultU3E__5_6() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U3CnodeResultU3E__5_6)); }
	inline NodeCompleteResult_t2657442789 * get_U3CnodeResultU3E__5_6() const { return ___U3CnodeResultU3E__5_6; }
	inline NodeCompleteResult_t2657442789 ** get_address_of_U3CnodeResultU3E__5_6() { return &___U3CnodeResultU3E__5_6; }
	inline void set_U3CnodeResultU3E__5_6(NodeCompleteResult_t2657442789 * value)
	{
		___U3CnodeResultU3E__5_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnodeResultU3E__5_6), value);
	}

	inline static int32_t get_offset_of_U24this_7() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U24this_7)); }
	inline DialogueRunner_t3655145191 * get_U24this_7() const { return ___U24this_7; }
	inline DialogueRunner_t3655145191 ** get_address_of_U24this_7() { return &___U24this_7; }
	inline void set_U24this_7(DialogueRunner_t3655145191 * value)
	{
		___U24this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_7), value);
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CRunDialogueU3Ec__Iterator0_t386284222, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNDIALOGUEU3EC__ITERATOR0_T386284222_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef U3CDIALOGUECOMPLETEU3EC__ITERATOR4_T163110549_H
#define U3CDIALOGUECOMPLETEU3EC__ITERATOR4_T163110549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDialogueUI/<DialogueComplete>c__Iterator4
struct  U3CDialogueCompleteU3Ec__Iterator4_t163110549  : public RuntimeObject
{
public:
	// ExampleDialogueUI ExampleDialogueUI/<DialogueComplete>c__Iterator4::$this
	ExampleDialogueUI_t4244439102 * ___U24this_0;
	// System.Object ExampleDialogueUI/<DialogueComplete>c__Iterator4::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean ExampleDialogueUI/<DialogueComplete>c__Iterator4::$disposing
	bool ___U24disposing_2;
	// System.Int32 ExampleDialogueUI/<DialogueComplete>c__Iterator4::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CDialogueCompleteU3Ec__Iterator4_t163110549, ___U24this_0)); }
	inline ExampleDialogueUI_t4244439102 * get_U24this_0() const { return ___U24this_0; }
	inline ExampleDialogueUI_t4244439102 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(ExampleDialogueUI_t4244439102 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CDialogueCompleteU3Ec__Iterator4_t163110549, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CDialogueCompleteU3Ec__Iterator4_t163110549, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CDialogueCompleteU3Ec__Iterator4_t163110549, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDIALOGUECOMPLETEU3EC__ITERATOR4_T163110549_H
#ifndef DICTIONARY_2_T666812908_H
#define DICTIONARY_2_T666812908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>
struct  Dictionary_2_t666812908  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ValueU5BU5D_t3927385180* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___valueSlots_7)); }
	inline ValueU5BU5D_t3927385180* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ValueU5BU5D_t3927385180** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ValueU5BU5D_t3927385180* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t666812908_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2777796896 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t666812908_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2777796896 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2777796896 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2777796896 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T666812908_H
#ifndef U3CDIALOGUESTARTEDU3EC__ITERATOR3_T2346652362_H
#define U3CDIALOGUESTARTEDU3EC__ITERATOR3_T2346652362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDialogueUI/<DialogueStarted>c__Iterator3
struct  U3CDialogueStartedU3Ec__Iterator3_t2346652362  : public RuntimeObject
{
public:
	// ExampleDialogueUI ExampleDialogueUI/<DialogueStarted>c__Iterator3::$this
	ExampleDialogueUI_t4244439102 * ___U24this_0;
	// System.Object ExampleDialogueUI/<DialogueStarted>c__Iterator3::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean ExampleDialogueUI/<DialogueStarted>c__Iterator3::$disposing
	bool ___U24disposing_2;
	// System.Int32 ExampleDialogueUI/<DialogueStarted>c__Iterator3::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CDialogueStartedU3Ec__Iterator3_t2346652362, ___U24this_0)); }
	inline ExampleDialogueUI_t4244439102 * get_U24this_0() const { return ___U24this_0; }
	inline ExampleDialogueUI_t4244439102 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(ExampleDialogueUI_t4244439102 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CDialogueStartedU3Ec__Iterator3_t2346652362, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CDialogueStartedU3Ec__Iterator3_t2346652362, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CDialogueStartedU3Ec__Iterator3_t2346652362, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDIALOGUESTARTEDU3EC__ITERATOR3_T2346652362_H
#ifndef LIST_1_T2087016253_H
#define LIST_1_T2087016253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Yarn.Unity.LocalisedStringGroup>
struct  List_1_t2087016253  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LocalisedStringGroupU5BU5D_t2868870078* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2087016253, ____items_1)); }
	inline LocalisedStringGroupU5BU5D_t2868870078* get__items_1() const { return ____items_1; }
	inline LocalisedStringGroupU5BU5D_t2868870078** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LocalisedStringGroupU5BU5D_t2868870078* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2087016253, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2087016253, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2087016253_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	LocalisedStringGroupU5BU5D_t2868870078* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2087016253_StaticFields, ___EmptyArray_4)); }
	inline LocalisedStringGroupU5BU5D_t2868870078* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline LocalisedStringGroupU5BU5D_t2868870078** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(LocalisedStringGroupU5BU5D_t2868870078* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2087016253_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef LIST_1_T2095109101_H
#define LIST_1_T2095109101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Yarn.Unity.Example.NPC>
struct  List_1_t2095109101  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NPCU5BU5D_t1030391374* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2095109101, ____items_1)); }
	inline NPCU5BU5D_t1030391374* get__items_1() const { return ____items_1; }
	inline NPCU5BU5D_t1030391374** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NPCU5BU5D_t1030391374* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2095109101, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2095109101, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2095109101_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	NPCU5BU5D_t1030391374* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2095109101_StaticFields, ___EmptyArray_4)); }
	inline NPCU5BU5D_t1030391374* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline NPCU5BU5D_t1030391374** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(NPCU5BU5D_t1030391374* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2095109101_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U3CDIALOGUECOMPLETEU3EC__ITERATOR2_T3834094128_H
#define U3CDIALOGUECOMPLETEU3EC__ITERATOR2_T3834094128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2
struct  U3CDialogueCompleteU3Ec__Iterator2_t3834094128  : public RuntimeObject
{
public:
	// System.Object Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::$disposing
	bool ___U24disposing_1;
	// System.Int32 Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CDialogueCompleteU3Ec__Iterator2_t3834094128, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CDialogueCompleteU3Ec__Iterator2_t3834094128, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CDialogueCompleteU3Ec__Iterator2_t3834094128, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDIALOGUECOMPLETEU3EC__ITERATOR2_T3834094128_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef RUNNERRESULT_T2999909254_H
#define RUNNERRESULT_T2999909254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Dialogue/RunnerResult
struct  RunnerResult_t2999909254  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNNERRESULT_T2999909254_H
#ifndef U3CNODECOMPLETEU3EC__ITERATOR1_T1861394254_H
#define U3CNODECOMPLETEU3EC__ITERATOR1_T1861394254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1
struct  U3CNodeCompleteU3Ec__Iterator1_t1861394254  : public RuntimeObject
{
public:
	// System.Object Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::$disposing
	bool ___U24disposing_1;
	// System.Int32 Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CNodeCompleteU3Ec__Iterator1_t1861394254, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CNodeCompleteU3Ec__Iterator1_t1861394254, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CNodeCompleteU3Ec__Iterator1_t1861394254, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNODECOMPLETEU3EC__ITERATOR1_T1861394254_H
#ifndef U3CDIALOGUESTARTEDU3EC__ITERATOR0_T1414164849_H
#define U3CDIALOGUESTARTEDU3EC__ITERATOR0_T1414164849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0
struct  U3CDialogueStartedU3Ec__Iterator0_t1414164849  : public RuntimeObject
{
public:
	// System.Object Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CDialogueStartedU3Ec__Iterator0_t1414164849, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CDialogueStartedU3Ec__Iterator0_t1414164849, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CDialogueStartedU3Ec__Iterator0_t1414164849, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDIALOGUESTARTEDU3EC__ITERATOR0_T1414164849_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef LIST_1_T1232139915_H
#define LIST_1_T1232139915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct  List_1_t1232139915  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t2297175928* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1232139915, ____items_1)); }
	inline ButtonU5BU5D_t2297175928* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t2297175928** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t2297175928* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1232139915, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1232139915, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1232139915_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ButtonU5BU5D_t2297175928* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1232139915_StaticFields, ___EmptyArray_4)); }
	inline ButtonU5BU5D_t2297175928* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ButtonU5BU5D_t2297175928** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ButtonU5BU5D_t2297175928* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1232139915_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SPRITEINFO_T2637886516_H
#define SPRITEINFO_T2637886516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.Example.SpriteSwitcher/SpriteInfo
struct  SpriteInfo_t2637886516 
{
public:
	// System.String Yarn.Unity.Example.SpriteSwitcher/SpriteInfo::name
	String_t* ___name_0;
	// UnityEngine.Sprite Yarn.Unity.Example.SpriteSwitcher/SpriteInfo::sprite
	Sprite_t280657092 * ___sprite_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SpriteInfo_t2637886516, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_sprite_1() { return static_cast<int32_t>(offsetof(SpriteInfo_t2637886516, ___sprite_1)); }
	inline Sprite_t280657092 * get_sprite_1() const { return ___sprite_1; }
	inline Sprite_t280657092 ** get_address_of_sprite_1() { return &___sprite_1; }
	inline void set_sprite_1(Sprite_t280657092 * value)
	{
		___sprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___sprite_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Yarn.Unity.Example.SpriteSwitcher/SpriteInfo
struct SpriteInfo_t2637886516_marshaled_pinvoke
{
	char* ___name_0;
	Sprite_t280657092 * ___sprite_1;
};
// Native definition for COM marshalling of Yarn.Unity.Example.SpriteSwitcher/SpriteInfo
struct SpriteInfo_t2637886516_marshaled_com
{
	Il2CppChar* ___name_0;
	Sprite_t280657092 * ___sprite_1;
};
#endif // SPRITEINFO_T2637886516_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T3121383792_H
#define ENUMERATOR_T3121383792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>
struct  Enumerator_t3121383792 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1232139915 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Button_t4055032469 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3121383792, ___l_0)); }
	inline List_1_t1232139915 * get_l_0() const { return ___l_0; }
	inline List_1_t1232139915 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1232139915 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3121383792, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3121383792, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3121383792, ___current_3)); }
	inline Button_t4055032469 * get_current_3() const { return ___current_3; }
	inline Button_t4055032469 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Button_t4055032469 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3121383792_H
#ifndef ENUMERATOR_T348140663_H
#define ENUMERATOR_T348140663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String[]>
struct  Enumerator_t348140663 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2753864082 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	StringU5BU5D_t1281789340* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t348140663, ___l_0)); }
	inline List_1_t2753864082 * get_l_0() const { return ___l_0; }
	inline List_1_t2753864082 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2753864082 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t348140663, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t348140663, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t348140663, ___current_3)); }
	inline StringU5BU5D_t1281789340* get_current_3() const { return ___current_3; }
	inline StringU5BU5D_t1281789340** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(StringU5BU5D_t1281789340* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T348140663_H
#ifndef NODECOMPLETERESULT_T2657442789_H
#define NODECOMPLETERESULT_T2657442789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Dialogue/NodeCompleteResult
struct  NodeCompleteResult_t2657442789  : public RunnerResult_t2999909254
{
public:
	// System.String Yarn.Dialogue/NodeCompleteResult::nextNode
	String_t* ___nextNode_0;

public:
	inline static int32_t get_offset_of_nextNode_0() { return static_cast<int32_t>(offsetof(NodeCompleteResult_t2657442789, ___nextNode_0)); }
	inline String_t* get_nextNode_0() const { return ___nextNode_0; }
	inline String_t** get_address_of_nextNode_0() { return &___nextNode_0; }
	inline void set_nextNode_0(String_t* value)
	{
		___nextNode_0 = value;
		Il2CppCodeGenWriteBarrier((&___nextNode_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODECOMPLETERESULT_T2657442789_H
#ifndef YARNCOMMANDATTRIBUTE_T3061396875_H
#define YARNCOMMANDATTRIBUTE_T3061396875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.YarnCommandAttribute
struct  YarnCommandAttribute_t3061396875  : public Attribute_t861562559
{
public:
	// System.String Yarn.Unity.YarnCommandAttribute::<commandString>k__BackingField
	String_t* ___U3CcommandStringU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CcommandStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(YarnCommandAttribute_t3061396875, ___U3CcommandStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CcommandStringU3Ek__BackingField_0() const { return ___U3CcommandStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CcommandStringU3Ek__BackingField_0() { return &___U3CcommandStringU3Ek__BackingField_0; }
	inline void set_U3CcommandStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CcommandStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcommandStringU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YARNCOMMANDATTRIBUTE_T3061396875_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef LINE_T1630675273_H
#define LINE_T1630675273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Line
struct  Line_t1630675273 
{
public:
	// System.String Yarn.Line::text
	String_t* ___text_0;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(Line_t1630675273, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Yarn.Line
struct Line_t1630675273_marshaled_pinvoke
{
	char* ___text_0;
};
// Native definition for COM marshalling of Yarn.Line
struct Line_t1630675273_marshaled_com
{
	Il2CppChar* ___text_0;
};
#endif // LINE_T1630675273_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef COMMAND_T3409241122_H
#define COMMAND_T3409241122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Command
struct  Command_t3409241122 
{
public:
	// System.String Yarn.Command::text
	String_t* ___text_0;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(Command_t3409241122, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Yarn.Command
struct Command_t3409241122_marshaled_pinvoke
{
	char* ___text_0;
};
// Native definition for COM marshalling of Yarn.Command
struct Command_t3409241122_marshaled_com
{
	Il2CppChar* ___text_0;
};
#endif // COMMAND_T3409241122_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef OPTIONS_T2066576969_H
#define OPTIONS_T2066576969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Options
struct  Options_t2066576969 
{
public:
	// System.Collections.Generic.IList`1<System.String> Yarn.Options::options
	RuntimeObject* ___options_0;

public:
	inline static int32_t get_offset_of_options_0() { return static_cast<int32_t>(offsetof(Options_t2066576969, ___options_0)); }
	inline RuntimeObject* get_options_0() const { return ___options_0; }
	inline RuntimeObject** get_address_of_options_0() { return &___options_0; }
	inline void set_options_0(RuntimeObject* value)
	{
		___options_0 = value;
		Il2CppCodeGenWriteBarrier((&___options_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Yarn.Options
struct Options_t2066576969_marshaled_pinvoke
{
	RuntimeObject* ___options_0;
};
// Native definition for COM marshalling of Yarn.Options
struct Options_t2066576969_marshaled_com
{
	RuntimeObject* ___options_0;
};
#endif // OPTIONS_T2066576969_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef KEYVALUEPAIR_2_T3064485075_H
#define KEYVALUEPAIR_2_T3064485075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Value>
struct  KeyValuePair_2_t3064485075 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Value_t881556609 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3064485075, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3064485075, ___value_1)); }
	inline Value_t881556609 * get_value_1() const { return ___value_1; }
	inline Value_t881556609 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Value_t881556609 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3064485075_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef LINERESULT_T2535281287_H
#define LINERESULT_T2535281287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Dialogue/LineResult
struct  LineResult_t2535281287  : public RunnerResult_t2999909254
{
public:
	// Yarn.Line Yarn.Dialogue/LineResult::line
	Line_t1630675273  ___line_0;

public:
	inline static int32_t get_offset_of_line_0() { return static_cast<int32_t>(offsetof(LineResult_t2535281287, ___line_0)); }
	inline Line_t1630675273  get_line_0() const { return ___line_0; }
	inline Line_t1630675273 * get_address_of_line_0() { return &___line_0; }
	inline void set_line_0(Line_t1630675273  value)
	{
		___line_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINERESULT_T2535281287_H
#ifndef OPTIONSETRESULT_T1063237441_H
#define OPTIONSETRESULT_T1063237441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Dialogue/OptionSetResult
struct  OptionSetResult_t1063237441  : public RunnerResult_t2999909254
{
public:
	// Yarn.Options Yarn.Dialogue/OptionSetResult::options
	Options_t2066576969  ___options_0;
	// Yarn.OptionChooser Yarn.Dialogue/OptionSetResult::setSelectedOptionDelegate
	OptionChooser_t101959131 * ___setSelectedOptionDelegate_1;

public:
	inline static int32_t get_offset_of_options_0() { return static_cast<int32_t>(offsetof(OptionSetResult_t1063237441, ___options_0)); }
	inline Options_t2066576969  get_options_0() const { return ___options_0; }
	inline Options_t2066576969 * get_address_of_options_0() { return &___options_0; }
	inline void set_options_0(Options_t2066576969  value)
	{
		___options_0 = value;
	}

	inline static int32_t get_offset_of_setSelectedOptionDelegate_1() { return static_cast<int32_t>(offsetof(OptionSetResult_t1063237441, ___setSelectedOptionDelegate_1)); }
	inline OptionChooser_t101959131 * get_setSelectedOptionDelegate_1() const { return ___setSelectedOptionDelegate_1; }
	inline OptionChooser_t101959131 ** get_address_of_setSelectedOptionDelegate_1() { return &___setSelectedOptionDelegate_1; }
	inline void set_setSelectedOptionDelegate_1(OptionChooser_t101959131 * value)
	{
		___setSelectedOptionDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___setSelectedOptionDelegate_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONSETRESULT_T1063237441_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef COMPILEDFORMAT_T1596309398_H
#define COMPILEDFORMAT_T1596309398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Dialogue/CompiledFormat
struct  CompiledFormat_t1596309398 
{
public:
	// System.Int32 Yarn.Dialogue/CompiledFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompiledFormat_t1596309398, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILEDFORMAT_T1596309398_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef COMMANDRESULT_T297730970_H
#define COMMANDRESULT_T297730970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Dialogue/CommandResult
struct  CommandResult_t297730970  : public RunnerResult_t2999909254
{
public:
	// Yarn.Command Yarn.Dialogue/CommandResult::command
	Command_t3409241122  ___command_0;

public:
	inline static int32_t get_offset_of_command_0() { return static_cast<int32_t>(offsetof(CommandResult_t297730970, ___command_0)); }
	inline Command_t3409241122  get_command_0() const { return ___command_0; }
	inline Command_t3409241122 * get_address_of_command_0() { return &___command_0; }
	inline void set_command_0(Command_t3409241122  value)
	{
		___command_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDRESULT_T297730970_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef U3CRUNLINEU3EC__ITERATOR0_T2630282661_H
#define U3CRUNLINEU3EC__ITERATOR0_T2630282661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDialogueUI/<RunLine>c__Iterator0
struct  U3CRunLineU3Ec__Iterator0_t2630282661  : public RuntimeObject
{
public:
	// System.Text.StringBuilder ExampleDialogueUI/<RunLine>c__Iterator0::<stringBuilder>__1
	StringBuilder_t * ___U3CstringBuilderU3E__1_0;
	// Yarn.Line ExampleDialogueUI/<RunLine>c__Iterator0::line
	Line_t1630675273  ___line_1;
	// System.String ExampleDialogueUI/<RunLine>c__Iterator0::$locvar0
	String_t* ___U24locvar0_2;
	// System.Int32 ExampleDialogueUI/<RunLine>c__Iterator0::$locvar1
	int32_t ___U24locvar1_3;
	// System.Char ExampleDialogueUI/<RunLine>c__Iterator0::<c>__2
	Il2CppChar ___U3CcU3E__2_4;
	// ExampleDialogueUI ExampleDialogueUI/<RunLine>c__Iterator0::$this
	ExampleDialogueUI_t4244439102 * ___U24this_5;
	// System.Object ExampleDialogueUI/<RunLine>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean ExampleDialogueUI/<RunLine>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 ExampleDialogueUI/<RunLine>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CstringBuilderU3E__1_0() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___U3CstringBuilderU3E__1_0)); }
	inline StringBuilder_t * get_U3CstringBuilderU3E__1_0() const { return ___U3CstringBuilderU3E__1_0; }
	inline StringBuilder_t ** get_address_of_U3CstringBuilderU3E__1_0() { return &___U3CstringBuilderU3E__1_0; }
	inline void set_U3CstringBuilderU3E__1_0(StringBuilder_t * value)
	{
		___U3CstringBuilderU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstringBuilderU3E__1_0), value);
	}

	inline static int32_t get_offset_of_line_1() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___line_1)); }
	inline Line_t1630675273  get_line_1() const { return ___line_1; }
	inline Line_t1630675273 * get_address_of_line_1() { return &___line_1; }
	inline void set_line_1(Line_t1630675273  value)
	{
		___line_1 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_2() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___U24locvar0_2)); }
	inline String_t* get_U24locvar0_2() const { return ___U24locvar0_2; }
	inline String_t** get_address_of_U24locvar0_2() { return &___U24locvar0_2; }
	inline void set_U24locvar0_2(String_t* value)
	{
		___U24locvar0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_2), value);
	}

	inline static int32_t get_offset_of_U24locvar1_3() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___U24locvar1_3)); }
	inline int32_t get_U24locvar1_3() const { return ___U24locvar1_3; }
	inline int32_t* get_address_of_U24locvar1_3() { return &___U24locvar1_3; }
	inline void set_U24locvar1_3(int32_t value)
	{
		___U24locvar1_3 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E__2_4() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___U3CcU3E__2_4)); }
	inline Il2CppChar get_U3CcU3E__2_4() const { return ___U3CcU3E__2_4; }
	inline Il2CppChar* get_address_of_U3CcU3E__2_4() { return &___U3CcU3E__2_4; }
	inline void set_U3CcU3E__2_4(Il2CppChar value)
	{
		___U3CcU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___U24this_5)); }
	inline ExampleDialogueUI_t4244439102 * get_U24this_5() const { return ___U24this_5; }
	inline ExampleDialogueUI_t4244439102 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(ExampleDialogueUI_t4244439102 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CRunLineU3Ec__Iterator0_t2630282661, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNLINEU3EC__ITERATOR0_T2630282661_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef U3CRUNCOMMANDU3EC__ITERATOR2_T2265219509_H
#define U3CRUNCOMMANDU3EC__ITERATOR2_T2265219509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDialogueUI/<RunCommand>c__Iterator2
struct  U3CRunCommandU3Ec__Iterator2_t2265219509  : public RuntimeObject
{
public:
	// Yarn.Command ExampleDialogueUI/<RunCommand>c__Iterator2::command
	Command_t3409241122  ___command_0;
	// System.Object ExampleDialogueUI/<RunCommand>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean ExampleDialogueUI/<RunCommand>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 ExampleDialogueUI/<RunCommand>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_command_0() { return static_cast<int32_t>(offsetof(U3CRunCommandU3Ec__Iterator2_t2265219509, ___command_0)); }
	inline Command_t3409241122  get_command_0() const { return ___command_0; }
	inline Command_t3409241122 * get_address_of_command_0() { return &___command_0; }
	inline void set_command_0(Command_t3409241122  value)
	{
		___command_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CRunCommandU3Ec__Iterator2_t2265219509, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CRunCommandU3Ec__Iterator2_t2265219509, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CRunCommandU3Ec__Iterator2_t2265219509, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNCOMMANDU3EC__ITERATOR2_T2265219509_H
#ifndef TYPE_T3283156650_H
#define TYPE_T3283156650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Value/Type
struct  Type_t3283156650 
{
public:
	// System.Int32 Yarn.Value/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t3283156650, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T3283156650_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T2620995683_H
#define ENUMERATOR_T2620995683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Yarn.Value>
struct  Enumerator_t2620995683 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t666812908 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3064485075  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2620995683, ___dictionary_0)); }
	inline Dictionary_2_t666812908 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t666812908 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t666812908 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2620995683, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2620995683, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2620995683, ___current_3)); }
	inline KeyValuePair_2_t3064485075  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3064485075 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3064485075  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2620995683_H
#ifndef SYSTEMLANGUAGE_T949212163_H
#define SYSTEMLANGUAGE_T949212163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemLanguage
struct  SystemLanguage_t949212163 
{
public:
	// System.Int32 UnityEngine.SystemLanguage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SystemLanguage_t949212163, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMLANGUAGE_T949212163_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef U3CRUNOPTIONSU3EC__ITERATOR1_T3229436336_H
#define U3CRUNOPTIONSU3EC__ITERATOR1_T3229436336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDialogueUI/<RunOptions>c__Iterator1
struct  U3CRunOptionsU3Ec__Iterator1_t3229436336  : public RuntimeObject
{
public:
	// Yarn.Options ExampleDialogueUI/<RunOptions>c__Iterator1::optionsCollection
	Options_t2066576969  ___optionsCollection_0;
	// System.Int32 ExampleDialogueUI/<RunOptions>c__Iterator1::<i>__0
	int32_t ___U3CiU3E__0_1;
	// System.Collections.Generic.IEnumerator`1<System.String> ExampleDialogueUI/<RunOptions>c__Iterator1::$locvar0
	RuntimeObject* ___U24locvar0_2;
	// Yarn.OptionChooser ExampleDialogueUI/<RunOptions>c__Iterator1::optionChooser
	OptionChooser_t101959131 * ___optionChooser_3;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button> ExampleDialogueUI/<RunOptions>c__Iterator1::$locvar1
	Enumerator_t3121383792  ___U24locvar1_4;
	// ExampleDialogueUI ExampleDialogueUI/<RunOptions>c__Iterator1::$this
	ExampleDialogueUI_t4244439102 * ___U24this_5;
	// System.Object ExampleDialogueUI/<RunOptions>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean ExampleDialogueUI/<RunOptions>c__Iterator1::$disposing
	bool ___U24disposing_7;
	// System.Int32 ExampleDialogueUI/<RunOptions>c__Iterator1::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_optionsCollection_0() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___optionsCollection_0)); }
	inline Options_t2066576969  get_optionsCollection_0() const { return ___optionsCollection_0; }
	inline Options_t2066576969 * get_address_of_optionsCollection_0() { return &___optionsCollection_0; }
	inline void set_optionsCollection_0(Options_t2066576969  value)
	{
		___optionsCollection_0 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__0_1() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___U3CiU3E__0_1)); }
	inline int32_t get_U3CiU3E__0_1() const { return ___U3CiU3E__0_1; }
	inline int32_t* get_address_of_U3CiU3E__0_1() { return &___U3CiU3E__0_1; }
	inline void set_U3CiU3E__0_1(int32_t value)
	{
		___U3CiU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_2() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___U24locvar0_2)); }
	inline RuntimeObject* get_U24locvar0_2() const { return ___U24locvar0_2; }
	inline RuntimeObject** get_address_of_U24locvar0_2() { return &___U24locvar0_2; }
	inline void set_U24locvar0_2(RuntimeObject* value)
	{
		___U24locvar0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_2), value);
	}

	inline static int32_t get_offset_of_optionChooser_3() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___optionChooser_3)); }
	inline OptionChooser_t101959131 * get_optionChooser_3() const { return ___optionChooser_3; }
	inline OptionChooser_t101959131 ** get_address_of_optionChooser_3() { return &___optionChooser_3; }
	inline void set_optionChooser_3(OptionChooser_t101959131 * value)
	{
		___optionChooser_3 = value;
		Il2CppCodeGenWriteBarrier((&___optionChooser_3), value);
	}

	inline static int32_t get_offset_of_U24locvar1_4() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___U24locvar1_4)); }
	inline Enumerator_t3121383792  get_U24locvar1_4() const { return ___U24locvar1_4; }
	inline Enumerator_t3121383792 * get_address_of_U24locvar1_4() { return &___U24locvar1_4; }
	inline void set_U24locvar1_4(Enumerator_t3121383792  value)
	{
		___U24locvar1_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___U24this_5)); }
	inline ExampleDialogueUI_t4244439102 * get_U24this_5() const { return ___U24this_5; }
	inline ExampleDialogueUI_t4244439102 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(ExampleDialogueUI_t4244439102 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CRunOptionsU3Ec__Iterator1_t3229436336, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRUNOPTIONSU3EC__ITERATOR1_T3229436336_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef DEFAULTVARIABLE_T730926445_H
#define DEFAULTVARIABLE_T730926445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleVariableStorage/DefaultVariable
struct  DefaultVariable_t730926445  : public RuntimeObject
{
public:
	// System.String ExampleVariableStorage/DefaultVariable::name
	String_t* ___name_0;
	// System.String ExampleVariableStorage/DefaultVariable::value
	String_t* ___value_1;
	// Yarn.Value/Type ExampleVariableStorage/DefaultVariable::type
	int32_t ___type_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DefaultVariable_t730926445, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DefaultVariable_t730926445, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(DefaultVariable_t730926445, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVARIABLE_T730926445_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef VALUE_T881556609_H
#define VALUE_T881556609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Value
struct  Value_t881556609  : public RuntimeObject
{
public:
	// Yarn.Value/Type Yarn.Value::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;
	// System.Single Yarn.Value::<numberValue>k__BackingField
	float ___U3CnumberValueU3Ek__BackingField_2;
	// System.String Yarn.Value::<variableName>k__BackingField
	String_t* ___U3CvariableNameU3Ek__BackingField_3;
	// System.String Yarn.Value::<stringValue>k__BackingField
	String_t* ___U3CstringValueU3Ek__BackingField_4;
	// System.Boolean Yarn.Value::<boolValue>k__BackingField
	bool ___U3CboolValueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Value_t881556609, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CnumberValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Value_t881556609, ___U3CnumberValueU3Ek__BackingField_2)); }
	inline float get_U3CnumberValueU3Ek__BackingField_2() const { return ___U3CnumberValueU3Ek__BackingField_2; }
	inline float* get_address_of_U3CnumberValueU3Ek__BackingField_2() { return &___U3CnumberValueU3Ek__BackingField_2; }
	inline void set_U3CnumberValueU3Ek__BackingField_2(float value)
	{
		___U3CnumberValueU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvariableNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Value_t881556609, ___U3CvariableNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CvariableNameU3Ek__BackingField_3() const { return ___U3CvariableNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CvariableNameU3Ek__BackingField_3() { return &___U3CvariableNameU3Ek__BackingField_3; }
	inline void set_U3CvariableNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CvariableNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvariableNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CstringValueU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Value_t881556609, ___U3CstringValueU3Ek__BackingField_4)); }
	inline String_t* get_U3CstringValueU3Ek__BackingField_4() const { return ___U3CstringValueU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CstringValueU3Ek__BackingField_4() { return &___U3CstringValueU3Ek__BackingField_4; }
	inline void set_U3CstringValueU3Ek__BackingField_4(String_t* value)
	{
		___U3CstringValueU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstringValueU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CboolValueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Value_t881556609, ___U3CboolValueU3Ek__BackingField_5)); }
	inline bool get_U3CboolValueU3Ek__BackingField_5() const { return ___U3CboolValueU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CboolValueU3Ek__BackingField_5() { return &___U3CboolValueU3Ek__BackingField_5; }
	inline void set_U3CboolValueU3Ek__BackingField_5(bool value)
	{
		___U3CboolValueU3Ek__BackingField_5 = value;
	}
};

struct Value_t881556609_StaticFields
{
public:
	// Yarn.Value Yarn.Value::NULL
	Value_t881556609 * ___NULL_0;

public:
	inline static int32_t get_offset_of_NULL_0() { return static_cast<int32_t>(offsetof(Value_t881556609_StaticFields, ___NULL_0)); }
	inline Value_t881556609 * get_NULL_0() const { return ___NULL_0; }
	inline Value_t881556609 ** get_address_of_NULL_0() { return &___NULL_0; }
	inline void set_NULL_0(Value_t881556609 * value)
	{
		___NULL_0 = value;
		Il2CppCodeGenWriteBarrier((&___NULL_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUE_T881556609_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef DIALOGUE_T3789480790_H
#define DIALOGUE_T3789480790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Dialogue
struct  Dialogue_t3789480790  : public RuntimeObject
{
public:
	// Yarn.VariableStorage Yarn.Dialogue::continuity
	RuntimeObject* ___continuity_0;
	// System.Boolean Yarn.Dialogue::experimentalMode
	bool ___experimentalMode_1;
	// Yarn.Logger Yarn.Dialogue::LogDebugMessage
	Logger_t1351394572 * ___LogDebugMessage_2;
	// Yarn.Logger Yarn.Dialogue::LogErrorMessage
	Logger_t1351394572 * ___LogErrorMessage_3;
	// Yarn.Loader Yarn.Dialogue::loader
	Loader_t2154734863 * ___loader_5;
	// Yarn.Program Yarn.Dialogue::program
	Program_t188249568 * ___program_6;
	// Yarn.Library Yarn.Dialogue::library
	Library_t2380415395 * ___library_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Yarn.Dialogue::visitedNodeCount
	Dictionary_2_t2736202052 * ___visitedNodeCount_8;
	// Yarn.VirtualMachine Yarn.Dialogue::vm
	VirtualMachine_t3539650220 * ___vm_9;

public:
	inline static int32_t get_offset_of_continuity_0() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___continuity_0)); }
	inline RuntimeObject* get_continuity_0() const { return ___continuity_0; }
	inline RuntimeObject** get_address_of_continuity_0() { return &___continuity_0; }
	inline void set_continuity_0(RuntimeObject* value)
	{
		___continuity_0 = value;
		Il2CppCodeGenWriteBarrier((&___continuity_0), value);
	}

	inline static int32_t get_offset_of_experimentalMode_1() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___experimentalMode_1)); }
	inline bool get_experimentalMode_1() const { return ___experimentalMode_1; }
	inline bool* get_address_of_experimentalMode_1() { return &___experimentalMode_1; }
	inline void set_experimentalMode_1(bool value)
	{
		___experimentalMode_1 = value;
	}

	inline static int32_t get_offset_of_LogDebugMessage_2() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___LogDebugMessage_2)); }
	inline Logger_t1351394572 * get_LogDebugMessage_2() const { return ___LogDebugMessage_2; }
	inline Logger_t1351394572 ** get_address_of_LogDebugMessage_2() { return &___LogDebugMessage_2; }
	inline void set_LogDebugMessage_2(Logger_t1351394572 * value)
	{
		___LogDebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((&___LogDebugMessage_2), value);
	}

	inline static int32_t get_offset_of_LogErrorMessage_3() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___LogErrorMessage_3)); }
	inline Logger_t1351394572 * get_LogErrorMessage_3() const { return ___LogErrorMessage_3; }
	inline Logger_t1351394572 ** get_address_of_LogErrorMessage_3() { return &___LogErrorMessage_3; }
	inline void set_LogErrorMessage_3(Logger_t1351394572 * value)
	{
		___LogErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier((&___LogErrorMessage_3), value);
	}

	inline static int32_t get_offset_of_loader_5() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___loader_5)); }
	inline Loader_t2154734863 * get_loader_5() const { return ___loader_5; }
	inline Loader_t2154734863 ** get_address_of_loader_5() { return &___loader_5; }
	inline void set_loader_5(Loader_t2154734863 * value)
	{
		___loader_5 = value;
		Il2CppCodeGenWriteBarrier((&___loader_5), value);
	}

	inline static int32_t get_offset_of_program_6() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___program_6)); }
	inline Program_t188249568 * get_program_6() const { return ___program_6; }
	inline Program_t188249568 ** get_address_of_program_6() { return &___program_6; }
	inline void set_program_6(Program_t188249568 * value)
	{
		___program_6 = value;
		Il2CppCodeGenWriteBarrier((&___program_6), value);
	}

	inline static int32_t get_offset_of_library_7() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___library_7)); }
	inline Library_t2380415395 * get_library_7() const { return ___library_7; }
	inline Library_t2380415395 ** get_address_of_library_7() { return &___library_7; }
	inline void set_library_7(Library_t2380415395 * value)
	{
		___library_7 = value;
		Il2CppCodeGenWriteBarrier((&___library_7), value);
	}

	inline static int32_t get_offset_of_visitedNodeCount_8() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___visitedNodeCount_8)); }
	inline Dictionary_2_t2736202052 * get_visitedNodeCount_8() const { return ___visitedNodeCount_8; }
	inline Dictionary_2_t2736202052 ** get_address_of_visitedNodeCount_8() { return &___visitedNodeCount_8; }
	inline void set_visitedNodeCount_8(Dictionary_2_t2736202052 * value)
	{
		___visitedNodeCount_8 = value;
		Il2CppCodeGenWriteBarrier((&___visitedNodeCount_8), value);
	}

	inline static int32_t get_offset_of_vm_9() { return static_cast<int32_t>(offsetof(Dialogue_t3789480790, ___vm_9)); }
	inline VirtualMachine_t3539650220 * get_vm_9() const { return ___vm_9; }
	inline VirtualMachine_t3539650220 ** get_address_of_vm_9() { return &___vm_9; }
	inline void set_vm_9(VirtualMachine_t3539650220 * value)
	{
		___vm_9 = value;
		Il2CppCodeGenWriteBarrier((&___vm_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUE_T3789480790_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TEXTASSET_T3022178571_H
#define TEXTASSET_T3022178571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t3022178571  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T3022178571_H
#ifndef LOCALISEDSTRINGGROUP_T614941511_H
#define LOCALISEDSTRINGGROUP_T614941511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.LocalisedStringGroup
struct  LocalisedStringGroup_t614941511  : public RuntimeObject
{
public:
	// UnityEngine.SystemLanguage Yarn.Unity.LocalisedStringGroup::language
	int32_t ___language_0;
	// UnityEngine.TextAsset[] Yarn.Unity.LocalisedStringGroup::stringFiles
	TextAssetU5BU5D_t2780361322* ___stringFiles_1;

public:
	inline static int32_t get_offset_of_language_0() { return static_cast<int32_t>(offsetof(LocalisedStringGroup_t614941511, ___language_0)); }
	inline int32_t get_language_0() const { return ___language_0; }
	inline int32_t* get_address_of_language_0() { return &___language_0; }
	inline void set_language_0(int32_t value)
	{
		___language_0 = value;
	}

	inline static int32_t get_offset_of_stringFiles_1() { return static_cast<int32_t>(offsetof(LocalisedStringGroup_t614941511, ___stringFiles_1)); }
	inline TextAssetU5BU5D_t2780361322* get_stringFiles_1() const { return ___stringFiles_1; }
	inline TextAssetU5BU5D_t2780361322** get_address_of_stringFiles_1() { return &___stringFiles_1; }
	inline void set_stringFiles_1(TextAssetU5BU5D_t2780361322* value)
	{
		___stringFiles_1 = value;
		Il2CppCodeGenWriteBarrier((&___stringFiles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALISEDSTRINGGROUP_T614941511_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef OPTIONCHOOSER_T101959131_H
#define OPTIONCHOOSER_T101959131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.OptionChooser
struct  OptionChooser_t101959131  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONCHOOSER_T101959131_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef PREDICATE_1_T1440235635_H
#define PREDICATE_1_T1440235635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<Yarn.Unity.LocalisedStringGroup>
struct  Predicate_1_t1440235635  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T1440235635_H
#ifndef PREDICATE_1_T1448328483_H
#define PREDICATE_1_T1448328483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<Yarn.Unity.Example.NPC>
struct  Predicate_1_t1448328483  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T1448328483_H
#ifndef LOGGER_T1351394572_H
#define LOGGER_T1351394572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Logger
struct  Logger_t1351394572  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T1351394572_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef DIALOGUEUIBEHAVIOUR_T637706657_H
#define DIALOGUEUIBEHAVIOUR_T637706657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.DialogueUIBehaviour
struct  DialogueUIBehaviour_t637706657  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUEUIBEHAVIOUR_T637706657_H
#ifndef VARIABLESTORAGEBEHAVIOUR_T3802685183_H
#define VARIABLESTORAGEBEHAVIOUR_T3802685183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.VariableStorageBehaviour
struct  VariableStorageBehaviour_t3802685183  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIABLESTORAGEBEHAVIOUR_T3802685183_H
#ifndef SPRITESWITCHER_T999038117_H
#define SPRITESWITCHER_T999038117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.Example.SpriteSwitcher
struct  SpriteSwitcher_t999038117  : public MonoBehaviour_t3962482529
{
public:
	// Yarn.Unity.Example.SpriteSwitcher/SpriteInfo[] Yarn.Unity.Example.SpriteSwitcher::sprites
	SpriteInfoU5BU5D_t4206874749* ___sprites_2;

public:
	inline static int32_t get_offset_of_sprites_2() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t999038117, ___sprites_2)); }
	inline SpriteInfoU5BU5D_t4206874749* get_sprites_2() const { return ___sprites_2; }
	inline SpriteInfoU5BU5D_t4206874749** get_address_of_sprites_2() { return &___sprites_2; }
	inline void set_sprites_2(SpriteInfoU5BU5D_t4206874749* value)
	{
		___sprites_2 = value;
		Il2CppCodeGenWriteBarrier((&___sprites_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITESWITCHER_T999038117_H
#ifndef DIALOGUERUNNER_T3655145191_H
#define DIALOGUERUNNER_T3655145191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.DialogueRunner
struct  DialogueRunner_t3655145191  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextAsset[] Yarn.Unity.DialogueRunner::sourceText
	TextAssetU5BU5D_t2780361322* ___sourceText_2;
	// Yarn.Unity.LocalisedStringGroup[] Yarn.Unity.DialogueRunner::stringGroups
	LocalisedStringGroupU5BU5D_t2868870078* ___stringGroups_3;
	// System.Boolean Yarn.Unity.DialogueRunner::shouldOverrideLanguage
	bool ___shouldOverrideLanguage_4;
	// UnityEngine.SystemLanguage Yarn.Unity.DialogueRunner::overrideLanguage
	int32_t ___overrideLanguage_5;
	// Yarn.Unity.VariableStorageBehaviour Yarn.Unity.DialogueRunner::variableStorage
	VariableStorageBehaviour_t3802685183 * ___variableStorage_6;
	// Yarn.Unity.DialogueUIBehaviour Yarn.Unity.DialogueRunner::dialogueUI
	DialogueUIBehaviour_t637706657 * ___dialogueUI_7;
	// System.String Yarn.Unity.DialogueRunner::startNode
	String_t* ___startNode_8;
	// System.Boolean Yarn.Unity.DialogueRunner::startAutomatically
	bool ___startAutomatically_9;
	// System.Boolean Yarn.Unity.DialogueRunner::<isDialogueRunning>k__BackingField
	bool ___U3CisDialogueRunningU3Ek__BackingField_10;
	// System.Boolean Yarn.Unity.DialogueRunner::automaticCommands
	bool ___automaticCommands_11;
	// Yarn.Dialogue Yarn.Unity.DialogueRunner::_dialogue
	Dialogue_t3789480790 * ____dialogue_12;

public:
	inline static int32_t get_offset_of_sourceText_2() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___sourceText_2)); }
	inline TextAssetU5BU5D_t2780361322* get_sourceText_2() const { return ___sourceText_2; }
	inline TextAssetU5BU5D_t2780361322** get_address_of_sourceText_2() { return &___sourceText_2; }
	inline void set_sourceText_2(TextAssetU5BU5D_t2780361322* value)
	{
		___sourceText_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceText_2), value);
	}

	inline static int32_t get_offset_of_stringGroups_3() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___stringGroups_3)); }
	inline LocalisedStringGroupU5BU5D_t2868870078* get_stringGroups_3() const { return ___stringGroups_3; }
	inline LocalisedStringGroupU5BU5D_t2868870078** get_address_of_stringGroups_3() { return &___stringGroups_3; }
	inline void set_stringGroups_3(LocalisedStringGroupU5BU5D_t2868870078* value)
	{
		___stringGroups_3 = value;
		Il2CppCodeGenWriteBarrier((&___stringGroups_3), value);
	}

	inline static int32_t get_offset_of_shouldOverrideLanguage_4() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___shouldOverrideLanguage_4)); }
	inline bool get_shouldOverrideLanguage_4() const { return ___shouldOverrideLanguage_4; }
	inline bool* get_address_of_shouldOverrideLanguage_4() { return &___shouldOverrideLanguage_4; }
	inline void set_shouldOverrideLanguage_4(bool value)
	{
		___shouldOverrideLanguage_4 = value;
	}

	inline static int32_t get_offset_of_overrideLanguage_5() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___overrideLanguage_5)); }
	inline int32_t get_overrideLanguage_5() const { return ___overrideLanguage_5; }
	inline int32_t* get_address_of_overrideLanguage_5() { return &___overrideLanguage_5; }
	inline void set_overrideLanguage_5(int32_t value)
	{
		___overrideLanguage_5 = value;
	}

	inline static int32_t get_offset_of_variableStorage_6() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___variableStorage_6)); }
	inline VariableStorageBehaviour_t3802685183 * get_variableStorage_6() const { return ___variableStorage_6; }
	inline VariableStorageBehaviour_t3802685183 ** get_address_of_variableStorage_6() { return &___variableStorage_6; }
	inline void set_variableStorage_6(VariableStorageBehaviour_t3802685183 * value)
	{
		___variableStorage_6 = value;
		Il2CppCodeGenWriteBarrier((&___variableStorage_6), value);
	}

	inline static int32_t get_offset_of_dialogueUI_7() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___dialogueUI_7)); }
	inline DialogueUIBehaviour_t637706657 * get_dialogueUI_7() const { return ___dialogueUI_7; }
	inline DialogueUIBehaviour_t637706657 ** get_address_of_dialogueUI_7() { return &___dialogueUI_7; }
	inline void set_dialogueUI_7(DialogueUIBehaviour_t637706657 * value)
	{
		___dialogueUI_7 = value;
		Il2CppCodeGenWriteBarrier((&___dialogueUI_7), value);
	}

	inline static int32_t get_offset_of_startNode_8() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___startNode_8)); }
	inline String_t* get_startNode_8() const { return ___startNode_8; }
	inline String_t** get_address_of_startNode_8() { return &___startNode_8; }
	inline void set_startNode_8(String_t* value)
	{
		___startNode_8 = value;
		Il2CppCodeGenWriteBarrier((&___startNode_8), value);
	}

	inline static int32_t get_offset_of_startAutomatically_9() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___startAutomatically_9)); }
	inline bool get_startAutomatically_9() const { return ___startAutomatically_9; }
	inline bool* get_address_of_startAutomatically_9() { return &___startAutomatically_9; }
	inline void set_startAutomatically_9(bool value)
	{
		___startAutomatically_9 = value;
	}

	inline static int32_t get_offset_of_U3CisDialogueRunningU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___U3CisDialogueRunningU3Ek__BackingField_10)); }
	inline bool get_U3CisDialogueRunningU3Ek__BackingField_10() const { return ___U3CisDialogueRunningU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CisDialogueRunningU3Ek__BackingField_10() { return &___U3CisDialogueRunningU3Ek__BackingField_10; }
	inline void set_U3CisDialogueRunningU3Ek__BackingField_10(bool value)
	{
		___U3CisDialogueRunningU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_automaticCommands_11() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ___automaticCommands_11)); }
	inline bool get_automaticCommands_11() const { return ___automaticCommands_11; }
	inline bool* get_address_of_automaticCommands_11() { return &___automaticCommands_11; }
	inline void set_automaticCommands_11(bool value)
	{
		___automaticCommands_11 = value;
	}

	inline static int32_t get_offset_of__dialogue_12() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191, ____dialogue_12)); }
	inline Dialogue_t3789480790 * get__dialogue_12() const { return ____dialogue_12; }
	inline Dialogue_t3789480790 ** get_address_of__dialogue_12() { return &____dialogue_12; }
	inline void set__dialogue_12(Dialogue_t3789480790 * value)
	{
		____dialogue_12 = value;
		Il2CppCodeGenWriteBarrier((&____dialogue_12), value);
	}
};

struct DialogueRunner_t3655145191_StaticFields
{
public:
	// Yarn.Logger Yarn.Unity.DialogueRunner::<>f__am$cache0
	Logger_t1351394572 * ___U3CU3Ef__amU24cache0_13;
	// Yarn.Logger Yarn.Unity.DialogueRunner::<>f__am$cache1
	Logger_t1351394572 * ___U3CU3Ef__amU24cache1_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Logger_t1351394572 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Logger_t1351394572 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Logger_t1351394572 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(DialogueRunner_t3655145191_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Logger_t1351394572 * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Logger_t1351394572 ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Logger_t1351394572 * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUERUNNER_T3655145191_H
#ifndef NPC_T623034359_H
#define NPC_T623034359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.Example.NPC
struct  NPC_t623034359  : public MonoBehaviour_t3962482529
{
public:
	// System.String Yarn.Unity.Example.NPC::characterName
	String_t* ___characterName_2;
	// System.String Yarn.Unity.Example.NPC::talkToNode
	String_t* ___talkToNode_3;
	// UnityEngine.TextAsset Yarn.Unity.Example.NPC::scriptToLoad
	TextAsset_t3022178571 * ___scriptToLoad_4;

public:
	inline static int32_t get_offset_of_characterName_2() { return static_cast<int32_t>(offsetof(NPC_t623034359, ___characterName_2)); }
	inline String_t* get_characterName_2() const { return ___characterName_2; }
	inline String_t** get_address_of_characterName_2() { return &___characterName_2; }
	inline void set_characterName_2(String_t* value)
	{
		___characterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___characterName_2), value);
	}

	inline static int32_t get_offset_of_talkToNode_3() { return static_cast<int32_t>(offsetof(NPC_t623034359, ___talkToNode_3)); }
	inline String_t* get_talkToNode_3() const { return ___talkToNode_3; }
	inline String_t** get_address_of_talkToNode_3() { return &___talkToNode_3; }
	inline void set_talkToNode_3(String_t* value)
	{
		___talkToNode_3 = value;
		Il2CppCodeGenWriteBarrier((&___talkToNode_3), value);
	}

	inline static int32_t get_offset_of_scriptToLoad_4() { return static_cast<int32_t>(offsetof(NPC_t623034359, ___scriptToLoad_4)); }
	inline TextAsset_t3022178571 * get_scriptToLoad_4() const { return ___scriptToLoad_4; }
	inline TextAsset_t3022178571 ** get_address_of_scriptToLoad_4() { return &___scriptToLoad_4; }
	inline void set_scriptToLoad_4(TextAsset_t3022178571 * value)
	{
		___scriptToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((&___scriptToLoad_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NPC_T623034359_H
#ifndef MOBILEONLY_T759008739_H
#define MOBILEONLY_T759008739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MobileOnly
struct  MobileOnly_t759008739  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEONLY_T759008739_H
#ifndef PLAYERCHARACTER_T3157521029_H
#define PLAYERCHARACTER_T3157521029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.Example.PlayerCharacter
struct  PlayerCharacter_t3157521029  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Yarn.Unity.Example.PlayerCharacter::minPosition
	float ___minPosition_2;
	// System.Single Yarn.Unity.Example.PlayerCharacter::maxPosition
	float ___maxPosition_3;
	// System.Single Yarn.Unity.Example.PlayerCharacter::moveSpeed
	float ___moveSpeed_4;
	// System.Single Yarn.Unity.Example.PlayerCharacter::interactionRadius
	float ___interactionRadius_5;
	// System.Single Yarn.Unity.Example.PlayerCharacter::<movementFromButtons>k__BackingField
	float ___U3CmovementFromButtonsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_minPosition_2() { return static_cast<int32_t>(offsetof(PlayerCharacter_t3157521029, ___minPosition_2)); }
	inline float get_minPosition_2() const { return ___minPosition_2; }
	inline float* get_address_of_minPosition_2() { return &___minPosition_2; }
	inline void set_minPosition_2(float value)
	{
		___minPosition_2 = value;
	}

	inline static int32_t get_offset_of_maxPosition_3() { return static_cast<int32_t>(offsetof(PlayerCharacter_t3157521029, ___maxPosition_3)); }
	inline float get_maxPosition_3() const { return ___maxPosition_3; }
	inline float* get_address_of_maxPosition_3() { return &___maxPosition_3; }
	inline void set_maxPosition_3(float value)
	{
		___maxPosition_3 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(PlayerCharacter_t3157521029, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_interactionRadius_5() { return static_cast<int32_t>(offsetof(PlayerCharacter_t3157521029, ___interactionRadius_5)); }
	inline float get_interactionRadius_5() const { return ___interactionRadius_5; }
	inline float* get_address_of_interactionRadius_5() { return &___interactionRadius_5; }
	inline void set_interactionRadius_5(float value)
	{
		___interactionRadius_5 = value;
	}

	inline static int32_t get_offset_of_U3CmovementFromButtonsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayerCharacter_t3157521029, ___U3CmovementFromButtonsU3Ek__BackingField_6)); }
	inline float get_U3CmovementFromButtonsU3Ek__BackingField_6() const { return ___U3CmovementFromButtonsU3Ek__BackingField_6; }
	inline float* get_address_of_U3CmovementFromButtonsU3Ek__BackingField_6() { return &___U3CmovementFromButtonsU3Ek__BackingField_6; }
	inline void set_U3CmovementFromButtonsU3Ek__BackingField_6(float value)
	{
		___U3CmovementFromButtonsU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCHARACTER_T3157521029_H
#ifndef CAMERAFOLLOW_T3245689759_H
#define CAMERAFOLLOW_T3245689759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Unity.Example.CameraFollow
struct  CameraFollow_t3245689759  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform Yarn.Unity.Example.CameraFollow::target
	Transform_t3600365921 * ___target_2;
	// System.Single Yarn.Unity.Example.CameraFollow::minPosition
	float ___minPosition_3;
	// System.Single Yarn.Unity.Example.CameraFollow::maxPosition
	float ___maxPosition_4;
	// System.Single Yarn.Unity.Example.CameraFollow::moveSpeed
	float ___moveSpeed_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraFollow_t3245689759, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_minPosition_3() { return static_cast<int32_t>(offsetof(CameraFollow_t3245689759, ___minPosition_3)); }
	inline float get_minPosition_3() const { return ___minPosition_3; }
	inline float* get_address_of_minPosition_3() { return &___minPosition_3; }
	inline void set_minPosition_3(float value)
	{
		___minPosition_3 = value;
	}

	inline static int32_t get_offset_of_maxPosition_4() { return static_cast<int32_t>(offsetof(CameraFollow_t3245689759, ___maxPosition_4)); }
	inline float get_maxPosition_4() const { return ___maxPosition_4; }
	inline float* get_address_of_maxPosition_4() { return &___maxPosition_4; }
	inline void set_maxPosition_4(float value)
	{
		___maxPosition_4 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(CameraFollow_t3245689759, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAFOLLOW_T3245689759_H
#ifndef EXAMPLEDIALOGUEUI_T4244439102_H
#define EXAMPLEDIALOGUEUI_T4244439102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleDialogueUI
struct  ExampleDialogueUI_t4244439102  : public DialogueUIBehaviour_t637706657
{
public:
	// UnityEngine.GameObject ExampleDialogueUI::dialogueContainer
	GameObject_t1113636619 * ___dialogueContainer_2;
	// UnityEngine.UI.Text ExampleDialogueUI::lineText
	Text_t1901882714 * ___lineText_3;
	// UnityEngine.GameObject ExampleDialogueUI::continuePrompt
	GameObject_t1113636619 * ___continuePrompt_4;
	// Yarn.OptionChooser ExampleDialogueUI::SetSelectedOption
	OptionChooser_t101959131 * ___SetSelectedOption_5;
	// System.Single ExampleDialogueUI::textSpeed
	float ___textSpeed_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> ExampleDialogueUI::optionButtons
	List_1_t1232139915 * ___optionButtons_7;
	// UnityEngine.RectTransform ExampleDialogueUI::gameControlsContainer
	RectTransform_t3704657025 * ___gameControlsContainer_8;
	// ExampleVariableStorage ExampleDialogueUI::variableStorage
	ExampleVariableStorage_t1372347222 * ___variableStorage_9;
	// UnityEngine.UI.Text ExampleDialogueUI::money
	Text_t1901882714 * ___money_10;
	// UnityEngine.UI.Text ExampleDialogueUI::food
	Text_t1901882714 * ___food_11;
	// UnityEngine.UI.Text ExampleDialogueUI::well
	Text_t1901882714 * ___well_12;

public:
	inline static int32_t get_offset_of_dialogueContainer_2() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___dialogueContainer_2)); }
	inline GameObject_t1113636619 * get_dialogueContainer_2() const { return ___dialogueContainer_2; }
	inline GameObject_t1113636619 ** get_address_of_dialogueContainer_2() { return &___dialogueContainer_2; }
	inline void set_dialogueContainer_2(GameObject_t1113636619 * value)
	{
		___dialogueContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___dialogueContainer_2), value);
	}

	inline static int32_t get_offset_of_lineText_3() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___lineText_3)); }
	inline Text_t1901882714 * get_lineText_3() const { return ___lineText_3; }
	inline Text_t1901882714 ** get_address_of_lineText_3() { return &___lineText_3; }
	inline void set_lineText_3(Text_t1901882714 * value)
	{
		___lineText_3 = value;
		Il2CppCodeGenWriteBarrier((&___lineText_3), value);
	}

	inline static int32_t get_offset_of_continuePrompt_4() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___continuePrompt_4)); }
	inline GameObject_t1113636619 * get_continuePrompt_4() const { return ___continuePrompt_4; }
	inline GameObject_t1113636619 ** get_address_of_continuePrompt_4() { return &___continuePrompt_4; }
	inline void set_continuePrompt_4(GameObject_t1113636619 * value)
	{
		___continuePrompt_4 = value;
		Il2CppCodeGenWriteBarrier((&___continuePrompt_4), value);
	}

	inline static int32_t get_offset_of_SetSelectedOption_5() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___SetSelectedOption_5)); }
	inline OptionChooser_t101959131 * get_SetSelectedOption_5() const { return ___SetSelectedOption_5; }
	inline OptionChooser_t101959131 ** get_address_of_SetSelectedOption_5() { return &___SetSelectedOption_5; }
	inline void set_SetSelectedOption_5(OptionChooser_t101959131 * value)
	{
		___SetSelectedOption_5 = value;
		Il2CppCodeGenWriteBarrier((&___SetSelectedOption_5), value);
	}

	inline static int32_t get_offset_of_textSpeed_6() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___textSpeed_6)); }
	inline float get_textSpeed_6() const { return ___textSpeed_6; }
	inline float* get_address_of_textSpeed_6() { return &___textSpeed_6; }
	inline void set_textSpeed_6(float value)
	{
		___textSpeed_6 = value;
	}

	inline static int32_t get_offset_of_optionButtons_7() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___optionButtons_7)); }
	inline List_1_t1232139915 * get_optionButtons_7() const { return ___optionButtons_7; }
	inline List_1_t1232139915 ** get_address_of_optionButtons_7() { return &___optionButtons_7; }
	inline void set_optionButtons_7(List_1_t1232139915 * value)
	{
		___optionButtons_7 = value;
		Il2CppCodeGenWriteBarrier((&___optionButtons_7), value);
	}

	inline static int32_t get_offset_of_gameControlsContainer_8() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___gameControlsContainer_8)); }
	inline RectTransform_t3704657025 * get_gameControlsContainer_8() const { return ___gameControlsContainer_8; }
	inline RectTransform_t3704657025 ** get_address_of_gameControlsContainer_8() { return &___gameControlsContainer_8; }
	inline void set_gameControlsContainer_8(RectTransform_t3704657025 * value)
	{
		___gameControlsContainer_8 = value;
		Il2CppCodeGenWriteBarrier((&___gameControlsContainer_8), value);
	}

	inline static int32_t get_offset_of_variableStorage_9() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___variableStorage_9)); }
	inline ExampleVariableStorage_t1372347222 * get_variableStorage_9() const { return ___variableStorage_9; }
	inline ExampleVariableStorage_t1372347222 ** get_address_of_variableStorage_9() { return &___variableStorage_9; }
	inline void set_variableStorage_9(ExampleVariableStorage_t1372347222 * value)
	{
		___variableStorage_9 = value;
		Il2CppCodeGenWriteBarrier((&___variableStorage_9), value);
	}

	inline static int32_t get_offset_of_money_10() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___money_10)); }
	inline Text_t1901882714 * get_money_10() const { return ___money_10; }
	inline Text_t1901882714 ** get_address_of_money_10() { return &___money_10; }
	inline void set_money_10(Text_t1901882714 * value)
	{
		___money_10 = value;
		Il2CppCodeGenWriteBarrier((&___money_10), value);
	}

	inline static int32_t get_offset_of_food_11() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___food_11)); }
	inline Text_t1901882714 * get_food_11() const { return ___food_11; }
	inline Text_t1901882714 ** get_address_of_food_11() { return &___food_11; }
	inline void set_food_11(Text_t1901882714 * value)
	{
		___food_11 = value;
		Il2CppCodeGenWriteBarrier((&___food_11), value);
	}

	inline static int32_t get_offset_of_well_12() { return static_cast<int32_t>(offsetof(ExampleDialogueUI_t4244439102, ___well_12)); }
	inline Text_t1901882714 * get_well_12() const { return ___well_12; }
	inline Text_t1901882714 ** get_address_of_well_12() { return &___well_12; }
	inline void set_well_12(Text_t1901882714 * value)
	{
		___well_12 = value;
		Il2CppCodeGenWriteBarrier((&___well_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXAMPLEDIALOGUEUI_T4244439102_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef EXAMPLEVARIABLESTORAGE_T1372347222_H
#define EXAMPLEVARIABLESTORAGE_T1372347222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleVariableStorage
struct  ExampleVariableStorage_t1372347222  : public VariableStorageBehaviour_t3802685183
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Yarn.Value> ExampleVariableStorage::variables
	Dictionary_2_t666812908 * ___variables_2;
	// ExampleVariableStorage/DefaultVariable[] ExampleVariableStorage::defaultVariables
	DefaultVariableU5BU5D_t403142208* ___defaultVariables_3;
	// UnityEngine.UI.Text ExampleVariableStorage::debugTextView
	Text_t1901882714 * ___debugTextView_4;

public:
	inline static int32_t get_offset_of_variables_2() { return static_cast<int32_t>(offsetof(ExampleVariableStorage_t1372347222, ___variables_2)); }
	inline Dictionary_2_t666812908 * get_variables_2() const { return ___variables_2; }
	inline Dictionary_2_t666812908 ** get_address_of_variables_2() { return &___variables_2; }
	inline void set_variables_2(Dictionary_2_t666812908 * value)
	{
		___variables_2 = value;
		Il2CppCodeGenWriteBarrier((&___variables_2), value);
	}

	inline static int32_t get_offset_of_defaultVariables_3() { return static_cast<int32_t>(offsetof(ExampleVariableStorage_t1372347222, ___defaultVariables_3)); }
	inline DefaultVariableU5BU5D_t403142208* get_defaultVariables_3() const { return ___defaultVariables_3; }
	inline DefaultVariableU5BU5D_t403142208** get_address_of_defaultVariables_3() { return &___defaultVariables_3; }
	inline void set_defaultVariables_3(DefaultVariableU5BU5D_t403142208* value)
	{
		___defaultVariables_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVariables_3), value);
	}

	inline static int32_t get_offset_of_debugTextView_4() { return static_cast<int32_t>(offsetof(ExampleVariableStorage_t1372347222, ___debugTextView_4)); }
	inline Text_t1901882714 * get_debugTextView_4() const { return ___debugTextView_4; }
	inline Text_t1901882714 ** get_address_of_debugTextView_4() { return &___debugTextView_4; }
	inline void set_debugTextView_4(Text_t1901882714 * value)
	{
		___debugTextView_4 = value;
		Il2CppCodeGenWriteBarrier((&___debugTextView_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXAMPLEVARIABLESTORAGE_T1372347222_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// ExampleVariableStorage/DefaultVariable[]
struct DefaultVariableU5BU5D_t403142208  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DefaultVariable_t730926445 * m_Items[1];

public:
	inline DefaultVariable_t730926445 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DefaultVariable_t730926445 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DefaultVariable_t730926445 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DefaultVariable_t730926445 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DefaultVariable_t730926445 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DefaultVariable_t730926445 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t2780361322  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TextAsset_t3022178571 * m_Items[1];

public:
	inline TextAsset_t3022178571 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextAsset_t3022178571 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextAsset_t3022178571 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline TextAsset_t3022178571 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextAsset_t3022178571 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextAsset_t3022178571 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Yarn.Unity.LocalisedStringGroup[]
struct LocalisedStringGroupU5BU5D_t2868870078  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LocalisedStringGroup_t614941511 * m_Items[1];

public:
	inline LocalisedStringGroup_t614941511 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalisedStringGroup_t614941511 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalisedStringGroup_t614941511 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline LocalisedStringGroup_t614941511 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalisedStringGroup_t614941511 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalisedStringGroup_t614941511 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2007329276  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MonoBehaviour_t3962482529 * m_Items[1];

public:
	inline MonoBehaviour_t3962482529 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t3962482529 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t3962482529 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MonoBehaviour_t3962482529 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t3962482529 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t3962482529 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Yarn.Unity.YarnCommandAttribute[]
struct YarnCommandAttributeU5BU5D_t1263584234  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) YarnCommandAttribute_t3061396875 * m_Items[1];

public:
	inline YarnCommandAttribute_t3061396875 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline YarnCommandAttribute_t3061396875 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, YarnCommandAttribute_t3061396875 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline YarnCommandAttribute_t3061396875 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline YarnCommandAttribute_t3061396875 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, YarnCommandAttribute_t3061396875 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[][]
struct StringU5BU5DU5BU5D_t2611993717  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StringU5BU5D_t1281789340* m_Items[1];

public:
	inline StringU5BU5D_t1281789340* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5D_t1281789340** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5D_t1281789340* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StringU5BU5D_t1281789340* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5D_t1281789340** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5D_t1281789340* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Yarn.Unity.Example.NPC[]
struct NPCU5BU5D_t1030391374  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NPC_t623034359 * m_Items[1];

public:
	inline NPC_t623034359 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NPC_t623034359 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NPC_t623034359 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline NPC_t623034359 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NPC_t623034359 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NPC_t623034359 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Yarn.Unity.Example.SpriteSwitcher/SpriteInfo[]
struct SpriteInfoU5BU5D_t4206874749  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteInfo_t2637886516  m_Items[1];

public:
	inline SpriteInfo_t2637886516  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteInfo_t2637886516 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteInfo_t2637886516  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SpriteInfo_t2637886516  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteInfo_t2637886516 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteInfo_t2637886516  value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m327447107_gshared (Predicate_1_t3905400288 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
extern "C"  RuntimeObject * List_1_Find_m2048854920_gshared (List_1_t257213610 * __this, Predicate_1_t3905400288 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C"  void List_1_RemoveRange_m2428828636_gshared (List_1_t257213610 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponents_TisRuntimeObject_m1405838976_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m4191481190_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m1831438261_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void Yarn.Unity.DialogueUIBehaviour::.ctor()
extern "C"  void DialogueUIBehaviour__ctor_m2305348317 (DialogueUIBehaviour_t637706657 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Yarn.Value::get_AsNumber()
extern "C"  float Value_get_AsNumber_m69121793 (Value_t881556609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UI.Button>::GetEnumerator()
#define List_1_GetEnumerator_m2873996484(__this, method) ((  Enumerator_t3121383792  (*) (List_1_t1232139915 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::get_Current()
#define Enumerator_get_Current_m1139535682(__this, method) ((  Button_t4055032469 * (*) (Enumerator_t3121383792 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::MoveNext()
#define Enumerator_MoveNext_m1799784902(__this, method) ((  bool (*) (Enumerator_t3121383792 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::Dispose()
#define Enumerator_Dispose_m4268479888(__this, method) ((  void (*) (Enumerator_t3121383792 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void ExampleDialogueUI/<RunLine>c__Iterator0::.ctor()
extern "C"  void U3CRunLineU3Ec__Iterator0__ctor_m1679631148 (U3CRunLineU3Ec__Iterator0_t2630282661 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleDialogueUI/<RunOptions>c__Iterator1::.ctor()
extern "C"  void U3CRunOptionsU3Ec__Iterator1__ctor_m1978151379 (U3CRunOptionsU3Ec__Iterator1_t3229436336 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.OptionChooser::Invoke(System.Int32)
extern "C"  void OptionChooser_Invoke_m4031137224 (OptionChooser_t101959131 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleDialogueUI/<RunCommand>c__Iterator2::.ctor()
extern "C"  void U3CRunCommandU3Ec__Iterator2__ctor_m854445952 (U3CRunCommandU3Ec__Iterator2_t2265219509 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleDialogueUI/<DialogueStarted>c__Iterator3::.ctor()
extern "C"  void U3CDialogueStartedU3Ec__Iterator3__ctor_m1437391474 (U3CDialogueStartedU3Ec__Iterator3_t2346652362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExampleDialogueUI/<DialogueComplete>c__Iterator4::.ctor()
extern "C"  void U3CDialogueCompleteU3Ec__Iterator4__ctor_m2155519926 (U3CDialogueCompleteU3Ec__Iterator4_t163110549 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ExampleDialogueUI::ParseVariable(System.String)
extern "C"  String_t* ExampleDialogueUI_ParseVariable_m2353810914 (ExampleDialogueUI_t4244439102 * __this, String_t* ___varName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Yarn.Value::get_AsString()
extern "C"  String_t* Value_get_AsString_m2163309914 (Value_t881556609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
extern "C"  String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String ExampleDialogueUI::CheckVars(System.String)
extern "C"  String_t* ExampleDialogueUI_CheckVars_m1893885946 (ExampleDialogueUI_t4244439102 * __this, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
extern "C"  bool Input_get_anyKeyDown_m1564765341 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Count()
#define List_1_get_Count_m2761165869(__this, method) ((  int32_t (*) (List_1_t1232139915 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Item(System.Int32)
#define List_1_get_Item_m733523066(__this, p0, method) ((  Button_t4055032469 * (*) (List_1_t1232139915 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t1901882714_m970686954(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>::.ctor()
#define Dictionary_2__ctor_m709135621(__this, method) ((  void (*) (Dictionary_2_t666812908 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void Yarn.Unity.VariableStorageBehaviour::.ctor()
extern "C"  void VariableStorageBehaviour__ctor_m1496518374 (VariableStorageBehaviour_t3802685183 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
extern "C"  bool Single_TryParse_m4264970052 (RuntimeObject * __this /* static, unused */, String_t* p0, float* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
extern "C"  bool Boolean_TryParse_m1999513058 (RuntimeObject * __this /* static, unused */, String_t* p0, bool* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
extern "C"  void Debug_LogErrorFormat_m575266265 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C"  void ArgumentOutOfRangeException__ctor_m2047740448 (ArgumentOutOfRangeException_t777629997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Value::.ctor(System.Object)
extern "C"  void Value__ctor_m1179715953 (Value_t881556609 * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m1636383447(__this, p0, p1, method) ((  void (*) (Dictionary_2_t666812908 *, String_t*, Value_t881556609 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m2215268282(__this, p0, method) ((  bool (*) (Dictionary_2_t666812908 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>::get_Item(!0)
#define Dictionary_2_get_Item_m1350177375(__this, p0, method) ((  Value_t881556609 * (*) (Dictionary_2_t666812908 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>::Clear()
#define Dictionary_2_Clear_m2842195990(__this, method) ((  void (*) (Dictionary_2_t666812908 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1675868483(__this, method) ((  Enumerator_t2620995683  (*) (Dictionary_2_t666812908 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Yarn.Value>::get_Current()
#define Enumerator_get_Current_m1381002348(__this, method) ((  KeyValuePair_2_t3064485075  (*) (Enumerator_t2620995683 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Value>::get_Key()
#define KeyValuePair_2_get_Key_m675960855(__this, method) ((  String_t* (*) (KeyValuePair_2_t3064485075 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Yarn.Value>::get_Value()
#define KeyValuePair_2_get_Value_m267502843(__this, method) ((  Value_t881556609 * (*) (KeyValuePair_2_t3064485075 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C"  StringBuilder_t * StringBuilder_AppendLine_m1438862993 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Yarn.Value>::MoveNext()
#define Enumerator_MoveNext_m1849118330(__this, method) ((  bool (*) (Enumerator_t2620995683 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Yarn.Value>::Dispose()
#define Enumerator_Dispose_m645817517(__this, method) ((  void (*) (Enumerator_t2620995683 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
extern "C"  bool Application_get_isMobilePlatform_m751658814 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Dialogue::.ctor(Yarn.VariableStorage)
extern "C"  void Dialogue__ctor_m193580772 (Dialogue_t3789480790 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Logger::.ctor(System.Object,System.IntPtr)
extern "C"  void Logger__ctor_m2980890779 (Logger_t1351394572 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Yarn.Dialogue Yarn.Unity.DialogueRunner::get_dialogue()
extern "C"  Dialogue_t3789480790 * DialogueRunner_get_dialogue_m939767586 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextAsset::get_text()
extern "C"  String_t* TextAsset_get_text_m2027878391 (TextAsset_t3022178571 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Dialogue::LoadString(System.String,System.String,System.Boolean,System.Boolean,System.String)
extern "C"  void Dialogue_LoadString_m1136844729 (Dialogue_t3789480790 * __this, String_t* p0, String_t* p1, bool p2, bool p3, String_t* p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.DialogueRunner::StartDialogue()
extern "C"  void DialogueRunner_StartDialogue_m3620552434 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Yarn.Unity.LocalisedStringGroup>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m2903844167(__this, p0, method) ((  void (*) (List_1_t2087016253 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Predicate`1<Yarn.Unity.LocalisedStringGroup>::.ctor(System.Object,System.IntPtr)
#define Predicate_1__ctor_m2354984221(__this, p0, p1, method) ((  void (*) (Predicate_1_t1440235635 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m327447107_gshared)(__this, p0, p1, method)
// !0 System.Collections.Generic.List`1<Yarn.Unity.LocalisedStringGroup>::Find(System.Predicate`1<!0>)
#define List_1_Find_m3290463380(__this, p0, method) ((  LocalisedStringGroup_t614941511 * (*) (List_1_t2087016253 *, Predicate_1_t1440235635 *, const RuntimeMethod*))List_1_Find_m2048854920_gshared)(__this, p0, method)
// System.Void Yarn.Unity.DialogueRunner::AddStringTable(System.String)
extern "C"  void DialogueRunner_AddStringTable_m1804123334 (DialogueRunner_t3655145191 * __this, String_t* ___text0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Dialogue::AddStringTable(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void Dialogue_AddStringTable_m1490519928 (Dialogue_t3789480790 * __this, Dictionary_2_t1632706988 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
#define Dictionary_2__ctor_m2052512498(__this, method) ((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CsvHelper.CsvReader::.ctor(System.IO.TextReader)
extern "C"  void CsvReader__ctor_m2399108903 (CsvReader_t3469035837 * __this, TextReader_t283511965 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Yarn.LocalisedLine::get_LineCode()
extern "C"  String_t* LocalisedLine_get_LineCode_m381853006 (LocalisedLine_t3499156542 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Yarn.LocalisedLine::get_LineText()
extern "C"  String_t* LocalisedLine_get_LineText_m2638333447 (LocalisedLine_t3499156542 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m3977940946(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void Yarn.Unity.DialogueRunner::AddStringTable(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void DialogueRunner_AddStringTable_m2255326429 (DialogueRunner_t3655145191 * __this, Dictionary_2_t1632706988 * ___stringTable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.DialogueRunner::StartDialogue(System.String)
extern "C"  void DialogueRunner_StartDialogue_m917080516 (DialogueRunner_t3655145191 * __this, String_t* ___startNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C"  void MonoBehaviour_StopAllCoroutines_m3328507247 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Yarn.Unity.DialogueRunner::RunDialogue(System.String)
extern "C"  RuntimeObject* DialogueRunner_RunDialogue_m3837872158 (DialogueRunner_t3655145191 * __this, String_t* ___startNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::.ctor()
extern "C"  void U3CRunDialogueU3Ec__Iterator0__ctor_m2421397284 (U3CRunDialogueU3Ec__Iterator0_t386284222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Yarn.Unity.DialogueRunner::get_isDialogueRunning()
extern "C"  bool DialogueRunner_get_isDialogueRunning_m3536938159 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Dialogue::UnloadAll(System.Boolean)
extern "C"  void Dialogue_UnloadAll_m48858422 (Dialogue_t3789480790 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.DialogueRunner::set_isDialogueRunning(System.Boolean)
extern "C"  void DialogueRunner_set_isDialogueRunning_m1523374774 (DialogueRunner_t3655145191 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Dialogue::Stop()
extern "C"  void Dialogue_Stop_m2110180182 (Dialogue_t3789480790 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Yarn.Dialogue::NodeExists(System.String)
extern "C"  bool Dialogue_NodeExists_m4188989492 (Dialogue_t3789480790 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Yarn.Dialogue::get_currentNode()
extern "C"  String_t* Dialogue_get_currentNode_m690168057 (Dialogue_t3789480790 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String[]>::.ctor()
#define List_1__ctor_m1644775029(__this, method) ((  void (*) (List_1_t2753864082 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m3409323257(__this, p0, method) ((  void (*) (List_1_t3319525431 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m1321683783(__this, p0, p1, method) ((  void (*) (List_1_t3319525431 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m2428828636_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !!0[] UnityEngine.GameObject::GetComponents<UnityEngine.MonoBehaviour>()
#define GameObject_GetComponents_TisMonoBehaviour_t3962482529_m1010550534(__this, method) ((  MonoBehaviourU5BU5D_t2007329276* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1405838976_gshared)(__this, method)
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Type::GetMethods()
extern "C"  MethodInfoU5BU5D_t2572182361* Type_GetMethods_m65265826 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Yarn.Unity.YarnCommandAttribute::get_commandString()
extern "C"  String_t* YarnCommandAttribute_get_commandString_m1350367434 (YarnCommandAttribute_t3061396875 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m3983937259(__this, method) ((  StringU5BU5D_t1281789340* (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m2276455407(__this, method) ((  int32_t (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void UnityEngine.Debug::LogErrorFormat(UnityEngine.Object,System.String,System.Object[])
extern "C"  void Debug_LogErrorFormat_m3558239521 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String[]>::Add(!0)
#define List_1_Add_m3695741953(__this, p0, method) ((  void (*) (List_1_t2753864082 *, StringU5BU5D_t1281789340*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void UnityEngine.Debug::LogWarningFormat(UnityEngine.Object,System.String,System.Object[])
extern "C"  void Debug_LogWarningFormat_m1153215311 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String[]>::GetEnumerator()
#define List_1_GetEnumerator_m2391743910(__this, method) ((  Enumerator_t348140663  (*) (List_1_t2753864082 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.String[]>::get_Current()
#define Enumerator_get_Current_m1088469001(__this, method) ((  StringU5BU5D_t1281789340* (*) (Enumerator_t348140663 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String[]>::MoveNext()
#define Enumerator_MoveNext_m3696521377(__this, method) ((  bool (*) (Enumerator_t348140663 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.String[]>::Dispose()
#define Enumerator_Dispose_m1279945376(__this, method) ((  void (*) (Enumerator_t348140663 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
extern "C"  int32_t Application_get_systemLanguage_m3110370732 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Yarn.Dialogue/RunnerResult> Yarn.Dialogue::Run(System.String)
extern "C"  RuntimeObject* Dialogue_Run_m1133506791 (Dialogue_t3789480790 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Yarn.Unity.DialogueRunner::DispatchCommand(System.String)
extern "C"  bool DialogueRunner_DispatchCommand_m1217170754 (DialogueRunner_t3655145191 * __this, String_t* ___command0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::.ctor()
extern "C"  void U3CDialogueStartedU3Ec__Iterator0__ctor_m483658861 (U3CDialogueStartedU3Ec__Iterator0_t1414164849 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::.ctor()
extern "C"  void U3CNodeCompleteU3Ec__Iterator1__ctor_m36936213 (U3CNodeCompleteU3Ec__Iterator1_t1861394254 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::.ctor()
extern "C"  void U3CDialogueCompleteU3Ec__Iterator2__ctor_m2522183383 (U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<Yarn.Unity.DialogueRunner>()
#define Object_FindObjectOfType_TisDialogueRunner_t3655145191_m2051441236(__this /* static, unused */, method) ((  DialogueRunner_t3655145191 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m4191481190_gshared)(__this /* static, unused */, method)
// System.Void Yarn.Unity.DialogueRunner::AddScript(UnityEngine.TextAsset)
extern "C"  void DialogueRunner_AddScript_m1771112184 (DialogueRunner_t3655145191 * __this, TextAsset_t3022178571 * ___asset0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C"  Color_t2555686324  Color_get_blue_m3190273327 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C"  void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t1817901843  Matrix4x4_TRS_m3801934620 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Quaternion_t2301928331  p1, Vector3_t3722313464  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
extern "C"  void Gizmos_set_matrix_m3287403258 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
extern "C"  void Gizmos_DrawWireSphere_m132265467 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Yarn.Unity.Example.PlayerCharacter::get_movementFromButtons()
extern "C"  float PlayerCharacter_get_movementFromButtons_m742351861 (PlayerCharacter_t3157521029 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.Example.PlayerCharacter::CheckForNearbyNPC()
extern "C"  void PlayerCharacter_CheckForNearbyNPC_m4254660837 (PlayerCharacter_t3157521029 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Object::FindObjectsOfType<Yarn.Unity.Example.NPC>()
#define Object_FindObjectsOfType_TisNPC_t623034359_m2319331115(__this /* static, unused */, method) ((  NPCU5BU5D_t1030391374* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1831438261_gshared)(__this /* static, unused */, method)
// System.Void System.Collections.Generic.List`1<Yarn.Unity.Example.NPC>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m2919220833(__this, p0, method) ((  void (*) (List_1_t2095109101 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Predicate`1<Yarn.Unity.Example.NPC>::.ctor(System.Object,System.IntPtr)
#define Predicate_1__ctor_m1154457369(__this, p0, p1, method) ((  void (*) (Predicate_1_t1448328483 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m327447107_gshared)(__this, p0, p1, method)
// !0 System.Collections.Generic.List`1<Yarn.Unity.Example.NPC>::Find(System.Predicate`1<!0>)
#define List_1_Find_m2540802572(__this, p0, method) ((  NPC_t623034359 * (*) (List_1_t2095109101 *, Predicate_1_t1448328483 *, const RuntimeMethod*))List_1_Find_m2048854920_gshared)(__this, p0, method)
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m4089200052(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor()
extern "C"  void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Yarn.Unity.YarnCommandAttribute::set_commandString(System.String)
extern "C"  void YarnCommandAttribute_set_commandString_m903378172 (YarnCommandAttribute_t3061396875 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void ExampleDialogueUI::.ctor()
extern "C"  void ExampleDialogueUI__ctor_m1077401175 (ExampleDialogueUI_t4244439102 * __this, const RuntimeMethod* method)
{
	{
		__this->set_textSpeed_6((0.025f));
		DialogueUIBehaviour__ctor_m2305348317(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleDialogueUI::Update()
extern "C"  void ExampleDialogueUI_Update_m2166985994 (ExampleDialogueUI_t4244439102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_Update_m2166985994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_money_10();
		ExampleVariableStorage_t1372347222 * L_1 = __this->get_variableStorage_9();
		Value_t881556609 * L_2 = VirtFuncInvoker1< Value_t881556609 *, String_t* >::Invoke(8 /* Yarn.Value Yarn.Unity.VariableStorageBehaviour::GetValue(System.String) */, L_1, _stringLiteral3529553316);
		float L_3 = Value_get_AsNumber_m69121793(L_2, /*hidden argument*/NULL);
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2085849998, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		Text_t1901882714 * L_7 = __this->get_food_11();
		ExampleVariableStorage_t1372347222 * L_8 = __this->get_variableStorage_9();
		Value_t881556609 * L_9 = VirtFuncInvoker1< Value_t881556609 *, String_t* >::Invoke(8 /* Yarn.Value Yarn.Unity.VariableStorageBehaviour::GetValue(System.String) */, L_8, _stringLiteral1167832485);
		float L_10 = Value_get_AsNumber_m69121793(L_9, /*hidden argument*/NULL);
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral499779291, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_13);
		Text_t1901882714 * L_14 = __this->get_well_12();
		ExampleVariableStorage_t1372347222 * L_15 = __this->get_variableStorage_9();
		Value_t881556609 * L_16 = VirtFuncInvoker1< Value_t881556609 *, String_t* >::Invoke(8 /* Yarn.Value Yarn.Unity.VariableStorageBehaviour::GetValue(System.String) */, L_15, _stringLiteral3114692927);
		float L_17 = Value_get_AsNumber_m69121793(L_16, /*hidden argument*/NULL);
		float L_18 = L_17;
		RuntimeObject * L_19 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1949161934, L_19, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_20);
		return;
	}
}
// System.Void ExampleDialogueUI::Awake()
extern "C"  void ExampleDialogueUI_Awake_m3007356087 (ExampleDialogueUI_t4244439102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_Awake_m3007356087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t4055032469 * V_0 = NULL;
	Enumerator_t3121383792  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = __this->get_dialogueContainer_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_dialogueContainer_2();
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		Text_t1901882714 * L_3 = __this->get_lineText_3();
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		List_1_t1232139915 * L_5 = __this->get_optionButtons_7();
		Enumerator_t3121383792  L_6 = List_1_GetEnumerator_m2873996484(L_5, /*hidden argument*/List_1_GetEnumerator_m2873996484_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_003f:
		{
			Button_t4055032469 * L_7 = Enumerator_get_Current_m1139535682((&V_1), /*hidden argument*/Enumerator_get_Current_m1139535682_RuntimeMethod_var);
			V_0 = L_7;
			Button_t4055032469 * L_8 = V_0;
			GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
			GameObject_SetActive_m796801857(L_9, (bool)0, /*hidden argument*/NULL);
		}

IL_0053:
		{
			bool L_10 = Enumerator_MoveNext_m1799784902((&V_1), /*hidden argument*/Enumerator_MoveNext_m1799784902_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_003f;
			}
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4268479888((&V_1), /*hidden argument*/Enumerator_Dispose_m4268479888_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
	{
		GameObject_t1113636619 * L_11 = __this->get_continuePrompt_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		GameObject_t1113636619 * L_13 = __this->get_continuePrompt_4();
		GameObject_SetActive_m796801857(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_008f:
	{
		return;
	}
}
// System.Collections.IEnumerator ExampleDialogueUI::RunLine(Yarn.Line)
extern "C"  RuntimeObject* ExampleDialogueUI_RunLine_m3363845529 (ExampleDialogueUI_t4244439102 * __this, Line_t1630675273  ___line0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_RunLine_m3363845529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunLineU3Ec__Iterator0_t2630282661 * V_0 = NULL;
	{
		U3CRunLineU3Ec__Iterator0_t2630282661 * L_0 = (U3CRunLineU3Ec__Iterator0_t2630282661 *)il2cpp_codegen_object_new(U3CRunLineU3Ec__Iterator0_t2630282661_il2cpp_TypeInfo_var);
		U3CRunLineU3Ec__Iterator0__ctor_m1679631148(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRunLineU3Ec__Iterator0_t2630282661 * L_1 = V_0;
		Line_t1630675273  L_2 = ___line0;
		L_1->set_line_1(L_2);
		U3CRunLineU3Ec__Iterator0_t2630282661 * L_3 = V_0;
		L_3->set_U24this_5(__this);
		U3CRunLineU3Ec__Iterator0_t2630282661 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator ExampleDialogueUI::RunOptions(Yarn.Options,Yarn.OptionChooser)
extern "C"  RuntimeObject* ExampleDialogueUI_RunOptions_m3897047627 (ExampleDialogueUI_t4244439102 * __this, Options_t2066576969  ___optionsCollection0, OptionChooser_t101959131 * ___optionChooser1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_RunOptions_m3897047627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunOptionsU3Ec__Iterator1_t3229436336 * V_0 = NULL;
	{
		U3CRunOptionsU3Ec__Iterator1_t3229436336 * L_0 = (U3CRunOptionsU3Ec__Iterator1_t3229436336 *)il2cpp_codegen_object_new(U3CRunOptionsU3Ec__Iterator1_t3229436336_il2cpp_TypeInfo_var);
		U3CRunOptionsU3Ec__Iterator1__ctor_m1978151379(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRunOptionsU3Ec__Iterator1_t3229436336 * L_1 = V_0;
		Options_t2066576969  L_2 = ___optionsCollection0;
		L_1->set_optionsCollection_0(L_2);
		U3CRunOptionsU3Ec__Iterator1_t3229436336 * L_3 = V_0;
		OptionChooser_t101959131 * L_4 = ___optionChooser1;
		L_3->set_optionChooser_3(L_4);
		U3CRunOptionsU3Ec__Iterator1_t3229436336 * L_5 = V_0;
		L_5->set_U24this_5(__this);
		U3CRunOptionsU3Ec__Iterator1_t3229436336 * L_6 = V_0;
		return L_6;
	}
}
// System.Void ExampleDialogueUI::SetOption(System.Int32)
extern "C"  void ExampleDialogueUI_SetOption_m1462232001 (ExampleDialogueUI_t4244439102 * __this, int32_t ___selectedOption0, const RuntimeMethod* method)
{
	{
		OptionChooser_t101959131 * L_0 = __this->get_SetSelectedOption_5();
		int32_t L_1 = ___selectedOption0;
		OptionChooser_Invoke_m4031137224(L_0, L_1, /*hidden argument*/NULL);
		__this->set_SetSelectedOption_5((OptionChooser_t101959131 *)NULL);
		return;
	}
}
// System.Collections.IEnumerator ExampleDialogueUI::RunCommand(Yarn.Command)
extern "C"  RuntimeObject* ExampleDialogueUI_RunCommand_m2971340280 (ExampleDialogueUI_t4244439102 * __this, Command_t3409241122  ___command0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_RunCommand_m2971340280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunCommandU3Ec__Iterator2_t2265219509 * V_0 = NULL;
	{
		U3CRunCommandU3Ec__Iterator2_t2265219509 * L_0 = (U3CRunCommandU3Ec__Iterator2_t2265219509 *)il2cpp_codegen_object_new(U3CRunCommandU3Ec__Iterator2_t2265219509_il2cpp_TypeInfo_var);
		U3CRunCommandU3Ec__Iterator2__ctor_m854445952(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRunCommandU3Ec__Iterator2_t2265219509 * L_1 = V_0;
		Command_t3409241122  L_2 = ___command0;
		L_1->set_command_0(L_2);
		U3CRunCommandU3Ec__Iterator2_t2265219509 * L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator ExampleDialogueUI::DialogueStarted()
extern "C"  RuntimeObject* ExampleDialogueUI_DialogueStarted_m1959274686 (ExampleDialogueUI_t4244439102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_DialogueStarted_m1959274686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDialogueStartedU3Ec__Iterator3_t2346652362 * V_0 = NULL;
	{
		U3CDialogueStartedU3Ec__Iterator3_t2346652362 * L_0 = (U3CDialogueStartedU3Ec__Iterator3_t2346652362 *)il2cpp_codegen_object_new(U3CDialogueStartedU3Ec__Iterator3_t2346652362_il2cpp_TypeInfo_var);
		U3CDialogueStartedU3Ec__Iterator3__ctor_m1437391474(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDialogueStartedU3Ec__Iterator3_t2346652362 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CDialogueStartedU3Ec__Iterator3_t2346652362 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator ExampleDialogueUI::DialogueComplete()
extern "C"  RuntimeObject* ExampleDialogueUI_DialogueComplete_m2263387707 (ExampleDialogueUI_t4244439102 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_DialogueComplete_m2263387707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDialogueCompleteU3Ec__Iterator4_t163110549 * V_0 = NULL;
	{
		U3CDialogueCompleteU3Ec__Iterator4_t163110549 * L_0 = (U3CDialogueCompleteU3Ec__Iterator4_t163110549 *)il2cpp_codegen_object_new(U3CDialogueCompleteU3Ec__Iterator4_t163110549_il2cpp_TypeInfo_var);
		U3CDialogueCompleteU3Ec__Iterator4__ctor_m2155519926(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDialogueCompleteU3Ec__Iterator4_t163110549 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CDialogueCompleteU3Ec__Iterator4_t163110549 * L_2 = V_0;
		return L_2;
	}
}
// System.String ExampleDialogueUI::CheckVars(System.String)
extern "C"  String_t* ExampleDialogueUI_CheckVars_m1893885946 (ExampleDialogueUI_t4244439102 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_CheckVars_m1893885946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		V_1 = (bool)0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_2 = L_1;
		V_3 = 0;
		goto IL_008e;
	}

IL_0015:
	{
		String_t* L_2 = ___input0;
		int32_t L_3 = V_3;
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_2, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0030;
		}
	}
	{
		V_1 = (bool)1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_2 = L_5;
		goto IL_008a;
	}

IL_0030:
	{
		String_t* L_6 = ___input0;
		int32_t L_7 = V_3;
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0059;
		}
	}
	{
		V_1 = (bool)0;
		String_t* L_9 = V_0;
		String_t* L_10 = V_2;
		String_t* L_11 = ExampleDialogueUI_ParseVariable_m2353810914(__this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_2 = L_13;
		goto IL_008a;
	}

IL_0059:
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_15 = V_2;
		String_t* L_16 = ___input0;
		int32_t L_17 = V_3;
		Il2CppChar L_18 = String_get_Chars_m2986988803(L_16, L_17, /*hidden argument*/NULL);
		Il2CppChar L_19 = L_18;
		RuntimeObject * L_20 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m904156431(NULL /*static, unused*/, L_15, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		goto IL_008a;
	}

IL_0077:
	{
		String_t* L_22 = V_0;
		String_t* L_23 = ___input0;
		int32_t L_24 = V_3;
		Il2CppChar L_25 = String_get_Chars_m2986988803(L_23, L_24, /*hidden argument*/NULL);
		Il2CppChar L_26 = L_25;
		RuntimeObject * L_27 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m904156431(NULL /*static, unused*/, L_22, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_008a:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_008e:
	{
		int32_t L_30 = V_3;
		String_t* L_31 = ___input0;
		int32_t L_32 = String_get_Length_m3847582255(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_33 = V_0;
		return L_33;
	}
}
// System.String ExampleDialogueUI::ParseVariable(System.String)
extern "C"  String_t* ExampleDialogueUI_ParseVariable_m2353810914 (ExampleDialogueUI_t4244439102 * __this, String_t* ___varName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleDialogueUI_ParseVariable_m2353810914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		ExampleVariableStorage_t1372347222 * L_0 = __this->get_variableStorage_9();
		String_t* L_1 = ___varName0;
		Value_t881556609 * L_2 = VirtFuncInvoker1< Value_t881556609 *, String_t* >::Invoke(8 /* Yarn.Value Yarn.Unity.VariableStorageBehaviour::GetValue(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Value_t881556609_il2cpp_TypeInfo_var);
		Value_t881556609 * L_3 = ((Value_t881556609_StaticFields*)il2cpp_codegen_static_fields_for(Value_t881556609_il2cpp_TypeInfo_var))->get_NULL_0();
		if ((((RuntimeObject*)(Value_t881556609 *)L_2) == ((RuntimeObject*)(Value_t881556609 *)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		ExampleVariableStorage_t1372347222 * L_4 = __this->get_variableStorage_9();
		String_t* L_5 = ___varName0;
		Value_t881556609 * L_6 = VirtFuncInvoker1< Value_t881556609 *, String_t* >::Invoke(8 /* Yarn.Value Yarn.Unity.VariableStorageBehaviour::GetValue(System.String) */, L_4, L_5);
		String_t* L_7 = Value_get_AsString_m2163309914(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0028:
	{
		String_t* L_8 = ___varName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, _stringLiteral2395666946, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		float L_10 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = Single_ToString_m3947131094((&V_0), /*hidden argument*/NULL);
		return L_11;
	}

IL_004c:
	{
		String_t* L_12 = ___varName0;
		return L_12;
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
// System.Void ExampleDialogueUI/<DialogueComplete>c__Iterator4::.ctor()
extern "C"  void U3CDialogueCompleteU3Ec__Iterator4__ctor_m2155519926 (U3CDialogueCompleteU3Ec__Iterator4_t163110549 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExampleDialogueUI/<DialogueComplete>c__Iterator4::MoveNext()
extern "C"  bool U3CDialogueCompleteU3Ec__Iterator4_MoveNext_m1940120515 (U3CDialogueCompleteU3Ec__Iterator4_t163110549 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDialogueCompleteU3Ec__Iterator4_MoveNext_m1940120515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_U24PC_3();
		__this->set_U24PC_3((-1));
		if (L_0)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1125101030, /*hidden argument*/NULL);
		ExampleDialogueUI_t4244439102 * L_1 = __this->get_U24this_0();
		GameObject_t1113636619 * L_2 = L_1->get_dialogueContainer_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		ExampleDialogueUI_t4244439102 * L_4 = __this->get_U24this_0();
		GameObject_t1113636619 * L_5 = L_4->get_dialogueContainer_2();
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		ExampleDialogueUI_t4244439102 * L_6 = __this->get_U24this_0();
		RectTransform_t3704657025 * L_7 = L_6->get_gameControlsContainer_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		ExampleDialogueUI_t4244439102 * L_9 = __this->get_U24this_0();
		RectTransform_t3704657025 * L_10 = L_9->get_gameControlsContainer_8();
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_006f:
	{
		goto IL_0074;
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Object ExampleDialogueUI/<DialogueComplete>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDialogueCompleteU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1815362687 (U3CDialogueCompleteU3Ec__Iterator4_t163110549 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object ExampleDialogueUI/<DialogueComplete>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDialogueCompleteU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m3068612273 (U3CDialogueCompleteU3Ec__Iterator4_t163110549 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void ExampleDialogueUI/<DialogueComplete>c__Iterator4::Dispose()
extern "C"  void U3CDialogueCompleteU3Ec__Iterator4_Dispose_m4221307456 (U3CDialogueCompleteU3Ec__Iterator4_t163110549 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ExampleDialogueUI/<DialogueComplete>c__Iterator4::Reset()
extern "C"  void U3CDialogueCompleteU3Ec__Iterator4_Reset_m2083668477 (U3CDialogueCompleteU3Ec__Iterator4_t163110549 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDialogueCompleteU3Ec__Iterator4_Reset_m2083668477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void ExampleDialogueUI/<DialogueStarted>c__Iterator3::.ctor()
extern "C"  void U3CDialogueStartedU3Ec__Iterator3__ctor_m1437391474 (U3CDialogueStartedU3Ec__Iterator3_t2346652362 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExampleDialogueUI/<DialogueStarted>c__Iterator3::MoveNext()
extern "C"  bool U3CDialogueStartedU3Ec__Iterator3_MoveNext_m1414077673 (U3CDialogueStartedU3Ec__Iterator3_t2346652362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDialogueStartedU3Ec__Iterator3_MoveNext_m1414077673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_U24PC_3();
		__this->set_U24PC_3((-1));
		if (L_0)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1071301008, /*hidden argument*/NULL);
		ExampleDialogueUI_t4244439102 * L_1 = __this->get_U24this_0();
		GameObject_t1113636619 * L_2 = L_1->get_dialogueContainer_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		ExampleDialogueUI_t4244439102 * L_4 = __this->get_U24this_0();
		GameObject_t1113636619 * L_5 = L_4->get_dialogueContainer_2();
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_0043:
	{
		ExampleDialogueUI_t4244439102 * L_6 = __this->get_U24this_0();
		RectTransform_t3704657025 * L_7 = L_6->get_gameControlsContainer_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		ExampleDialogueUI_t4244439102 * L_9 = __this->get_U24this_0();
		RectTransform_t3704657025 * L_10 = L_9->get_gameControlsContainer_8();
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_006f:
	{
		goto IL_0074;
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Object ExampleDialogueUI/<DialogueStarted>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDialogueStartedU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2632891615 (U3CDialogueStartedU3Ec__Iterator3_t2346652362 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object ExampleDialogueUI/<DialogueStarted>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDialogueStartedU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m4254396945 (U3CDialogueStartedU3Ec__Iterator3_t2346652362 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void ExampleDialogueUI/<DialogueStarted>c__Iterator3::Dispose()
extern "C"  void U3CDialogueStartedU3Ec__Iterator3_Dispose_m1882875634 (U3CDialogueStartedU3Ec__Iterator3_t2346652362 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ExampleDialogueUI/<DialogueStarted>c__Iterator3::Reset()
extern "C"  void U3CDialogueStartedU3Ec__Iterator3_Reset_m1625103898 (U3CDialogueStartedU3Ec__Iterator3_t2346652362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDialogueStartedU3Ec__Iterator3_Reset_m1625103898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void ExampleDialogueUI/<RunCommand>c__Iterator2::.ctor()
extern "C"  void U3CRunCommandU3Ec__Iterator2__ctor_m854445952 (U3CRunCommandU3Ec__Iterator2_t2265219509 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExampleDialogueUI/<RunCommand>c__Iterator2::MoveNext()
extern "C"  bool U3CRunCommandU3Ec__Iterator2_MoveNext_m252438833 (U3CRunCommandU3Ec__Iterator2_t2265219509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunCommandU3Ec__Iterator2_MoveNext_m252438833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_U24PC_3();
		__this->set_U24PC_3((-1));
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		Command_t3409241122 * L_1 = __this->get_address_of_command_0();
		String_t* L_2 = L_1->get_text_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2660104188, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0031:
	{
		return (bool)0;
	}
}
// System.Object ExampleDialogueUI/<RunCommand>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CRunCommandU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m909981922 (U3CRunCommandU3Ec__Iterator2_t2265219509 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object ExampleDialogueUI/<RunCommand>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CRunCommandU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m1224609253 (U3CRunCommandU3Ec__Iterator2_t2265219509 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void ExampleDialogueUI/<RunCommand>c__Iterator2::Dispose()
extern "C"  void U3CRunCommandU3Ec__Iterator2_Dispose_m3619443939 (U3CRunCommandU3Ec__Iterator2_t2265219509 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ExampleDialogueUI/<RunCommand>c__Iterator2::Reset()
extern "C"  void U3CRunCommandU3Ec__Iterator2_Reset_m4227997529 (U3CRunCommandU3Ec__Iterator2_t2265219509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunCommandU3Ec__Iterator2_Reset_m4227997529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void ExampleDialogueUI/<RunLine>c__Iterator0::.ctor()
extern "C"  void U3CRunLineU3Ec__Iterator0__ctor_m1679631148 (U3CRunLineU3Ec__Iterator0_t2630282661 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExampleDialogueUI/<RunLine>c__Iterator0::MoveNext()
extern "C"  bool U3CRunLineU3Ec__Iterator0_MoveNext_m2522026433 (U3CRunLineU3Ec__Iterator0_t2630282661 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunLineU3Ec__Iterator0_MoveNext_m2522026433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_0187;
			}
		}
	}
	{
		goto IL_01d5;
	}

IL_0025:
	{
		ExampleDialogueUI_t4244439102 * L_2 = __this->get_U24this_5();
		Text_t1901882714 * L_3 = L_2->get_lineText_3();
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		ExampleDialogueUI_t4244439102 * L_5 = __this->get_U24this_5();
		float L_6 = L_5->get_textSpeed_6();
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_011a;
		}
	}
	{
		StringBuilder_t * L_7 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_7, /*hidden argument*/NULL);
		__this->set_U3CstringBuilderU3E__1_0(L_7);
		ExampleDialogueUI_t4244439102 * L_8 = __this->get_U24this_5();
		Line_t1630675273 * L_9 = __this->get_address_of_line_1();
		String_t* L_10 = L_9->get_text_0();
		String_t* L_11 = ExampleDialogueUI_CheckVars_m1893885946(L_8, L_10, /*hidden argument*/NULL);
		__this->set_U24locvar0_2(L_11);
		__this->set_U24locvar1_3(0);
		goto IL_00ff;
	}

IL_0083:
	{
		String_t* L_12 = __this->get_U24locvar0_2();
		int32_t L_13 = __this->get_U24locvar1_3();
		Il2CppChar L_14 = String_get_Chars_m2986988803(L_12, L_13, /*hidden argument*/NULL);
		__this->set_U3CcU3E__2_4(L_14);
		StringBuilder_t * L_15 = __this->get_U3CstringBuilderU3E__1_0();
		Il2CppChar L_16 = __this->get_U3CcU3E__2_4();
		StringBuilder_Append_m2383614642(L_15, L_16, /*hidden argument*/NULL);
		ExampleDialogueUI_t4244439102 * L_17 = __this->get_U24this_5();
		Text_t1901882714 * L_18 = L_17->get_lineText_3();
		StringBuilder_t * L_19 = __this->get_U3CstringBuilderU3E__1_0();
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		ExampleDialogueUI_t4244439102 * L_21 = __this->get_U24this_5();
		float L_22 = L_21->get_textSpeed_6();
		WaitForSeconds_t1699091251 * L_23 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_23, L_22, /*hidden argument*/NULL);
		__this->set_U24current_6(L_23);
		bool L_24 = __this->get_U24disposing_7();
		if (L_24)
		{
			goto IL_00ec;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_00ec:
	{
		goto IL_01d7;
	}

IL_00f1:
	{
		int32_t L_25 = __this->get_U24locvar1_3();
		__this->set_U24locvar1_3(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
	}

IL_00ff:
	{
		int32_t L_26 = __this->get_U24locvar1_3();
		String_t* L_27 = __this->get_U24locvar0_2();
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0083;
		}
	}
	{
		goto IL_0140;
	}

IL_011a:
	{
		ExampleDialogueUI_t4244439102 * L_29 = __this->get_U24this_5();
		Text_t1901882714 * L_30 = L_29->get_lineText_3();
		ExampleDialogueUI_t4244439102 * L_31 = __this->get_U24this_5();
		Line_t1630675273 * L_32 = __this->get_address_of_line_1();
		String_t* L_33 = L_32->get_text_0();
		String_t* L_34 = ExampleDialogueUI_CheckVars_m1893885946(L_31, L_33, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_34);
	}

IL_0140:
	{
		ExampleDialogueUI_t4244439102 * L_35 = __this->get_U24this_5();
		GameObject_t1113636619 * L_36 = L_35->get_continuePrompt_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_37 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_36, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0167;
		}
	}
	{
		ExampleDialogueUI_t4244439102 * L_38 = __this->get_U24this_5();
		GameObject_t1113636619 * L_39 = L_38->get_continuePrompt_4();
		GameObject_SetActive_m796801857(L_39, (bool)1, /*hidden argument*/NULL);
	}

IL_0167:
	{
		goto IL_0187;
	}

IL_016c:
	{
		__this->set_U24current_6(NULL);
		bool L_40 = __this->get_U24disposing_7();
		if (L_40)
		{
			goto IL_0182;
		}
	}
	{
		__this->set_U24PC_8(2);
	}

IL_0182:
	{
		goto IL_01d7;
	}

IL_0187:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_41 = Input_get_anyKeyDown_m1564765341(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_016c;
		}
	}
	{
		ExampleDialogueUI_t4244439102 * L_42 = __this->get_U24this_5();
		Text_t1901882714 * L_43 = L_42->get_lineText_3();
		GameObject_t1113636619 * L_44 = Component_get_gameObject_m442555142(L_43, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_44, (bool)0, /*hidden argument*/NULL);
		ExampleDialogueUI_t4244439102 * L_45 = __this->get_U24this_5();
		GameObject_t1113636619 * L_46 = L_45->get_continuePrompt_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_47 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_46, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01ce;
		}
	}
	{
		ExampleDialogueUI_t4244439102 * L_48 = __this->get_U24this_5();
		GameObject_t1113636619 * L_49 = L_48->get_continuePrompt_4();
		GameObject_SetActive_m796801857(L_49, (bool)0, /*hidden argument*/NULL);
	}

IL_01ce:
	{
		__this->set_U24PC_8((-1));
	}

IL_01d5:
	{
		return (bool)0;
	}

IL_01d7:
	{
		return (bool)1;
	}
}
// System.Object ExampleDialogueUI/<RunLine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CRunLineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2182300529 (U3CRunLineU3Ec__Iterator0_t2630282661 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object ExampleDialogueUI/<RunLine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CRunLineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3584867724 (U3CRunLineU3Ec__Iterator0_t2630282661 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void ExampleDialogueUI/<RunLine>c__Iterator0::Dispose()
extern "C"  void U3CRunLineU3Ec__Iterator0_Dispose_m1509979664 (U3CRunLineU3Ec__Iterator0_t2630282661 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void ExampleDialogueUI/<RunLine>c__Iterator0::Reset()
extern "C"  void U3CRunLineU3Ec__Iterator0_Reset_m2754916848 (U3CRunLineU3Ec__Iterator0_t2630282661 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunLineU3Ec__Iterator0_Reset_m2754916848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void ExampleDialogueUI/<RunOptions>c__Iterator1::.ctor()
extern "C"  void U3CRunOptionsU3Ec__Iterator1__ctor_m1978151379 (U3CRunOptionsU3Ec__Iterator1_t3229436336 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExampleDialogueUI/<RunOptions>c__Iterator1::MoveNext()
extern "C"  bool U3CRunOptionsU3Ec__Iterator1_MoveNext_m854050396 (U3CRunOptionsU3Ec__Iterator1_t3229436336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunOptionsU3Ec__Iterator1_MoveNext_m854050396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	Button_t4055032469 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_012b;
			}
		}
	}
	{
		goto IL_019c;
	}

IL_0021:
	{
		Options_t2066576969 * L_2 = __this->get_address_of_optionsCollection_0();
		RuntimeObject* L_3 = L_2->get_options_0();
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_3);
		ExampleDialogueUI_t4244439102 * L_5 = __this->get_U24this_5();
		List_1_t1232139915 * L_6 = L_5->get_optionButtons_7();
		int32_t L_7 = List_1_get_Count_m2761165869(L_6, /*hidden argument*/List_1_get_Count_m2761165869_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)L_7)))
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1906315872, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->set_U3CiU3E__0_1(0);
		Options_t2066576969 * L_8 = __this->get_address_of_optionsCollection_0();
		RuntimeObject* L_9 = L_8->get_options_0();
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t827303578_il2cpp_TypeInfo_var, L_9);
		__this->set_U24locvar0_2(L_10);
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ce;
		}

IL_0072:
		{
			RuntimeObject* L_11 = __this->get_U24locvar0_2();
			String_t* L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t2280021157_il2cpp_TypeInfo_var, L_11);
			V_1 = L_12;
			ExampleDialogueUI_t4244439102 * L_13 = __this->get_U24this_5();
			List_1_t1232139915 * L_14 = L_13->get_optionButtons_7();
			int32_t L_15 = __this->get_U3CiU3E__0_1();
			Button_t4055032469 * L_16 = List_1_get_Item_m733523066(L_14, L_15, /*hidden argument*/List_1_get_Item_m733523066_RuntimeMethod_var);
			GameObject_t1113636619 * L_17 = Component_get_gameObject_m442555142(L_16, /*hidden argument*/NULL);
			GameObject_SetActive_m796801857(L_17, (bool)1, /*hidden argument*/NULL);
			ExampleDialogueUI_t4244439102 * L_18 = __this->get_U24this_5();
			List_1_t1232139915 * L_19 = L_18->get_optionButtons_7();
			int32_t L_20 = __this->get_U3CiU3E__0_1();
			Button_t4055032469 * L_21 = List_1_get_Item_m733523066(L_19, L_20, /*hidden argument*/List_1_get_Item_m733523066_RuntimeMethod_var);
			Text_t1901882714 * L_22 = Component_GetComponentInChildren_TisText_t1901882714_m970686954(L_21, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m970686954_RuntimeMethod_var);
			String_t* L_23 = V_1;
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_23);
			int32_t L_24 = __this->get_U3CiU3E__0_1();
			__this->set_U3CiU3E__0_1(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		}

IL_00ce:
		{
			RuntimeObject* L_25 = __this->get_U24locvar0_2();
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0072;
			}
		}

IL_00de:
		{
			IL2CPP_LEAVE(0xFA, FINALLY_00e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e3;
	}

FINALLY_00e3:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = __this->get_U24locvar0_2();
			if (!L_27)
			{
				goto IL_00f9;
			}
		}

IL_00ee:
		{
			RuntimeObject* L_28 = __this->get_U24locvar0_2();
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_28);
		}

IL_00f9:
		{
			IL2CPP_END_FINALLY(227)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_JUMP_TBL(0xFA, IL_00fa)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fa:
	{
		ExampleDialogueUI_t4244439102 * L_29 = __this->get_U24this_5();
		OptionChooser_t101959131 * L_30 = __this->get_optionChooser_3();
		L_29->set_SetSelectedOption_5(L_30);
		goto IL_012b;
	}

IL_0110:
	{
		__this->set_U24current_6(NULL);
		bool L_31 = __this->get_U24disposing_7();
		if (L_31)
		{
			goto IL_0126;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_0126:
	{
		goto IL_019e;
	}

IL_012b:
	{
		ExampleDialogueUI_t4244439102 * L_32 = __this->get_U24this_5();
		OptionChooser_t101959131 * L_33 = L_32->get_SetSelectedOption_5();
		if (L_33)
		{
			goto IL_0110;
		}
	}
	{
		ExampleDialogueUI_t4244439102 * L_34 = __this->get_U24this_5();
		List_1_t1232139915 * L_35 = L_34->get_optionButtons_7();
		Enumerator_t3121383792  L_36 = List_1_GetEnumerator_m2873996484(L_35, /*hidden argument*/List_1_GetEnumerator_m2873996484_RuntimeMethod_var);
		__this->set_U24locvar1_4(L_36);
	}

IL_0151:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016e;
		}

IL_0156:
		{
			Enumerator_t3121383792 * L_37 = __this->get_address_of_U24locvar1_4();
			Button_t4055032469 * L_38 = Enumerator_get_Current_m1139535682(L_37, /*hidden argument*/Enumerator_get_Current_m1139535682_RuntimeMethod_var);
			V_2 = L_38;
			Button_t4055032469 * L_39 = V_2;
			GameObject_t1113636619 * L_40 = Component_get_gameObject_m442555142(L_39, /*hidden argument*/NULL);
			GameObject_SetActive_m796801857(L_40, (bool)0, /*hidden argument*/NULL);
		}

IL_016e:
		{
			Enumerator_t3121383792 * L_41 = __this->get_address_of_U24locvar1_4();
			bool L_42 = Enumerator_MoveNext_m1799784902(L_41, /*hidden argument*/Enumerator_MoveNext_m1799784902_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_0156;
			}
		}

IL_017e:
		{
			IL2CPP_LEAVE(0x195, FINALLY_0183);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0183;
	}

FINALLY_0183:
	{ // begin finally (depth: 1)
		Enumerator_t3121383792 * L_43 = __this->get_address_of_U24locvar1_4();
		Enumerator_Dispose_m4268479888(L_43, /*hidden argument*/Enumerator_Dispose_m4268479888_RuntimeMethod_var);
		IL2CPP_END_FINALLY(387)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(387)
	{
		IL2CPP_JUMP_TBL(0x195, IL_0195)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0195:
	{
		__this->set_U24PC_8((-1));
	}

IL_019c:
	{
		return (bool)0;
	}

IL_019e:
	{
		return (bool)1;
	}
}
// System.Object ExampleDialogueUI/<RunOptions>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CRunOptionsU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1051571902 (U3CRunOptionsU3Ec__Iterator1_t3229436336 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object ExampleDialogueUI/<RunOptions>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CRunOptionsU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3230207053 (U3CRunOptionsU3Ec__Iterator1_t3229436336 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void ExampleDialogueUI/<RunOptions>c__Iterator1::Dispose()
extern "C"  void U3CRunOptionsU3Ec__Iterator1_Dispose_m3553447268 (U3CRunOptionsU3Ec__Iterator1_t3229436336 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void ExampleDialogueUI/<RunOptions>c__Iterator1::Reset()
extern "C"  void U3CRunOptionsU3Ec__Iterator1_Reset_m3795277266 (U3CRunOptionsU3Ec__Iterator1_t3229436336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunOptionsU3Ec__Iterator1_Reset_m3795277266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void ExampleVariableStorage::.ctor()
extern "C"  void ExampleVariableStorage__ctor_m661885336 (ExampleVariableStorage_t1372347222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleVariableStorage__ctor_m661885336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t666812908 * L_0 = (Dictionary_2_t666812908 *)il2cpp_codegen_object_new(Dictionary_2_t666812908_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m709135621(L_0, /*hidden argument*/Dictionary_2__ctor_m709135621_RuntimeMethod_var);
		__this->set_variables_2(L_0);
		VariableStorageBehaviour__ctor_m1496518374(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExampleVariableStorage::Awake()
extern "C"  void ExampleVariableStorage_Awake_m3038114375 (ExampleVariableStorage_t1372347222 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(11 /* System.Void Yarn.Unity.VariableStorageBehaviour::ResetToDefaults() */, __this);
		return;
	}
}
// System.Void ExampleVariableStorage::ResetToDefaults()
extern "C"  void ExampleVariableStorage_ResetToDefaults_m1033294291 (ExampleVariableStorage_t1372347222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleVariableStorage_ResetToDefaults_m1033294291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DefaultVariable_t730926445 * V_0 = NULL;
	DefaultVariableU5BU5D_t403142208* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	bool V_6 = false;
	Value_t881556609 * V_7 = NULL;
	{
		VirtActionInvoker0::Invoke(10 /* System.Void Yarn.Unity.VariableStorageBehaviour::Clear() */, __this);
		DefaultVariableU5BU5D_t403142208* L_0 = __this->get_defaultVariables_3();
		V_1 = L_0;
		V_2 = 0;
		goto IL_00e4;
	}

IL_0014:
	{
		DefaultVariableU5BU5D_t403142208* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		DefaultVariable_t730926445 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		DefaultVariable_t730926445 * L_5 = V_0;
		int32_t L_6 = L_5->get_type_2();
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (L_7)
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_006e;
			}
			case 3:
			{
				goto IL_008c;
			}
			case 4:
			{
				goto IL_00b3;
			}
		}
	}
	{
		goto IL_00ba;
	}

IL_0040:
	{
		V_5 = (0.0f);
		DefaultVariable_t730926445 * L_8 = V_0;
		String_t* L_9 = L_8->get_value_1();
		Single_TryParse_m4264970052(NULL /*static, unused*/, L_9, (&V_5), /*hidden argument*/NULL);
		float L_10 = V_5;
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		V_3 = L_12;
		goto IL_00c0;
	}

IL_0062:
	{
		DefaultVariable_t730926445 * L_13 = V_0;
		String_t* L_14 = L_13->get_value_1();
		V_3 = L_14;
		goto IL_00c0;
	}

IL_006e:
	{
		V_6 = (bool)0;
		DefaultVariable_t730926445 * L_15 = V_0;
		String_t* L_16 = L_15->get_value_1();
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t97287965_il2cpp_TypeInfo_var);
		Boolean_TryParse_m1999513058(NULL /*static, unused*/, L_16, (&V_6), /*hidden argument*/NULL);
		bool L_17 = V_6;
		bool L_18 = L_17;
		RuntimeObject * L_19 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_18);
		V_3 = L_19;
		goto IL_00c0;
	}

IL_008c:
	{
		ObjectU5BU5D_t2843939325* L_20 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		DefaultVariable_t730926445 * L_21 = V_0;
		String_t* L_22 = L_21->get_name_0();
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_22);
		ObjectU5BU5D_t2843939325* L_23 = L_20;
		DefaultVariable_t730926445 * L_24 = V_0;
		String_t* L_25 = L_24->get_value_1();
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m575266265(NULL /*static, unused*/, _stringLiteral2923956810, L_23, /*hidden argument*/NULL);
		goto IL_00e0;
	}

IL_00b3:
	{
		V_3 = NULL;
		goto IL_00c0;
	}

IL_00ba:
	{
		ArgumentOutOfRangeException_t777629997 * L_26 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26);
	}

IL_00c0:
	{
		RuntimeObject * L_27 = V_3;
		Value_t881556609 * L_28 = (Value_t881556609 *)il2cpp_codegen_object_new(Value_t881556609_il2cpp_TypeInfo_var);
		Value__ctor_m1179715953(L_28, L_27, /*hidden argument*/NULL);
		V_7 = L_28;
		DefaultVariable_t730926445 * L_29 = V_0;
		String_t* L_30 = L_29->get_name_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614524, L_30, /*hidden argument*/NULL);
		Value_t881556609 * L_32 = V_7;
		VirtActionInvoker2< String_t*, Value_t881556609 * >::Invoke(9 /* System.Void Yarn.Unity.VariableStorageBehaviour::SetValue(System.String,Yarn.Value) */, __this, L_31, L_32);
	}

IL_00e0:
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00e4:
	{
		int32_t L_34 = V_2;
		DefaultVariableU5BU5D_t403142208* L_35 = V_1;
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void ExampleVariableStorage::SetValue(System.String,Yarn.Value)
extern "C"  void ExampleVariableStorage_SetValue_m3070257014 (ExampleVariableStorage_t1372347222 * __this, String_t* ___variableName0, Value_t881556609 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleVariableStorage_SetValue_m3070257014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t666812908 * L_0 = __this->get_variables_2();
		String_t* L_1 = ___variableName0;
		Value_t881556609 * L_2 = ___value1;
		Value_t881556609 * L_3 = (Value_t881556609 *)il2cpp_codegen_object_new(Value_t881556609_il2cpp_TypeInfo_var);
		Value__ctor_m1179715953(L_3, L_2, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m1636383447(L_0, L_1, L_3, /*hidden argument*/Dictionary_2_set_Item_m1636383447_RuntimeMethod_var);
		return;
	}
}
// Yarn.Value ExampleVariableStorage::GetValue(System.String)
extern "C"  Value_t881556609 * ExampleVariableStorage_GetValue_m1687377792 (ExampleVariableStorage_t1372347222 * __this, String_t* ___variableName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleVariableStorage_GetValue_m1687377792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t666812908 * L_0 = __this->get_variables_2();
		String_t* L_1 = ___variableName0;
		bool L_2 = Dictionary_2_ContainsKey_m2215268282(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m2215268282_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Value_t881556609_il2cpp_TypeInfo_var);
		Value_t881556609 * L_3 = ((Value_t881556609_StaticFields*)il2cpp_codegen_static_fields_for(Value_t881556609_il2cpp_TypeInfo_var))->get_NULL_0();
		return L_3;
	}

IL_0017:
	{
		Dictionary_2_t666812908 * L_4 = __this->get_variables_2();
		String_t* L_5 = ___variableName0;
		Value_t881556609 * L_6 = Dictionary_2_get_Item_m1350177375(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m1350177375_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void ExampleVariableStorage::Clear()
extern "C"  void ExampleVariableStorage_Clear_m1909965068 (ExampleVariableStorage_t1372347222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleVariableStorage_Clear_m1909965068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t666812908 * L_0 = __this->get_variables_2();
		Dictionary_2_Clear_m2842195990(L_0, /*hidden argument*/Dictionary_2_Clear_m2842195990_RuntimeMethod_var);
		return;
	}
}
// System.Void ExampleVariableStorage::Update()
extern "C"  void ExampleVariableStorage_Update_m2167185522 (ExampleVariableStorage_t1372347222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExampleVariableStorage_Update_m2167185522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	KeyValuePair_2_t3064485075  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t2620995683  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Text_t1901882714 * L_0 = __this->get_debugTextView_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007f;
		}
	}
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		Dictionary_2_t666812908 * L_3 = __this->get_variables_2();
		Enumerator_t2620995683  L_4 = Dictionary_2_GetEnumerator_m1675868483(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m1675868483_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_0028:
		{
			KeyValuePair_2_t3064485075  L_5 = Enumerator_get_Current_m1381002348((&V_2), /*hidden argument*/Enumerator_get_Current_m1381002348_RuntimeMethod_var);
			V_1 = L_5;
			StringBuilder_t * L_6 = V_0;
			String_t* L_7 = KeyValuePair_2_get_Key_m675960855((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m675960855_RuntimeMethod_var);
			Value_t881556609 * L_8 = KeyValuePair_2_get_Value_m267502843((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m267502843_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3660674904, L_7, L_8, /*hidden argument*/NULL);
			StringBuilder_AppendLine_m1438862993(L_6, L_9, /*hidden argument*/NULL);
		}

IL_004f:
		{
			bool L_10 = Enumerator_MoveNext_m1849118330((&V_2), /*hidden argument*/Enumerator_MoveNext_m1849118330_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0028;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m645817517((&V_2), /*hidden argument*/Enumerator_Dispose_m645817517_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		Text_t1901882714 * L_11 = __this->get_debugTextView_4();
		StringBuilder_t * L_12 = V_0;
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
	}

IL_007f:
	{
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
// System.Void ExampleVariableStorage/DefaultVariable::.ctor()
extern "C"  void DefaultVariable__ctor_m4151609096 (DefaultVariable_t730926445 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void MobileOnly::.ctor()
extern "C"  void MobileOnly__ctor_m4005256763 (MobileOnly_t759008739 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MobileOnly::Awake()
extern "C"  void MobileOnly_Awake_m2228041044 (MobileOnly_t759008739 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MobileOnly_Awake_m2228041044_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Application_get_isMobilePlatform_m751658814(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_001b;
		}
	}

IL_0016:
	{
		goto IL_0026;
	}

IL_001b:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
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
// System.Void Yarn.Unity.DialogueRunner::.ctor()
extern "C"  void DialogueRunner__ctor_m1279525964 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner__ctor_m1279525964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_overrideLanguage_5(((int32_t)10));
		__this->set_startNode_8(_stringLiteral2707270972);
		__this->set_startAutomatically_9((bool)1);
		__this->set_automaticCommands_11((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Yarn.Unity.DialogueRunner::get_isDialogueRunning()
extern "C"  bool DialogueRunner_get_isDialogueRunning_m3536938159 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisDialogueRunningU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Yarn.Unity.DialogueRunner::set_isDialogueRunning(System.Boolean)
extern "C"  void DialogueRunner_set_isDialogueRunning_m1523374774 (DialogueRunner_t3655145191 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisDialogueRunningU3Ek__BackingField_10(L_0);
		return;
	}
}
// Yarn.Dialogue Yarn.Unity.DialogueRunner::get_dialogue()
extern "C"  Dialogue_t3789480790 * DialogueRunner_get_dialogue_m939767586 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_get_dialogue_m939767586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dialogue_t3789480790 * G_B3_0 = NULL;
	Dialogue_t3789480790 * G_B2_0 = NULL;
	Dialogue_t3789480790 * G_B5_0 = NULL;
	Dialogue_t3789480790 * G_B4_0 = NULL;
	{
		Dialogue_t3789480790 * L_0 = __this->get__dialogue_12();
		if (L_0)
		{
			goto IL_006c;
		}
	}
	{
		VariableStorageBehaviour_t3802685183 * L_1 = __this->get_variableStorage_6();
		Dialogue_t3789480790 * L_2 = (Dialogue_t3789480790 *)il2cpp_codegen_object_new(Dialogue_t3789480790_il2cpp_TypeInfo_var);
		Dialogue__ctor_m193580772(L_2, L_1, /*hidden argument*/NULL);
		__this->set__dialogue_12(L_2);
		Dialogue_t3789480790 * L_3 = __this->get__dialogue_12();
		Logger_t1351394572 * L_4 = ((DialogueRunner_t3655145191_StaticFields*)il2cpp_codegen_static_fields_for(DialogueRunner_t3655145191_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_13();
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_003a;
		}
	}
	{
		intptr_t L_5 = (intptr_t)DialogueRunner_U3Cget_dialogueU3Em__0_m1313327199_RuntimeMethod_var;
		Logger_t1351394572 * L_6 = (Logger_t1351394572 *)il2cpp_codegen_object_new(Logger_t1351394572_il2cpp_TypeInfo_var);
		Logger__ctor_m2980890779(L_6, NULL, L_5, /*hidden argument*/NULL);
		((DialogueRunner_t3655145191_StaticFields*)il2cpp_codegen_static_fields_for(DialogueRunner_t3655145191_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_13(L_6);
		G_B3_0 = G_B2_0;
	}

IL_003a:
	{
		Logger_t1351394572 * L_7 = ((DialogueRunner_t3655145191_StaticFields*)il2cpp_codegen_static_fields_for(DialogueRunner_t3655145191_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_13();
		G_B3_0->set_LogDebugMessage_2(L_7);
		Dialogue_t3789480790 * L_8 = __this->get__dialogue_12();
		Logger_t1351394572 * L_9 = ((DialogueRunner_t3655145191_StaticFields*)il2cpp_codegen_static_fields_for(DialogueRunner_t3655145191_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_14();
		G_B4_0 = L_8;
		if (L_9)
		{
			G_B5_0 = L_8;
			goto IL_0062;
		}
	}
	{
		intptr_t L_10 = (intptr_t)DialogueRunner_U3Cget_dialogueU3Em__1_m3720649706_RuntimeMethod_var;
		Logger_t1351394572 * L_11 = (Logger_t1351394572 *)il2cpp_codegen_object_new(Logger_t1351394572_il2cpp_TypeInfo_var);
		Logger__ctor_m2980890779(L_11, NULL, L_10, /*hidden argument*/NULL);
		((DialogueRunner_t3655145191_StaticFields*)il2cpp_codegen_static_fields_for(DialogueRunner_t3655145191_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_14(L_11);
		G_B5_0 = G_B4_0;
	}

IL_0062:
	{
		Logger_t1351394572 * L_12 = ((DialogueRunner_t3655145191_StaticFields*)il2cpp_codegen_static_fields_for(DialogueRunner_t3655145191_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_14();
		G_B5_0->set_LogErrorMessage_3(L_12);
	}

IL_006c:
	{
		Dialogue_t3789480790 * L_13 = __this->get__dialogue_12();
		return L_13;
	}
}
// System.Void Yarn.Unity.DialogueRunner::Start()
extern "C"  void DialogueRunner_Start_m889855216 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_Start_m889855216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t3022178571 * V_0 = NULL;
	TextAssetU5BU5D_t2780361322* V_1 = NULL;
	int32_t V_2 = 0;
	LocalisedStringGroup_t614941511 * V_3 = NULL;
	TextAsset_t3022178571 * V_4 = NULL;
	TextAssetU5BU5D_t2780361322* V_5 = NULL;
	int32_t V_6 = 0;
	{
		DialogueUIBehaviour_t637706657 * L_0 = __this->get_dialogueUI_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1418722237, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		VariableStorageBehaviour_t3802685183 * L_2 = __this->get_variableStorage_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3138390117, /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		VariableStorageBehaviour_t3802685183 * L_4 = __this->get_variableStorage_6();
		VirtActionInvoker0::Invoke(11 /* System.Void Yarn.Unity.VariableStorageBehaviour::ResetToDefaults() */, L_4);
		TextAssetU5BU5D_t2780361322* L_5 = __this->get_sourceText_2();
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	{
		TextAssetU5BU5D_t2780361322* L_6 = __this->get_sourceText_2();
		V_1 = L_6;
		V_2 = 0;
		goto IL_007e;
	}

IL_005c:
	{
		TextAssetU5BU5D_t2780361322* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		TextAsset_t3022178571 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		Dialogue_t3789480790 * L_11 = DialogueRunner_get_dialogue_m939767586(__this, /*hidden argument*/NULL);
		TextAsset_t3022178571 * L_12 = V_0;
		String_t* L_13 = TextAsset_get_text_m2027878391(L_12, /*hidden argument*/NULL);
		TextAsset_t3022178571 * L_14 = V_0;
		String_t* L_15 = Object_get_name_m4211327027(L_14, /*hidden argument*/NULL);
		Dialogue_LoadString_m1136844729(L_11, L_13, L_15, (bool)0, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_007e:
	{
		int32_t L_17 = V_2;
		TextAssetU5BU5D_t2780361322* L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_005c;
		}
	}

IL_0087:
	{
		bool L_19 = __this->get_startAutomatically_9();
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		DialogueRunner_StartDialogue_m3620552434(__this, /*hidden argument*/NULL);
	}

IL_0098:
	{
		LocalisedStringGroupU5BU5D_t2868870078* L_20 = __this->get_stringGroups_3();
		if (!L_20)
		{
			goto IL_00fb;
		}
	}
	{
		LocalisedStringGroupU5BU5D_t2868870078* L_21 = __this->get_stringGroups_3();
		List_1_t2087016253 * L_22 = (List_1_t2087016253 *)il2cpp_codegen_object_new(List_1_t2087016253_il2cpp_TypeInfo_var);
		List_1__ctor_m2903844167(L_22, (RuntimeObject*)(RuntimeObject*)L_21, /*hidden argument*/List_1__ctor_m2903844167_RuntimeMethod_var);
		intptr_t L_23 = (intptr_t)DialogueRunner_U3CStartU3Em__2_m143397084_RuntimeMethod_var;
		Predicate_1_t1440235635 * L_24 = (Predicate_1_t1440235635 *)il2cpp_codegen_object_new(Predicate_1_t1440235635_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2354984221(L_24, __this, L_23, /*hidden argument*/Predicate_1__ctor_m2354984221_RuntimeMethod_var);
		LocalisedStringGroup_t614941511 * L_25 = List_1_Find_m3290463380(L_22, L_24, /*hidden argument*/List_1_Find_m3290463380_RuntimeMethod_var);
		V_3 = L_25;
		LocalisedStringGroup_t614941511 * L_26 = V_3;
		if (!L_26)
		{
			goto IL_00fb;
		}
	}
	{
		LocalisedStringGroup_t614941511 * L_27 = V_3;
		TextAssetU5BU5D_t2780361322* L_28 = L_27->get_stringFiles_1();
		V_5 = L_28;
		V_6 = 0;
		goto IL_00f0;
	}

IL_00d6:
	{
		TextAssetU5BU5D_t2780361322* L_29 = V_5;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		TextAsset_t3022178571 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_4 = L_32;
		TextAsset_t3022178571 * L_33 = V_4;
		String_t* L_34 = TextAsset_get_text_m2027878391(L_33, /*hidden argument*/NULL);
		DialogueRunner_AddStringTable_m1804123334(__this, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00f0:
	{
		int32_t L_36 = V_6;
		TextAssetU5BU5D_t2780361322* L_37 = V_5;
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))))))
		{
			goto IL_00d6;
		}
	}

IL_00fb:
	{
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::AddScript(System.String)
extern "C"  void DialogueRunner_AddScript_m3343935133 (DialogueRunner_t3655145191 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_AddScript_m3343935133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dialogue_t3789480790 * L_0 = DialogueRunner_get_dialogue_m939767586(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___text0;
		Dialogue_LoadString_m1136844729(L_0, L_1, _stringLiteral3788460617, (bool)0, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::AddScript(UnityEngine.TextAsset)
extern "C"  void DialogueRunner_AddScript_m1771112184 (DialogueRunner_t3655145191 * __this, TextAsset_t3022178571 * ___asset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_AddScript_m1771112184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dialogue_t3789480790 * L_0 = DialogueRunner_get_dialogue_m939767586(__this, /*hidden argument*/NULL);
		TextAsset_t3022178571 * L_1 = ___asset0;
		String_t* L_2 = TextAsset_get_text_m2027878391(L_1, /*hidden argument*/NULL);
		Dialogue_LoadString_m1136844729(L_0, L_2, _stringLiteral3788460617, (bool)0, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::AddStringTable(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void DialogueRunner_AddStringTable_m2255326429 (DialogueRunner_t3655145191 * __this, Dictionary_2_t1632706988 * ___stringTable0, const RuntimeMethod* method)
{
	{
		Dialogue_t3789480790 * L_0 = DialogueRunner_get_dialogue_m939767586(__this, /*hidden argument*/NULL);
		Dictionary_2_t1632706988 * L_1 = ___stringTable0;
		Dialogue_AddStringTable_m1490519928(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::AddStringTable(System.String)
extern "C"  void DialogueRunner_AddStringTable_m1804123334 (DialogueRunner_t3655145191 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_AddStringTable_m1804123334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1632706988 * V_0 = NULL;
	StringReader_t3465604688 * V_1 = NULL;
	CsvReader_t3469035837 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	LocalisedLine_t3499156542 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t1632706988 * L_0 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2052512498(L_0, /*hidden argument*/Dictionary_2__ctor_m2052512498_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1 = ___text0;
		StringReader_t3465604688 * L_2 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			StringReader_t3465604688 * L_3 = V_1;
			CsvReader_t3469035837 * L_4 = (CsvReader_t3469035837 *)il2cpp_codegen_object_new(CsvReader_t3469035837_il2cpp_TypeInfo_var);
			CsvReader__ctor_m2399108903(L_4, L_3, /*hidden argument*/NULL);
			V_2 = L_4;
		}

IL_0014:
		try
		{ // begin try (depth: 2)
			{
				CsvReader_t3469035837 * L_5 = V_2;
				RuntimeObject* L_6 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(CsvReader_GetRecords_TisLocalisedLine_t3499156542_m1712063853_RuntimeMethod_var, L_5);
				V_3 = L_6;
				RuntimeObject* L_7 = V_3;
				RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Yarn.LocalisedLine>::GetEnumerator() */, IEnumerable_1_t2479009431_il2cpp_TypeInfo_var, L_7);
				V_5 = L_8;
			}

IL_0023:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0045;
				}

IL_0028:
				{
					RuntimeObject* L_9 = V_5;
					LocalisedLine_t3499156542 * L_10 = InterfaceFuncInvoker0< LocalisedLine_t3499156542 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Yarn.LocalisedLine>::get_Current() */, IEnumerator_1_t3931727010_il2cpp_TypeInfo_var, L_9);
					V_4 = L_10;
					Dictionary_2_t1632706988 * L_11 = V_0;
					LocalisedLine_t3499156542 * L_12 = V_4;
					String_t* L_13 = LocalisedLine_get_LineCode_m381853006(L_12, /*hidden argument*/NULL);
					LocalisedLine_t3499156542 * L_14 = V_4;
					String_t* L_15 = LocalisedLine_get_LineText_m2638333447(L_14, /*hidden argument*/NULL);
					Dictionary_2_set_Item_m3977940946(L_11, L_13, L_15, /*hidden argument*/Dictionary_2_set_Item_m3977940946_RuntimeMethod_var);
				}

IL_0045:
				{
					RuntimeObject* L_16 = V_5;
					bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_16);
					if (L_17)
					{
						goto IL_0028;
					}
				}

IL_0051:
				{
					IL2CPP_LEAVE(0x65, FINALLY_0056);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0056;
			}

FINALLY_0056:
			{ // begin finally (depth: 3)
				{
					RuntimeObject* L_18 = V_5;
					if (!L_18)
					{
						goto IL_0064;
					}
				}

IL_005d:
				{
					RuntimeObject* L_19 = V_5;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_19);
				}

IL_0064:
				{
					IL2CPP_END_FINALLY(86)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(86)
			{
				IL2CPP_JUMP_TBL(0x65, IL_0065)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0065:
			{
				IL2CPP_LEAVE(0x77, FINALLY_006a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006a;
		}

FINALLY_006a:
		{ // begin finally (depth: 2)
			{
				CsvReader_t3469035837 * L_20 = V_2;
				if (!L_20)
				{
					goto IL_0076;
				}
			}

IL_0070:
			{
				CsvReader_t3469035837 * L_21 = V_2;
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_21);
			}

IL_0076:
			{
				IL2CPP_END_FINALLY(106)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(106)
		{
			IL2CPP_JUMP_TBL(0x77, IL_0077)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			StringReader_t3465604688 * L_22 = V_1;
			if (!L_22)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			StringReader_t3465604688 * L_23 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		Dictionary_2_t1632706988 * L_24 = V_0;
		DialogueRunner_AddStringTable_m2255326429(__this, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::AddStringTable(UnityEngine.TextAsset)
extern "C"  void DialogueRunner_AddStringTable_m3457708144 (DialogueRunner_t3655145191 * __this, TextAsset_t3022178571 * ___text0, const RuntimeMethod* method)
{
	{
		TextAsset_t3022178571 * L_0 = ___text0;
		String_t* L_1 = TextAsset_get_text_m2027878391(L_0, /*hidden argument*/NULL);
		DialogueRunner_AddStringTable_m1804123334(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::ResetDialogue()
extern "C"  void DialogueRunner_ResetDialogue_m1257408303 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	{
		VariableStorageBehaviour_t3802685183 * L_0 = __this->get_variableStorage_6();
		VirtActionInvoker0::Invoke(11 /* System.Void Yarn.Unity.VariableStorageBehaviour::ResetToDefaults() */, L_0);
		DialogueRunner_StartDialogue_m3620552434(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::StartDialogue()
extern "C"  void DialogueRunner_StartDialogue_m3620552434 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_startNode_8();
		DialogueRunner_StartDialogue_m917080516(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::StartDialogue(System.String)
extern "C"  void DialogueRunner_StartDialogue_m917080516 (DialogueRunner_t3655145191 * __this, String_t* ___startNode0, const RuntimeMethod* method)
{
	{
		MonoBehaviour_StopAllCoroutines_m3328507247(__this, /*hidden argument*/NULL);
		DialogueUIBehaviour_t637706657 * L_0 = __this->get_dialogueUI_7();
		MonoBehaviour_StopAllCoroutines_m3328507247(L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___startNode0;
		RuntimeObject* L_2 = DialogueRunner_RunDialogue_m3837872158(__this, L_1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Yarn.Unity.DialogueRunner::RunDialogue(System.String)
extern "C"  RuntimeObject* DialogueRunner_RunDialogue_m3837872158 (DialogueRunner_t3655145191 * __this, String_t* ___startNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_RunDialogue_m3837872158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRunDialogueU3Ec__Iterator0_t386284222 * V_0 = NULL;
	{
		U3CRunDialogueU3Ec__Iterator0_t386284222 * L_0 = (U3CRunDialogueU3Ec__Iterator0_t386284222 *)il2cpp_codegen_object_new(U3CRunDialogueU3Ec__Iterator0_t386284222_il2cpp_TypeInfo_var);
		U3CRunDialogueU3Ec__Iterator0__ctor_m2421397284(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRunDialogueU3Ec__Iterator0_t386284222 * L_1 = V_0;
		String_t* L_2 = ___startNode0;
		L_1->set_startNode_0(L_2);
		U3CRunDialogueU3Ec__Iterator0_t386284222 * L_3 = V_0;
		L_3->set_U24this_7(__this);
		U3CRunDialogueU3Ec__Iterator0_t386284222 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Yarn.Unity.DialogueRunner::Clear()
extern "C"  void DialogueRunner_Clear_m1795976217 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_Clear_m1795976217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = DialogueRunner_get_isDialogueRunning_m3536938159(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral3690676198, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		Dialogue_t3789480790 * L_2 = DialogueRunner_get_dialogue_m939767586(__this, /*hidden argument*/NULL);
		Dialogue_UnloadAll_m48858422(L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::Stop()
extern "C"  void DialogueRunner_Stop_m4216361357 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	{
		DialogueRunner_set_isDialogueRunning_m1523374774(__this, (bool)0, /*hidden argument*/NULL);
		Dialogue_t3789480790 * L_0 = DialogueRunner_get_dialogue_m939767586(__this, /*hidden argument*/NULL);
		Dialogue_Stop_m2110180182(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Yarn.Unity.DialogueRunner::NodeExists(System.String)
extern "C"  bool DialogueRunner_NodeExists_m735005999 (DialogueRunner_t3655145191 * __this, String_t* ___nodeName0, const RuntimeMethod* method)
{
	{
		Dialogue_t3789480790 * L_0 = DialogueRunner_get_dialogue_m939767586(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___nodeName0;
		bool L_2 = Dialogue_NodeExists_m4188989492(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Yarn.Unity.DialogueRunner::get_currentNodeName()
extern "C"  String_t* DialogueRunner_get_currentNodeName_m381061821 (DialogueRunner_t3655145191 * __this, const RuntimeMethod* method)
{
	{
		Dialogue_t3789480790 * L_0 = DialogueRunner_get_dialogue_m939767586(__this, /*hidden argument*/NULL);
		String_t* L_1 = Dialogue_get_currentNode_m690168057(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Yarn.Unity.DialogueRunner::DispatchCommand(System.String)
extern "C"  bool DialogueRunner_DispatchCommand_m1217170754 (DialogueRunner_t3655145191 * __this, String_t* ___command0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_DispatchCommand_m1217170754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	GameObject_t1113636619 * V_3 = NULL;
	int32_t V_4 = 0;
	List_1_t2753864082 * V_5 = NULL;
	List_1_t3319525431 * V_6 = NULL;
	MonoBehaviour_t3962482529 * V_7 = NULL;
	MonoBehaviourU5BU5D_t2007329276* V_8 = NULL;
	int32_t V_9 = 0;
	Type_t * V_10 = NULL;
	MethodInfo_t * V_11 = NULL;
	MethodInfoU5BU5D_t2572182361* V_12 = NULL;
	int32_t V_13 = 0;
	YarnCommandAttributeU5BU5D_t1263584234* V_14 = NULL;
	YarnCommandAttribute_t3061396875 * V_15 = NULL;
	YarnCommandAttributeU5BU5D_t1263584234* V_16 = NULL;
	int32_t V_17 = 0;
	ParameterInfoU5BU5D_t390618515* V_18 = NULL;
	bool V_19 = false;
	StringU5BU5DU5BU5D_t2611993717* V_20 = NULL;
	ParameterInfo_t1861056598 * V_21 = NULL;
	ParameterInfoU5BU5D_t390618515* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	StringU5BU5D_t1281789340* V_26 = NULL;
	Enumerator_t348140663  V_27;
	memset(&V_27, 0, sizeof(V_27));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___command0;
		CharU5BU5D_t3528271667* L_1 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		StringU5BU5D_t1281789340* L_2 = String_Split_m3646115398(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) >= ((int32_t)2)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		StringU5BU5D_t1281789340* L_7 = V_0;
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		String_t* L_10 = V_2;
		GameObject_t1113636619 * L_11 = GameObject_Find_m2032535176(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		GameObject_t1113636619 * L_12 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_12, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		V_4 = 0;
		List_1_t2753864082 * L_14 = (List_1_t2753864082 *)il2cpp_codegen_object_new(List_1_t2753864082_il2cpp_TypeInfo_var);
		List_1__ctor_m1644775029(L_14, /*hidden argument*/List_1__ctor_m1644775029_RuntimeMethod_var);
		V_5 = L_14;
		StringU5BU5D_t1281789340* L_15 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length))))) <= ((int32_t)2)))
		{
			goto IL_0063;
		}
	}
	{
		StringU5BU5D_t1281789340* L_16 = V_0;
		List_1_t3319525431 * L_17 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m3409323257(L_17, (RuntimeObject*)(RuntimeObject*)L_16, /*hidden argument*/List_1__ctor_m3409323257_RuntimeMethod_var);
		V_6 = L_17;
		List_1_t3319525431 * L_18 = V_6;
		List_1_RemoveRange_m1321683783(L_18, 0, 2, /*hidden argument*/List_1_RemoveRange_m1321683783_RuntimeMethod_var);
		goto IL_006a;
	}

IL_0063:
	{
		List_1_t3319525431 * L_19 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_19, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_6 = L_19;
	}

IL_006a:
	{
		GameObject_t1113636619 * L_20 = V_3;
		MonoBehaviourU5BU5D_t2007329276* L_21 = GameObject_GetComponents_TisMonoBehaviour_t3962482529_m1010550534(L_20, /*hidden argument*/GameObject_GetComponents_TisMonoBehaviour_t3962482529_m1010550534_RuntimeMethod_var);
		V_8 = L_21;
		V_9 = 0;
		goto IL_0250;
	}

IL_007a:
	{
		MonoBehaviourU5BU5D_t2007329276* L_22 = V_8;
		int32_t L_23 = V_9;
		int32_t L_24 = L_23;
		MonoBehaviour_t3962482529 * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_7 = L_25;
		MonoBehaviour_t3962482529 * L_26 = V_7;
		Type_t * L_27 = Object_GetType_m88164663(L_26, /*hidden argument*/NULL);
		V_10 = L_27;
		Type_t * L_28 = V_10;
		MethodInfoU5BU5D_t2572182361* L_29 = Type_GetMethods_m65265826(L_28, /*hidden argument*/NULL);
		V_12 = L_29;
		V_13 = 0;
		goto IL_023f;
	}

IL_009b:
	{
		MethodInfoU5BU5D_t2572182361* L_30 = V_12;
		int32_t L_31 = V_13;
		int32_t L_32 = L_31;
		MethodInfo_t * L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		V_11 = L_33;
		MethodInfo_t * L_34 = V_11;
		RuntimeTypeHandle_t3027515415  L_35 = { reinterpret_cast<intptr_t> (YarnCommandAttribute_t3061396875_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_37 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_34, L_36, (bool)1);
		V_14 = ((YarnCommandAttributeU5BU5D_t1263584234*)Castclass((RuntimeObject*)L_37, YarnCommandAttributeU5BU5D_t1263584234_il2cpp_TypeInfo_var));
		YarnCommandAttributeU5BU5D_t1263584234* L_38 = V_14;
		V_16 = L_38;
		V_17 = 0;
		goto IL_022e;
	}

IL_00c7:
	{
		YarnCommandAttributeU5BU5D_t1263584234* L_39 = V_16;
		int32_t L_40 = V_17;
		int32_t L_41 = L_40;
		YarnCommandAttribute_t3061396875 * L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_15 = L_42;
		YarnCommandAttribute_t3061396875 * L_43 = V_15;
		String_t* L_44 = YarnCommandAttribute_get_commandString_m1350367434(L_43, /*hidden argument*/NULL);
		String_t* L_45 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_op_Equality_m920492651(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0228;
		}
	}
	{
		MethodInfo_t * L_47 = V_11;
		ParameterInfoU5BU5D_t390618515* L_48 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_47);
		V_18 = L_48;
		V_19 = (bool)0;
		ParameterInfoU5BU5D_t390618515* L_49 = V_18;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_49)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0140;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_50 = V_18;
		int32_t L_51 = 0;
		ParameterInfo_t1861056598 * L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		Type_t * L_53 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_52);
		RuntimeTypeHandle_t3027515415  L_54 = { reinterpret_cast<intptr_t> (StringU5BU5D_t1281789340_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_55 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		bool L_56 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_53, L_55);
		if (!L_56)
		{
			goto IL_0140;
		}
	}
	{
		V_20 = ((StringU5BU5DU5BU5D_t2611993717*)SZArrayNew(StringU5BU5DU5BU5D_t2611993717_il2cpp_TypeInfo_var, (uint32_t)1));
		StringU5BU5DU5BU5D_t2611993717* L_57 = V_20;
		List_1_t3319525431 * L_58 = V_6;
		StringU5BU5D_t1281789340* L_59 = List_1_ToArray_m3983937259(L_58, /*hidden argument*/List_1_ToArray_m3983937259_RuntimeMethod_var);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (StringU5BU5D_t1281789340*)L_59);
		MethodInfo_t * L_60 = V_11;
		MonoBehaviour_t3962482529 * L_61 = V_7;
		StringU5BU5DU5BU5D_t2611993717* L_62 = V_20;
		MethodBase_Invoke_m1776411915(L_60, L_61, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)L_62, /*hidden argument*/NULL);
		int32_t L_63 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		V_19 = (bool)1;
		goto IL_01d7;
	}

IL_0140:
	{
		ParameterInfoU5BU5D_t390618515* L_64 = V_18;
		List_1_t3319525431 * L_65 = V_6;
		int32_t L_66 = List_1_get_Count_m2276455407(L_65, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_64)->max_length))))) == ((uint32_t)L_66))))
		{
			goto IL_01d7;
		}
	}
	{
		V_19 = (bool)1;
		ParameterInfoU5BU5D_t390618515* L_67 = V_18;
		V_22 = L_67;
		V_23 = 0;
		goto IL_01ae;
	}

IL_015f:
	{
		ParameterInfoU5BU5D_t390618515* L_68 = V_22;
		int32_t L_69 = V_23;
		int32_t L_70 = L_69;
		ParameterInfo_t1861056598 * L_71 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		V_21 = L_71;
		ParameterInfo_t1861056598 * L_72 = V_21;
		Type_t * L_73 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_72);
		RuntimeTypeHandle_t3027515415  L_74 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_75 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		bool L_76 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_73, L_75);
		if (L_76)
		{
			goto IL_01a8;
		}
	}
	{
		GameObject_t1113636619 * L_77 = V_3;
		ObjectU5BU5D_t2843939325* L_78 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		MethodInfo_t * L_79 = V_11;
		String_t* L_80 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_79);
		ArrayElementTypeCheck (L_78, L_80);
		(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_80);
		ObjectU5BU5D_t2843939325* L_81 = L_78;
		String_t* L_82 = V_1;
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_82);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m3558239521(NULL /*static, unused*/, L_77, _stringLiteral3443056090, L_81, /*hidden argument*/NULL);
		V_19 = (bool)0;
		goto IL_01b9;
	}

IL_01a8:
	{
		int32_t L_83 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
	}

IL_01ae:
	{
		int32_t L_84 = V_23;
		ParameterInfoU5BU5D_t390618515* L_85 = V_22;
		if ((((int32_t)L_84) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_85)->max_length)))))))
		{
			goto IL_015f;
		}
	}

IL_01b9:
	{
		bool L_86 = V_19;
		if (!L_86)
		{
			goto IL_01d7;
		}
	}
	{
		MethodInfo_t * L_87 = V_11;
		MonoBehaviour_t3962482529 * L_88 = V_7;
		List_1_t3319525431 * L_89 = V_6;
		StringU5BU5D_t1281789340* L_90 = List_1_ToArray_m3983937259(L_89, /*hidden argument*/List_1_ToArray_m3983937259_RuntimeMethod_var);
		MethodBase_Invoke_m1776411915(L_87, L_88, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)L_90, /*hidden argument*/NULL);
		int32_t L_91 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_01d7:
	{
		bool L_92 = V_19;
		if (L_92)
		{
			goto IL_0228;
		}
	}
	{
		List_1_t2753864082 * L_93 = V_5;
		StringU5BU5D_t1281789340* L_94 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)4));
		MethodInfo_t * L_95 = V_11;
		String_t* L_96 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_95);
		ArrayElementTypeCheck (L_94, L_96);
		(L_94)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_96);
		StringU5BU5D_t1281789340* L_97 = L_94;
		String_t* L_98 = V_1;
		ArrayElementTypeCheck (L_97, L_98);
		(L_97)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_98);
		StringU5BU5D_t1281789340* L_99 = L_97;
		ParameterInfoU5BU5D_t390618515* L_100 = V_18;
		V_24 = (((int32_t)((int32_t)(((RuntimeArray *)L_100)->max_length))));
		String_t* L_101 = Int32_ToString_m141394615((&V_24), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_99, L_101);
		(L_99)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_101);
		StringU5BU5D_t1281789340* L_102 = L_99;
		List_1_t3319525431 * L_103 = V_6;
		int32_t L_104 = List_1_get_Count_m2276455407(L_103, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		V_25 = L_104;
		String_t* L_105 = Int32_ToString_m141394615((&V_25), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_102, L_105);
		(L_102)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_105);
		List_1_Add_m3695741953(L_93, L_102, /*hidden argument*/List_1_Add_m3695741953_RuntimeMethod_var);
	}

IL_0228:
	{
		int32_t L_106 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_022e:
	{
		int32_t L_107 = V_17;
		YarnCommandAttributeU5BU5D_t1263584234* L_108 = V_16;
		if ((((int32_t)L_107) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_108)->max_length)))))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_109 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
	}

IL_023f:
	{
		int32_t L_110 = V_13;
		MethodInfoU5BU5D_t2572182361* L_111 = V_12;
		if ((((int32_t)L_110) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_111)->max_length)))))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_112 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
	}

IL_0250:
	{
		int32_t L_113 = V_9;
		MonoBehaviourU5BU5D_t2007329276* L_114 = V_8;
		if ((((int32_t)L_113) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_114)->max_length)))))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_115 = V_4;
		if ((((int32_t)L_115) <= ((int32_t)1)))
		{
			goto IL_0287;
		}
	}
	{
		GameObject_t1113636619 * L_116 = V_3;
		ObjectU5BU5D_t2843939325* L_117 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		String_t* L_118 = ___command0;
		ArrayElementTypeCheck (L_117, L_118);
		(L_117)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_118);
		ObjectU5BU5D_t2843939325* L_119 = L_117;
		int32_t L_120 = V_4;
		int32_t L_121 = L_120;
		RuntimeObject * L_122 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_121);
		ArrayElementTypeCheck (L_119, L_122);
		(L_119)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_122);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m1153215311(NULL /*static, unused*/, L_116, _stringLiteral504753313, L_119, /*hidden argument*/NULL);
		goto IL_02f1;
	}

IL_0287:
	{
		int32_t L_123 = V_4;
		if (L_123)
		{
			goto IL_02f1;
		}
	}
	{
		List_1_t2753864082 * L_124 = V_5;
		Enumerator_t348140663  L_125 = List_1_GetEnumerator_m2391743910(L_124, /*hidden argument*/List_1_GetEnumerator_m2391743910_RuntimeMethod_var);
		V_27 = L_125;
	}

IL_0297:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d2;
		}

IL_029c:
		{
			StringU5BU5D_t1281789340* L_126 = Enumerator_get_Current_m1088469001((&V_27), /*hidden argument*/Enumerator_get_Current_m1088469001_RuntimeMethod_var);
			V_26 = L_126;
			GameObject_t1113636619 * L_127 = V_3;
			ObjectU5BU5D_t2843939325* L_128 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
			StringU5BU5D_t1281789340* L_129 = V_26;
			int32_t L_130 = 0;
			String_t* L_131 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_130));
			ArrayElementTypeCheck (L_128, L_131);
			(L_128)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_131);
			ObjectU5BU5D_t2843939325* L_132 = L_128;
			StringU5BU5D_t1281789340* L_133 = V_26;
			int32_t L_134 = 1;
			String_t* L_135 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134));
			ArrayElementTypeCheck (L_132, L_135);
			(L_132)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_135);
			ObjectU5BU5D_t2843939325* L_136 = L_132;
			StringU5BU5D_t1281789340* L_137 = V_26;
			int32_t L_138 = 2;
			String_t* L_139 = (L_137)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
			ArrayElementTypeCheck (L_136, L_139);
			(L_136)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_139);
			ObjectU5BU5D_t2843939325* L_140 = L_136;
			StringU5BU5D_t1281789340* L_141 = V_26;
			int32_t L_142 = 3;
			String_t* L_143 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
			ArrayElementTypeCheck (L_140, L_143);
			(L_140)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_143);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogErrorFormat_m3558239521(NULL /*static, unused*/, L_127, _stringLiteral541307304, L_140, /*hidden argument*/NULL);
		}

IL_02d2:
		{
			bool L_144 = Enumerator_MoveNext_m3696521377((&V_27), /*hidden argument*/Enumerator_MoveNext_m3696521377_RuntimeMethod_var);
			if (L_144)
			{
				goto IL_029c;
			}
		}

IL_02de:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02e3;
	}

FINALLY_02e3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1279945376((&V_27), /*hidden argument*/Enumerator_Dispose_m1279945376_RuntimeMethod_var);
		IL2CPP_END_FINALLY(739)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(739)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02f1:
	{
		int32_t L_145 = V_4;
		return (bool)((((int32_t)L_145) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Yarn.Unity.DialogueRunner::<get_dialogue>m__0(System.String)
extern "C"  void DialogueRunner_U3Cget_dialogueU3Em__0_m1313327199 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_U3Cget_dialogueU3Em__0_m1313327199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner::<get_dialogue>m__1(System.String)
extern "C"  void DialogueRunner_U3Cget_dialogueU3Em__1_m3720649706 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueRunner_U3Cget_dialogueU3Em__1_m3720649706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Yarn.Unity.DialogueRunner::<Start>m__2(Yarn.Unity.LocalisedStringGroup)
extern "C"  bool DialogueRunner_U3CStartU3Em__2_m143397084 (DialogueRunner_t3655145191 * __this, LocalisedStringGroup_t614941511 * ___entry0, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		LocalisedStringGroup_t614941511 * L_0 = ___entry0;
		int32_t L_1 = L_0->get_language_0();
		bool L_2 = __this->get_shouldOverrideLanguage_4();
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = __this->get_overrideLanguage_5();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001c:
	{
		int32_t L_4 = Application_get_systemLanguage_m3110370732(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		return (bool)((((int32_t)G_B3_1) == ((int32_t)G_B3_0))? 1 : 0);
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
// System.Void Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::.ctor()
extern "C"  void U3CRunDialogueU3Ec__Iterator0__ctor_m2421397284 (U3CRunDialogueU3Ec__Iterator0_t386284222 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::MoveNext()
extern "C"  bool U3CRunDialogueU3Ec__Iterator0_MoveNext_m3764227800 (U3CRunDialogueU3Ec__Iterator0_t386284222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunDialogueU3Ec__Iterator0_MoveNext_m3764227800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_10();
		V_0 = L_0;
		__this->set_U24PC_10((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_009c;
			}
			case 4:
			{
				goto IL_009c;
			}
			case 5:
			{
				goto IL_009c;
			}
			case 6:
			{
				goto IL_02fa;
			}
		}
	}
	{
		goto IL_030d;
	}

IL_0037:
	{
		DialogueRunner_t3655145191 * L_2 = __this->get_U24this_7();
		DialogueRunner_set_isDialogueRunning_m1523374774(L_2, (bool)1, /*hidden argument*/NULL);
		DialogueRunner_t3655145191 * L_3 = __this->get_U24this_7();
		DialogueRunner_t3655145191 * L_4 = __this->get_U24this_7();
		DialogueUIBehaviour_t637706657 * L_5 = L_4->get_dialogueUI_7();
		RuntimeObject* L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::DialogueStarted() */, L_5);
		Coroutine_t3829159415 * L_7 = MonoBehaviour_StartCoroutine_m3411253000(L_3, L_6, /*hidden argument*/NULL);
		__this->set_U24current_8(L_7);
		bool L_8 = __this->get_U24disposing_9();
		if (L_8)
		{
			goto IL_0073;
		}
	}
	{
		__this->set_U24PC_10(1);
	}

IL_0073:
	{
		goto IL_030f;
	}

IL_0078:
	{
		DialogueRunner_t3655145191 * L_9 = __this->get_U24this_7();
		Dialogue_t3789480790 * L_10 = DialogueRunner_get_dialogue_m939767586(L_9, /*hidden argument*/NULL);
		String_t* L_11 = __this->get_startNode_0();
		RuntimeObject* L_12 = Dialogue_Run_m1133506791(L_10, L_11, /*hidden argument*/NULL);
		RuntimeObject* L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Yarn.Dialogue/RunnerResult>::GetEnumerator() */, IEnumerable_1_t1979762143_il2cpp_TypeInfo_var, L_12);
		__this->set_U24locvar0_1(L_13);
		V_0 = ((int32_t)-3);
	}

IL_009c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_14 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2)))
			{
				case 0:
				{
					goto IL_012d;
				}
				case 1:
				{
					goto IL_01a0;
				}
				case 2:
				{
					goto IL_022d;
				}
				case 3:
				{
					goto IL_0295;
				}
			}
		}

IL_00b4:
		{
			goto IL_0295;
		}

IL_00b9:
		{
			RuntimeObject* L_15 = __this->get_U24locvar0_1();
			RunnerResult_t2999909254 * L_16 = InterfaceFuncInvoker0< RunnerResult_t2999909254 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Yarn.Dialogue/RunnerResult>::get_Current() */, IEnumerator_1_t3432479722_il2cpp_TypeInfo_var, L_15);
			__this->set_U3CstepU3E__1_2(L_16);
			RunnerResult_t2999909254 * L_17 = __this->get_U3CstepU3E__1_2();
			if (!((LineResult_t2535281287 *)IsInstClass((RuntimeObject*)L_17, LineResult_t2535281287_il2cpp_TypeInfo_var)))
			{
				goto IL_0132;
			}
		}

IL_00da:
		{
			RunnerResult_t2999909254 * L_18 = __this->get_U3CstepU3E__1_2();
			__this->set_U3ClineResultU3E__2_3(((LineResult_t2535281287 *)IsInstClass((RuntimeObject*)L_18, LineResult_t2535281287_il2cpp_TypeInfo_var)));
			DialogueRunner_t3655145191 * L_19 = __this->get_U24this_7();
			DialogueRunner_t3655145191 * L_20 = __this->get_U24this_7();
			DialogueUIBehaviour_t637706657 * L_21 = L_20->get_dialogueUI_7();
			LineResult_t2535281287 * L_22 = __this->get_U3ClineResultU3E__2_3();
			Line_t1630675273  L_23 = L_22->get_line_0();
			RuntimeObject* L_24 = VirtFuncInvoker1< RuntimeObject*, Line_t1630675273  >::Invoke(5 /* System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::RunLine(Yarn.Line) */, L_21, L_23);
			Coroutine_t3829159415 * L_25 = MonoBehaviour_StartCoroutine_m3411253000(L_19, L_24, /*hidden argument*/NULL);
			__this->set_U24current_8(L_25);
			bool L_26 = __this->get_U24disposing_9();
			if (L_26)
			{
				goto IL_0126;
			}
		}

IL_011f:
		{
			__this->set_U24PC_10(2);
		}

IL_0126:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x30F, FINALLY_02aa);
		}

IL_012d:
		{
			goto IL_0295;
		}

IL_0132:
		{
			RunnerResult_t2999909254 * L_27 = __this->get_U3CstepU3E__1_2();
			if (!((OptionSetResult_t1063237441 *)IsInstClass((RuntimeObject*)L_27, OptionSetResult_t1063237441_il2cpp_TypeInfo_var)))
			{
				goto IL_01a5;
			}
		}

IL_0142:
		{
			RunnerResult_t2999909254 * L_28 = __this->get_U3CstepU3E__1_2();
			__this->set_U3CoptionSetResultU3E__3_4(((OptionSetResult_t1063237441 *)IsInstClass((RuntimeObject*)L_28, OptionSetResult_t1063237441_il2cpp_TypeInfo_var)));
			DialogueRunner_t3655145191 * L_29 = __this->get_U24this_7();
			DialogueRunner_t3655145191 * L_30 = __this->get_U24this_7();
			DialogueUIBehaviour_t637706657 * L_31 = L_30->get_dialogueUI_7();
			OptionSetResult_t1063237441 * L_32 = __this->get_U3CoptionSetResultU3E__3_4();
			Options_t2066576969  L_33 = L_32->get_options_0();
			OptionSetResult_t1063237441 * L_34 = __this->get_U3CoptionSetResultU3E__3_4();
			OptionChooser_t101959131 * L_35 = L_34->get_setSelectedOptionDelegate_1();
			RuntimeObject* L_36 = VirtFuncInvoker2< RuntimeObject*, Options_t2066576969 , OptionChooser_t101959131 * >::Invoke(6 /* System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::RunOptions(Yarn.Options,Yarn.OptionChooser) */, L_31, L_33, L_35);
			Coroutine_t3829159415 * L_37 = MonoBehaviour_StartCoroutine_m3411253000(L_29, L_36, /*hidden argument*/NULL);
			__this->set_U24current_8(L_37);
			bool L_38 = __this->get_U24disposing_9();
			if (L_38)
			{
				goto IL_0199;
			}
		}

IL_0192:
		{
			__this->set_U24PC_10(3);
		}

IL_0199:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x30F, FINALLY_02aa);
		}

IL_01a0:
		{
			goto IL_0295;
		}

IL_01a5:
		{
			RunnerResult_t2999909254 * L_39 = __this->get_U3CstepU3E__1_2();
			if (!((CommandResult_t297730970 *)IsInstClass((RuntimeObject*)L_39, CommandResult_t297730970_il2cpp_TypeInfo_var)))
			{
				goto IL_0232;
			}
		}

IL_01b5:
		{
			RunnerResult_t2999909254 * L_40 = __this->get_U3CstepU3E__1_2();
			__this->set_U3CcommandResultU3E__4_5(((CommandResult_t297730970 *)IsInstClass((RuntimeObject*)L_40, CommandResult_t297730970_il2cpp_TypeInfo_var)));
			DialogueRunner_t3655145191 * L_41 = __this->get_U24this_7();
			CommandResult_t297730970 * L_42 = __this->get_U3CcommandResultU3E__4_5();
			Command_t3409241122 * L_43 = L_42->get_address_of_command_0();
			String_t* L_44 = L_43->get_text_0();
			bool L_45 = DialogueRunner_DispatchCommand_m1217170754(L_41, L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_01eb;
			}
		}

IL_01e6:
		{
			goto IL_022d;
		}

IL_01eb:
		{
			DialogueRunner_t3655145191 * L_46 = __this->get_U24this_7();
			DialogueRunner_t3655145191 * L_47 = __this->get_U24this_7();
			DialogueUIBehaviour_t637706657 * L_48 = L_47->get_dialogueUI_7();
			CommandResult_t297730970 * L_49 = __this->get_U3CcommandResultU3E__4_5();
			Command_t3409241122  L_50 = L_49->get_command_0();
			RuntimeObject* L_51 = VirtFuncInvoker1< RuntimeObject*, Command_t3409241122  >::Invoke(7 /* System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::RunCommand(Yarn.Command) */, L_48, L_50);
			Coroutine_t3829159415 * L_52 = MonoBehaviour_StartCoroutine_m3411253000(L_46, L_51, /*hidden argument*/NULL);
			__this->set_U24current_8(L_52);
			bool L_53 = __this->get_U24disposing_9();
			if (L_53)
			{
				goto IL_0226;
			}
		}

IL_021f:
		{
			__this->set_U24PC_10(4);
		}

IL_0226:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x30F, FINALLY_02aa);
		}

IL_022d:
		{
			goto IL_0295;
		}

IL_0232:
		{
			RunnerResult_t2999909254 * L_54 = __this->get_U3CstepU3E__1_2();
			if (!((NodeCompleteResult_t2657442789 *)IsInstClass((RuntimeObject*)L_54, NodeCompleteResult_t2657442789_il2cpp_TypeInfo_var)))
			{
				goto IL_0295;
			}
		}

IL_0242:
		{
			RunnerResult_t2999909254 * L_55 = __this->get_U3CstepU3E__1_2();
			__this->set_U3CnodeResultU3E__5_6(((NodeCompleteResult_t2657442789 *)IsInstClass((RuntimeObject*)L_55, NodeCompleteResult_t2657442789_il2cpp_TypeInfo_var)));
			DialogueRunner_t3655145191 * L_56 = __this->get_U24this_7();
			DialogueRunner_t3655145191 * L_57 = __this->get_U24this_7();
			DialogueUIBehaviour_t637706657 * L_58 = L_57->get_dialogueUI_7();
			NodeCompleteResult_t2657442789 * L_59 = __this->get_U3CnodeResultU3E__5_6();
			String_t* L_60 = L_59->get_nextNode_0();
			RuntimeObject* L_61 = VirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(8 /* System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::NodeComplete(System.String) */, L_58, L_60);
			Coroutine_t3829159415 * L_62 = MonoBehaviour_StartCoroutine_m3411253000(L_56, L_61, /*hidden argument*/NULL);
			__this->set_U24current_8(L_62);
			bool L_63 = __this->get_U24disposing_9();
			if (L_63)
			{
				goto IL_028e;
			}
		}

IL_0287:
		{
			__this->set_U24PC_10(5);
		}

IL_028e:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x30F, FINALLY_02aa);
		}

IL_0295:
		{
			RuntimeObject* L_64 = __this->get_U24locvar0_1();
			bool L_65 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_64);
			if (L_65)
			{
				goto IL_00b9;
			}
		}

IL_02a5:
		{
			IL2CPP_LEAVE(0x2C5, FINALLY_02aa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02aa;
	}

FINALLY_02aa:
	{ // begin finally (depth: 1)
		{
			bool L_66 = V_1;
			if (!L_66)
			{
				goto IL_02ae;
			}
		}

IL_02ad:
		{
			IL2CPP_END_FINALLY(682)
		}

IL_02ae:
		{
			RuntimeObject* L_67 = __this->get_U24locvar0_1();
			if (!L_67)
			{
				goto IL_02c4;
			}
		}

IL_02b9:
		{
			RuntimeObject* L_68 = __this->get_U24locvar0_1();
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_68);
		}

IL_02c4:
		{
			IL2CPP_END_FINALLY(682)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(682)
	{
		IL2CPP_JUMP_TBL(0x30F, IL_030f)
		IL2CPP_JUMP_TBL(0x2C5, IL_02c5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02c5:
	{
		DialogueRunner_t3655145191 * L_69 = __this->get_U24this_7();
		DialogueRunner_t3655145191 * L_70 = __this->get_U24this_7();
		DialogueUIBehaviour_t637706657 * L_71 = L_70->get_dialogueUI_7();
		RuntimeObject* L_72 = VirtFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::DialogueComplete() */, L_71);
		Coroutine_t3829159415 * L_73 = MonoBehaviour_StartCoroutine_m3411253000(L_69, L_72, /*hidden argument*/NULL);
		__this->set_U24current_8(L_73);
		bool L_74 = __this->get_U24disposing_9();
		if (L_74)
		{
			goto IL_02f5;
		}
	}
	{
		__this->set_U24PC_10(6);
	}

IL_02f5:
	{
		goto IL_030f;
	}

IL_02fa:
	{
		DialogueRunner_t3655145191 * L_75 = __this->get_U24this_7();
		DialogueRunner_set_isDialogueRunning_m1523374774(L_75, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_10((-1));
	}

IL_030d:
	{
		return (bool)0;
	}

IL_030f:
	{
		return (bool)1;
	}
}
// System.Object Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CRunDialogueU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1263950623 (U3CRunDialogueU3Ec__Iterator0_t386284222 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_8();
		return L_0;
	}
}
// System.Object Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CRunDialogueU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1143460710 (U3CRunDialogueU3Ec__Iterator0_t386284222 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_8();
		return L_0;
	}
}
// System.Void Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::Dispose()
extern "C"  void U3CRunDialogueU3Ec__Iterator0_Dispose_m430273133 (U3CRunDialogueU3Ec__Iterator0_t386284222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunDialogueU3Ec__Iterator0_Dispose_m430273133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_10();
		V_0 = L_0;
		__this->set_U24disposing_9((bool)1);
		__this->set_U24PC_10((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_003c;
			}
			case 4:
			{
				goto IL_003c;
			}
			case 5:
			{
				goto IL_003c;
			}
			case 6:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x58, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_2 = __this->get_U24locvar0_1();
			if (!L_2)
			{
				goto IL_0057;
			}
		}

IL_004c:
		{
			RuntimeObject* L_3 = __this->get_U24locvar0_1();
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_3);
		}

IL_0057:
		{
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0058:
	{
		return;
	}
}
// System.Void Yarn.Unity.DialogueRunner/<RunDialogue>c__Iterator0::Reset()
extern "C"  void U3CRunDialogueU3Ec__Iterator0_Reset_m3588706996 (U3CRunDialogueU3Ec__Iterator0_t386284222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRunDialogueU3Ec__Iterator0_Reset_m3588706996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Yarn.Unity.DialogueUIBehaviour::.ctor()
extern "C"  void DialogueUIBehaviour__ctor_m2305348317 (DialogueUIBehaviour_t637706657 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::DialogueStarted()
extern "C"  RuntimeObject* DialogueUIBehaviour_DialogueStarted_m2666921491 (DialogueUIBehaviour_t637706657 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueUIBehaviour_DialogueStarted_m2666921491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDialogueStartedU3Ec__Iterator0_t1414164849 * V_0 = NULL;
	{
		U3CDialogueStartedU3Ec__Iterator0_t1414164849 * L_0 = (U3CDialogueStartedU3Ec__Iterator0_t1414164849 *)il2cpp_codegen_object_new(U3CDialogueStartedU3Ec__Iterator0_t1414164849_il2cpp_TypeInfo_var);
		U3CDialogueStartedU3Ec__Iterator0__ctor_m483658861(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDialogueStartedU3Ec__Iterator0_t1414164849 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::NodeComplete(System.String)
extern "C"  RuntimeObject* DialogueUIBehaviour_NodeComplete_m1275476203 (DialogueUIBehaviour_t637706657 * __this, String_t* ___nextNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueUIBehaviour_NodeComplete_m1275476203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CNodeCompleteU3Ec__Iterator1_t1861394254 * V_0 = NULL;
	{
		U3CNodeCompleteU3Ec__Iterator1_t1861394254 * L_0 = (U3CNodeCompleteU3Ec__Iterator1_t1861394254 *)il2cpp_codegen_object_new(U3CNodeCompleteU3Ec__Iterator1_t1861394254_il2cpp_TypeInfo_var);
		U3CNodeCompleteU3Ec__Iterator1__ctor_m36936213(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CNodeCompleteU3Ec__Iterator1_t1861394254 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator Yarn.Unity.DialogueUIBehaviour::DialogueComplete()
extern "C"  RuntimeObject* DialogueUIBehaviour_DialogueComplete_m2757680011 (DialogueUIBehaviour_t637706657 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueUIBehaviour_DialogueComplete_m2757680011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * V_0 = NULL;
	{
		U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * L_0 = (U3CDialogueCompleteU3Ec__Iterator2_t3834094128 *)il2cpp_codegen_object_new(U3CDialogueCompleteU3Ec__Iterator2_t3834094128_il2cpp_TypeInfo_var);
		U3CDialogueCompleteU3Ec__Iterator2__ctor_m2522183383(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * L_1 = V_0;
		return L_1;
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
// System.Void Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::.ctor()
extern "C"  void U3CDialogueCompleteU3Ec__Iterator2__ctor_m2522183383 (U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::MoveNext()
extern "C"  bool U3CDialogueCompleteU3Ec__Iterator2_MoveNext_m3525190540 (U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U24PC_2();
		__this->set_U24PC_2((-1));
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0017;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Object Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDialogueCompleteU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4226619420 (U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDialogueCompleteU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m1971222947 (U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::Dispose()
extern "C"  void U3CDialogueCompleteU3Ec__Iterator2_Dispose_m964972951 (U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Yarn.Unity.DialogueUIBehaviour/<DialogueComplete>c__Iterator2::Reset()
extern "C"  void U3CDialogueCompleteU3Ec__Iterator2_Reset_m2917566167 (U3CDialogueCompleteU3Ec__Iterator2_t3834094128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDialogueCompleteU3Ec__Iterator2_Reset_m2917566167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::.ctor()
extern "C"  void U3CDialogueStartedU3Ec__Iterator0__ctor_m483658861 (U3CDialogueStartedU3Ec__Iterator0_t1414164849 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::MoveNext()
extern "C"  bool U3CDialogueStartedU3Ec__Iterator0_MoveNext_m3755446535 (U3CDialogueStartedU3Ec__Iterator0_t1414164849 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U24PC_2();
		__this->set_U24PC_2((-1));
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0017;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Object Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDialogueStartedU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1077258302 (U3CDialogueStartedU3Ec__Iterator0_t1414164849 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDialogueStartedU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2562241757 (U3CDialogueStartedU3Ec__Iterator0_t1414164849 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::Dispose()
extern "C"  void U3CDialogueStartedU3Ec__Iterator0_Dispose_m3770387388 (U3CDialogueStartedU3Ec__Iterator0_t1414164849 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Yarn.Unity.DialogueUIBehaviour/<DialogueStarted>c__Iterator0::Reset()
extern "C"  void U3CDialogueStartedU3Ec__Iterator0_Reset_m2827406992 (U3CDialogueStartedU3Ec__Iterator0_t1414164849 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDialogueStartedU3Ec__Iterator0_Reset_m2827406992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::.ctor()
extern "C"  void U3CNodeCompleteU3Ec__Iterator1__ctor_m36936213 (U3CNodeCompleteU3Ec__Iterator1_t1861394254 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::MoveNext()
extern "C"  bool U3CNodeCompleteU3Ec__Iterator1_MoveNext_m3787559540 (U3CNodeCompleteU3Ec__Iterator1_t1861394254 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U24PC_2();
		__this->set_U24PC_2((-1));
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0017;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Object Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CNodeCompleteU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m901541412 (U3CNodeCompleteU3Ec__Iterator1_t1861394254 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CNodeCompleteU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1948507106 (U3CNodeCompleteU3Ec__Iterator1_t1861394254 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::Dispose()
extern "C"  void U3CNodeCompleteU3Ec__Iterator1_Dispose_m1528038684 (U3CNodeCompleteU3Ec__Iterator1_t1861394254 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Yarn.Unity.DialogueUIBehaviour/<NodeComplete>c__Iterator1::Reset()
extern "C"  void U3CNodeCompleteU3Ec__Iterator1_Reset_m179667025 (U3CNodeCompleteU3Ec__Iterator1_t1861394254 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNodeCompleteU3Ec__Iterator1_Reset_m179667025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Yarn.Unity.Example.CameraFollow::.ctor()
extern "C"  void CameraFollow__ctor_m1413367130 (CameraFollow_t3245689759 * __this, const RuntimeMethod* method)
{
	{
		__this->set_minPosition_3((-5.3f));
		__this->set_maxPosition_4((5.3f));
		__this->set_moveSpeed_5((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.Example.CameraFollow::Update()
extern "C"  void CameraFollow_Update_m2344725257 (CameraFollow_t3245689759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_Update_m2344725257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Transform_t3600365921 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = __this->get_target_2();
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveSpeed_5();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_3, L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_x_1();
		float L_10 = __this->get_minPosition_3();
		float L_11 = __this->get_maxPosition_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		(&V_0)->set_x_1(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		float L_15 = (&V_1)->get_y_2();
		(&V_0)->set_y_2(L_15);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		float L_18 = (&V_2)->get_z_3();
		(&V_0)->set_z_3(L_18);
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = V_0;
		Transform_set_position_m3387557959(L_19, L_20, /*hidden argument*/NULL);
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
// System.Void Yarn.Unity.Example.NPC::.ctor()
extern "C"  void NPC__ctor_m2690201207 (NPC_t623034359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NPC__ctor_m2690201207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_characterName_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_talkToNode_3(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.Example.NPC::Start()
extern "C"  void NPC_Start_m1051759 (NPC_t623034359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NPC_Start_m1051759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextAsset_t3022178571 * L_0 = __this->get_scriptToLoad_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		DialogueRunner_t3655145191 * L_2 = Object_FindObjectOfType_TisDialogueRunner_t3655145191_m2051441236(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisDialogueRunner_t3655145191_m2051441236_RuntimeMethod_var);
		TextAsset_t3022178571 * L_3 = __this->get_scriptToLoad_4();
		DialogueRunner_AddScript_m1771112184(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Yarn.Unity.Example.NPC::Update()
extern "C"  void NPC_Update_m1755460633 (NPC_t623034359 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Yarn.Unity.Example.PlayerCharacter::.ctor()
extern "C"  void PlayerCharacter__ctor_m1823812828 (PlayerCharacter_t3157521029 * __this, const RuntimeMethod* method)
{
	{
		__this->set_minPosition_2((-5.3f));
		__this->set_maxPosition_3((5.3f));
		__this->set_moveSpeed_4((1.0f));
		__this->set_interactionRadius_5((2.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Yarn.Unity.Example.PlayerCharacter::get_movementFromButtons()
extern "C"  float PlayerCharacter_get_movementFromButtons_m742351861 (PlayerCharacter_t3157521029 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CmovementFromButtonsU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Yarn.Unity.Example.PlayerCharacter::set_movementFromButtons(System.Single)
extern "C"  void PlayerCharacter_set_movementFromButtons_m3736633693 (PlayerCharacter_t3157521029 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CmovementFromButtonsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Yarn.Unity.Example.PlayerCharacter::OnDrawGizmosSelected()
extern "C"  void PlayerCharacter_OnDrawGizmosSelected_m513026917 (PlayerCharacter_t3157521029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCharacter_OnDrawGizmosSelected_m513026917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t2555686324  L_0 = Color_get_blue_m3190273327(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_3 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_5 = Matrix4x4_TRS_m3801934620(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		Gizmos_set_matrix_m3287403258(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = __this->get_interactionRadius_5();
		Gizmos_DrawWireSphere_m132265467(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.Example.PlayerCharacter::Update()
extern "C"  void PlayerCharacter_Update_m1915632138 (PlayerCharacter_t3157521029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCharacter_Update_m1915632138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		DialogueRunner_t3655145191 * L_0 = Object_FindObjectOfType_TisDialogueRunner_t3655145191_m2051441236(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisDialogueRunner_t3655145191_m2051441236_RuntimeMethod_var);
		bool L_1 = DialogueRunner_get_isDialogueRunning_m3536938159(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = PlayerCharacter_get_movementFromButtons_m742351861(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_3, (float)L_4));
		float L_5 = V_0;
		float L_6 = __this->get_moveSpeed_4();
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Vector3_t3722313464 * L_10 = (&V_1);
		float L_11 = L_10->get_x_1();
		float L_12 = V_0;
		L_10->set_x_1(((float)il2cpp_codegen_add((float)L_11, (float)L_12)));
		float L_13 = (&V_1)->get_x_1();
		float L_14 = __this->get_minPosition_2();
		float L_15 = __this->get_maxPosition_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		(&V_1)->set_x_1(L_16);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_1;
		Transform_set_position_m3387557959(L_17, L_18, /*hidden argument*/NULL);
		bool L_19 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		PlayerCharacter_CheckForNearbyNPC_m4254660837(__this, /*hidden argument*/NULL);
	}

IL_008b:
	{
		return;
	}
}
// System.Void Yarn.Unity.Example.PlayerCharacter::CheckForNearbyNPC()
extern "C"  void PlayerCharacter_CheckForNearbyNPC_m4254660837 (PlayerCharacter_t3157521029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCharacter_CheckForNearbyNPC_m4254660837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2095109101 * V_0 = NULL;
	NPC_t623034359 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		NPCU5BU5D_t1030391374* L_0 = Object_FindObjectsOfType_TisNPC_t623034359_m2319331115(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisNPC_t623034359_m2319331115_RuntimeMethod_var);
		List_1_t2095109101 * L_1 = (List_1_t2095109101 *)il2cpp_codegen_object_new(List_1_t2095109101_il2cpp_TypeInfo_var);
		List_1__ctor_m2919220833(L_1, (RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/List_1__ctor_m2919220833_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t2095109101 * L_2 = V_0;
		intptr_t L_3 = (intptr_t)PlayerCharacter_U3CCheckForNearbyNPCU3Em__0_m2170893532_RuntimeMethod_var;
		Predicate_1_t1448328483 * L_4 = (Predicate_1_t1448328483 *)il2cpp_codegen_object_new(Predicate_1_t1448328483_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1154457369(L_4, __this, L_3, /*hidden argument*/Predicate_1__ctor_m1154457369_RuntimeMethod_var);
		NPC_t623034359 * L_5 = List_1_Find_m2540802572(L_2, L_4, /*hidden argument*/List_1_Find_m2540802572_RuntimeMethod_var);
		V_1 = L_5;
		NPC_t623034359 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		DialogueRunner_t3655145191 * L_8 = Object_FindObjectOfType_TisDialogueRunner_t3655145191_m2051441236(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisDialogueRunner_t3655145191_m2051441236_RuntimeMethod_var);
		NPC_t623034359 * L_9 = V_1;
		String_t* L_10 = L_9->get_talkToNode_3();
		DialogueRunner_StartDialogue_m917080516(L_8, L_10, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Boolean Yarn.Unity.Example.PlayerCharacter::<CheckForNearbyNPC>m__0(Yarn.Unity.Example.NPC)
extern "C"  bool PlayerCharacter_U3CCheckForNearbyNPCU3Em__0_m2170893532 (PlayerCharacter_t3157521029 * __this, NPC_t623034359 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCharacter_U3CCheckForNearbyNPCU3Em__0_m2170893532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		NPC_t623034359 * L_0 = ___p0;
		String_t* L_1 = L_0->get_talkToNode_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		NPC_t623034359 * L_3 = ___p0;
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = Vector3_get_magnitude_m27958459((&V_0), /*hidden argument*/NULL);
		float L_10 = __this->get_interactionRadius_5();
		G_B3_0 = ((((int32_t)((!(((float)L_9) <= ((float)L_10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B3_0 = 0;
	}

IL_0041:
	{
		return (bool)G_B3_0;
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
// System.Void Yarn.Unity.Example.SpriteSwitcher::.ctor()
extern "C"  void SpriteSwitcher__ctor_m3887701612 (SpriteSwitcher_t999038117 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.Example.SpriteSwitcher::UseSprite(System.String)
extern "C"  void SpriteSwitcher_UseSprite_m725549410 (SpriteSwitcher_t999038117 * __this, String_t* ___spriteName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteSwitcher_UseSprite_m725549410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_t280657092 * V_0 = NULL;
	SpriteInfo_t2637886516  V_1;
	memset(&V_1, 0, sizeof(V_1));
	SpriteInfoU5BU5D_t4206874749* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = (Sprite_t280657092 *)NULL;
		SpriteInfoU5BU5D_t4206874749* L_0 = __this->get_sprites_2();
		V_2 = L_0;
		V_3 = 0;
		goto IL_0040;
	}

IL_0010:
	{
		SpriteInfoU5BU5D_t4206874749* L_1 = V_2;
		int32_t L_2 = V_3;
		V_1 = (*(SpriteInfo_t2637886516 *)((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2))));
		String_t* L_3 = (&V_1)->get_name_0();
		String_t* L_4 = ___spriteName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		Sprite_t280657092 * L_6 = (&V_1)->get_sprite_1();
		V_0 = L_6;
		goto IL_0049;
	}

IL_003c:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_8 = V_3;
		SpriteInfoU5BU5D_t4206874749* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}

IL_0049:
	{
		Sprite_t280657092 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_12 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_13 = ___spriteName0;
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m575266265(NULL /*static, unused*/, _stringLiteral2619560846, L_12, /*hidden argument*/NULL);
		return;
	}

IL_006a:
	{
		SpriteRenderer_t3235626157 * L_14 = Component_GetComponent_TisSpriteRenderer_t3235626157_m4089200052(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m4089200052_RuntimeMethod_var);
		Sprite_t280657092 * L_15 = V_0;
		SpriteRenderer_set_sprite_m1286893786(L_14, L_15, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Yarn.Unity.Example.SpriteSwitcher/SpriteInfo
extern "C" void SpriteInfo_t2637886516_marshal_pinvoke(const SpriteInfo_t2637886516& unmarshaled, SpriteInfo_t2637886516_marshaled_pinvoke& marshaled)
{
	Exception_t* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'SpriteInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception);
}
extern "C" void SpriteInfo_t2637886516_marshal_pinvoke_back(const SpriteInfo_t2637886516_marshaled_pinvoke& marshaled, SpriteInfo_t2637886516& unmarshaled)
{
	Exception_t* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'SpriteInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception);
}
// Conversion method for clean up from marshalling of: Yarn.Unity.Example.SpriteSwitcher/SpriteInfo
extern "C" void SpriteInfo_t2637886516_marshal_pinvoke_cleanup(SpriteInfo_t2637886516_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Yarn.Unity.Example.SpriteSwitcher/SpriteInfo
extern "C" void SpriteInfo_t2637886516_marshal_com(const SpriteInfo_t2637886516& unmarshaled, SpriteInfo_t2637886516_marshaled_com& marshaled)
{
	Exception_t* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'SpriteInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception);
}
extern "C" void SpriteInfo_t2637886516_marshal_com_back(const SpriteInfo_t2637886516_marshaled_com& marshaled, SpriteInfo_t2637886516& unmarshaled)
{
	Exception_t* ___sprite_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'SpriteInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_1Exception);
}
// Conversion method for clean up from marshalling of: Yarn.Unity.Example.SpriteSwitcher/SpriteInfo
extern "C" void SpriteInfo_t2637886516_marshal_com_cleanup(SpriteInfo_t2637886516_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Yarn.Unity.LocalisedStringGroup::.ctor()
extern "C"  void LocalisedStringGroup__ctor_m794991268 (LocalisedStringGroup_t614941511 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Yarn.Unity.VariableStorageBehaviour::.ctor()
extern "C"  void VariableStorageBehaviour__ctor_m1496518374 (VariableStorageBehaviour_t3802685183 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Yarn.Unity.VariableStorageBehaviour::SetNumber(System.String,System.Single)
extern "C"  void VariableStorageBehaviour_SetNumber_m3115685783 (VariableStorageBehaviour_t3802685183 * __this, String_t* ___variableName0, float ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableStorageBehaviour_SetNumber_m3115685783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Single Yarn.Unity.VariableStorageBehaviour::GetNumber(System.String)
extern "C"  float VariableStorageBehaviour_GetNumber_m1166801113 (VariableStorageBehaviour_t3802685183 * __this, String_t* ___variableName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableStorageBehaviour_GetNumber_m1166801113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// Yarn.Value Yarn.Unity.VariableStorageBehaviour::GetValue(System.String)
extern "C"  Value_t881556609 * VariableStorageBehaviour_GetValue_m261576785 (VariableStorageBehaviour_t3802685183 * __this, String_t* ___variableName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableStorageBehaviour_GetValue_m261576785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___variableName0;
		float L_1 = VirtFuncInvoker1< float, String_t* >::Invoke(7 /* System.Single Yarn.Unity.VariableStorageBehaviour::GetNumber(System.String) */, __this, L_0);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		Value_t881556609 * L_4 = (Value_t881556609 *)il2cpp_codegen_object_new(Value_t881556609_il2cpp_TypeInfo_var);
		Value__ctor_m1179715953(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Yarn.Unity.VariableStorageBehaviour::SetValue(System.String,Yarn.Value)
extern "C"  void VariableStorageBehaviour_SetValue_m631191027 (VariableStorageBehaviour_t3802685183 * __this, String_t* ___variableName0, Value_t881556609 * ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___variableName0;
		Value_t881556609 * L_1 = ___value1;
		float L_2 = Value_get_AsNumber_m69121793(L_1, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, float >::Invoke(6 /* System.Void Yarn.Unity.VariableStorageBehaviour::SetNumber(System.String,System.Single) */, __this, L_0, L_2);
		return;
	}
}
// System.Void Yarn.Unity.VariableStorageBehaviour::Clear()
extern "C"  void VariableStorageBehaviour_Clear_m2247870883 (VariableStorageBehaviour_t3802685183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableStorageBehaviour_Clear_m2247870883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void Yarn.Unity.YarnCommandAttribute::.ctor(System.String)
extern "C"  void YarnCommandAttribute__ctor_m3218335536 (YarnCommandAttribute_t3061396875 * __this, String_t* ___commandString0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___commandString0;
		YarnCommandAttribute_set_commandString_m903378172(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Yarn.Unity.YarnCommandAttribute::get_commandString()
extern "C"  String_t* YarnCommandAttribute_get_commandString_m1350367434 (YarnCommandAttribute_t3061396875 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CcommandStringU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Yarn.Unity.YarnCommandAttribute::set_commandString(System.String)
extern "C"  void YarnCommandAttribute_set_commandString_m903378172 (YarnCommandAttribute_t3061396875 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CcommandStringU3Ek__BackingField_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
