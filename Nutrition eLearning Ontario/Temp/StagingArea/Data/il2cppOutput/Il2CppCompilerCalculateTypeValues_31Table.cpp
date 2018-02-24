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


// System.Collections.Generic.List`1<Yarn.Instruction>
struct List_1_t1094411180;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// ExampleDialogueUI
struct ExampleDialogueUI_t4244439102;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.String,Yarn.LineInfo>
struct Dictionary_2_t3450361873;
// System.Collections.Generic.Dictionary`2<System.String,Yarn.Node>
struct Dictionary_2_t2640739710;
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
// Yarn.Unity.DialogueRunner
struct DialogueRunner_t3655145191;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t1232139915;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3662770472;
// System.Void
struct Void_t1185182177;
// Yarn.Program
struct Program_t188249568;
// Yarn.Node
struct Node_t2855483411;
// Yarn.Library
struct Library_t2380415395;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// Yarn.AntlrCompiler
struct AntlrCompiler_t1859010293;
// System.Collections.Generic.Dictionary`2<System.Int32,Yarn.TokenType>
struct Dictionary_2_t3848240099;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2280021157;
// Yarn.OptionChooser
struct OptionChooser_t101959131;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t2780361322;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Yarn.Unity.LocalisedStringGroup[]
struct LocalisedStringGroupU5BU5D_t2868870078;
// Yarn.Unity.VariableStorageBehaviour
struct VariableStorageBehaviour_t3802685183;
// Yarn.Unity.DialogueUIBehaviour
struct DialogueUIBehaviour_t637706657;
// Yarn.Dialogue
struct Dialogue_t3789480790;
// Yarn.Logger
struct Logger_t1351394572;
// UnityEngine.TextAsset
struct TextAsset_t3022178571;
// Yarn.Unity.Example.SpriteSwitcher/SpriteInfo[]
struct SpriteInfoU5BU5D_t4206874749;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// ExampleVariableStorage
struct ExampleVariableStorage_t1372347222;
// System.Collections.Generic.Dictionary`2<System.String,Yarn.Value>
struct Dictionary_2_t666812908;
// ExampleVariableStorage/DefaultVariable[]
struct DefaultVariableU5BU5D_t403142208;




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
#ifndef NODE_T2855483411_H
#define NODE_T2855483411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Node
struct  Node_t2855483411  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Yarn.Instruction> Yarn.Node::instructions
	List_1_t1094411180 * ___instructions_0;
	// System.String Yarn.Node::name
	String_t* ___name_1;
	// System.String Yarn.Node::sourceTextStringID
	String_t* ___sourceTextStringID_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Yarn.Node::labels
	Dictionary_2_t2736202052 * ___labels_3;
	// System.Collections.Generic.List`1<System.String> Yarn.Node::tags
	List_1_t3319525431 * ___tags_4;

public:
	inline static int32_t get_offset_of_instructions_0() { return static_cast<int32_t>(offsetof(Node_t2855483411, ___instructions_0)); }
	inline List_1_t1094411180 * get_instructions_0() const { return ___instructions_0; }
	inline List_1_t1094411180 ** get_address_of_instructions_0() { return &___instructions_0; }
	inline void set_instructions_0(List_1_t1094411180 * value)
	{
		___instructions_0 = value;
		Il2CppCodeGenWriteBarrier((&___instructions_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Node_t2855483411, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_sourceTextStringID_2() { return static_cast<int32_t>(offsetof(Node_t2855483411, ___sourceTextStringID_2)); }
	inline String_t* get_sourceTextStringID_2() const { return ___sourceTextStringID_2; }
	inline String_t** get_address_of_sourceTextStringID_2() { return &___sourceTextStringID_2; }
	inline void set_sourceTextStringID_2(String_t* value)
	{
		___sourceTextStringID_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTextStringID_2), value);
	}

	inline static int32_t get_offset_of_labels_3() { return static_cast<int32_t>(offsetof(Node_t2855483411, ___labels_3)); }
	inline Dictionary_2_t2736202052 * get_labels_3() const { return ___labels_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_labels_3() { return &___labels_3; }
	inline void set_labels_3(Dictionary_2_t2736202052 * value)
	{
		___labels_3 = value;
		Il2CppCodeGenWriteBarrier((&___labels_3), value);
	}

	inline static int32_t get_offset_of_tags_4() { return static_cast<int32_t>(offsetof(Node_t2855483411, ___tags_4)); }
	inline List_1_t3319525431 * get_tags_4() const { return ___tags_4; }
	inline List_1_t3319525431 ** get_address_of_tags_4() { return &___tags_4; }
	inline void set_tags_4(List_1_t3319525431 * value)
	{
		___tags_4 = value;
		Il2CppCodeGenWriteBarrier((&___tags_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODE_T2855483411_H
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
#ifndef PROGRAM_T188249568_H
#define PROGRAM_T188249568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Program
struct  Program_t188249568  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Yarn.Program::strings
	Dictionary_2_t1632706988 * ___strings_0;
	// System.Collections.Generic.Dictionary`2<System.String,Yarn.LineInfo> Yarn.Program::lineInfo
	Dictionary_2_t3450361873 * ___lineInfo_1;
	// System.Collections.Generic.Dictionary`2<System.String,Yarn.Node> Yarn.Program::nodes
	Dictionary_2_t2640739710 * ___nodes_2;
	// System.Int32 Yarn.Program::stringCount
	int32_t ___stringCount_3;

public:
	inline static int32_t get_offset_of_strings_0() { return static_cast<int32_t>(offsetof(Program_t188249568, ___strings_0)); }
	inline Dictionary_2_t1632706988 * get_strings_0() const { return ___strings_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_strings_0() { return &___strings_0; }
	inline void set_strings_0(Dictionary_2_t1632706988 * value)
	{
		___strings_0 = value;
		Il2CppCodeGenWriteBarrier((&___strings_0), value);
	}

	inline static int32_t get_offset_of_lineInfo_1() { return static_cast<int32_t>(offsetof(Program_t188249568, ___lineInfo_1)); }
	inline Dictionary_2_t3450361873 * get_lineInfo_1() const { return ___lineInfo_1; }
	inline Dictionary_2_t3450361873 ** get_address_of_lineInfo_1() { return &___lineInfo_1; }
	inline void set_lineInfo_1(Dictionary_2_t3450361873 * value)
	{
		___lineInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___lineInfo_1), value);
	}

	inline static int32_t get_offset_of_nodes_2() { return static_cast<int32_t>(offsetof(Program_t188249568, ___nodes_2)); }
	inline Dictionary_2_t2640739710 * get_nodes_2() const { return ___nodes_2; }
	inline Dictionary_2_t2640739710 ** get_address_of_nodes_2() { return &___nodes_2; }
	inline void set_nodes_2(Dictionary_2_t2640739710 * value)
	{
		___nodes_2 = value;
		Il2CppCodeGenWriteBarrier((&___nodes_2), value);
	}

	inline static int32_t get_offset_of_stringCount_3() { return static_cast<int32_t>(offsetof(Program_t188249568, ___stringCount_3)); }
	inline int32_t get_stringCount_3() const { return ___stringCount_3; }
	inline int32_t* get_address_of_stringCount_3() { return &___stringCount_3; }
	inline void set_stringCount_3(int32_t value)
	{
		___stringCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRAM_T188249568_H
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
#ifndef ABSTRACTPARSETREEVISITOR_1_T925544127_H
#define ABSTRACTPARSETREEVISITOR_1_T925544127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Tree.AbstractParseTreeVisitor`1<System.Int32>
struct  AbstractParseTreeVisitor_1_t925544127  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTPARSETREEVISITOR_1_T925544127_H
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
#ifndef BASEERRORLISTENER_T881339031_H
#define BASEERRORLISTENER_T881339031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.BaseErrorListener
struct  BaseErrorListener_t881339031  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEERRORLISTENER_T881339031_H
#ifndef YARNSPINNERPARSERBASELISTENER_T2715304878_H
#define YARNSPINNERPARSERBASELISTENER_T2715304878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParserBaseListener
struct  YarnSpinnerParserBaseListener_t2715304878  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YARNSPINNERPARSERBASELISTENER_T2715304878_H
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
#ifndef YARNSPINNERPARSERBASEVISITOR_1_T593493202_H
#define YARNSPINNERPARSERBASEVISITOR_1_T593493202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParserBaseVisitor`1<System.Int32>
struct  YarnSpinnerParserBaseVisitor_1_t593493202  : public AbstractParseTreeVisitor_1_t925544127
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YARNSPINNERPARSERBASEVISITOR_1_T593493202_H
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
#ifndef LINEINFO_T3665105574_H
#define LINEINFO_T3665105574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.LineInfo
struct  LineInfo_t3665105574 
{
public:
	// System.Int32 Yarn.LineInfo::lineNumber
	int32_t ___lineNumber_0;
	// System.String Yarn.LineInfo::nodeName
	String_t* ___nodeName_1;

public:
	inline static int32_t get_offset_of_lineNumber_0() { return static_cast<int32_t>(offsetof(LineInfo_t3665105574, ___lineNumber_0)); }
	inline int32_t get_lineNumber_0() const { return ___lineNumber_0; }
	inline int32_t* get_address_of_lineNumber_0() { return &___lineNumber_0; }
	inline void set_lineNumber_0(int32_t value)
	{
		___lineNumber_0 = value;
	}

	inline static int32_t get_offset_of_nodeName_1() { return static_cast<int32_t>(offsetof(LineInfo_t3665105574, ___nodeName_1)); }
	inline String_t* get_nodeName_1() const { return ___nodeName_1; }
	inline String_t** get_address_of_nodeName_1() { return &___nodeName_1; }
	inline void set_nodeName_1(String_t* value)
	{
		___nodeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___nodeName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Yarn.LineInfo
struct LineInfo_t3665105574_marshaled_pinvoke
{
	int32_t ___lineNumber_0;
	char* ___nodeName_1;
};
// Native definition for COM marshalling of Yarn.LineInfo
struct LineInfo_t3665105574_marshaled_com
{
	int32_t ___lineNumber_0;
	Il2CppChar* ___nodeName_1;
};
#endif // LINEINFO_T3665105574_H
#ifndef ERRORLISTENER_T2693590849_H
#define ERRORLISTENER_T2693590849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.ErrorListener
struct  ErrorListener_t2693590849  : public BaseErrorListener_t881339031
{
public:

public:
};

struct ErrorListener_t2693590849_StaticFields
{
public:
	// Yarn.ErrorListener Yarn.ErrorListener::instance
	ErrorListener_t2693590849 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(ErrorListener_t2693590849_StaticFields, ___instance_0)); }
	inline ErrorListener_t2693590849 * get_instance_0() const { return ___instance_0; }
	inline ErrorListener_t2693590849 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(ErrorListener_t2693590849 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORLISTENER_T2693590849_H
#ifndef COMPILEFLAGS_T1138421705_H
#define COMPILEFLAGS_T1138421705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Compiler/CompileFlags
struct  CompileFlags_t1138421705 
{
public:
	// System.Boolean Yarn.Compiler/CompileFlags::DisableShuffleOptionsAfterNextSet
	bool ___DisableShuffleOptionsAfterNextSet_0;

public:
	inline static int32_t get_offset_of_DisableShuffleOptionsAfterNextSet_0() { return static_cast<int32_t>(offsetof(CompileFlags_t1138421705, ___DisableShuffleOptionsAfterNextSet_0)); }
	inline bool get_DisableShuffleOptionsAfterNextSet_0() const { return ___DisableShuffleOptionsAfterNextSet_0; }
	inline bool* get_address_of_DisableShuffleOptionsAfterNextSet_0() { return &___DisableShuffleOptionsAfterNextSet_0; }
	inline void set_DisableShuffleOptionsAfterNextSet_0(bool value)
	{
		___DisableShuffleOptionsAfterNextSet_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Yarn.Compiler/CompileFlags
struct CompileFlags_t1138421705_marshaled_pinvoke
{
	int32_t ___DisableShuffleOptionsAfterNextSet_0;
};
// Native definition for COM marshalling of Yarn.Compiler/CompileFlags
struct CompileFlags_t1138421705_marshaled_com
{
	int32_t ___DisableShuffleOptionsAfterNextSet_0;
};
#endif // COMPILEFLAGS_T1138421705_H
#ifndef PARSEEXCEPTION_T3340361648_H
#define PARSEEXCEPTION_T3340361648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.ParseException
struct  ParseException_t3340361648  : public Exception_t
{
public:
	// System.Int32 Yarn.ParseException::lineNumber
	int32_t ___lineNumber_11;

public:
	inline static int32_t get_offset_of_lineNumber_11() { return static_cast<int32_t>(offsetof(ParseException_t3340361648, ___lineNumber_11)); }
	inline int32_t get_lineNumber_11() const { return ___lineNumber_11; }
	inline int32_t* get_address_of_lineNumber_11() { return &___lineNumber_11; }
	inline void set_lineNumber_11(int32_t value)
	{
		___lineNumber_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSEEXCEPTION_T3340361648_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D5352_T1827861037_H
#define __STATICARRAYINITTYPESIZEU3D5352_T1827861037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5352
struct  __StaticArrayInitTypeSizeU3D5352_t1827861037 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5352_t1827861037__padding[5352];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D5352_T1827861037_H
#ifndef __STATICARRAYINITTYPESIZEU3D12504_T267544262_H
#define __STATICARRAYINITTYPESIZEU3D12504_T267544262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12504
struct  __StaticArrayInitTypeSizeU3D12504_t267544262 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12504_t267544262__padding[12504];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12504_T267544262_H
#ifndef COMPILEFLAGS_T3421872141_H
#define COMPILEFLAGS_T3421872141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.AntlrCompiler/CompileFlags
struct  CompileFlags_t3421872141 
{
public:
	// System.Boolean Yarn.AntlrCompiler/CompileFlags::DisableShuffleOptionsAfterNextSet
	bool ___DisableShuffleOptionsAfterNextSet_0;

public:
	inline static int32_t get_offset_of_DisableShuffleOptionsAfterNextSet_0() { return static_cast<int32_t>(offsetof(CompileFlags_t3421872141, ___DisableShuffleOptionsAfterNextSet_0)); }
	inline bool get_DisableShuffleOptionsAfterNextSet_0() const { return ___DisableShuffleOptionsAfterNextSet_0; }
	inline bool* get_address_of_DisableShuffleOptionsAfterNextSet_0() { return &___DisableShuffleOptionsAfterNextSet_0; }
	inline void set_DisableShuffleOptionsAfterNextSet_0(bool value)
	{
		___DisableShuffleOptionsAfterNextSet_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Yarn.AntlrCompiler/CompileFlags
struct CompileFlags_t3421872141_marshaled_pinvoke
{
	int32_t ___DisableShuffleOptionsAfterNextSet_0;
};
// Native definition for COM marshalling of Yarn.AntlrCompiler/CompileFlags
struct CompileFlags_t3421872141_marshaled_com
{
	int32_t ___DisableShuffleOptionsAfterNextSet_0;
};
#endif // COMPILEFLAGS_T3421872141_H
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
#ifndef ANTLRCOMPILER_T1859010293_H
#define ANTLRCOMPILER_T1859010293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.AntlrCompiler
struct  AntlrCompiler_t1859010293  : public YarnSpinnerParserBaseListener_t2715304878
{
public:
	// Yarn.AntlrCompiler/CompileFlags Yarn.AntlrCompiler::flags
	CompileFlags_t3421872141  ___flags_0;
	// System.Int32 Yarn.AntlrCompiler::labelCount
	int32_t ___labelCount_1;
	// Yarn.Program Yarn.AntlrCompiler::<program>k__BackingField
	Program_t188249568 * ___U3CprogramU3Ek__BackingField_2;
	// Yarn.Node Yarn.AntlrCompiler::currentNode
	Node_t2855483411 * ___currentNode_3;
	// Yarn.Library Yarn.AntlrCompiler::library
	Library_t2380415395 * ___library_4;
	// System.Boolean Yarn.AntlrCompiler::rawTextNode
	bool ___rawTextNode_5;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(AntlrCompiler_t1859010293, ___flags_0)); }
	inline CompileFlags_t3421872141  get_flags_0() const { return ___flags_0; }
	inline CompileFlags_t3421872141 * get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(CompileFlags_t3421872141  value)
	{
		___flags_0 = value;
	}

	inline static int32_t get_offset_of_labelCount_1() { return static_cast<int32_t>(offsetof(AntlrCompiler_t1859010293, ___labelCount_1)); }
	inline int32_t get_labelCount_1() const { return ___labelCount_1; }
	inline int32_t* get_address_of_labelCount_1() { return &___labelCount_1; }
	inline void set_labelCount_1(int32_t value)
	{
		___labelCount_1 = value;
	}

	inline static int32_t get_offset_of_U3CprogramU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AntlrCompiler_t1859010293, ___U3CprogramU3Ek__BackingField_2)); }
	inline Program_t188249568 * get_U3CprogramU3Ek__BackingField_2() const { return ___U3CprogramU3Ek__BackingField_2; }
	inline Program_t188249568 ** get_address_of_U3CprogramU3Ek__BackingField_2() { return &___U3CprogramU3Ek__BackingField_2; }
	inline void set_U3CprogramU3Ek__BackingField_2(Program_t188249568 * value)
	{
		___U3CprogramU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprogramU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_currentNode_3() { return static_cast<int32_t>(offsetof(AntlrCompiler_t1859010293, ___currentNode_3)); }
	inline Node_t2855483411 * get_currentNode_3() const { return ___currentNode_3; }
	inline Node_t2855483411 ** get_address_of_currentNode_3() { return &___currentNode_3; }
	inline void set_currentNode_3(Node_t2855483411 * value)
	{
		___currentNode_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentNode_3), value);
	}

	inline static int32_t get_offset_of_library_4() { return static_cast<int32_t>(offsetof(AntlrCompiler_t1859010293, ___library_4)); }
	inline Library_t2380415395 * get_library_4() const { return ___library_4; }
	inline Library_t2380415395 ** get_address_of_library_4() { return &___library_4; }
	inline void set_library_4(Library_t2380415395 * value)
	{
		___library_4 = value;
		Il2CppCodeGenWriteBarrier((&___library_4), value);
	}

	inline static int32_t get_offset_of_rawTextNode_5() { return static_cast<int32_t>(offsetof(AntlrCompiler_t1859010293, ___rawTextNode_5)); }
	inline bool get_rawTextNode_5() const { return ___rawTextNode_5; }
	inline bool* get_address_of_rawTextNode_5() { return &___rawTextNode_5; }
	inline void set_rawTextNode_5(bool value)
	{
		___rawTextNode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANTLRCOMPILER_T1859010293_H
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
#ifndef EXECUTIONSTATE_T3499463306_H
#define EXECUTIONSTATE_T3499463306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.VirtualMachine/ExecutionState
struct  ExecutionState_t3499463306 
{
public:
	// System.Int32 Yarn.VirtualMachine/ExecutionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExecutionState_t3499463306, ___value___1)); }
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
#endif // EXECUTIONSTATE_T3499463306_H
#ifndef COMPILER_T3717980352_H
#define COMPILER_T3717980352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Compiler
struct  Compiler_t3717980352  : public RuntimeObject
{
public:
	// Yarn.Compiler/CompileFlags Yarn.Compiler::flags
	CompileFlags_t1138421705  ___flags_0;
	// Yarn.Program Yarn.Compiler::<program>k__BackingField
	Program_t188249568 * ___U3CprogramU3Ek__BackingField_1;
	// System.Int32 Yarn.Compiler::labelCount
	int32_t ___labelCount_2;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(Compiler_t3717980352, ___flags_0)); }
	inline CompileFlags_t1138421705  get_flags_0() const { return ___flags_0; }
	inline CompileFlags_t1138421705 * get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(CompileFlags_t1138421705  value)
	{
		___flags_0 = value;
	}

	inline static int32_t get_offset_of_U3CprogramU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Compiler_t3717980352, ___U3CprogramU3Ek__BackingField_1)); }
	inline Program_t188249568 * get_U3CprogramU3Ek__BackingField_1() const { return ___U3CprogramU3Ek__BackingField_1; }
	inline Program_t188249568 ** get_address_of_U3CprogramU3Ek__BackingField_1() { return &___U3CprogramU3Ek__BackingField_1; }
	inline void set_U3CprogramU3Ek__BackingField_1(Program_t188249568 * value)
	{
		___U3CprogramU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprogramU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_labelCount_2() { return static_cast<int32_t>(offsetof(Compiler_t3717980352, ___labelCount_2)); }
	inline int32_t get_labelCount_2() const { return ___labelCount_2; }
	inline int32_t* get_address_of_labelCount_2() { return &___labelCount_2; }
	inline void set_labelCount_2(int32_t value)
	{
		___labelCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILER_T3717980352_H
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
#ifndef BYTECODE_T456918939_H
#define BYTECODE_T456918939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.ByteCode
struct  ByteCode_t456918939 
{
public:
	// System.Int32 Yarn.ByteCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ByteCode_t456918939, ___value___1)); }
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
#endif // BYTECODE_T456918939_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255370_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255370  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255370_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5352 <PrivateImplementationDetails>::6D759F4CB54C1516C0777C91A024AC40E40AC4E5
	__StaticArrayInitTypeSizeU3D5352_t1827861037  ___6D759F4CB54C1516C0777C91A024AC40E40AC4E5_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12504 <PrivateImplementationDetails>::8A6312E7C9F96152697C442BD5AC483BAE2544C7
	__StaticArrayInitTypeSizeU3D12504_t267544262  ___8A6312E7C9F96152697C442BD5AC483BAE2544C7_1;

public:
	inline static int32_t get_offset_of_U36D759F4CB54C1516C0777C91A024AC40E40AC4E5_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255370_StaticFields, ___6D759F4CB54C1516C0777C91A024AC40E40AC4E5_0)); }
	inline __StaticArrayInitTypeSizeU3D5352_t1827861037  get_U36D759F4CB54C1516C0777C91A024AC40E40AC4E5_0() const { return ___6D759F4CB54C1516C0777C91A024AC40E40AC4E5_0; }
	inline __StaticArrayInitTypeSizeU3D5352_t1827861037 * get_address_of_U36D759F4CB54C1516C0777C91A024AC40E40AC4E5_0() { return &___6D759F4CB54C1516C0777C91A024AC40E40AC4E5_0; }
	inline void set_U36D759F4CB54C1516C0777C91A024AC40E40AC4E5_0(__StaticArrayInitTypeSizeU3D5352_t1827861037  value)
	{
		___6D759F4CB54C1516C0777C91A024AC40E40AC4E5_0 = value;
	}

	inline static int32_t get_offset_of_U38A6312E7C9F96152697C442BD5AC483BAE2544C7_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255370_StaticFields, ___8A6312E7C9F96152697C442BD5AC483BAE2544C7_1)); }
	inline __StaticArrayInitTypeSizeU3D12504_t267544262  get_U38A6312E7C9F96152697C442BD5AC483BAE2544C7_1() const { return ___8A6312E7C9F96152697C442BD5AC483BAE2544C7_1; }
	inline __StaticArrayInitTypeSizeU3D12504_t267544262 * get_address_of_U38A6312E7C9F96152697C442BD5AC483BAE2544C7_1() { return &___8A6312E7C9F96152697C442BD5AC483BAE2544C7_1; }
	inline void set_U38A6312E7C9F96152697C442BD5AC483BAE2544C7_1(__StaticArrayInitTypeSizeU3D12504_t267544262  value)
	{
		___8A6312E7C9F96152697C442BD5AC483BAE2544C7_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255370_H
#ifndef BODYVISITOR_T721194151_H
#define BODYVISITOR_T721194151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.BodyVisitor
struct  BodyVisitor_t721194151  : public YarnSpinnerParserBaseVisitor_1_t593493202
{
public:
	// Yarn.AntlrCompiler Yarn.BodyVisitor::compiler
	AntlrCompiler_t1859010293 * ___compiler_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Yarn.TokenType> Yarn.BodyVisitor::tokens
	Dictionary_2_t3848240099 * ___tokens_1;

public:
	inline static int32_t get_offset_of_compiler_0() { return static_cast<int32_t>(offsetof(BodyVisitor_t721194151, ___compiler_0)); }
	inline AntlrCompiler_t1859010293 * get_compiler_0() const { return ___compiler_0; }
	inline AntlrCompiler_t1859010293 ** get_address_of_compiler_0() { return &___compiler_0; }
	inline void set_compiler_0(AntlrCompiler_t1859010293 * value)
	{
		___compiler_0 = value;
		Il2CppCodeGenWriteBarrier((&___compiler_0), value);
	}

	inline static int32_t get_offset_of_tokens_1() { return static_cast<int32_t>(offsetof(BodyVisitor_t721194151, ___tokens_1)); }
	inline Dictionary_2_t3848240099 * get_tokens_1() const { return ___tokens_1; }
	inline Dictionary_2_t3848240099 ** get_address_of_tokens_1() { return &___tokens_1; }
	inline void set_tokens_1(Dictionary_2_t3848240099 * value)
	{
		___tokens_1 = value;
		Il2CppCodeGenWriteBarrier((&___tokens_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BODYVISITOR_T721194151_H
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
#ifndef INSTRUCTION_T3917303734_H
#define INSTRUCTION_T3917303734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.Instruction
struct  Instruction_t3917303734 
{
public:
	// Yarn.ByteCode Yarn.Instruction::operation
	int32_t ___operation_0;
	// System.Object Yarn.Instruction::operandA
	RuntimeObject * ___operandA_1;
	// System.Object Yarn.Instruction::operandB
	RuntimeObject * ___operandB_2;

public:
	inline static int32_t get_offset_of_operation_0() { return static_cast<int32_t>(offsetof(Instruction_t3917303734, ___operation_0)); }
	inline int32_t get_operation_0() const { return ___operation_0; }
	inline int32_t* get_address_of_operation_0() { return &___operation_0; }
	inline void set_operation_0(int32_t value)
	{
		___operation_0 = value;
	}

	inline static int32_t get_offset_of_operandA_1() { return static_cast<int32_t>(offsetof(Instruction_t3917303734, ___operandA_1)); }
	inline RuntimeObject * get_operandA_1() const { return ___operandA_1; }
	inline RuntimeObject ** get_address_of_operandA_1() { return &___operandA_1; }
	inline void set_operandA_1(RuntimeObject * value)
	{
		___operandA_1 = value;
		Il2CppCodeGenWriteBarrier((&___operandA_1), value);
	}

	inline static int32_t get_offset_of_operandB_2() { return static_cast<int32_t>(offsetof(Instruction_t3917303734, ___operandB_2)); }
	inline RuntimeObject * get_operandB_2() const { return ___operandB_2; }
	inline RuntimeObject ** get_address_of_operandB_2() { return &___operandB_2; }
	inline void set_operandB_2(RuntimeObject * value)
	{
		___operandB_2 = value;
		Il2CppCodeGenWriteBarrier((&___operandB_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Yarn.Instruction
struct Instruction_t3917303734_marshaled_pinvoke
{
	int32_t ___operation_0;
	Il2CppIUnknown* ___operandA_1;
	Il2CppIUnknown* ___operandB_2;
};
// Native definition for COM marshalling of Yarn.Instruction
struct Instruction_t3917303734_marshaled_com
{
	int32_t ___operation_0;
	Il2CppIUnknown* ___operandA_1;
	Il2CppIUnknown* ___operandB_2;
};
#endif // INSTRUCTION_T3917303734_H
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
#ifndef NODECOMPLETEHANDLER_T4113084407_H
#define NODECOMPLETEHANDLER_T4113084407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.VirtualMachine/NodeCompleteHandler
struct  NodeCompleteHandler_t4113084407  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODECOMPLETEHANDLER_T4113084407_H
#ifndef LINEHANDLER_T489121245_H
#define LINEHANDLER_T489121245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.VirtualMachine/LineHandler
struct  LineHandler_t489121245  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEHANDLER_T489121245_H
#ifndef OPTIONSHANDLER_T3058986845_H
#define OPTIONSHANDLER_T3058986845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.VirtualMachine/OptionsHandler
struct  OptionsHandler_t3058986845  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONSHANDLER_T3058986845_H
#ifndef COMMANDHANDLER_T749589751_H
#define COMMANDHANDLER_T749589751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Yarn.VirtualMachine/CommandHandler
struct  CommandHandler_t749589751  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDHANDLER_T749589751_H
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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3100 = { sizeof (LineHandler_t489121245), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3101 = { sizeof (OptionsHandler_t3058986845), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3102 = { sizeof (CommandHandler_t749589751), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3103 = { sizeof (NodeCompleteHandler_t4113084407), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3104 = { sizeof (ExecutionState_t3499463306)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3104[4] = 
{
	ExecutionState_t3499463306::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3105 = { sizeof (Compiler_t3717980352), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3105[3] = 
{
	Compiler_t3717980352::get_offset_of_flags_0(),
	Compiler_t3717980352::get_offset_of_U3CprogramU3Ek__BackingField_1(),
	Compiler_t3717980352::get_offset_of_labelCount_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3106 = { sizeof (CompileFlags_t1138421705)+ sizeof (RuntimeObject), sizeof(CompileFlags_t1138421705_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3106[1] = 
{
	CompileFlags_t1138421705::get_offset_of_DisableShuffleOptionsAfterNextSet_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3107 = { sizeof (Value_t881556609), -1, sizeof(Value_t881556609_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3107[6] = 
{
	Value_t881556609_StaticFields::get_offset_of_NULL_0(),
	Value_t881556609::get_offset_of_U3CtypeU3Ek__BackingField_1(),
	Value_t881556609::get_offset_of_U3CnumberValueU3Ek__BackingField_2(),
	Value_t881556609::get_offset_of_U3CvariableNameU3Ek__BackingField_3(),
	Value_t881556609::get_offset_of_U3CstringValueU3Ek__BackingField_4(),
	Value_t881556609::get_offset_of_U3CboolValueU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3108 = { sizeof (Type_t3283156650)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3108[6] = 
{
	Type_t3283156650::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3109 = { sizeof (AntlrCompiler_t1859010293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3109[6] = 
{
	AntlrCompiler_t1859010293::get_offset_of_flags_0(),
	AntlrCompiler_t1859010293::get_offset_of_labelCount_1(),
	AntlrCompiler_t1859010293::get_offset_of_U3CprogramU3Ek__BackingField_2(),
	AntlrCompiler_t1859010293::get_offset_of_currentNode_3(),
	AntlrCompiler_t1859010293::get_offset_of_library_4(),
	AntlrCompiler_t1859010293::get_offset_of_rawTextNode_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3110 = { sizeof (CompileFlags_t3421872141)+ sizeof (RuntimeObject), sizeof(CompileFlags_t3421872141_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3110[1] = 
{
	CompileFlags_t3421872141::get_offset_of_DisableShuffleOptionsAfterNextSet_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3111 = { sizeof (BodyVisitor_t721194151), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3111[2] = 
{
	BodyVisitor_t721194151::get_offset_of_compiler_0(),
	BodyVisitor_t721194151::get_offset_of_tokens_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3112 = { sizeof (ParseException_t3340361648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3112[1] = 
{
	ParseException_t3340361648::get_offset_of_lineNumber_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3113 = { sizeof (LineInfo_t3665105574)+ sizeof (RuntimeObject), sizeof(LineInfo_t3665105574_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3113[2] = 
{
	LineInfo_t3665105574::get_offset_of_lineNumber_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LineInfo_t3665105574::get_offset_of_nodeName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3114 = { sizeof (Program_t188249568), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3114[4] = 
{
	Program_t188249568::get_offset_of_strings_0(),
	Program_t188249568::get_offset_of_lineInfo_1(),
	Program_t188249568::get_offset_of_nodes_2(),
	Program_t188249568::get_offset_of_stringCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3115 = { sizeof (Node_t2855483411), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3115[5] = 
{
	Node_t2855483411::get_offset_of_instructions_0(),
	Node_t2855483411::get_offset_of_name_1(),
	Node_t2855483411::get_offset_of_sourceTextStringID_2(),
	Node_t2855483411::get_offset_of_labels_3(),
	Node_t2855483411::get_offset_of_tags_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3116 = { sizeof (Instruction_t3917303734)+ sizeof (RuntimeObject), sizeof(Instruction_t3917303734_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3116[3] = 
{
	Instruction_t3917303734::get_offset_of_operation_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Instruction_t3917303734::get_offset_of_operandA_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Instruction_t3917303734::get_offset_of_operandB_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3117 = { sizeof (ByteCode_t456918939)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3117[19] = 
{
	ByteCode_t456918939::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3118 = { sizeof (ErrorListener_t2693590849), -1, sizeof(ErrorListener_t2693590849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3118[1] = 
{
	ErrorListener_t2693590849_StaticFields::get_offset_of_instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3119 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255370), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255370_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3119[2] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255370_StaticFields::get_offset_of_U36D759F4CB54C1516C0777C91A024AC40E40AC4E5_0(),
	U3CPrivateImplementationDetailsU3E_t3057255370_StaticFields::get_offset_of_U38A6312E7C9F96152697C442BD5AC483BAE2544C7_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3120 = { sizeof (__StaticArrayInitTypeSizeU3D5352_t1827861037)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D5352_t1827861037 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3121 = { sizeof (__StaticArrayInitTypeSizeU3D12504_t267544262)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D12504_t267544262 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3122 = { sizeof (U3CModuleU3E_t692745548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3123 = { sizeof (LocalisedStringGroup_t614941511), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3123[2] = 
{
	LocalisedStringGroup_t614941511::get_offset_of_language_0(),
	LocalisedStringGroup_t614941511::get_offset_of_stringFiles_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3124 = { sizeof (DialogueRunner_t3655145191), -1, sizeof(DialogueRunner_t3655145191_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3124[13] = 
{
	DialogueRunner_t3655145191::get_offset_of_sourceText_2(),
	DialogueRunner_t3655145191::get_offset_of_stringGroups_3(),
	DialogueRunner_t3655145191::get_offset_of_shouldOverrideLanguage_4(),
	DialogueRunner_t3655145191::get_offset_of_overrideLanguage_5(),
	DialogueRunner_t3655145191::get_offset_of_variableStorage_6(),
	DialogueRunner_t3655145191::get_offset_of_dialogueUI_7(),
	DialogueRunner_t3655145191::get_offset_of_startNode_8(),
	DialogueRunner_t3655145191::get_offset_of_startAutomatically_9(),
	DialogueRunner_t3655145191::get_offset_of_U3CisDialogueRunningU3Ek__BackingField_10(),
	DialogueRunner_t3655145191::get_offset_of_automaticCommands_11(),
	DialogueRunner_t3655145191::get_offset_of__dialogue_12(),
	DialogueRunner_t3655145191_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_13(),
	DialogueRunner_t3655145191_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3125 = { sizeof (U3CRunDialogueU3Ec__Iterator0_t386284222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3125[11] = 
{
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_startNode_0(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U24locvar0_1(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U3CstepU3E__1_2(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U3ClineResultU3E__2_3(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U3CoptionSetResultU3E__3_4(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U3CcommandResultU3E__4_5(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U3CnodeResultU3E__5_6(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U24this_7(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U24current_8(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U24disposing_9(),
	U3CRunDialogueU3Ec__Iterator0_t386284222::get_offset_of_U24PC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3126 = { sizeof (YarnCommandAttribute_t3061396875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3126[1] = 
{
	YarnCommandAttribute_t3061396875::get_offset_of_U3CcommandStringU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3127 = { sizeof (DialogueUIBehaviour_t637706657), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3128 = { sizeof (U3CDialogueStartedU3Ec__Iterator0_t1414164849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3128[3] = 
{
	U3CDialogueStartedU3Ec__Iterator0_t1414164849::get_offset_of_U24current_0(),
	U3CDialogueStartedU3Ec__Iterator0_t1414164849::get_offset_of_U24disposing_1(),
	U3CDialogueStartedU3Ec__Iterator0_t1414164849::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3129 = { sizeof (U3CNodeCompleteU3Ec__Iterator1_t1861394254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3129[3] = 
{
	U3CNodeCompleteU3Ec__Iterator1_t1861394254::get_offset_of_U24current_0(),
	U3CNodeCompleteU3Ec__Iterator1_t1861394254::get_offset_of_U24disposing_1(),
	U3CNodeCompleteU3Ec__Iterator1_t1861394254::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3130 = { sizeof (U3CDialogueCompleteU3Ec__Iterator2_t3834094128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3130[3] = 
{
	U3CDialogueCompleteU3Ec__Iterator2_t3834094128::get_offset_of_U24current_0(),
	U3CDialogueCompleteU3Ec__Iterator2_t3834094128::get_offset_of_U24disposing_1(),
	U3CDialogueCompleteU3Ec__Iterator2_t3834094128::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3131 = { sizeof (VariableStorageBehaviour_t3802685183), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3132 = { sizeof (CameraFollow_t3245689759), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3132[4] = 
{
	CameraFollow_t3245689759::get_offset_of_target_2(),
	CameraFollow_t3245689759::get_offset_of_minPosition_3(),
	CameraFollow_t3245689759::get_offset_of_maxPosition_4(),
	CameraFollow_t3245689759::get_offset_of_moveSpeed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3133 = { sizeof (ExampleDialogueUI_t4244439102), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3133[11] = 
{
	ExampleDialogueUI_t4244439102::get_offset_of_dialogueContainer_2(),
	ExampleDialogueUI_t4244439102::get_offset_of_lineText_3(),
	ExampleDialogueUI_t4244439102::get_offset_of_continuePrompt_4(),
	ExampleDialogueUI_t4244439102::get_offset_of_SetSelectedOption_5(),
	ExampleDialogueUI_t4244439102::get_offset_of_textSpeed_6(),
	ExampleDialogueUI_t4244439102::get_offset_of_optionButtons_7(),
	ExampleDialogueUI_t4244439102::get_offset_of_gameControlsContainer_8(),
	ExampleDialogueUI_t4244439102::get_offset_of_variableStorage_9(),
	ExampleDialogueUI_t4244439102::get_offset_of_money_10(),
	ExampleDialogueUI_t4244439102::get_offset_of_food_11(),
	ExampleDialogueUI_t4244439102::get_offset_of_well_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3134 = { sizeof (U3CRunLineU3Ec__Iterator0_t2630282661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3134[9] = 
{
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_U3CstringBuilderU3E__1_0(),
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_line_1(),
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_U24locvar0_2(),
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_U24locvar1_3(),
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_U3CcU3E__2_4(),
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_U24this_5(),
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_U24current_6(),
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_U24disposing_7(),
	U3CRunLineU3Ec__Iterator0_t2630282661::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3135 = { sizeof (U3CRunOptionsU3Ec__Iterator1_t3229436336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3135[9] = 
{
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_optionsCollection_0(),
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_U3CiU3E__0_1(),
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_U24locvar0_2(),
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_optionChooser_3(),
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_U24locvar1_4(),
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_U24this_5(),
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_U24current_6(),
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_U24disposing_7(),
	U3CRunOptionsU3Ec__Iterator1_t3229436336::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3136 = { sizeof (U3CRunCommandU3Ec__Iterator2_t2265219509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3136[4] = 
{
	U3CRunCommandU3Ec__Iterator2_t2265219509::get_offset_of_command_0(),
	U3CRunCommandU3Ec__Iterator2_t2265219509::get_offset_of_U24current_1(),
	U3CRunCommandU3Ec__Iterator2_t2265219509::get_offset_of_U24disposing_2(),
	U3CRunCommandU3Ec__Iterator2_t2265219509::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3137 = { sizeof (U3CDialogueStartedU3Ec__Iterator3_t2346652362), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3137[4] = 
{
	U3CDialogueStartedU3Ec__Iterator3_t2346652362::get_offset_of_U24this_0(),
	U3CDialogueStartedU3Ec__Iterator3_t2346652362::get_offset_of_U24current_1(),
	U3CDialogueStartedU3Ec__Iterator3_t2346652362::get_offset_of_U24disposing_2(),
	U3CDialogueStartedU3Ec__Iterator3_t2346652362::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3138 = { sizeof (U3CDialogueCompleteU3Ec__Iterator4_t163110549), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3138[4] = 
{
	U3CDialogueCompleteU3Ec__Iterator4_t163110549::get_offset_of_U24this_0(),
	U3CDialogueCompleteU3Ec__Iterator4_t163110549::get_offset_of_U24current_1(),
	U3CDialogueCompleteU3Ec__Iterator4_t163110549::get_offset_of_U24disposing_2(),
	U3CDialogueCompleteU3Ec__Iterator4_t163110549::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3139 = { sizeof (ExampleVariableStorage_t1372347222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3139[3] = 
{
	ExampleVariableStorage_t1372347222::get_offset_of_variables_2(),
	ExampleVariableStorage_t1372347222::get_offset_of_defaultVariables_3(),
	ExampleVariableStorage_t1372347222::get_offset_of_debugTextView_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3140 = { sizeof (DefaultVariable_t730926445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3140[3] = 
{
	DefaultVariable_t730926445::get_offset_of_name_0(),
	DefaultVariable_t730926445::get_offset_of_value_1(),
	DefaultVariable_t730926445::get_offset_of_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3141 = { sizeof (MobileOnly_t759008739), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3142 = { sizeof (NPC_t623034359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3142[3] = 
{
	NPC_t623034359::get_offset_of_characterName_2(),
	NPC_t623034359::get_offset_of_talkToNode_3(),
	NPC_t623034359::get_offset_of_scriptToLoad_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3143 = { sizeof (PlayerCharacter_t3157521029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3143[5] = 
{
	PlayerCharacter_t3157521029::get_offset_of_minPosition_2(),
	PlayerCharacter_t3157521029::get_offset_of_maxPosition_3(),
	PlayerCharacter_t3157521029::get_offset_of_moveSpeed_4(),
	PlayerCharacter_t3157521029::get_offset_of_interactionRadius_5(),
	PlayerCharacter_t3157521029::get_offset_of_U3CmovementFromButtonsU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3144 = { sizeof (SpriteSwitcher_t999038117), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3144[1] = 
{
	SpriteSwitcher_t999038117::get_offset_of_sprites_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3145 = { sizeof (SpriteInfo_t2637886516)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3145[2] = 
{
	SpriteInfo_t2637886516::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteInfo_t2637886516::get_offset_of_sprite_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
