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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InterfaceFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};

// Antlr4.Runtime.Dfa.DFASerializer
struct DFASerializer_t2623600291;
// Antlr4.Runtime.Dfa.DFA
struct DFA_t3195866089;
// Antlr4.Runtime.IVocabulary
struct IVocabulary_t4253336316;
// System.String[]
struct StringU5BU5D_t1281789340;
// Antlr4.Runtime.Atn.ATN
struct ATN_t715137711;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Generic.Dictionary`2<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState>
struct Dictionary_2_t58927384;
// System.Collections.Generic.Dictionary`2/ValueCollection<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState>
struct ValueCollection_t1774971702;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1848589470;
// System.Collections.Generic.List`1<Antlr4.Runtime.Dfa.DFAState>
struct List_1_t964908084;
// System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Dfa.DFAState>
struct IEnumerable_1_t2767653527;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Comparison`1<Antlr4.Runtime.Dfa.DFAState>
struct Comparison_1_t3562731817;
// System.Comparison`1<System.Object>
struct Comparison_1_t2855037343;
// Antlr4.Runtime.Dfa.DFAState
struct DFAState_t3787800638;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Antlr4.Runtime.Dfa.PredPrediction[]
struct PredPredictionU5BU5D_t4019755882;
// Antlr4.Runtime.Dfa.PredPrediction
struct PredPrediction_t1259836427;
// Antlr4.Runtime.Atn.ATNConfigSet
struct ATNConfigSet_t638728265;
// Antlr4.Runtime.Atn.SemanticContext
struct SemanticContext_t2197800441;
// Antlr4.Runtime.FailedPredicateException
struct FailedPredicateException_t1308833165;
// Antlr4.Runtime.Parser
struct Parser_t1471951952;
// Antlr4.Runtime.RecognitionException
struct RecognitionException_t4252147236;
// Antlr4.Runtime.IRecognizer
struct IRecognizer_t3904599715;
// Antlr4.Runtime.IIntStream
struct IIntStream_t2059504296;
// Antlr4.Runtime.ParserRuleContext
struct ParserRuleContext_t3215563317;
// Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>
struct Recognizer_2_t1400415252;
// Antlr4.Runtime.Recognizer`2<System.Object,System.Object>
struct Recognizer_2_t2972795787;
// Antlr4.Runtime.IToken
struct IToken_t679559059;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// Antlr4.Runtime.InputMismatchException
struct InputMismatchException_t2387790745;
// Antlr4.Runtime.Lexer
struct Lexer_t1430611871;
// Antlr4.Runtime.ICharStream
struct ICharStream_t1006341033;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3794335208;
// Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>
struct Recognizer_2_t1541209307;
// Antlr4.Runtime.Recognizer`2<System.Int32,System.Object>
struct Recognizer_2_t514102834;
// Antlr4.Runtime.Sharpen.Tuple`2<Antlr4.Runtime.ITokenSource,Antlr4.Runtime.ICharStream>
struct Tuple_2_t601941212;
// Antlr4.Runtime.ITokenSource
struct ITokenSource_t1820030580;
// Antlr4.Runtime.Sharpen.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4246953639;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// Antlr4.Runtime.Atn.LexerATNSimulator
struct LexerATNSimulator_t4107212637;
// Antlr4.Runtime.ITokenFactory
struct ITokenFactory_t3521433125;
// Antlr4.Runtime.LexerNoViableAltException
struct LexerNoViableAltException_t222117296;
// System.Type
struct Type_t;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// Antlr4.Runtime.Misc.IntervalSet
struct IntervalSet_t1736846379;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// Antlr4.Runtime.Misc.ArrayList`1<Antlr4.Runtime.Misc.Interval>
struct ArrayList_1_t2215970062;
// Antlr4.Runtime.Misc.IIntSet
struct IIntSet_t3939299716;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>
struct IList_1_t2576602395;
// System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Misc.Interval>
struct IEnumerable_1_t4036102797;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t471298240;
// Antlr4.Runtime.Misc.ArrayList`1<System.Int32>
struct ArrayList_1_t110665907;
// Antlr4.Runtime.Misc.NotNullAttribute
struct NotNullAttribute_t935244695;
// System.Attribute
struct Attribute_t861562559;
// Antlr4.Runtime.Misc.NullableAttribute
struct NullableAttribute_t2798464271;
// System.Char[]
struct CharU5BU5D_t3528271667;
// Antlr4.Runtime.NoViableAltException
struct NoViableAltException_t2985419920;
// Antlr4.Runtime.ITokenStream
struct ITokenStream_t1473438536;
// Antlr4.Runtime.DefaultErrorStrategy
struct DefaultErrorStrategy_t4185793398;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTreeListener>
struct IList_1_t4017941227;
// Antlr4.Runtime.Tree.IParseTreeListener[]
struct IParseTreeListenerU5BU5D_t672341357;
// Antlr4.Runtime.Tree.IParseTreeListener
struct IParseTreeListener_t2202621444;
// System.Collections.Generic.List`1<Antlr4.Runtime.Tree.IParseTreeListener>
struct List_1_t3674696186;
// Antlr4.Runtime.IAntlrErrorStrategy
struct IAntlrErrorStrategy_t164569187;
// Antlr4.Runtime.IParserErrorListener
struct IParserErrorListener_t3329675261;
// Antlr4.Runtime.RuleContext
struct RuleContext_t846066196;
// Antlr4.Runtime.ProxyParserErrorListener
struct ProxyParserErrorListener_t2678295775;
// System.Collections.Generic.ICollection`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>
struct ICollection_1_t2359712707;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3662770472;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// Antlr4.Runtime.Parser/TraceListener
struct TraceListener_t761327790;
// System.Collections.Generic.Dictionary`2<System.String,Antlr4.Runtime.Atn.ATN>
struct Dictionary_2_t500394010;
// Antlr4.Runtime.Tree.IErrorNode
struct IErrorNode_t1315474453;
// Antlr4.Runtime.Tree.ITerminalNode
struct ITerminalNode_t3564352371;
// System.Collections.Generic.List`1<Antlr4.Runtime.Tree.IParseTree>
struct List_1_t759730133;
// Antlr4.Runtime.Tree.TerminalNodeImpl
struct TerminalNodeImpl_t19686673;
// Antlr4.Runtime.Tree.ErrorNodeImpl
struct ErrorNodeImpl_t236481808;
// Antlr4.Runtime.Tree.IParseTree
struct IParseTree_t3582622687;
// Antlr4.Runtime.ProxyErrorListener`1<Antlr4.Runtime.IToken>
struct ProxyErrorListener_1_t1696335262;
// System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>
struct IEnumerable_1_t2806380658;
// Antlr4.Runtime.ProxyErrorListener`1<System.Object>
struct ProxyErrorListener_1_t4096882367;
// System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<System.Object>>
struct IEnumerable_1_t911960467;
// Antlr4.Runtime.Sharpen.BitSet
struct BitSet_t2017162039;
// Antlr4.Runtime.Atn.SimulatorState
struct SimulatorState_t4227844472;
// System.Exception
struct Exception_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t600458651;
// Antlr4.Runtime.RuleVersionAttribute
struct RuleVersionAttribute_t88391030;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// Antlr4.Runtime.Tree.ParseTreeWalker
struct ParseTreeWalker_t2338734297;
// Antlr4.Runtime.Tree.IRuleNode
struct IRuleNode_t2960422016;
// Antlr4.Runtime.Vocabulary
struct Vocabulary_t3272722500;
// Antlr4.Runtime.IAntlrErrorListener`1<System.Int32>[]
struct IAntlrErrorListener_1U5BU5D_t527777094;
// Antlr4.Runtime.Misc.Interval[]
struct IntervalU5BU5D_t482333821;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// Antlr4.Runtime.Atn.ATN[]
struct ATNU5BU5D_t3486935478;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Antlr4.Runtime.Atn.ATN,System.Collections.DictionaryEntry>
struct Transform_1_t2337347194;
// Antlr4.Runtime.Tree.IParseTree[]
struct IParseTreeU5BU5D_t2879460806;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// Antlr4.Runtime.Dfa.DFAState[]
struct DFAStateU5BU5D_t2062627083;
// Antlr4.Runtime.Atn.LexerActionExecutor
struct LexerActionExecutor_t628407958;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t3060026976;
// System.Collections.Generic.List`1<Antlr4.Runtime.Atn.Transition>
struct List_1_t2542706918;
// Antlr4.Runtime.Atn.DecisionState
struct DecisionState_t66326499;
// Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>[]
struct IAntlrErrorListener_1U5BU5D_t2732147044;
// Antlr4.Runtime.Atn.ParserATNSimulator
struct ParserATNSimulator_t1762048632;
// Antlr4.Runtime.Atn.PredictionContextCache
struct PredictionContextCache_t36128749;
// Antlr4.Runtime.Atn.ConfigHashSet
struct ConfigHashSet_t591316934;
// Antlr4.Runtime.Misc.ArrayList`1<Antlr4.Runtime.Atn.ATNConfig>
struct ArrayList_1_t1962743782;
// System.Collections.Generic.IEqualityComparer`1<Antlr4.Runtime.Dfa.DFAState>
struct IEqualityComparer_1_t1600165360;
// System.Collections.Generic.Dictionary`2/Transform`1<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState,System.Collections.DictionaryEntry>
struct Transform_1_t2161634244;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// Antlr4.Runtime.Atn.ATNState
struct ATNState_t3206414579;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// Antlr4.Runtime.Dfa.DFA[]
struct DFAU5BU5D_t873243220;
// Antlr4.Runtime.Atn.SimState
struct SimState_t544668380;
// Antlr4.Runtime.Atn.PredictionMode
struct PredictionMode_t3387509352;
// Antlr4.Runtime.Atn.MergeCache
struct MergeCache_t3969348185;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTree>
struct IList_1_t1102975174;
// System.Collections.Generic.IDictionary`2<System.String,Antlr4.Runtime.Atn.ATN>
struct IDictionary_2_t3259212697;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.ATNState>
struct IList_1_t726767066;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.DecisionState>
struct IList_1_t1881646282;
// Antlr4.Runtime.Atn.RuleStartState[]
struct RuleStartStateU5BU5D_t4074657009;
// Antlr4.Runtime.Atn.RuleStopState[]
struct RuleStopStateU5BU5D_t4055926814;
// System.Collections.Generic.IDictionary`2<System.String,Antlr4.Runtime.Atn.TokensStartState>
struct IDictionary_2_t223598321;
// Antlr4.Runtime.Atn.ILexerAction[]
struct ILexerActionU5BU5D_t173737658;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.TokensStartState>
struct IList_1_t3789810414;
// Antlr4.Runtime.Sharpen.ConcurrentDictionary`2<System.Int32,System.Int32>
struct ConcurrentDictionary_2_t149580939;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t964908084_il2cpp_TypeInfo_var;
extern RuntimeClass* DFASerializer_t2623600291_il2cpp_TypeInfo_var;
extern RuntimeClass* Comparison_1_t3562731817_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Values_m2348716605_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m407624247_RuntimeMethod_var;
extern const RuntimeMethod* DFASerializer_U3CToStringU3Em__0_m1248961292_RuntimeMethod_var;
extern const RuntimeMethod* Comparison_1__ctor_m106488015_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Sort_m354603923_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m758939624_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2174578786_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4132774324_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m191394364_RuntimeMethod_var;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3451697027;
extern const uint32_t DFASerializer_ToString_m147001774_MetadataUsageId;
extern RuntimeClass* IVocabulary_t4253336316_il2cpp_TypeInfo_var;
extern const uint32_t DFASerializer_GetEdgeLabel_m9082919_MetadataUsageId;
extern RuntimeClass* ATNSimulator_t2448152846_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Arrays_ToString_TisPredPrediction_t1259836427_m2787947823_RuntimeMethod_var;
extern String_t* _stringLiteral562053875;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614605;
extern String_t* _stringLiteral3452614642;
extern String_t* _stringLiteral3451697043;
extern const uint32_t DFASerializer_GetStateString_m2910401127_MetadataUsageId;
extern RuntimeClass* ATNConfigSet_t638728265_il2cpp_TypeInfo_var;
extern const uint32_t DFAState__ctor_m3505122115_MetadataUsageId;
extern RuntimeClass* DFAState_t3787800638_il2cpp_TypeInfo_var;
extern const uint32_t DFAState_Equals_m2714628367_MetadataUsageId;
extern const uint32_t DFAState_ToString_m3749348288_MetadataUsageId;
extern String_t* _stringLiteral3452614536;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3452614535;
extern const uint32_t PredPrediction_ToString_m1883450749_MetadataUsageId;
extern RuntimeClass* ITokenStream_t1473438536_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t726767066_il2cpp_TypeInfo_var;
extern RuntimeClass* AbstractPredicateTransition_t234975995_il2cpp_TypeInfo_var;
extern RuntimeClass* PredicateTransition_t1493066449_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Recognizer_2_get_State_m3060556933_RuntimeMethod_var;
extern const uint32_t FailedPredicateException__ctor_m1379558220_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4159354282;
extern const uint32_t FailedPredicateException_FormatMessage_m1073146532_MetadataUsageId;
extern const uint32_t InputMismatchException__ctor_m981030686_MetadataUsageId;
extern RuntimeClass* CommonTokenFactory_t334140376_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t3794335208_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1__ctor_m3613734199_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_2__ctor_m58259054_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_Create_TisITokenSource_t1820030580_TisICharStream_t1006341033_m2763071979_RuntimeMethod_var;
extern const uint32_t Lexer__ctor_m2913819262_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* IIntStream_t2059504296_il2cpp_TypeInfo_var;
extern RuntimeClass* LexerNoViableAltException_t222117296_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3957560846;
extern const uint32_t Lexer_NextToken_m2957990783_MetadataUsageId;
extern const RuntimeMethod* Stack_1_Push_m3986308287_RuntimeMethod_var;
extern const uint32_t Lexer_PushMode_m2768301315_MetadataUsageId;
extern const RuntimeMethod* Stack_1_get_Count_m1510087691_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m2227085066_RuntimeMethod_var;
extern const uint32_t Lexer_PopMode_m3808358206_MetadataUsageId;
extern RuntimeClass* ITokenFactory_t3521433125_il2cpp_TypeInfo_var;
extern const uint32_t Lexer_Emit_m1744143047_MetadataUsageId;
extern const uint32_t Lexer_EmitEOF_m313701054_MetadataUsageId;
extern const uint32_t Lexer_get_CharIndex_m1152376311_MetadataUsageId;
extern const uint32_t Lexer_Recover_m3810936439_MetadataUsageId;
extern RuntimeClass* Interval_t761282612_il2cpp_TypeInfo_var;
extern RuntimeClass* ICharStream_t1006341033_il2cpp_TypeInfo_var;
extern RuntimeClass* IAntlrErrorListener_1_t1802947167_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral816236271;
extern String_t* _stringLiteral3452614521;
extern const uint32_t Lexer_NotifyListeners_m2965061625_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t Lexer_GetErrorDisplay_m2840672910_MetadataUsageId;
extern String_t* _stringLiteral2446009687;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3455629300;
extern const uint32_t Lexer_GetErrorDisplay_m1943936160_MetadataUsageId;
extern const uint32_t LexerNoViableAltException_get_InputStream_m2565965180_MetadataUsageId;
extern const RuntimeType* LexerNoViableAltException_t222117296_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4102237450;
extern const uint32_t LexerNoViableAltException_ToString_m3326489891_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const uint32_t Args_NotNull_m2033810888_MetadataUsageId;
extern const uint32_t Interval_Equals_m1476015520_MetadataUsageId;
extern const uint32_t Interval_Union_m2041984833_MetadataUsageId;
extern String_t* _stringLiteral3450648450;
extern const uint32_t Interval_ToString_m2124177410_MetadataUsageId;
extern const uint32_t Interval__cctor_m2640414395_MetadataUsageId;
extern RuntimeClass* IntervalSet_t1736846379_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const uint32_t IntervalSet__cctor_m218751962_MetadataUsageId;
extern const uint32_t IntervalSet__ctor_m3832018402_MetadataUsageId;
extern RuntimeClass* ArrayList_1_t2215970062_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ArrayList_1__ctor_m1933890287_RuntimeMethod_var;
extern const uint32_t IntervalSet__ctor_m587104109_MetadataUsageId;
extern const uint32_t IntervalSet_Of_m4154009723_MetadataUsageId;
extern const uint32_t IntervalSet_Of_m3534000560_MetadataUsageId;
extern String_t* _stringLiteral743142750;
extern const uint32_t IntervalSet_Add_m853502082_MetadataUsageId;
extern const uint32_t IntervalSet_Add_m1503837587_MetadataUsageId;
extern RuntimeClass* IList_1_t2576602395_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3589434846_il2cpp_TypeInfo_var;
extern const uint32_t IntervalSet_Add_m3126313092_MetadataUsageId;
extern RuntimeClass* IIntSet_t3939299716_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t1930798642_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3383516221_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t IntervalSet_AddAll_m4024847840_MetadataUsageId;
extern const uint32_t IntervalSet_Complement_m1221113938_MetadataUsageId;
extern const uint32_t IntervalSet_Subtract_m2754352174_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m2751154530_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m1984449514_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m3463444746_RuntimeMethod_var;
extern const uint32_t IntervalSet_Subtract_m735012243_MetadataUsageId;
extern const uint32_t IntervalSet_Or_m310572215_MetadataUsageId;
extern const uint32_t IntervalSet_Contains_m269169025_MetadataUsageId;
extern const uint32_t IntervalSet_get_IsNil_m2579482861_MetadataUsageId;
extern const uint32_t IntervalSet_get_MinElement_m554850539_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t4036102797_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1193853080_il2cpp_TypeInfo_var;
extern const uint32_t IntervalSet_GetHashCode_m1397104723_MetadataUsageId;
extern const RuntimeMethod* Enumerable_SequenceEqual_TisInterval_t761282612_m2164039892_RuntimeMethod_var;
extern const uint32_t IntervalSet_Equals_m2004170789_MetadataUsageId;
extern String_t* _stringLiteral3455956949;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral1610266509;
extern String_t* _stringLiteral3452614611;
extern const uint32_t IntervalSet_ToString_m1590204545_MetadataUsageId;
extern const uint32_t IntervalSet_ToString_m1552895163_MetadataUsageId;
extern String_t* _stringLiteral1341918530;
extern const uint32_t IntervalSet_ElementName_m2778144576_MetadataUsageId;
extern const uint32_t IntervalSet_get_Count_m4059077317_MetadataUsageId;
extern RuntimeClass* ArrayList_1_t110665907_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t1484130691_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ArrayList_1__ctor_m3193375987_RuntimeMethod_var;
extern const uint32_t IntervalSet_ToList_m1809790799_MetadataUsageId;
extern const uint32_t IntervalSet_Remove_m3576166578_MetadataUsageId;
extern const uint32_t IntervalSet_SetReadonly_m290491741_MetadataUsageId;
extern const uint32_t Utils_EscapeWhitespace_m2832940154_MetadataUsageId;
extern const uint32_t NoViableAltException__ctor_m3656066489_MetadataUsageId;
extern RuntimeClass* DefaultErrorStrategy_t4185793398_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_2__ctor_m3024942240_RuntimeMethod_var;
extern const uint32_t Parser__ctor_m406941518_MetadataUsageId;
extern RuntimeClass* IAntlrErrorStrategy_t164569187_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Clear_m807762771_RuntimeMethod_var;
extern const uint32_t Parser_Reset_m3582455776_MetadataUsageId;
extern RuntimeClass* IToken_t679559059_il2cpp_TypeInfo_var;
extern const uint32_t Parser_Match_m1793043704_MetadataUsageId;
extern const RuntimeMethod* Collections_EmptyList_TisIParseTreeListener_t2202621444_m1710973521_RuntimeMethod_var;
extern const uint32_t Parser_get_ParseListeners_m2813631707_MetadataUsageId;
extern RuntimeClass* List_1_t3674696186_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t735806382_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2675073037_RuntimeMethod_var;
extern String_t* _stringLiteral4263589583;
extern const uint32_t Parser_AddParseListener_m1298435566_MetadataUsageId;
extern const uint32_t Parser_RemoveParseListener_m1801343579_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1182474333_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2635191912_il2cpp_TypeInfo_var;
extern RuntimeClass* IParseTreeListener_t2202621444_il2cpp_TypeInfo_var;
extern const uint32_t Parser_TriggerEnterRuleEvent_m2172201693_MetadataUsageId;
extern RuntimeClass* IList_1_t4017941227_il2cpp_TypeInfo_var;
extern const uint32_t Parser_TriggerExitRuleEvent_m3719113121_MetadataUsageId;
extern const uint32_t Parser_get_CurrentToken_m1702825664_MetadataUsageId;
extern RuntimeClass* IAntlrErrorListener_1_t3826527769_il2cpp_TypeInfo_var;
extern const uint32_t Parser_NotifyErrorListeners_m73282294_MetadataUsageId;
extern const uint32_t Parser_Consume_m2677757258_MetadataUsageId;
extern RuntimeClass* ParserRuleContext_t3215563317_il2cpp_TypeInfo_var;
extern const uint32_t Parser_AddContextToParseTree_m1383133436_MetadataUsageId;
extern const RuntimeMethod* Recognizer_2_set_State_m3977995112_RuntimeMethod_var;
extern const uint32_t Parser_EnterRule_m895376233_MetadataUsageId;
extern const uint32_t Parser_ExitRule_m2008393058_MetadataUsageId;
extern const uint32_t Parser_EnterOuterAlt_m1961378988_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m639705184_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3082246979_RuntimeMethod_var;
extern const uint32_t Parser_get_Precedence_m4017377402_MetadataUsageId;
extern const uint32_t Parser_EnterRecursionRule_m65286469_MetadataUsageId;
extern const uint32_t Parser_PushNewRecursionContext_m2088685762_MetadataUsageId;
extern const RuntimeMethod* List_1_RemoveAt_m3700982366_RuntimeMethod_var;
extern const uint32_t Parser_UnrollRecursionContexts_m3893029095_MetadataUsageId;
extern const uint32_t Parser_Precpred_m3641040778_MetadataUsageId;
extern RuntimeClass* ProxyParserErrorListener_t2678295775_il2cpp_TypeInfo_var;
extern const uint32_t Parser_get_ErrorListenerDispatch_m3809067462_MetadataUsageId;
extern const uint32_t Parser_GetExpectedTokens_m3841769549_MetadataUsageId;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t380635627_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern String_t* _stringLiteral3665161959;
extern const uint32_t Parser_GetRuleInvocationStack_m139238304_MetadataUsageId;
extern RuntimeClass* TraceListener_t761327790_il2cpp_TypeInfo_var;
extern const uint32_t Parser_set_Trace_m1298068963_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t500394010_il2cpp_TypeInfo_var;
extern RuntimeClass* Parser_t1471951952_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m459584435_RuntimeMethod_var;
extern const uint32_t Parser__cctor_m3396906171_MetadataUsageId;
extern String_t* _stringLiteral3820389399;
extern String_t* _stringLiteral1010394833;
extern const uint32_t TraceListener_EnterEveryRule_m3890510524_MetadataUsageId;
extern String_t* _stringLiteral2331149708;
extern const uint32_t TraceListener_ExitEveryRule_m3804216621_MetadataUsageId;
extern RuntimeClass* ITerminalNode_t3564352371_il2cpp_TypeInfo_var;
extern RuntimeClass* IRuleNode_t2960422016_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1401166769;
extern String_t* _stringLiteral2415142930;
extern const uint32_t TraceListener_VisitTerminal_m1545369418_MetadataUsageId;
extern const uint32_t ParserRuleContext_get_EmptyContext_m4054856611_MetadataUsageId;
extern RuntimeClass* List_1_t759730133_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2562475576_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t4015193155_il2cpp_TypeInfo_var;
extern RuntimeClass* ErrorNodeImpl_t236481808_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2115807625_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m489926614_RuntimeMethod_var;
extern const uint32_t ParserRuleContext_CopyFrom_m3597367641_MetadataUsageId;
extern const uint32_t ParserRuleContext_AddChild_m254667534_MetadataUsageId;
extern const uint32_t ParserRuleContext_AddChild_m935919523_MetadataUsageId;
extern RuntimeClass* IList_1_t1102975174_il2cpp_TypeInfo_var;
extern const uint32_t ParserRuleContext_RemoveLastChild_m1225597485_MetadataUsageId;
extern RuntimeClass* TerminalNodeImpl_t19686673_il2cpp_TypeInfo_var;
extern const uint32_t ParserRuleContext_AddChild_m2887362312_MetadataUsageId;
extern const uint32_t ParserRuleContext_AddErrorNode_m2909629434_MetadataUsageId;
extern const uint32_t ParserRuleContext_GetChild_m101932005_MetadataUsageId;
extern const uint32_t ParserRuleContext_GetToken_m279842247_MetadataUsageId;
extern const uint32_t ParserRuleContext_get_ChildCount_m195035306_MetadataUsageId;
extern const uint32_t ParserRuleContext__cctor_m1619874302_MetadataUsageId;
extern const RuntimeMethod* ProxyErrorListener_1__ctor_m3183614789_RuntimeMethod_var;
extern const uint32_t ProxyParserErrorListener__ctor_m650388731_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t2806380658_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t4259098237_il2cpp_TypeInfo_var;
extern RuntimeClass* IParserErrorListener_t3329675261_il2cpp_TypeInfo_var;
extern const uint32_t ProxyParserErrorListener_ReportAmbiguity_m2636621240_MetadataUsageId;
extern const uint32_t ProxyParserErrorListener_ReportAttemptingFullContext_m4084051013_MetadataUsageId;
extern const uint32_t ProxyParserErrorListener_ReportContextSensitivity_m1388573322_MetadataUsageId;
extern RuntimeClass* IRecognizer_t3904599715_il2cpp_TypeInfo_var;
extern const uint32_t RecognitionException__ctor_m1770152451_MetadataUsageId;
extern const uint32_t RecognitionException__ctor_m2949007240_MetadataUsageId;
extern const uint32_t RecognitionException_GetExpectedTokens_m501409210_MetadataUsageId;
extern RuntimeClass* IParseTree_t3582622687_il2cpp_TypeInfo_var;
extern const uint32_t RuleContext_GetText_m3145088527_MetadataUsageId;
extern const uint32_t RuleContext_ToString_m2655851943_MetadataUsageId;
extern const RuntimeMethod* Arrays_AsList_TisString_t_m1958667525_RuntimeMethod_var;
extern const uint32_t RuleContext_ToString_m1480298188_MetadataUsageId;
extern RuntimeClass* IList_1_t3662770472_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614643;
extern const uint32_t RuleContext_ToString_m4123194578_MetadataUsageId;
extern RuntimeClass* BitSet_t2017162039_il2cpp_TypeInfo_var;
extern const uint32_t BitSet__ctor_m1854132015_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64U5BU5D_t1659327989_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1938424562;
extern const uint32_t BitSet__ctor_m1382192312_MetadataUsageId;
extern const uint32_t BitSet_BitScanForward_m3438412263_MetadataUsageId;
extern String_t* _stringLiteral797640427;
extern const uint32_t BitSet_Clear_m3171391619_MetadataUsageId;
extern const uint32_t BitSet_Get_m3703781334_MetadataUsageId;
extern const RuntimeMethod* Array_Resize_TisUInt64_t4134040092_m3488754369_RuntimeMethod_var;
extern const uint32_t BitSet_Set_m625453983_MetadataUsageId;
extern const uint32_t BitSet_Cardinality_m505674344_MetadataUsageId;
extern String_t* _stringLiteral3897572118;
extern const uint32_t BitSet_NextSetBit_m81789356_MetadataUsageId;
extern String_t* _stringLiteral2553217811;
extern const uint32_t BitSet_Or_m2595964849_MetadataUsageId;
extern const uint32_t BitSet_Equals_m2049087785_MetadataUsageId;
extern const uint32_t BitSet_ToString_m2300578886_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0_FieldInfo_var;
extern const uint32_t BitSet__cctor_m2126130115_MetadataUsageId;
extern RuntimeClass* ManualResetEvent_t451242010_il2cpp_TypeInfo_var;
extern RuntimeClass* SpinWait_t3580045567_il2cpp_TypeInfo_var;
extern const uint32_t SpinWait_SpinOnce_m2959215841_MetadataUsageId;
extern const uint32_t SpinWait__cctor_m2290468480_MetadataUsageId;
extern RuntimeClass* IErrorNode_t1315474453_il2cpp_TypeInfo_var;
extern RuntimeClass* ITree_t1650705538_il2cpp_TypeInfo_var;
extern const uint32_t ParseTreeWalker_Walk_m3650548984_MetadataUsageId;
extern const uint32_t ParseTreeWalker_EnterRule_m3337339851_MetadataUsageId;
extern const uint32_t ParseTreeWalker_ExitRule_m1393477870_MetadataUsageId;
extern RuntimeClass* ParseTreeWalker_t2338734297_il2cpp_TypeInfo_var;
extern const uint32_t ParseTreeWalker__cctor_m2971831369_MetadataUsageId;
extern const uint32_t TerminalNodeImpl_GetText_m3505950425_MetadataUsageId;
extern String_t* _stringLiteral2391157367;
extern const uint32_t TerminalNodeImpl_ToString_m3996228711_MetadataUsageId;
extern RuntimeClass* Vocabulary_t3272722500_il2cpp_TypeInfo_var;
extern const uint32_t Vocabulary__ctor_m2407199093_MetadataUsageId;
extern String_t* _stringLiteral3006046887;
extern const uint32_t Vocabulary_GetSymbolicName_m2368711500_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern const uint32_t Vocabulary__cctor_m2190465954_MetadataUsageId;

struct StringU5BU5D_t1281789340;
struct DFAStateU5BU5D_t2062627083;
struct ObjectU5BU5D_t2843939325;
struct PredPredictionU5BU5D_t4019755882;
struct Int32U5BU5D_t385246372;
struct CharU5BU5D_t3528271667;
struct IParseTreeListenerU5BU5D_t672341357;
struct UInt64U5BU5D_t1659327989;


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
#ifndef UTILS_T2154659265_H
#define UTILS_T2154659265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.Utils
struct  Utils_t2154659265  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T2154659265_H
#ifndef MURMURHASH_T3602588_H
#define MURMURHASH_T3602588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.MurmurHash
struct  MurmurHash_t3602588  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MURMURHASH_T3602588_H
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
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef RULECONTEXT_T846066196_H
#define RULECONTEXT_T846066196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.RuleContext
struct  RuleContext_t846066196  : public RuntimeObject
{
public:
	// Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::_parent
	RuleContext_t846066196 * ____parent_0;
	// System.Int32 Antlr4.Runtime.RuleContext::invokingState
	int32_t ___invokingState_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(RuleContext_t846066196, ____parent_0)); }
	inline RuleContext_t846066196 * get__parent_0() const { return ____parent_0; }
	inline RuleContext_t846066196 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuleContext_t846066196 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of_invokingState_1() { return static_cast<int32_t>(offsetof(RuleContext_t846066196, ___invokingState_1)); }
	inline int32_t get_invokingState_1() const { return ___invokingState_1; }
	inline int32_t* get_address_of_invokingState_1() { return &___invokingState_1; }
	inline void set_invokingState_1(int32_t value)
	{
		___invokingState_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RULECONTEXT_T846066196_H
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
#ifndef DEFAULTERRORSTRATEGY_T4185793398_H
#define DEFAULTERRORSTRATEGY_T4185793398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.DefaultErrorStrategy
struct  DefaultErrorStrategy_t4185793398  : public RuntimeObject
{
public:
	// System.Boolean Antlr4.Runtime.DefaultErrorStrategy::errorRecoveryMode
	bool ___errorRecoveryMode_0;
	// System.Int32 Antlr4.Runtime.DefaultErrorStrategy::lastErrorIndex
	int32_t ___lastErrorIndex_1;
	// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.DefaultErrorStrategy::lastErrorStates
	IntervalSet_t1736846379 * ___lastErrorStates_2;

public:
	inline static int32_t get_offset_of_errorRecoveryMode_0() { return static_cast<int32_t>(offsetof(DefaultErrorStrategy_t4185793398, ___errorRecoveryMode_0)); }
	inline bool get_errorRecoveryMode_0() const { return ___errorRecoveryMode_0; }
	inline bool* get_address_of_errorRecoveryMode_0() { return &___errorRecoveryMode_0; }
	inline void set_errorRecoveryMode_0(bool value)
	{
		___errorRecoveryMode_0 = value;
	}

	inline static int32_t get_offset_of_lastErrorIndex_1() { return static_cast<int32_t>(offsetof(DefaultErrorStrategy_t4185793398, ___lastErrorIndex_1)); }
	inline int32_t get_lastErrorIndex_1() const { return ___lastErrorIndex_1; }
	inline int32_t* get_address_of_lastErrorIndex_1() { return &___lastErrorIndex_1; }
	inline void set_lastErrorIndex_1(int32_t value)
	{
		___lastErrorIndex_1 = value;
	}

	inline static int32_t get_offset_of_lastErrorStates_2() { return static_cast<int32_t>(offsetof(DefaultErrorStrategy_t4185793398, ___lastErrorStates_2)); }
	inline IntervalSet_t1736846379 * get_lastErrorStates_2() const { return ___lastErrorStates_2; }
	inline IntervalSet_t1736846379 ** get_address_of_lastErrorStates_2() { return &___lastErrorStates_2; }
	inline void set_lastErrorStates_2(IntervalSet_t1736846379 * value)
	{
		___lastErrorStates_2 = value;
		Il2CppCodeGenWriteBarrier((&___lastErrorStates_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTERRORSTRATEGY_T4185793398_H
#ifndef LIST_1_T3674696186_H
#define LIST_1_T3674696186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Antlr4.Runtime.Tree.IParseTreeListener>
struct  List_1_t3674696186  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IParseTreeListenerU5BU5D_t672341357* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3674696186, ____items_1)); }
	inline IParseTreeListenerU5BU5D_t672341357* get__items_1() const { return ____items_1; }
	inline IParseTreeListenerU5BU5D_t672341357** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IParseTreeListenerU5BU5D_t672341357* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3674696186, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3674696186, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3674696186_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IParseTreeListenerU5BU5D_t672341357* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3674696186_StaticFields, ___EmptyArray_4)); }
	inline IParseTreeListenerU5BU5D_t672341357* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IParseTreeListenerU5BU5D_t672341357** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IParseTreeListenerU5BU5D_t672341357* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3674696186_H
#ifndef STACK_1_T3794335208_H
#define STACK_1_T3794335208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Int32>
struct  Stack_1_t3794335208  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t385246372* ____array_1;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Stack_1_t3794335208, ____array_1)); }
	inline Int32U5BU5D_t385246372* get__array_1() const { return ____array_1; }
	inline Int32U5BU5D_t385246372** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(Int32U5BU5D_t385246372* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier((&____array_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Stack_1_t3794335208, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(Stack_1_t3794335208, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3794335208_H
#ifndef RECOGNIZER_2_T1541209307_H
#define RECOGNIZER_2_T1541209307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>
struct  Recognizer_2_t1541209307  : public RuntimeObject
{
public:
	// Antlr4.Runtime.IAntlrErrorListener`1<Symbol>[] Antlr4.Runtime.Recognizer`2::_listeners
	IAntlrErrorListener_1U5BU5D_t527777094* ____listeners_0;
	// ATNInterpreter Antlr4.Runtime.Recognizer`2::_interp
	LexerATNSimulator_t4107212637 * ____interp_1;
	// System.Int32 Antlr4.Runtime.Recognizer`2::_stateNumber
	int32_t ____stateNumber_2;

public:
	inline static int32_t get_offset_of__listeners_0() { return static_cast<int32_t>(offsetof(Recognizer_2_t1541209307, ____listeners_0)); }
	inline IAntlrErrorListener_1U5BU5D_t527777094* get__listeners_0() const { return ____listeners_0; }
	inline IAntlrErrorListener_1U5BU5D_t527777094** get_address_of__listeners_0() { return &____listeners_0; }
	inline void set__listeners_0(IAntlrErrorListener_1U5BU5D_t527777094* value)
	{
		____listeners_0 = value;
		Il2CppCodeGenWriteBarrier((&____listeners_0), value);
	}

	inline static int32_t get_offset_of__interp_1() { return static_cast<int32_t>(offsetof(Recognizer_2_t1541209307, ____interp_1)); }
	inline LexerATNSimulator_t4107212637 * get__interp_1() const { return ____interp_1; }
	inline LexerATNSimulator_t4107212637 ** get_address_of__interp_1() { return &____interp_1; }
	inline void set__interp_1(LexerATNSimulator_t4107212637 * value)
	{
		____interp_1 = value;
		Il2CppCodeGenWriteBarrier((&____interp_1), value);
	}

	inline static int32_t get_offset_of__stateNumber_2() { return static_cast<int32_t>(offsetof(Recognizer_2_t1541209307, ____stateNumber_2)); }
	inline int32_t get__stateNumber_2() const { return ____stateNumber_2; }
	inline int32_t* get_address_of__stateNumber_2() { return &____stateNumber_2; }
	inline void set__stateNumber_2(int32_t value)
	{
		____stateNumber_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNIZER_2_T1541209307_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_2)); }
	inline TextWriter_t3478189236 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t3478189236 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t3478189236 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef COMMONTOKENFACTORY_T334140376_H
#define COMMONTOKENFACTORY_T334140376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.CommonTokenFactory
struct  CommonTokenFactory_t334140376  : public RuntimeObject
{
public:
	// System.Boolean Antlr4.Runtime.CommonTokenFactory::copyText
	bool ___copyText_1;

public:
	inline static int32_t get_offset_of_copyText_1() { return static_cast<int32_t>(offsetof(CommonTokenFactory_t334140376, ___copyText_1)); }
	inline bool get_copyText_1() const { return ___copyText_1; }
	inline bool* get_address_of_copyText_1() { return &___copyText_1; }
	inline void set_copyText_1(bool value)
	{
		___copyText_1 = value;
	}
};

struct CommonTokenFactory_t334140376_StaticFields
{
public:
	// Antlr4.Runtime.ITokenFactory Antlr4.Runtime.CommonTokenFactory::Default
	RuntimeObject* ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(CommonTokenFactory_t334140376_StaticFields, ___Default_0)); }
	inline RuntimeObject* get_Default_0() const { return ___Default_0; }
	inline RuntimeObject** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(RuntimeObject* value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONTOKENFACTORY_T334140376_H
#ifndef ARGS_T2263328595_H
#define ARGS_T2263328595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.Args
struct  Args_t2263328595  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGS_T2263328595_H
#ifndef INTERVALSET_T1736846379_H
#define INTERVALSET_T1736846379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.IntervalSet
struct  IntervalSet_t1736846379  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval> Antlr4.Runtime.Misc.IntervalSet::intervals
	RuntimeObject* ___intervals_2;
	// System.Boolean Antlr4.Runtime.Misc.IntervalSet::readonly
	bool ___readonly_3;

public:
	inline static int32_t get_offset_of_intervals_2() { return static_cast<int32_t>(offsetof(IntervalSet_t1736846379, ___intervals_2)); }
	inline RuntimeObject* get_intervals_2() const { return ___intervals_2; }
	inline RuntimeObject** get_address_of_intervals_2() { return &___intervals_2; }
	inline void set_intervals_2(RuntimeObject* value)
	{
		___intervals_2 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_2), value);
	}

	inline static int32_t get_offset_of_readonly_3() { return static_cast<int32_t>(offsetof(IntervalSet_t1736846379, ___readonly_3)); }
	inline bool get_readonly_3() const { return ___readonly_3; }
	inline bool* get_address_of_readonly_3() { return &___readonly_3; }
	inline void set_readonly_3(bool value)
	{
		___readonly_3 = value;
	}
};

struct IntervalSet_t1736846379_StaticFields
{
public:
	// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::CompleteCharSet
	IntervalSet_t1736846379 * ___CompleteCharSet_0;
	// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::EmptySet
	IntervalSet_t1736846379 * ___EmptySet_1;

public:
	inline static int32_t get_offset_of_CompleteCharSet_0() { return static_cast<int32_t>(offsetof(IntervalSet_t1736846379_StaticFields, ___CompleteCharSet_0)); }
	inline IntervalSet_t1736846379 * get_CompleteCharSet_0() const { return ___CompleteCharSet_0; }
	inline IntervalSet_t1736846379 ** get_address_of_CompleteCharSet_0() { return &___CompleteCharSet_0; }
	inline void set_CompleteCharSet_0(IntervalSet_t1736846379 * value)
	{
		___CompleteCharSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___CompleteCharSet_0), value);
	}

	inline static int32_t get_offset_of_EmptySet_1() { return static_cast<int32_t>(offsetof(IntervalSet_t1736846379_StaticFields, ___EmptySet_1)); }
	inline IntervalSet_t1736846379 * get_EmptySet_1() const { return ___EmptySet_1; }
	inline IntervalSet_t1736846379 ** get_address_of_EmptySet_1() { return &___EmptySet_1; }
	inline void set_EmptySet_1(IntervalSet_t1736846379 * value)
	{
		___EmptySet_1 = value;
		Il2CppCodeGenWriteBarrier((&___EmptySet_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALSET_T1736846379_H
#ifndef TUPLE_2_T601941212_H
#define TUPLE_2_T601941212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Sharpen.Tuple`2<Antlr4.Runtime.ITokenSource,Antlr4.Runtime.ICharStream>
struct  Tuple_2_t601941212  : public RuntimeObject
{
public:
	// T1 Antlr4.Runtime.Sharpen.Tuple`2::item1
	RuntimeObject* ___item1_0;
	// T2 Antlr4.Runtime.Sharpen.Tuple`2::item2
	RuntimeObject* ___item2_1;

public:
	inline static int32_t get_offset_of_item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t601941212, ___item1_0)); }
	inline RuntimeObject* get_item1_0() const { return ___item1_0; }
	inline RuntimeObject** get_address_of_item1_0() { return &___item1_0; }
	inline void set_item1_0(RuntimeObject* value)
	{
		___item1_0 = value;
		Il2CppCodeGenWriteBarrier((&___item1_0), value);
	}

	inline static int32_t get_offset_of_item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t601941212, ___item2_1)); }
	inline RuntimeObject* get_item2_1() const { return ___item2_1; }
	inline RuntimeObject** get_address_of_item2_1() { return &___item2_1; }
	inline void set_item2_1(RuntimeObject* value)
	{
		___item2_1 = value;
		Il2CppCodeGenWriteBarrier((&___item2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_2_T601941212_H
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
#ifndef TRACELISTENER_T761327790_H
#define TRACELISTENER_T761327790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Parser/TraceListener
struct  TraceListener_t761327790  : public RuntimeObject
{
public:
	// System.IO.TextWriter Antlr4.Runtime.Parser/TraceListener::Output
	TextWriter_t3478189236 * ___Output_0;
	// Antlr4.Runtime.Parser Antlr4.Runtime.Parser/TraceListener::_enclosing
	Parser_t1471951952 * ____enclosing_1;

public:
	inline static int32_t get_offset_of_Output_0() { return static_cast<int32_t>(offsetof(TraceListener_t761327790, ___Output_0)); }
	inline TextWriter_t3478189236 * get_Output_0() const { return ___Output_0; }
	inline TextWriter_t3478189236 ** get_address_of_Output_0() { return &___Output_0; }
	inline void set_Output_0(TextWriter_t3478189236 * value)
	{
		___Output_0 = value;
		Il2CppCodeGenWriteBarrier((&___Output_0), value);
	}

	inline static int32_t get_offset_of__enclosing_1() { return static_cast<int32_t>(offsetof(TraceListener_t761327790, ____enclosing_1)); }
	inline Parser_t1471951952 * get__enclosing_1() const { return ____enclosing_1; }
	inline Parser_t1471951952 ** get_address_of__enclosing_1() { return &____enclosing_1; }
	inline void set__enclosing_1(Parser_t1471951952 * value)
	{
		____enclosing_1 = value;
		Il2CppCodeGenWriteBarrier((&____enclosing_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACELISTENER_T761327790_H
#ifndef TUPLE_T1901396101_H
#define TUPLE_T1901396101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Sharpen.Tuple
struct  Tuple_t1901396101  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_T1901396101_H
#ifndef PARSETREEWALKER_T2338734297_H
#define PARSETREEWALKER_T2338734297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Tree.ParseTreeWalker
struct  ParseTreeWalker_t2338734297  : public RuntimeObject
{
public:

public:
};

struct ParseTreeWalker_t2338734297_StaticFields
{
public:
	// Antlr4.Runtime.Tree.ParseTreeWalker Antlr4.Runtime.Tree.ParseTreeWalker::Default
	ParseTreeWalker_t2338734297 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ParseTreeWalker_t2338734297_StaticFields, ___Default_0)); }
	inline ParseTreeWalker_t2338734297 * get_Default_0() const { return ___Default_0; }
	inline ParseTreeWalker_t2338734297 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ParseTreeWalker_t2338734297 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSETREEWALKER_T2338734297_H
#ifndef COLLECTIONS_T202600237_H
#define COLLECTIONS_T202600237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Sharpen.Collections
struct  Collections_t202600237  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONS_T202600237_H
#ifndef DICTIONARYEXTENSIONS_T1605127285_H
#define DICTIONARYEXTENSIONS_T1605127285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Sharpen.DictionaryExtensions
struct  DictionaryExtensions_t1605127285  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYEXTENSIONS_T1605127285_H
#ifndef LIST_1_T2233357354_H
#define LIST_1_T2233357354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Antlr4.Runtime.Misc.Interval>
struct  List_1_t2233357354  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IntervalU5BU5D_t482333821* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2233357354, ____items_1)); }
	inline IntervalU5BU5D_t482333821* get__items_1() const { return ____items_1; }
	inline IntervalU5BU5D_t482333821** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IntervalU5BU5D_t482333821* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2233357354, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2233357354, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2233357354_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IntervalU5BU5D_t482333821* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2233357354_StaticFields, ___EmptyArray_4)); }
	inline IntervalU5BU5D_t482333821* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IntervalU5BU5D_t482333821** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IntervalU5BU5D_t482333821* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2233357354_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef VOCABULARY_T3272722500_H
#define VOCABULARY_T3272722500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Vocabulary
struct  Vocabulary_t3272722500  : public RuntimeObject
{
public:
	// System.String[] Antlr4.Runtime.Vocabulary::literalNames
	StringU5BU5D_t1281789340* ___literalNames_2;
	// System.String[] Antlr4.Runtime.Vocabulary::symbolicNames
	StringU5BU5D_t1281789340* ___symbolicNames_3;
	// System.String[] Antlr4.Runtime.Vocabulary::displayNames
	StringU5BU5D_t1281789340* ___displayNames_4;
	// System.Int32 Antlr4.Runtime.Vocabulary::maxTokenType
	int32_t ___maxTokenType_5;

public:
	inline static int32_t get_offset_of_literalNames_2() { return static_cast<int32_t>(offsetof(Vocabulary_t3272722500, ___literalNames_2)); }
	inline StringU5BU5D_t1281789340* get_literalNames_2() const { return ___literalNames_2; }
	inline StringU5BU5D_t1281789340** get_address_of_literalNames_2() { return &___literalNames_2; }
	inline void set_literalNames_2(StringU5BU5D_t1281789340* value)
	{
		___literalNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___literalNames_2), value);
	}

	inline static int32_t get_offset_of_symbolicNames_3() { return static_cast<int32_t>(offsetof(Vocabulary_t3272722500, ___symbolicNames_3)); }
	inline StringU5BU5D_t1281789340* get_symbolicNames_3() const { return ___symbolicNames_3; }
	inline StringU5BU5D_t1281789340** get_address_of_symbolicNames_3() { return &___symbolicNames_3; }
	inline void set_symbolicNames_3(StringU5BU5D_t1281789340* value)
	{
		___symbolicNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___symbolicNames_3), value);
	}

	inline static int32_t get_offset_of_displayNames_4() { return static_cast<int32_t>(offsetof(Vocabulary_t3272722500, ___displayNames_4)); }
	inline StringU5BU5D_t1281789340* get_displayNames_4() const { return ___displayNames_4; }
	inline StringU5BU5D_t1281789340** get_address_of_displayNames_4() { return &___displayNames_4; }
	inline void set_displayNames_4(StringU5BU5D_t1281789340* value)
	{
		___displayNames_4 = value;
		Il2CppCodeGenWriteBarrier((&___displayNames_4), value);
	}

	inline static int32_t get_offset_of_maxTokenType_5() { return static_cast<int32_t>(offsetof(Vocabulary_t3272722500, ___maxTokenType_5)); }
	inline int32_t get_maxTokenType_5() const { return ___maxTokenType_5; }
	inline int32_t* get_address_of_maxTokenType_5() { return &___maxTokenType_5; }
	inline void set_maxTokenType_5(int32_t value)
	{
		___maxTokenType_5 = value;
	}
};

struct Vocabulary_t3272722500_StaticFields
{
public:
	// System.String[] Antlr4.Runtime.Vocabulary::EmptyNames
	StringU5BU5D_t1281789340* ___EmptyNames_0;
	// Antlr4.Runtime.Vocabulary Antlr4.Runtime.Vocabulary::EmptyVocabulary
	Vocabulary_t3272722500 * ___EmptyVocabulary_1;

public:
	inline static int32_t get_offset_of_EmptyNames_0() { return static_cast<int32_t>(offsetof(Vocabulary_t3272722500_StaticFields, ___EmptyNames_0)); }
	inline StringU5BU5D_t1281789340* get_EmptyNames_0() const { return ___EmptyNames_0; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyNames_0() { return &___EmptyNames_0; }
	inline void set_EmptyNames_0(StringU5BU5D_t1281789340* value)
	{
		___EmptyNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyNames_0), value);
	}

	inline static int32_t get_offset_of_EmptyVocabulary_1() { return static_cast<int32_t>(offsetof(Vocabulary_t3272722500_StaticFields, ___EmptyVocabulary_1)); }
	inline Vocabulary_t3272722500 * get_EmptyVocabulary_1() const { return ___EmptyVocabulary_1; }
	inline Vocabulary_t3272722500 ** get_address_of_EmptyVocabulary_1() { return &___EmptyVocabulary_1; }
	inline void set_EmptyVocabulary_1(Vocabulary_t3272722500 * value)
	{
		___EmptyVocabulary_1 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyVocabulary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOCABULARY_T3272722500_H
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
#ifndef TERMINALNODEIMPL_T19686673_H
#define TERMINALNODEIMPL_T19686673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Tree.TerminalNodeImpl
struct  TerminalNodeImpl_t19686673  : public RuntimeObject
{
public:
	// Antlr4.Runtime.IToken Antlr4.Runtime.Tree.TerminalNodeImpl::_symbol
	RuntimeObject* ____symbol_0;
	// Antlr4.Runtime.Tree.IRuleNode Antlr4.Runtime.Tree.TerminalNodeImpl::_parent
	RuntimeObject* ____parent_1;

public:
	inline static int32_t get_offset_of__symbol_0() { return static_cast<int32_t>(offsetof(TerminalNodeImpl_t19686673, ____symbol_0)); }
	inline RuntimeObject* get__symbol_0() const { return ____symbol_0; }
	inline RuntimeObject** get_address_of__symbol_0() { return &____symbol_0; }
	inline void set__symbol_0(RuntimeObject* value)
	{
		____symbol_0 = value;
		Il2CppCodeGenWriteBarrier((&____symbol_0), value);
	}

	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(TerminalNodeImpl_t19686673, ____parent_1)); }
	inline RuntimeObject* get__parent_1() const { return ____parent_1; }
	inline RuntimeObject** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(RuntimeObject* value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((&____parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERMINALNODEIMPL_T19686673_H
#ifndef PROXYERRORLISTENER_1_T1696335262_H
#define PROXYERRORLISTENER_1_T1696335262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.ProxyErrorListener`1<Antlr4.Runtime.IToken>
struct  ProxyErrorListener_1_t1696335262  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Symbol>> Antlr4.Runtime.ProxyErrorListener`1::delegates
	RuntimeObject* ___delegates_0;

public:
	inline static int32_t get_offset_of_delegates_0() { return static_cast<int32_t>(offsetof(ProxyErrorListener_1_t1696335262, ___delegates_0)); }
	inline RuntimeObject* get_delegates_0() const { return ___delegates_0; }
	inline RuntimeObject** get_address_of_delegates_0() { return &___delegates_0; }
	inline void set_delegates_0(RuntimeObject* value)
	{
		___delegates_0 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYERRORLISTENER_1_T1696335262_H
#ifndef DICTIONARY_2_T500394010_H
#define DICTIONARY_2_T500394010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Antlr4.Runtime.Atn.ATN>
struct  Dictionary_2_t500394010  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ATNU5BU5D_t3486935478* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___valueSlots_7)); }
	inline ATNU5BU5D_t3486935478* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ATNU5BU5D_t3486935478** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ATNU5BU5D_t3486935478* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t500394010_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2337347194 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t500394010_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2337347194 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2337347194 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2337347194 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T500394010_H
#ifndef LIST_1_T759730133_H
#define LIST_1_T759730133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Antlr4.Runtime.Tree.IParseTree>
struct  List_1_t759730133  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IParseTreeU5BU5D_t2879460806* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t759730133, ____items_1)); }
	inline IParseTreeU5BU5D_t2879460806* get__items_1() const { return ____items_1; }
	inline IParseTreeU5BU5D_t2879460806** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IParseTreeU5BU5D_t2879460806* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t759730133, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t759730133, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t759730133_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IParseTreeU5BU5D_t2879460806* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t759730133_StaticFields, ___EmptyArray_4)); }
	inline IParseTreeU5BU5D_t2879460806* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IParseTreeU5BU5D_t2879460806** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IParseTreeU5BU5D_t2879460806* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T759730133_H
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
#ifndef ARRAYS_T972177319_H
#define ARRAYS_T972177319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Sharpen.Arrays
struct  Arrays_t972177319  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYS_T972177319_H
#ifndef BITSET_T2017162039_H
#define BITSET_T2017162039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Sharpen.BitSet
struct  BitSet_t2017162039  : public RuntimeObject
{
public:
	// System.UInt64[] Antlr4.Runtime.Sharpen.BitSet::_data
	UInt64U5BU5D_t1659327989* ____data_1;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(BitSet_t2017162039, ____data_1)); }
	inline UInt64U5BU5D_t1659327989* get__data_1() const { return ____data_1; }
	inline UInt64U5BU5D_t1659327989** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(UInt64U5BU5D_t1659327989* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((&____data_1), value);
	}
};

struct BitSet_t2017162039_StaticFields
{
public:
	// System.UInt64[] Antlr4.Runtime.Sharpen.BitSet::EmptyBits
	UInt64U5BU5D_t1659327989* ___EmptyBits_0;
	// System.Int32[] Antlr4.Runtime.Sharpen.BitSet::index64
	Int32U5BU5D_t385246372* ___index64_2;

public:
	inline static int32_t get_offset_of_EmptyBits_0() { return static_cast<int32_t>(offsetof(BitSet_t2017162039_StaticFields, ___EmptyBits_0)); }
	inline UInt64U5BU5D_t1659327989* get_EmptyBits_0() const { return ___EmptyBits_0; }
	inline UInt64U5BU5D_t1659327989** get_address_of_EmptyBits_0() { return &___EmptyBits_0; }
	inline void set_EmptyBits_0(UInt64U5BU5D_t1659327989* value)
	{
		___EmptyBits_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyBits_0), value);
	}

	inline static int32_t get_offset_of_index64_2() { return static_cast<int32_t>(offsetof(BitSet_t2017162039_StaticFields, ___index64_2)); }
	inline Int32U5BU5D_t385246372* get_index64_2() const { return ___index64_2; }
	inline Int32U5BU5D_t385246372** get_address_of_index64_2() { return &___index64_2; }
	inline void set_index64_2(Int32U5BU5D_t385246372* value)
	{
		___index64_2 = value;
		Il2CppCodeGenWriteBarrier((&___index64_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITSET_T2017162039_H
#ifndef SIMULATORSTATE_T4227844472_H
#define SIMULATORSTATE_T4227844472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.SimulatorState
struct  SimulatorState_t4227844472  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATORSTATE_T4227844472_H
#ifndef DFASTATE_T3787800638_H
#define DFASTATE_T3787800638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Dfa.DFAState
struct  DFAState_t3787800638  : public RuntimeObject
{
public:
	// System.Int32 Antlr4.Runtime.Dfa.DFAState::stateNumber
	int32_t ___stateNumber_0;
	// Antlr4.Runtime.Atn.ATNConfigSet Antlr4.Runtime.Dfa.DFAState::configSet
	ATNConfigSet_t638728265 * ___configSet_1;
	// Antlr4.Runtime.Dfa.DFAState[] Antlr4.Runtime.Dfa.DFAState::edges
	DFAStateU5BU5D_t2062627083* ___edges_2;
	// System.Boolean Antlr4.Runtime.Dfa.DFAState::isAcceptState
	bool ___isAcceptState_3;
	// System.Int32 Antlr4.Runtime.Dfa.DFAState::prediction
	int32_t ___prediction_4;
	// Antlr4.Runtime.Atn.LexerActionExecutor Antlr4.Runtime.Dfa.DFAState::lexerActionExecutor
	LexerActionExecutor_t628407958 * ___lexerActionExecutor_5;
	// System.Boolean Antlr4.Runtime.Dfa.DFAState::requiresFullContext
	bool ___requiresFullContext_6;
	// Antlr4.Runtime.Dfa.PredPrediction[] Antlr4.Runtime.Dfa.DFAState::predicates
	PredPredictionU5BU5D_t4019755882* ___predicates_7;

public:
	inline static int32_t get_offset_of_stateNumber_0() { return static_cast<int32_t>(offsetof(DFAState_t3787800638, ___stateNumber_0)); }
	inline int32_t get_stateNumber_0() const { return ___stateNumber_0; }
	inline int32_t* get_address_of_stateNumber_0() { return &___stateNumber_0; }
	inline void set_stateNumber_0(int32_t value)
	{
		___stateNumber_0 = value;
	}

	inline static int32_t get_offset_of_configSet_1() { return static_cast<int32_t>(offsetof(DFAState_t3787800638, ___configSet_1)); }
	inline ATNConfigSet_t638728265 * get_configSet_1() const { return ___configSet_1; }
	inline ATNConfigSet_t638728265 ** get_address_of_configSet_1() { return &___configSet_1; }
	inline void set_configSet_1(ATNConfigSet_t638728265 * value)
	{
		___configSet_1 = value;
		Il2CppCodeGenWriteBarrier((&___configSet_1), value);
	}

	inline static int32_t get_offset_of_edges_2() { return static_cast<int32_t>(offsetof(DFAState_t3787800638, ___edges_2)); }
	inline DFAStateU5BU5D_t2062627083* get_edges_2() const { return ___edges_2; }
	inline DFAStateU5BU5D_t2062627083** get_address_of_edges_2() { return &___edges_2; }
	inline void set_edges_2(DFAStateU5BU5D_t2062627083* value)
	{
		___edges_2 = value;
		Il2CppCodeGenWriteBarrier((&___edges_2), value);
	}

	inline static int32_t get_offset_of_isAcceptState_3() { return static_cast<int32_t>(offsetof(DFAState_t3787800638, ___isAcceptState_3)); }
	inline bool get_isAcceptState_3() const { return ___isAcceptState_3; }
	inline bool* get_address_of_isAcceptState_3() { return &___isAcceptState_3; }
	inline void set_isAcceptState_3(bool value)
	{
		___isAcceptState_3 = value;
	}

	inline static int32_t get_offset_of_prediction_4() { return static_cast<int32_t>(offsetof(DFAState_t3787800638, ___prediction_4)); }
	inline int32_t get_prediction_4() const { return ___prediction_4; }
	inline int32_t* get_address_of_prediction_4() { return &___prediction_4; }
	inline void set_prediction_4(int32_t value)
	{
		___prediction_4 = value;
	}

	inline static int32_t get_offset_of_lexerActionExecutor_5() { return static_cast<int32_t>(offsetof(DFAState_t3787800638, ___lexerActionExecutor_5)); }
	inline LexerActionExecutor_t628407958 * get_lexerActionExecutor_5() const { return ___lexerActionExecutor_5; }
	inline LexerActionExecutor_t628407958 ** get_address_of_lexerActionExecutor_5() { return &___lexerActionExecutor_5; }
	inline void set_lexerActionExecutor_5(LexerActionExecutor_t628407958 * value)
	{
		___lexerActionExecutor_5 = value;
		Il2CppCodeGenWriteBarrier((&___lexerActionExecutor_5), value);
	}

	inline static int32_t get_offset_of_requiresFullContext_6() { return static_cast<int32_t>(offsetof(DFAState_t3787800638, ___requiresFullContext_6)); }
	inline bool get_requiresFullContext_6() const { return ___requiresFullContext_6; }
	inline bool* get_address_of_requiresFullContext_6() { return &___requiresFullContext_6; }
	inline void set_requiresFullContext_6(bool value)
	{
		___requiresFullContext_6 = value;
	}

	inline static int32_t get_offset_of_predicates_7() { return static_cast<int32_t>(offsetof(DFAState_t3787800638, ___predicates_7)); }
	inline PredPredictionU5BU5D_t4019755882* get_predicates_7() const { return ___predicates_7; }
	inline PredPredictionU5BU5D_t4019755882** get_address_of_predicates_7() { return &___predicates_7; }
	inline void set_predicates_7(PredPredictionU5BU5D_t4019755882* value)
	{
		___predicates_7 = value;
		Il2CppCodeGenWriteBarrier((&___predicates_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DFASTATE_T3787800638_H
#ifndef ATNSTATE_T3206414579_H
#define ATNSTATE_T3206414579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.ATNState
struct  ATNState_t3206414579  : public RuntimeObject
{
public:
	// Antlr4.Runtime.Atn.ATN Antlr4.Runtime.Atn.ATNState::atn
	ATN_t715137711 * ___atn_1;
	// System.Int32 Antlr4.Runtime.Atn.ATNState::stateNumber
	int32_t ___stateNumber_2;
	// System.Int32 Antlr4.Runtime.Atn.ATNState::ruleIndex
	int32_t ___ruleIndex_3;
	// System.Boolean Antlr4.Runtime.Atn.ATNState::epsilonOnlyTransitions
	bool ___epsilonOnlyTransitions_4;
	// System.Collections.Generic.List`1<Antlr4.Runtime.Atn.Transition> Antlr4.Runtime.Atn.ATNState::transitions
	List_1_t2542706918 * ___transitions_5;
	// System.Collections.Generic.List`1<Antlr4.Runtime.Atn.Transition> Antlr4.Runtime.Atn.ATNState::optimizedTransitions
	List_1_t2542706918 * ___optimizedTransitions_6;
	// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Atn.ATNState::nextTokenWithinRule
	IntervalSet_t1736846379 * ___nextTokenWithinRule_7;

public:
	inline static int32_t get_offset_of_atn_1() { return static_cast<int32_t>(offsetof(ATNState_t3206414579, ___atn_1)); }
	inline ATN_t715137711 * get_atn_1() const { return ___atn_1; }
	inline ATN_t715137711 ** get_address_of_atn_1() { return &___atn_1; }
	inline void set_atn_1(ATN_t715137711 * value)
	{
		___atn_1 = value;
		Il2CppCodeGenWriteBarrier((&___atn_1), value);
	}

	inline static int32_t get_offset_of_stateNumber_2() { return static_cast<int32_t>(offsetof(ATNState_t3206414579, ___stateNumber_2)); }
	inline int32_t get_stateNumber_2() const { return ___stateNumber_2; }
	inline int32_t* get_address_of_stateNumber_2() { return &___stateNumber_2; }
	inline void set_stateNumber_2(int32_t value)
	{
		___stateNumber_2 = value;
	}

	inline static int32_t get_offset_of_ruleIndex_3() { return static_cast<int32_t>(offsetof(ATNState_t3206414579, ___ruleIndex_3)); }
	inline int32_t get_ruleIndex_3() const { return ___ruleIndex_3; }
	inline int32_t* get_address_of_ruleIndex_3() { return &___ruleIndex_3; }
	inline void set_ruleIndex_3(int32_t value)
	{
		___ruleIndex_3 = value;
	}

	inline static int32_t get_offset_of_epsilonOnlyTransitions_4() { return static_cast<int32_t>(offsetof(ATNState_t3206414579, ___epsilonOnlyTransitions_4)); }
	inline bool get_epsilonOnlyTransitions_4() const { return ___epsilonOnlyTransitions_4; }
	inline bool* get_address_of_epsilonOnlyTransitions_4() { return &___epsilonOnlyTransitions_4; }
	inline void set_epsilonOnlyTransitions_4(bool value)
	{
		___epsilonOnlyTransitions_4 = value;
	}

	inline static int32_t get_offset_of_transitions_5() { return static_cast<int32_t>(offsetof(ATNState_t3206414579, ___transitions_5)); }
	inline List_1_t2542706918 * get_transitions_5() const { return ___transitions_5; }
	inline List_1_t2542706918 ** get_address_of_transitions_5() { return &___transitions_5; }
	inline void set_transitions_5(List_1_t2542706918 * value)
	{
		___transitions_5 = value;
		Il2CppCodeGenWriteBarrier((&___transitions_5), value);
	}

	inline static int32_t get_offset_of_optimizedTransitions_6() { return static_cast<int32_t>(offsetof(ATNState_t3206414579, ___optimizedTransitions_6)); }
	inline List_1_t2542706918 * get_optimizedTransitions_6() const { return ___optimizedTransitions_6; }
	inline List_1_t2542706918 ** get_address_of_optimizedTransitions_6() { return &___optimizedTransitions_6; }
	inline void set_optimizedTransitions_6(List_1_t2542706918 * value)
	{
		___optimizedTransitions_6 = value;
		Il2CppCodeGenWriteBarrier((&___optimizedTransitions_6), value);
	}

	inline static int32_t get_offset_of_nextTokenWithinRule_7() { return static_cast<int32_t>(offsetof(ATNState_t3206414579, ___nextTokenWithinRule_7)); }
	inline IntervalSet_t1736846379 * get_nextTokenWithinRule_7() const { return ___nextTokenWithinRule_7; }
	inline IntervalSet_t1736846379 ** get_address_of_nextTokenWithinRule_7() { return &___nextTokenWithinRule_7; }
	inline void set_nextTokenWithinRule_7(IntervalSet_t1736846379 * value)
	{
		___nextTokenWithinRule_7 = value;
		Il2CppCodeGenWriteBarrier((&___nextTokenWithinRule_7), value);
	}
};

struct ATNState_t3206414579_StaticFields
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Antlr4.Runtime.Atn.ATNState::serializationNames
	ReadOnlyCollection_1_t3060026976 * ___serializationNames_0;

public:
	inline static int32_t get_offset_of_serializationNames_0() { return static_cast<int32_t>(offsetof(ATNState_t3206414579_StaticFields, ___serializationNames_0)); }
	inline ReadOnlyCollection_1_t3060026976 * get_serializationNames_0() const { return ___serializationNames_0; }
	inline ReadOnlyCollection_1_t3060026976 ** get_address_of_serializationNames_0() { return &___serializationNames_0; }
	inline void set_serializationNames_0(ReadOnlyCollection_1_t3060026976 * value)
	{
		___serializationNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___serializationNames_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATNSTATE_T3206414579_H
#ifndef DFA_T3195866089_H
#define DFA_T3195866089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Dfa.DFA
struct  DFA_t3195866089  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState> Antlr4.Runtime.Dfa.DFA::states
	Dictionary_2_t58927384 * ___states_0;
	// Antlr4.Runtime.Dfa.DFAState Antlr4.Runtime.Dfa.DFA::s0
	DFAState_t3787800638 * ___s0_1;
	// System.Int32 Antlr4.Runtime.Dfa.DFA::decision
	int32_t ___decision_2;
	// Antlr4.Runtime.Atn.DecisionState Antlr4.Runtime.Dfa.DFA::atnStartState
	DecisionState_t66326499 * ___atnStartState_3;
	// System.Boolean Antlr4.Runtime.Dfa.DFA::precedenceDfa
	bool ___precedenceDfa_4;

public:
	inline static int32_t get_offset_of_states_0() { return static_cast<int32_t>(offsetof(DFA_t3195866089, ___states_0)); }
	inline Dictionary_2_t58927384 * get_states_0() const { return ___states_0; }
	inline Dictionary_2_t58927384 ** get_address_of_states_0() { return &___states_0; }
	inline void set_states_0(Dictionary_2_t58927384 * value)
	{
		___states_0 = value;
		Il2CppCodeGenWriteBarrier((&___states_0), value);
	}

	inline static int32_t get_offset_of_s0_1() { return static_cast<int32_t>(offsetof(DFA_t3195866089, ___s0_1)); }
	inline DFAState_t3787800638 * get_s0_1() const { return ___s0_1; }
	inline DFAState_t3787800638 ** get_address_of_s0_1() { return &___s0_1; }
	inline void set_s0_1(DFAState_t3787800638 * value)
	{
		___s0_1 = value;
		Il2CppCodeGenWriteBarrier((&___s0_1), value);
	}

	inline static int32_t get_offset_of_decision_2() { return static_cast<int32_t>(offsetof(DFA_t3195866089, ___decision_2)); }
	inline int32_t get_decision_2() const { return ___decision_2; }
	inline int32_t* get_address_of_decision_2() { return &___decision_2; }
	inline void set_decision_2(int32_t value)
	{
		___decision_2 = value;
	}

	inline static int32_t get_offset_of_atnStartState_3() { return static_cast<int32_t>(offsetof(DFA_t3195866089, ___atnStartState_3)); }
	inline DecisionState_t66326499 * get_atnStartState_3() const { return ___atnStartState_3; }
	inline DecisionState_t66326499 ** get_address_of_atnStartState_3() { return &___atnStartState_3; }
	inline void set_atnStartState_3(DecisionState_t66326499 * value)
	{
		___atnStartState_3 = value;
		Il2CppCodeGenWriteBarrier((&___atnStartState_3), value);
	}

	inline static int32_t get_offset_of_precedenceDfa_4() { return static_cast<int32_t>(offsetof(DFA_t3195866089, ___precedenceDfa_4)); }
	inline bool get_precedenceDfa_4() const { return ___precedenceDfa_4; }
	inline bool* get_address_of_precedenceDfa_4() { return &___precedenceDfa_4; }
	inline void set_precedenceDfa_4(bool value)
	{
		___precedenceDfa_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DFA_T3195866089_H
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
#ifndef RECOGNIZER_2_T1400415252_H
#define RECOGNIZER_2_T1400415252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>
struct  Recognizer_2_t1400415252  : public RuntimeObject
{
public:
	// Antlr4.Runtime.IAntlrErrorListener`1<Symbol>[] Antlr4.Runtime.Recognizer`2::_listeners
	IAntlrErrorListener_1U5BU5D_t2732147044* ____listeners_0;
	// ATNInterpreter Antlr4.Runtime.Recognizer`2::_interp
	ParserATNSimulator_t1762048632 * ____interp_1;
	// System.Int32 Antlr4.Runtime.Recognizer`2::_stateNumber
	int32_t ____stateNumber_2;

public:
	inline static int32_t get_offset_of__listeners_0() { return static_cast<int32_t>(offsetof(Recognizer_2_t1400415252, ____listeners_0)); }
	inline IAntlrErrorListener_1U5BU5D_t2732147044* get__listeners_0() const { return ____listeners_0; }
	inline IAntlrErrorListener_1U5BU5D_t2732147044** get_address_of__listeners_0() { return &____listeners_0; }
	inline void set__listeners_0(IAntlrErrorListener_1U5BU5D_t2732147044* value)
	{
		____listeners_0 = value;
		Il2CppCodeGenWriteBarrier((&____listeners_0), value);
	}

	inline static int32_t get_offset_of__interp_1() { return static_cast<int32_t>(offsetof(Recognizer_2_t1400415252, ____interp_1)); }
	inline ParserATNSimulator_t1762048632 * get__interp_1() const { return ____interp_1; }
	inline ParserATNSimulator_t1762048632 ** get_address_of__interp_1() { return &____interp_1; }
	inline void set__interp_1(ParserATNSimulator_t1762048632 * value)
	{
		____interp_1 = value;
		Il2CppCodeGenWriteBarrier((&____interp_1), value);
	}

	inline static int32_t get_offset_of__stateNumber_2() { return static_cast<int32_t>(offsetof(Recognizer_2_t1400415252, ____stateNumber_2)); }
	inline int32_t get__stateNumber_2() const { return ____stateNumber_2; }
	inline int32_t* get_address_of__stateNumber_2() { return &____stateNumber_2; }
	inline void set__stateNumber_2(int32_t value)
	{
		____stateNumber_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNIZER_2_T1400415252_H
#ifndef ATNSIMULATOR_T2448152846_H
#define ATNSIMULATOR_T2448152846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.ATNSimulator
struct  ATNSimulator_t2448152846  : public RuntimeObject
{
public:
	// Antlr4.Runtime.Atn.ATN Antlr4.Runtime.Atn.ATNSimulator::atn
	ATN_t715137711 * ___atn_1;
	// Antlr4.Runtime.Atn.PredictionContextCache Antlr4.Runtime.Atn.ATNSimulator::sharedContextCache
	PredictionContextCache_t36128749 * ___sharedContextCache_2;

public:
	inline static int32_t get_offset_of_atn_1() { return static_cast<int32_t>(offsetof(ATNSimulator_t2448152846, ___atn_1)); }
	inline ATN_t715137711 * get_atn_1() const { return ___atn_1; }
	inline ATN_t715137711 ** get_address_of_atn_1() { return &___atn_1; }
	inline void set_atn_1(ATN_t715137711 * value)
	{
		___atn_1 = value;
		Il2CppCodeGenWriteBarrier((&___atn_1), value);
	}

	inline static int32_t get_offset_of_sharedContextCache_2() { return static_cast<int32_t>(offsetof(ATNSimulator_t2448152846, ___sharedContextCache_2)); }
	inline PredictionContextCache_t36128749 * get_sharedContextCache_2() const { return ___sharedContextCache_2; }
	inline PredictionContextCache_t36128749 ** get_address_of_sharedContextCache_2() { return &___sharedContextCache_2; }
	inline void set_sharedContextCache_2(PredictionContextCache_t36128749 * value)
	{
		___sharedContextCache_2 = value;
		Il2CppCodeGenWriteBarrier((&___sharedContextCache_2), value);
	}
};

struct ATNSimulator_t2448152846_StaticFields
{
public:
	// Antlr4.Runtime.Dfa.DFAState Antlr4.Runtime.Atn.ATNSimulator::ERROR
	DFAState_t3787800638 * ___ERROR_0;

public:
	inline static int32_t get_offset_of_ERROR_0() { return static_cast<int32_t>(offsetof(ATNSimulator_t2448152846_StaticFields, ___ERROR_0)); }
	inline DFAState_t3787800638 * get_ERROR_0() const { return ___ERROR_0; }
	inline DFAState_t3787800638 ** get_address_of_ERROR_0() { return &___ERROR_0; }
	inline void set_ERROR_0(DFAState_t3787800638 * value)
	{
		___ERROR_0 = value;
		Il2CppCodeGenWriteBarrier((&___ERROR_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATNSIMULATOR_T2448152846_H
#ifndef SEMANTICCONTEXT_T2197800441_H
#define SEMANTICCONTEXT_T2197800441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.SemanticContext
struct  SemanticContext_t2197800441  : public RuntimeObject
{
public:

public:
};

struct SemanticContext_t2197800441_StaticFields
{
public:
	// Antlr4.Runtime.Atn.SemanticContext Antlr4.Runtime.Atn.SemanticContext::NONE
	SemanticContext_t2197800441 * ___NONE_0;

public:
	inline static int32_t get_offset_of_NONE_0() { return static_cast<int32_t>(offsetof(SemanticContext_t2197800441_StaticFields, ___NONE_0)); }
	inline SemanticContext_t2197800441 * get_NONE_0() const { return ___NONE_0; }
	inline SemanticContext_t2197800441 ** get_address_of_NONE_0() { return &___NONE_0; }
	inline void set_NONE_0(SemanticContext_t2197800441 * value)
	{
		___NONE_0 = value;
		Il2CppCodeGenWriteBarrier((&___NONE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEMANTICCONTEXT_T2197800441_H
#ifndef ATNCONFIGSET_T638728265_H
#define ATNCONFIGSET_T638728265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.ATNConfigSet
struct  ATNConfigSet_t638728265  : public RuntimeObject
{
public:
	// System.Boolean Antlr4.Runtime.Atn.ATNConfigSet::readOnly
	bool ___readOnly_0;
	// Antlr4.Runtime.Atn.ConfigHashSet Antlr4.Runtime.Atn.ATNConfigSet::configLookup
	ConfigHashSet_t591316934 * ___configLookup_1;
	// Antlr4.Runtime.Misc.ArrayList`1<Antlr4.Runtime.Atn.ATNConfig> Antlr4.Runtime.Atn.ATNConfigSet::configs
	ArrayList_1_t1962743782 * ___configs_2;
	// System.Int32 Antlr4.Runtime.Atn.ATNConfigSet::uniqueAlt
	int32_t ___uniqueAlt_3;
	// Antlr4.Runtime.Sharpen.BitSet Antlr4.Runtime.Atn.ATNConfigSet::conflictingAlts
	BitSet_t2017162039 * ___conflictingAlts_4;
	// System.Boolean Antlr4.Runtime.Atn.ATNConfigSet::hasSemanticContext
	bool ___hasSemanticContext_5;
	// System.Boolean Antlr4.Runtime.Atn.ATNConfigSet::dipsIntoOuterContext
	bool ___dipsIntoOuterContext_6;
	// System.Boolean Antlr4.Runtime.Atn.ATNConfigSet::fullCtx
	bool ___fullCtx_7;
	// System.Int32 Antlr4.Runtime.Atn.ATNConfigSet::cachedHashCode
	int32_t ___cachedHashCode_8;

public:
	inline static int32_t get_offset_of_readOnly_0() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___readOnly_0)); }
	inline bool get_readOnly_0() const { return ___readOnly_0; }
	inline bool* get_address_of_readOnly_0() { return &___readOnly_0; }
	inline void set_readOnly_0(bool value)
	{
		___readOnly_0 = value;
	}

	inline static int32_t get_offset_of_configLookup_1() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___configLookup_1)); }
	inline ConfigHashSet_t591316934 * get_configLookup_1() const { return ___configLookup_1; }
	inline ConfigHashSet_t591316934 ** get_address_of_configLookup_1() { return &___configLookup_1; }
	inline void set_configLookup_1(ConfigHashSet_t591316934 * value)
	{
		___configLookup_1 = value;
		Il2CppCodeGenWriteBarrier((&___configLookup_1), value);
	}

	inline static int32_t get_offset_of_configs_2() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___configs_2)); }
	inline ArrayList_1_t1962743782 * get_configs_2() const { return ___configs_2; }
	inline ArrayList_1_t1962743782 ** get_address_of_configs_2() { return &___configs_2; }
	inline void set_configs_2(ArrayList_1_t1962743782 * value)
	{
		___configs_2 = value;
		Il2CppCodeGenWriteBarrier((&___configs_2), value);
	}

	inline static int32_t get_offset_of_uniqueAlt_3() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___uniqueAlt_3)); }
	inline int32_t get_uniqueAlt_3() const { return ___uniqueAlt_3; }
	inline int32_t* get_address_of_uniqueAlt_3() { return &___uniqueAlt_3; }
	inline void set_uniqueAlt_3(int32_t value)
	{
		___uniqueAlt_3 = value;
	}

	inline static int32_t get_offset_of_conflictingAlts_4() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___conflictingAlts_4)); }
	inline BitSet_t2017162039 * get_conflictingAlts_4() const { return ___conflictingAlts_4; }
	inline BitSet_t2017162039 ** get_address_of_conflictingAlts_4() { return &___conflictingAlts_4; }
	inline void set_conflictingAlts_4(BitSet_t2017162039 * value)
	{
		___conflictingAlts_4 = value;
		Il2CppCodeGenWriteBarrier((&___conflictingAlts_4), value);
	}

	inline static int32_t get_offset_of_hasSemanticContext_5() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___hasSemanticContext_5)); }
	inline bool get_hasSemanticContext_5() const { return ___hasSemanticContext_5; }
	inline bool* get_address_of_hasSemanticContext_5() { return &___hasSemanticContext_5; }
	inline void set_hasSemanticContext_5(bool value)
	{
		___hasSemanticContext_5 = value;
	}

	inline static int32_t get_offset_of_dipsIntoOuterContext_6() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___dipsIntoOuterContext_6)); }
	inline bool get_dipsIntoOuterContext_6() const { return ___dipsIntoOuterContext_6; }
	inline bool* get_address_of_dipsIntoOuterContext_6() { return &___dipsIntoOuterContext_6; }
	inline void set_dipsIntoOuterContext_6(bool value)
	{
		___dipsIntoOuterContext_6 = value;
	}

	inline static int32_t get_offset_of_fullCtx_7() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___fullCtx_7)); }
	inline bool get_fullCtx_7() const { return ___fullCtx_7; }
	inline bool* get_address_of_fullCtx_7() { return &___fullCtx_7; }
	inline void set_fullCtx_7(bool value)
	{
		___fullCtx_7 = value;
	}

	inline static int32_t get_offset_of_cachedHashCode_8() { return static_cast<int32_t>(offsetof(ATNConfigSet_t638728265, ___cachedHashCode_8)); }
	inline int32_t get_cachedHashCode_8() const { return ___cachedHashCode_8; }
	inline int32_t* get_address_of_cachedHashCode_8() { return &___cachedHashCode_8; }
	inline void set_cachedHashCode_8(int32_t value)
	{
		___cachedHashCode_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATNCONFIGSET_T638728265_H
#ifndef PREDPREDICTION_T1259836427_H
#define PREDPREDICTION_T1259836427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Dfa.PredPrediction
struct  PredPrediction_t1259836427  : public RuntimeObject
{
public:
	// Antlr4.Runtime.Atn.SemanticContext Antlr4.Runtime.Dfa.PredPrediction::pred
	SemanticContext_t2197800441 * ___pred_0;
	// System.Int32 Antlr4.Runtime.Dfa.PredPrediction::alt
	int32_t ___alt_1;

public:
	inline static int32_t get_offset_of_pred_0() { return static_cast<int32_t>(offsetof(PredPrediction_t1259836427, ___pred_0)); }
	inline SemanticContext_t2197800441 * get_pred_0() const { return ___pred_0; }
	inline SemanticContext_t2197800441 ** get_address_of_pred_0() { return &___pred_0; }
	inline void set_pred_0(SemanticContext_t2197800441 * value)
	{
		___pred_0 = value;
		Il2CppCodeGenWriteBarrier((&___pred_0), value);
	}

	inline static int32_t get_offset_of_alt_1() { return static_cast<int32_t>(offsetof(PredPrediction_t1259836427, ___alt_1)); }
	inline int32_t get_alt_1() const { return ___alt_1; }
	inline int32_t* get_address_of_alt_1() { return &___alt_1; }
	inline void set_alt_1(int32_t value)
	{
		___alt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDPREDICTION_T1259836427_H
#ifndef DICTIONARY_2_T58927384_H
#define DICTIONARY_2_T58927384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState>
struct  Dictionary_2_t58927384  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	DFAStateU5BU5D_t2062627083* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	DFAStateU5BU5D_t2062627083* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___keySlots_6)); }
	inline DFAStateU5BU5D_t2062627083* get_keySlots_6() const { return ___keySlots_6; }
	inline DFAStateU5BU5D_t2062627083** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(DFAStateU5BU5D_t2062627083* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___valueSlots_7)); }
	inline DFAStateU5BU5D_t2062627083* get_valueSlots_7() const { return ___valueSlots_7; }
	inline DFAStateU5BU5D_t2062627083** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(DFAStateU5BU5D_t2062627083* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t58927384_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2161634244 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t58927384_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2161634244 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2161634244 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2161634244 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T58927384_H
#ifndef VALUECOLLECTION_T1774971702_H
#define VALUECOLLECTION_T1774971702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState>
struct  ValueCollection_t1774971702  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t58927384 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t1774971702, ___dictionary_0)); }
	inline Dictionary_2_t58927384 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t58927384 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t58927384 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T1774971702_H
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
#ifndef DFASERIALIZER_T2623600291_H
#define DFASERIALIZER_T2623600291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Dfa.DFASerializer
struct  DFASerializer_t2623600291  : public RuntimeObject
{
public:
	// Antlr4.Runtime.Dfa.DFA Antlr4.Runtime.Dfa.DFASerializer::dfa
	DFA_t3195866089 * ___dfa_0;
	// Antlr4.Runtime.IVocabulary Antlr4.Runtime.Dfa.DFASerializer::vocabulary
	RuntimeObject* ___vocabulary_1;
	// System.String[] Antlr4.Runtime.Dfa.DFASerializer::ruleNames
	StringU5BU5D_t1281789340* ___ruleNames_2;
	// Antlr4.Runtime.Atn.ATN Antlr4.Runtime.Dfa.DFASerializer::atn
	ATN_t715137711 * ___atn_3;

public:
	inline static int32_t get_offset_of_dfa_0() { return static_cast<int32_t>(offsetof(DFASerializer_t2623600291, ___dfa_0)); }
	inline DFA_t3195866089 * get_dfa_0() const { return ___dfa_0; }
	inline DFA_t3195866089 ** get_address_of_dfa_0() { return &___dfa_0; }
	inline void set_dfa_0(DFA_t3195866089 * value)
	{
		___dfa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dfa_0), value);
	}

	inline static int32_t get_offset_of_vocabulary_1() { return static_cast<int32_t>(offsetof(DFASerializer_t2623600291, ___vocabulary_1)); }
	inline RuntimeObject* get_vocabulary_1() const { return ___vocabulary_1; }
	inline RuntimeObject** get_address_of_vocabulary_1() { return &___vocabulary_1; }
	inline void set_vocabulary_1(RuntimeObject* value)
	{
		___vocabulary_1 = value;
		Il2CppCodeGenWriteBarrier((&___vocabulary_1), value);
	}

	inline static int32_t get_offset_of_ruleNames_2() { return static_cast<int32_t>(offsetof(DFASerializer_t2623600291, ___ruleNames_2)); }
	inline StringU5BU5D_t1281789340* get_ruleNames_2() const { return ___ruleNames_2; }
	inline StringU5BU5D_t1281789340** get_address_of_ruleNames_2() { return &___ruleNames_2; }
	inline void set_ruleNames_2(StringU5BU5D_t1281789340* value)
	{
		___ruleNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___ruleNames_2), value);
	}

	inline static int32_t get_offset_of_atn_3() { return static_cast<int32_t>(offsetof(DFASerializer_t2623600291, ___atn_3)); }
	inline ATN_t715137711 * get_atn_3() const { return ___atn_3; }
	inline ATN_t715137711 ** get_address_of_atn_3() { return &___atn_3; }
	inline void set_atn_3(ATN_t715137711 * value)
	{
		___atn_3 = value;
		Il2CppCodeGenWriteBarrier((&___atn_3), value);
	}
};

struct DFASerializer_t2623600291_StaticFields
{
public:
	// System.Comparison`1<Antlr4.Runtime.Dfa.DFAState> Antlr4.Runtime.Dfa.DFASerializer::<>f__am$cache0
	Comparison_1_t3562731817 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(DFASerializer_t2623600291_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Comparison_1_t3562731817 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Comparison_1_t3562731817 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Comparison_1_t3562731817 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DFASERIALIZER_T2623600291_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
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
#ifndef LIST_1_T964908084_H
#define LIST_1_T964908084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Antlr4.Runtime.Dfa.DFAState>
struct  List_1_t964908084  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DFAStateU5BU5D_t2062627083* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t964908084, ____items_1)); }
	inline DFAStateU5BU5D_t2062627083* get__items_1() const { return ____items_1; }
	inline DFAStateU5BU5D_t2062627083** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DFAStateU5BU5D_t2062627083* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t964908084, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t964908084, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t964908084_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DFAStateU5BU5D_t2062627083* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t964908084_StaticFields, ___EmptyArray_4)); }
	inline DFAStateU5BU5D_t2062627083* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DFAStateU5BU5D_t2062627083** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DFAStateU5BU5D_t2062627083* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T964908084_H
#ifndef TRANSITION_T1070632176_H
#define TRANSITION_T1070632176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.Transition
struct  Transition_t1070632176  : public RuntimeObject
{
public:
	// Antlr4.Runtime.Atn.ATNState Antlr4.Runtime.Atn.Transition::target
	ATNState_t3206414579 * ___target_1;

public:
	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(Transition_t1070632176, ___target_1)); }
	inline ATNState_t3206414579 * get_target_1() const { return ___target_1; }
	inline ATNState_t3206414579 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(ATNState_t3206414579 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((&___target_1), value);
	}
};

struct Transition_t1070632176_StaticFields
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Antlr4.Runtime.Atn.Transition::serializationNames
	ReadOnlyCollection_1_t3060026976 * ___serializationNames_0;

public:
	inline static int32_t get_offset_of_serializationNames_0() { return static_cast<int32_t>(offsetof(Transition_t1070632176_StaticFields, ___serializationNames_0)); }
	inline ReadOnlyCollection_1_t3060026976 * get_serializationNames_0() const { return ___serializationNames_0; }
	inline ReadOnlyCollection_1_t3060026976 ** get_address_of_serializationNames_0() { return &___serializationNames_0; }
	inline void set_serializationNames_0(ReadOnlyCollection_1_t3060026976 * value)
	{
		___serializationNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___serializationNames_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1070632176_H
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
#ifndef PROXYPARSERERRORLISTENER_T2678295775_H
#define PROXYPARSERERRORLISTENER_T2678295775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.ProxyParserErrorListener
struct  ProxyParserErrorListener_t2678295775  : public ProxyErrorListener_1_t1696335262
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYPARSERERRORLISTENER_T2678295775_H
#ifndef U24ARRAYTYPEU3D256_T1875414782_H
#define U24ARRAYTYPEU3D256_T1875414782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=256
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D256_t1875414782 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D256_t1875414782__padding[256];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D256_T1875414782_H
#ifndef ENUMERATOR_T2854151961_H
#define ENUMERATOR_T2854151961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Antlr4.Runtime.Dfa.DFAState>
struct  Enumerator_t2854151961 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t964908084 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DFAState_t3787800638 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2854151961, ___l_0)); }
	inline List_1_t964908084 * get_l_0() const { return ___l_0; }
	inline List_1_t964908084 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t964908084 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2854151961, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2854151961, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2854151961, ___current_3)); }
	inline DFAState_t3787800638 * get_current_3() const { return ___current_3; }
	inline DFAState_t3787800638 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DFAState_t3787800638 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2854151961_H
#ifndef SPINWAIT_T3580045567_H
#define SPINWAIT_T3580045567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Sharpen.SpinWait
struct  SpinWait_t3580045567 
{
public:
	// System.Int32 Antlr4.Runtime.Sharpen.SpinWait::ntime
	int32_t ___ntime_1;

public:
	inline static int32_t get_offset_of_ntime_1() { return static_cast<int32_t>(offsetof(SpinWait_t3580045567, ___ntime_1)); }
	inline int32_t get_ntime_1() const { return ___ntime_1; }
	inline int32_t* get_address_of_ntime_1() { return &___ntime_1; }
	inline void set_ntime_1(int32_t value)
	{
		___ntime_1 = value;
	}
};

struct SpinWait_t3580045567_StaticFields
{
public:
	// System.Boolean Antlr4.Runtime.Sharpen.SpinWait::isSingleCpu
	bool ___isSingleCpu_0;

public:
	inline static int32_t get_offset_of_isSingleCpu_0() { return static_cast<int32_t>(offsetof(SpinWait_t3580045567_StaticFields, ___isSingleCpu_0)); }
	inline bool get_isSingleCpu_0() const { return ___isSingleCpu_0; }
	inline bool* get_address_of_isSingleCpu_0() { return &___isSingleCpu_0; }
	inline void set_isSingleCpu_0(bool value)
	{
		___isSingleCpu_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPINWAIT_T3580045567_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef RULEVERSIONATTRIBUTE_T88391030_H
#define RULEVERSIONATTRIBUTE_T88391030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.RuleVersionAttribute
struct  RuleVersionAttribute_t88391030  : public Attribute_t861562559
{
public:
	// System.Int32 Antlr4.Runtime.RuleVersionAttribute::_version
	int32_t ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(RuleVersionAttribute_t88391030, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RULEVERSIONATTRIBUTE_T88391030_H
#ifndef ERRORNODEIMPL_T236481808_H
#define ERRORNODEIMPL_T236481808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Tree.ErrorNodeImpl
struct  ErrorNodeImpl_t236481808  : public TerminalNodeImpl_t19686673
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORNODEIMPL_T236481808_H
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
#ifndef INTERVAL_T761282612_H
#define INTERVAL_T761282612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.Interval
struct  Interval_t761282612 
{
public:
	// System.Int32 Antlr4.Runtime.Misc.Interval::a
	int32_t ___a_1;
	// System.Int32 Antlr4.Runtime.Misc.Interval::b
	int32_t ___b_2;

public:
	inline static int32_t get_offset_of_a_1() { return static_cast<int32_t>(offsetof(Interval_t761282612, ___a_1)); }
	inline int32_t get_a_1() const { return ___a_1; }
	inline int32_t* get_address_of_a_1() { return &___a_1; }
	inline void set_a_1(int32_t value)
	{
		___a_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Interval_t761282612, ___b_2)); }
	inline int32_t get_b_2() const { return ___b_2; }
	inline int32_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(int32_t value)
	{
		___b_2 = value;
	}
};

struct Interval_t761282612_StaticFields
{
public:
	// Antlr4.Runtime.Misc.Interval Antlr4.Runtime.Misc.Interval::Invalid
	Interval_t761282612  ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(Interval_t761282612_StaticFields, ___Invalid_0)); }
	inline Interval_t761282612  get_Invalid_0() const { return ___Invalid_0; }
	inline Interval_t761282612 * get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(Interval_t761282612  value)
	{
		___Invalid_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVAL_T761282612_H
#ifndef LEXERATNSIMULATOR_T4107212637_H
#define LEXERATNSIMULATOR_T4107212637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.LexerATNSimulator
struct  LexerATNSimulator_t4107212637  : public ATNSimulator_t2448152846
{
public:
	// System.Boolean Antlr4.Runtime.Atn.LexerATNSimulator::debug
	bool ___debug_3;
	// Antlr4.Runtime.Lexer Antlr4.Runtime.Atn.LexerATNSimulator::recog
	Lexer_t1430611871 * ___recog_6;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::startIndex
	int32_t ___startIndex_7;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::thisLine
	int32_t ___thisLine_8;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::charPositionInLine
	int32_t ___charPositionInLine_9;
	// Antlr4.Runtime.Dfa.DFA[] Antlr4.Runtime.Atn.LexerATNSimulator::decisionToDFA
	DFAU5BU5D_t873243220* ___decisionToDFA_10;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::mode
	int32_t ___mode_11;
	// Antlr4.Runtime.Atn.SimState Antlr4.Runtime.Atn.LexerATNSimulator::prevAccept
	SimState_t544668380 * ___prevAccept_12;

public:
	inline static int32_t get_offset_of_debug_3() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637, ___debug_3)); }
	inline bool get_debug_3() const { return ___debug_3; }
	inline bool* get_address_of_debug_3() { return &___debug_3; }
	inline void set_debug_3(bool value)
	{
		___debug_3 = value;
	}

	inline static int32_t get_offset_of_recog_6() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637, ___recog_6)); }
	inline Lexer_t1430611871 * get_recog_6() const { return ___recog_6; }
	inline Lexer_t1430611871 ** get_address_of_recog_6() { return &___recog_6; }
	inline void set_recog_6(Lexer_t1430611871 * value)
	{
		___recog_6 = value;
		Il2CppCodeGenWriteBarrier((&___recog_6), value);
	}

	inline static int32_t get_offset_of_startIndex_7() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637, ___startIndex_7)); }
	inline int32_t get_startIndex_7() const { return ___startIndex_7; }
	inline int32_t* get_address_of_startIndex_7() { return &___startIndex_7; }
	inline void set_startIndex_7(int32_t value)
	{
		___startIndex_7 = value;
	}

	inline static int32_t get_offset_of_thisLine_8() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637, ___thisLine_8)); }
	inline int32_t get_thisLine_8() const { return ___thisLine_8; }
	inline int32_t* get_address_of_thisLine_8() { return &___thisLine_8; }
	inline void set_thisLine_8(int32_t value)
	{
		___thisLine_8 = value;
	}

	inline static int32_t get_offset_of_charPositionInLine_9() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637, ___charPositionInLine_9)); }
	inline int32_t get_charPositionInLine_9() const { return ___charPositionInLine_9; }
	inline int32_t* get_address_of_charPositionInLine_9() { return &___charPositionInLine_9; }
	inline void set_charPositionInLine_9(int32_t value)
	{
		___charPositionInLine_9 = value;
	}

	inline static int32_t get_offset_of_decisionToDFA_10() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637, ___decisionToDFA_10)); }
	inline DFAU5BU5D_t873243220* get_decisionToDFA_10() const { return ___decisionToDFA_10; }
	inline DFAU5BU5D_t873243220** get_address_of_decisionToDFA_10() { return &___decisionToDFA_10; }
	inline void set_decisionToDFA_10(DFAU5BU5D_t873243220* value)
	{
		___decisionToDFA_10 = value;
		Il2CppCodeGenWriteBarrier((&___decisionToDFA_10), value);
	}

	inline static int32_t get_offset_of_mode_11() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637, ___mode_11)); }
	inline int32_t get_mode_11() const { return ___mode_11; }
	inline int32_t* get_address_of_mode_11() { return &___mode_11; }
	inline void set_mode_11(int32_t value)
	{
		___mode_11 = value;
	}

	inline static int32_t get_offset_of_prevAccept_12() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637, ___prevAccept_12)); }
	inline SimState_t544668380 * get_prevAccept_12() const { return ___prevAccept_12; }
	inline SimState_t544668380 ** get_address_of_prevAccept_12() { return &___prevAccept_12; }
	inline void set_prevAccept_12(SimState_t544668380 * value)
	{
		___prevAccept_12 = value;
		Il2CppCodeGenWriteBarrier((&___prevAccept_12), value);
	}
};

struct LexerATNSimulator_t4107212637_StaticFields
{
public:
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::MIN_DFA_EDGE
	int32_t ___MIN_DFA_EDGE_4;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::MAX_DFA_EDGE
	int32_t ___MAX_DFA_EDGE_5;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::match_calls
	int32_t ___match_calls_13;

public:
	inline static int32_t get_offset_of_MIN_DFA_EDGE_4() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637_StaticFields, ___MIN_DFA_EDGE_4)); }
	inline int32_t get_MIN_DFA_EDGE_4() const { return ___MIN_DFA_EDGE_4; }
	inline int32_t* get_address_of_MIN_DFA_EDGE_4() { return &___MIN_DFA_EDGE_4; }
	inline void set_MIN_DFA_EDGE_4(int32_t value)
	{
		___MIN_DFA_EDGE_4 = value;
	}

	inline static int32_t get_offset_of_MAX_DFA_EDGE_5() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637_StaticFields, ___MAX_DFA_EDGE_5)); }
	inline int32_t get_MAX_DFA_EDGE_5() const { return ___MAX_DFA_EDGE_5; }
	inline int32_t* get_address_of_MAX_DFA_EDGE_5() { return &___MAX_DFA_EDGE_5; }
	inline void set_MAX_DFA_EDGE_5(int32_t value)
	{
		___MAX_DFA_EDGE_5 = value;
	}

	inline static int32_t get_offset_of_match_calls_13() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t4107212637_StaticFields, ___match_calls_13)); }
	inline int32_t get_match_calls_13() const { return ___match_calls_13; }
	inline int32_t* get_address_of_match_calls_13() { return &___match_calls_13; }
	inline void set_match_calls_13(int32_t value)
	{
		___match_calls_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEXERATNSIMULATOR_T4107212637_H
#ifndef ABSTRACTPREDICATETRANSITION_T234975995_H
#define ABSTRACTPREDICATETRANSITION_T234975995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.AbstractPredicateTransition
struct  AbstractPredicateTransition_t234975995  : public Transition_t1070632176
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTPREDICATETRANSITION_T234975995_H
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
#ifndef LEXER_T1430611871_H
#define LEXER_T1430611871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Lexer
struct  Lexer_t1430611871  : public Recognizer_2_t1541209307
{
public:
	// Antlr4.Runtime.ICharStream Antlr4.Runtime.Lexer::_input
	RuntimeObject* ____input_3;
	// System.IO.TextWriter Antlr4.Runtime.Lexer::Output
	TextWriter_t3478189236 * ___Output_4;
	// System.IO.TextWriter Antlr4.Runtime.Lexer::ErrorOutput
	TextWriter_t3478189236 * ___ErrorOutput_5;
	// Antlr4.Runtime.Sharpen.Tuple`2<Antlr4.Runtime.ITokenSource,Antlr4.Runtime.ICharStream> Antlr4.Runtime.Lexer::_tokenFactorySourcePair
	Tuple_2_t601941212 * ____tokenFactorySourcePair_6;
	// Antlr4.Runtime.ITokenFactory Antlr4.Runtime.Lexer::_factory
	RuntimeObject* ____factory_7;
	// Antlr4.Runtime.IToken Antlr4.Runtime.Lexer::_token
	RuntimeObject* ____token_8;
	// System.Int32 Antlr4.Runtime.Lexer::_tokenStartCharIndex
	int32_t ____tokenStartCharIndex_9;
	// System.Int32 Antlr4.Runtime.Lexer::_tokenStartLine
	int32_t ____tokenStartLine_10;
	// System.Int32 Antlr4.Runtime.Lexer::_tokenStartColumn
	int32_t ____tokenStartColumn_11;
	// System.Boolean Antlr4.Runtime.Lexer::_hitEOF
	bool ____hitEOF_12;
	// System.Int32 Antlr4.Runtime.Lexer::_channel
	int32_t ____channel_13;
	// System.Int32 Antlr4.Runtime.Lexer::_type
	int32_t ____type_14;
	// System.Collections.Generic.Stack`1<System.Int32> Antlr4.Runtime.Lexer::_modeStack
	Stack_1_t3794335208 * ____modeStack_15;
	// System.Int32 Antlr4.Runtime.Lexer::_mode
	int32_t ____mode_16;
	// System.String Antlr4.Runtime.Lexer::_text
	String_t* ____text_17;

public:
	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____input_3)); }
	inline RuntimeObject* get__input_3() const { return ____input_3; }
	inline RuntimeObject** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(RuntimeObject* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((&____input_3), value);
	}

	inline static int32_t get_offset_of_Output_4() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ___Output_4)); }
	inline TextWriter_t3478189236 * get_Output_4() const { return ___Output_4; }
	inline TextWriter_t3478189236 ** get_address_of_Output_4() { return &___Output_4; }
	inline void set_Output_4(TextWriter_t3478189236 * value)
	{
		___Output_4 = value;
		Il2CppCodeGenWriteBarrier((&___Output_4), value);
	}

	inline static int32_t get_offset_of_ErrorOutput_5() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ___ErrorOutput_5)); }
	inline TextWriter_t3478189236 * get_ErrorOutput_5() const { return ___ErrorOutput_5; }
	inline TextWriter_t3478189236 ** get_address_of_ErrorOutput_5() { return &___ErrorOutput_5; }
	inline void set_ErrorOutput_5(TextWriter_t3478189236 * value)
	{
		___ErrorOutput_5 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorOutput_5), value);
	}

	inline static int32_t get_offset_of__tokenFactorySourcePair_6() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____tokenFactorySourcePair_6)); }
	inline Tuple_2_t601941212 * get__tokenFactorySourcePair_6() const { return ____tokenFactorySourcePair_6; }
	inline Tuple_2_t601941212 ** get_address_of__tokenFactorySourcePair_6() { return &____tokenFactorySourcePair_6; }
	inline void set__tokenFactorySourcePair_6(Tuple_2_t601941212 * value)
	{
		____tokenFactorySourcePair_6 = value;
		Il2CppCodeGenWriteBarrier((&____tokenFactorySourcePair_6), value);
	}

	inline static int32_t get_offset_of__factory_7() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____factory_7)); }
	inline RuntimeObject* get__factory_7() const { return ____factory_7; }
	inline RuntimeObject** get_address_of__factory_7() { return &____factory_7; }
	inline void set__factory_7(RuntimeObject* value)
	{
		____factory_7 = value;
		Il2CppCodeGenWriteBarrier((&____factory_7), value);
	}

	inline static int32_t get_offset_of__token_8() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____token_8)); }
	inline RuntimeObject* get__token_8() const { return ____token_8; }
	inline RuntimeObject** get_address_of__token_8() { return &____token_8; }
	inline void set__token_8(RuntimeObject* value)
	{
		____token_8 = value;
		Il2CppCodeGenWriteBarrier((&____token_8), value);
	}

	inline static int32_t get_offset_of__tokenStartCharIndex_9() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____tokenStartCharIndex_9)); }
	inline int32_t get__tokenStartCharIndex_9() const { return ____tokenStartCharIndex_9; }
	inline int32_t* get_address_of__tokenStartCharIndex_9() { return &____tokenStartCharIndex_9; }
	inline void set__tokenStartCharIndex_9(int32_t value)
	{
		____tokenStartCharIndex_9 = value;
	}

	inline static int32_t get_offset_of__tokenStartLine_10() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____tokenStartLine_10)); }
	inline int32_t get__tokenStartLine_10() const { return ____tokenStartLine_10; }
	inline int32_t* get_address_of__tokenStartLine_10() { return &____tokenStartLine_10; }
	inline void set__tokenStartLine_10(int32_t value)
	{
		____tokenStartLine_10 = value;
	}

	inline static int32_t get_offset_of__tokenStartColumn_11() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____tokenStartColumn_11)); }
	inline int32_t get__tokenStartColumn_11() const { return ____tokenStartColumn_11; }
	inline int32_t* get_address_of__tokenStartColumn_11() { return &____tokenStartColumn_11; }
	inline void set__tokenStartColumn_11(int32_t value)
	{
		____tokenStartColumn_11 = value;
	}

	inline static int32_t get_offset_of__hitEOF_12() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____hitEOF_12)); }
	inline bool get__hitEOF_12() const { return ____hitEOF_12; }
	inline bool* get_address_of__hitEOF_12() { return &____hitEOF_12; }
	inline void set__hitEOF_12(bool value)
	{
		____hitEOF_12 = value;
	}

	inline static int32_t get_offset_of__channel_13() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____channel_13)); }
	inline int32_t get__channel_13() const { return ____channel_13; }
	inline int32_t* get_address_of__channel_13() { return &____channel_13; }
	inline void set__channel_13(int32_t value)
	{
		____channel_13 = value;
	}

	inline static int32_t get_offset_of__type_14() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____type_14)); }
	inline int32_t get__type_14() const { return ____type_14; }
	inline int32_t* get_address_of__type_14() { return &____type_14; }
	inline void set__type_14(int32_t value)
	{
		____type_14 = value;
	}

	inline static int32_t get_offset_of__modeStack_15() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____modeStack_15)); }
	inline Stack_1_t3794335208 * get__modeStack_15() const { return ____modeStack_15; }
	inline Stack_1_t3794335208 ** get_address_of__modeStack_15() { return &____modeStack_15; }
	inline void set__modeStack_15(Stack_1_t3794335208 * value)
	{
		____modeStack_15 = value;
		Il2CppCodeGenWriteBarrier((&____modeStack_15), value);
	}

	inline static int32_t get_offset_of__mode_16() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____mode_16)); }
	inline int32_t get__mode_16() const { return ____mode_16; }
	inline int32_t* get_address_of__mode_16() { return &____mode_16; }
	inline void set__mode_16(int32_t value)
	{
		____mode_16 = value;
	}

	inline static int32_t get_offset_of__text_17() { return static_cast<int32_t>(offsetof(Lexer_t1430611871, ____text_17)); }
	inline String_t* get__text_17() const { return ____text_17; }
	inline String_t** get_address_of__text_17() { return &____text_17; }
	inline void set__text_17(String_t* value)
	{
		____text_17 = value;
		Il2CppCodeGenWriteBarrier((&____text_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEXER_T1430611871_H
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
#ifndef RECOGNITIONEXCEPTION_T4252147236_H
#define RECOGNITIONEXCEPTION_T4252147236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.RecognitionException
struct  RecognitionException_t4252147236  : public Exception_t
{
public:
	// Antlr4.Runtime.IRecognizer Antlr4.Runtime.RecognitionException::recognizer
	RuntimeObject* ___recognizer_11;
	// Antlr4.Runtime.RuleContext Antlr4.Runtime.RecognitionException::ctx
	RuleContext_t846066196 * ___ctx_12;
	// Antlr4.Runtime.IIntStream Antlr4.Runtime.RecognitionException::input
	RuntimeObject* ___input_13;
	// Antlr4.Runtime.IToken Antlr4.Runtime.RecognitionException::offendingToken
	RuntimeObject* ___offendingToken_14;
	// System.Int32 Antlr4.Runtime.RecognitionException::offendingState
	int32_t ___offendingState_15;

public:
	inline static int32_t get_offset_of_recognizer_11() { return static_cast<int32_t>(offsetof(RecognitionException_t4252147236, ___recognizer_11)); }
	inline RuntimeObject* get_recognizer_11() const { return ___recognizer_11; }
	inline RuntimeObject** get_address_of_recognizer_11() { return &___recognizer_11; }
	inline void set_recognizer_11(RuntimeObject* value)
	{
		___recognizer_11 = value;
		Il2CppCodeGenWriteBarrier((&___recognizer_11), value);
	}

	inline static int32_t get_offset_of_ctx_12() { return static_cast<int32_t>(offsetof(RecognitionException_t4252147236, ___ctx_12)); }
	inline RuleContext_t846066196 * get_ctx_12() const { return ___ctx_12; }
	inline RuleContext_t846066196 ** get_address_of_ctx_12() { return &___ctx_12; }
	inline void set_ctx_12(RuleContext_t846066196 * value)
	{
		___ctx_12 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_12), value);
	}

	inline static int32_t get_offset_of_input_13() { return static_cast<int32_t>(offsetof(RecognitionException_t4252147236, ___input_13)); }
	inline RuntimeObject* get_input_13() const { return ___input_13; }
	inline RuntimeObject** get_address_of_input_13() { return &___input_13; }
	inline void set_input_13(RuntimeObject* value)
	{
		___input_13 = value;
		Il2CppCodeGenWriteBarrier((&___input_13), value);
	}

	inline static int32_t get_offset_of_offendingToken_14() { return static_cast<int32_t>(offsetof(RecognitionException_t4252147236, ___offendingToken_14)); }
	inline RuntimeObject* get_offendingToken_14() const { return ___offendingToken_14; }
	inline RuntimeObject** get_address_of_offendingToken_14() { return &___offendingToken_14; }
	inline void set_offendingToken_14(RuntimeObject* value)
	{
		___offendingToken_14 = value;
		Il2CppCodeGenWriteBarrier((&___offendingToken_14), value);
	}

	inline static int32_t get_offset_of_offendingState_15() { return static_cast<int32_t>(offsetof(RecognitionException_t4252147236, ___offendingState_15)); }
	inline int32_t get_offendingState_15() const { return ___offendingState_15; }
	inline int32_t* get_address_of_offendingState_15() { return &___offendingState_15; }
	inline void set_offendingState_15(int32_t value)
	{
		___offendingState_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOGNITIONEXCEPTION_T4252147236_H
#ifndef PARSERATNSIMULATOR_T1762048632_H
#define PARSERATNSIMULATOR_T1762048632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.ParserATNSimulator
struct  ParserATNSimulator_t1762048632  : public ATNSimulator_t2448152846
{
public:
	// Antlr4.Runtime.Parser Antlr4.Runtime.Atn.ParserATNSimulator::parser
	Parser_t1471951952 * ___parser_7;
	// Antlr4.Runtime.Dfa.DFA[] Antlr4.Runtime.Atn.ParserATNSimulator::decisionToDFA
	DFAU5BU5D_t873243220* ___decisionToDFA_8;
	// Antlr4.Runtime.Atn.PredictionMode Antlr4.Runtime.Atn.ParserATNSimulator::mode
	PredictionMode_t3387509352 * ___mode_9;
	// Antlr4.Runtime.Atn.MergeCache Antlr4.Runtime.Atn.ParserATNSimulator::mergeCache
	MergeCache_t3969348185 * ___mergeCache_10;
	// Antlr4.Runtime.ITokenStream Antlr4.Runtime.Atn.ParserATNSimulator::input
	RuntimeObject* ___input_11;
	// System.Int32 Antlr4.Runtime.Atn.ParserATNSimulator::startIndex
	int32_t ___startIndex_12;
	// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Atn.ParserATNSimulator::context
	ParserRuleContext_t3215563317 * ___context_13;
	// Antlr4.Runtime.Dfa.DFA Antlr4.Runtime.Atn.ParserATNSimulator::thisDfa
	DFA_t3195866089 * ___thisDfa_14;

public:
	inline static int32_t get_offset_of_parser_7() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632, ___parser_7)); }
	inline Parser_t1471951952 * get_parser_7() const { return ___parser_7; }
	inline Parser_t1471951952 ** get_address_of_parser_7() { return &___parser_7; }
	inline void set_parser_7(Parser_t1471951952 * value)
	{
		___parser_7 = value;
		Il2CppCodeGenWriteBarrier((&___parser_7), value);
	}

	inline static int32_t get_offset_of_decisionToDFA_8() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632, ___decisionToDFA_8)); }
	inline DFAU5BU5D_t873243220* get_decisionToDFA_8() const { return ___decisionToDFA_8; }
	inline DFAU5BU5D_t873243220** get_address_of_decisionToDFA_8() { return &___decisionToDFA_8; }
	inline void set_decisionToDFA_8(DFAU5BU5D_t873243220* value)
	{
		___decisionToDFA_8 = value;
		Il2CppCodeGenWriteBarrier((&___decisionToDFA_8), value);
	}

	inline static int32_t get_offset_of_mode_9() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632, ___mode_9)); }
	inline PredictionMode_t3387509352 * get_mode_9() const { return ___mode_9; }
	inline PredictionMode_t3387509352 ** get_address_of_mode_9() { return &___mode_9; }
	inline void set_mode_9(PredictionMode_t3387509352 * value)
	{
		___mode_9 = value;
		Il2CppCodeGenWriteBarrier((&___mode_9), value);
	}

	inline static int32_t get_offset_of_mergeCache_10() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632, ___mergeCache_10)); }
	inline MergeCache_t3969348185 * get_mergeCache_10() const { return ___mergeCache_10; }
	inline MergeCache_t3969348185 ** get_address_of_mergeCache_10() { return &___mergeCache_10; }
	inline void set_mergeCache_10(MergeCache_t3969348185 * value)
	{
		___mergeCache_10 = value;
		Il2CppCodeGenWriteBarrier((&___mergeCache_10), value);
	}

	inline static int32_t get_offset_of_input_11() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632, ___input_11)); }
	inline RuntimeObject* get_input_11() const { return ___input_11; }
	inline RuntimeObject** get_address_of_input_11() { return &___input_11; }
	inline void set_input_11(RuntimeObject* value)
	{
		___input_11 = value;
		Il2CppCodeGenWriteBarrier((&___input_11), value);
	}

	inline static int32_t get_offset_of_startIndex_12() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632, ___startIndex_12)); }
	inline int32_t get_startIndex_12() const { return ___startIndex_12; }
	inline int32_t* get_address_of_startIndex_12() { return &___startIndex_12; }
	inline void set_startIndex_12(int32_t value)
	{
		___startIndex_12 = value;
	}

	inline static int32_t get_offset_of_context_13() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632, ___context_13)); }
	inline ParserRuleContext_t3215563317 * get_context_13() const { return ___context_13; }
	inline ParserRuleContext_t3215563317 ** get_address_of_context_13() { return &___context_13; }
	inline void set_context_13(ParserRuleContext_t3215563317 * value)
	{
		___context_13 = value;
		Il2CppCodeGenWriteBarrier((&___context_13), value);
	}

	inline static int32_t get_offset_of_thisDfa_14() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632, ___thisDfa_14)); }
	inline DFA_t3195866089 * get_thisDfa_14() const { return ___thisDfa_14; }
	inline DFA_t3195866089 ** get_address_of_thisDfa_14() { return &___thisDfa_14; }
	inline void set_thisDfa_14(DFA_t3195866089 * value)
	{
		___thisDfa_14 = value;
		Il2CppCodeGenWriteBarrier((&___thisDfa_14), value);
	}
};

struct ParserATNSimulator_t1762048632_StaticFields
{
public:
	// System.Boolean Antlr4.Runtime.Atn.ParserATNSimulator::debug
	bool ___debug_3;
	// System.Boolean Antlr4.Runtime.Atn.ParserATNSimulator::debug_list_atn_decisions
	bool ___debug_list_atn_decisions_4;
	// System.Boolean Antlr4.Runtime.Atn.ParserATNSimulator::dfa_debug
	bool ___dfa_debug_5;
	// System.Boolean Antlr4.Runtime.Atn.ParserATNSimulator::retry_debug
	bool ___retry_debug_6;

public:
	inline static int32_t get_offset_of_debug_3() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632_StaticFields, ___debug_3)); }
	inline bool get_debug_3() const { return ___debug_3; }
	inline bool* get_address_of_debug_3() { return &___debug_3; }
	inline void set_debug_3(bool value)
	{
		___debug_3 = value;
	}

	inline static int32_t get_offset_of_debug_list_atn_decisions_4() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632_StaticFields, ___debug_list_atn_decisions_4)); }
	inline bool get_debug_list_atn_decisions_4() const { return ___debug_list_atn_decisions_4; }
	inline bool* get_address_of_debug_list_atn_decisions_4() { return &___debug_list_atn_decisions_4; }
	inline void set_debug_list_atn_decisions_4(bool value)
	{
		___debug_list_atn_decisions_4 = value;
	}

	inline static int32_t get_offset_of_dfa_debug_5() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632_StaticFields, ___dfa_debug_5)); }
	inline bool get_dfa_debug_5() const { return ___dfa_debug_5; }
	inline bool* get_address_of_dfa_debug_5() { return &___dfa_debug_5; }
	inline void set_dfa_debug_5(bool value)
	{
		___dfa_debug_5 = value;
	}

	inline static int32_t get_offset_of_retry_debug_6() { return static_cast<int32_t>(offsetof(ParserATNSimulator_t1762048632_StaticFields, ___retry_debug_6)); }
	inline bool get_retry_debug_6() const { return ___retry_debug_6; }
	inline bool* get_address_of_retry_debug_6() { return &___retry_debug_6; }
	inline void set_retry_debug_6(bool value)
	{
		___retry_debug_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSERATNSIMULATOR_T1762048632_H
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
#ifndef PARSERRULECONTEXT_T3215563317_H
#define PARSERRULECONTEXT_T3215563317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.ParserRuleContext
struct  ParserRuleContext_t3215563317  : public RuleContext_t846066196
{
public:
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTree> Antlr4.Runtime.ParserRuleContext::children
	RuntimeObject* ___children_3;
	// Antlr4.Runtime.IToken Antlr4.Runtime.ParserRuleContext::_start
	RuntimeObject* ____start_4;
	// Antlr4.Runtime.IToken Antlr4.Runtime.ParserRuleContext::_stop
	RuntimeObject* ____stop_5;
	// Antlr4.Runtime.RecognitionException Antlr4.Runtime.ParserRuleContext::exception
	RecognitionException_t4252147236 * ___exception_6;

public:
	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(ParserRuleContext_t3215563317, ___children_3)); }
	inline RuntimeObject* get_children_3() const { return ___children_3; }
	inline RuntimeObject** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(RuntimeObject* value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}

	inline static int32_t get_offset_of__start_4() { return static_cast<int32_t>(offsetof(ParserRuleContext_t3215563317, ____start_4)); }
	inline RuntimeObject* get__start_4() const { return ____start_4; }
	inline RuntimeObject** get_address_of__start_4() { return &____start_4; }
	inline void set__start_4(RuntimeObject* value)
	{
		____start_4 = value;
		Il2CppCodeGenWriteBarrier((&____start_4), value);
	}

	inline static int32_t get_offset_of__stop_5() { return static_cast<int32_t>(offsetof(ParserRuleContext_t3215563317, ____stop_5)); }
	inline RuntimeObject* get__stop_5() const { return ____stop_5; }
	inline RuntimeObject** get_address_of__stop_5() { return &____stop_5; }
	inline void set__stop_5(RuntimeObject* value)
	{
		____stop_5 = value;
		Il2CppCodeGenWriteBarrier((&____stop_5), value);
	}

	inline static int32_t get_offset_of_exception_6() { return static_cast<int32_t>(offsetof(ParserRuleContext_t3215563317, ___exception_6)); }
	inline RecognitionException_t4252147236 * get_exception_6() const { return ___exception_6; }
	inline RecognitionException_t4252147236 ** get_address_of_exception_6() { return &___exception_6; }
	inline void set_exception_6(RecognitionException_t4252147236 * value)
	{
		___exception_6 = value;
		Il2CppCodeGenWriteBarrier((&___exception_6), value);
	}
};

struct ParserRuleContext_t3215563317_StaticFields
{
public:
	// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.ParserRuleContext::EMPTY
	ParserRuleContext_t3215563317 * ___EMPTY_2;

public:
	inline static int32_t get_offset_of_EMPTY_2() { return static_cast<int32_t>(offsetof(ParserRuleContext_t3215563317_StaticFields, ___EMPTY_2)); }
	inline ParserRuleContext_t3215563317 * get_EMPTY_2() const { return ___EMPTY_2; }
	inline ParserRuleContext_t3215563317 ** get_address_of_EMPTY_2() { return &___EMPTY_2; }
	inline void set_EMPTY_2(ParserRuleContext_t3215563317 * value)
	{
		___EMPTY_2 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSERRULECONTEXT_T3215563317_H
#ifndef NULLABLEATTRIBUTE_T2798464271_H
#define NULLABLEATTRIBUTE_T2798464271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.NullableAttribute
struct  NullableAttribute_t2798464271  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLEATTRIBUTE_T2798464271_H
#ifndef PARSER_T1471951952_H
#define PARSER_T1471951952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Parser
struct  Parser_t1471951952  : public Recognizer_2_t1400415252
{
public:
	// Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::_errHandler
	RuntimeObject* ____errHandler_4;
	// Antlr4.Runtime.ITokenStream Antlr4.Runtime.Parser::_input
	RuntimeObject* ____input_5;
	// System.Collections.Generic.List`1<System.Int32> Antlr4.Runtime.Parser::_precedenceStack
	List_1_t128053199 * ____precedenceStack_6;
	// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::_ctx
	ParserRuleContext_t3215563317 * ____ctx_7;
	// System.Boolean Antlr4.Runtime.Parser::_buildParseTrees
	bool ____buildParseTrees_8;
	// Antlr4.Runtime.Parser/TraceListener Antlr4.Runtime.Parser::_tracer
	TraceListener_t761327790 * ____tracer_9;
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTreeListener> Antlr4.Runtime.Parser::_parseListeners
	RuntimeObject* ____parseListeners_10;
	// System.Int32 Antlr4.Runtime.Parser::_syntaxErrors
	int32_t ____syntaxErrors_11;
	// System.IO.TextWriter Antlr4.Runtime.Parser::Output
	TextWriter_t3478189236 * ___Output_12;
	// System.IO.TextWriter Antlr4.Runtime.Parser::ErrorOutput
	TextWriter_t3478189236 * ___ErrorOutput_13;

public:
	inline static int32_t get_offset_of__errHandler_4() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ____errHandler_4)); }
	inline RuntimeObject* get__errHandler_4() const { return ____errHandler_4; }
	inline RuntimeObject** get_address_of__errHandler_4() { return &____errHandler_4; }
	inline void set__errHandler_4(RuntimeObject* value)
	{
		____errHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&____errHandler_4), value);
	}

	inline static int32_t get_offset_of__input_5() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ____input_5)); }
	inline RuntimeObject* get__input_5() const { return ____input_5; }
	inline RuntimeObject** get_address_of__input_5() { return &____input_5; }
	inline void set__input_5(RuntimeObject* value)
	{
		____input_5 = value;
		Il2CppCodeGenWriteBarrier((&____input_5), value);
	}

	inline static int32_t get_offset_of__precedenceStack_6() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ____precedenceStack_6)); }
	inline List_1_t128053199 * get__precedenceStack_6() const { return ____precedenceStack_6; }
	inline List_1_t128053199 ** get_address_of__precedenceStack_6() { return &____precedenceStack_6; }
	inline void set__precedenceStack_6(List_1_t128053199 * value)
	{
		____precedenceStack_6 = value;
		Il2CppCodeGenWriteBarrier((&____precedenceStack_6), value);
	}

	inline static int32_t get_offset_of__ctx_7() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ____ctx_7)); }
	inline ParserRuleContext_t3215563317 * get__ctx_7() const { return ____ctx_7; }
	inline ParserRuleContext_t3215563317 ** get_address_of__ctx_7() { return &____ctx_7; }
	inline void set__ctx_7(ParserRuleContext_t3215563317 * value)
	{
		____ctx_7 = value;
		Il2CppCodeGenWriteBarrier((&____ctx_7), value);
	}

	inline static int32_t get_offset_of__buildParseTrees_8() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ____buildParseTrees_8)); }
	inline bool get__buildParseTrees_8() const { return ____buildParseTrees_8; }
	inline bool* get_address_of__buildParseTrees_8() { return &____buildParseTrees_8; }
	inline void set__buildParseTrees_8(bool value)
	{
		____buildParseTrees_8 = value;
	}

	inline static int32_t get_offset_of__tracer_9() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ____tracer_9)); }
	inline TraceListener_t761327790 * get__tracer_9() const { return ____tracer_9; }
	inline TraceListener_t761327790 ** get_address_of__tracer_9() { return &____tracer_9; }
	inline void set__tracer_9(TraceListener_t761327790 * value)
	{
		____tracer_9 = value;
		Il2CppCodeGenWriteBarrier((&____tracer_9), value);
	}

	inline static int32_t get_offset_of__parseListeners_10() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ____parseListeners_10)); }
	inline RuntimeObject* get__parseListeners_10() const { return ____parseListeners_10; }
	inline RuntimeObject** get_address_of__parseListeners_10() { return &____parseListeners_10; }
	inline void set__parseListeners_10(RuntimeObject* value)
	{
		____parseListeners_10 = value;
		Il2CppCodeGenWriteBarrier((&____parseListeners_10), value);
	}

	inline static int32_t get_offset_of__syntaxErrors_11() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ____syntaxErrors_11)); }
	inline int32_t get__syntaxErrors_11() const { return ____syntaxErrors_11; }
	inline int32_t* get_address_of__syntaxErrors_11() { return &____syntaxErrors_11; }
	inline void set__syntaxErrors_11(int32_t value)
	{
		____syntaxErrors_11 = value;
	}

	inline static int32_t get_offset_of_Output_12() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ___Output_12)); }
	inline TextWriter_t3478189236 * get_Output_12() const { return ___Output_12; }
	inline TextWriter_t3478189236 ** get_address_of_Output_12() { return &___Output_12; }
	inline void set_Output_12(TextWriter_t3478189236 * value)
	{
		___Output_12 = value;
		Il2CppCodeGenWriteBarrier((&___Output_12), value);
	}

	inline static int32_t get_offset_of_ErrorOutput_13() { return static_cast<int32_t>(offsetof(Parser_t1471951952, ___ErrorOutput_13)); }
	inline TextWriter_t3478189236 * get_ErrorOutput_13() const { return ___ErrorOutput_13; }
	inline TextWriter_t3478189236 ** get_address_of_ErrorOutput_13() { return &___ErrorOutput_13; }
	inline void set_ErrorOutput_13(TextWriter_t3478189236 * value)
	{
		___ErrorOutput_13 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorOutput_13), value);
	}
};

struct Parser_t1471951952_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,Antlr4.Runtime.Atn.ATN> Antlr4.Runtime.Parser::bypassAltsAtnCache
	RuntimeObject* ___bypassAltsAtnCache_3;

public:
	inline static int32_t get_offset_of_bypassAltsAtnCache_3() { return static_cast<int32_t>(offsetof(Parser_t1471951952_StaticFields, ___bypassAltsAtnCache_3)); }
	inline RuntimeObject* get_bypassAltsAtnCache_3() const { return ___bypassAltsAtnCache_3; }
	inline RuntimeObject** get_address_of_bypassAltsAtnCache_3() { return &___bypassAltsAtnCache_3; }
	inline void set_bypassAltsAtnCache_3(RuntimeObject* value)
	{
		___bypassAltsAtnCache_3 = value;
		Il2CppCodeGenWriteBarrier((&___bypassAltsAtnCache_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T1471951952_H
#ifndef NOTNULLATTRIBUTE_T935244695_H
#define NOTNULLATTRIBUTE_T935244695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.NotNullAttribute
struct  NotNullAttribute_t935244695  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTNULLATTRIBUTE_T935244695_H
#ifndef ARRAYLIST_1_T2215970062_H
#define ARRAYLIST_1_T2215970062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.ArrayList`1<Antlr4.Runtime.Misc.Interval>
struct  ArrayList_1_t2215970062  : public List_1_t2233357354
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_1_T2215970062_H
#ifndef ARRAYLIST_1_T110665907_H
#define ARRAYLIST_1_T110665907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Misc.ArrayList`1<System.Int32>
struct  ArrayList_1_t110665907  : public List_1_t128053199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_1_T110665907_H
#ifndef ATNTYPE_T923009632_H
#define ATNTYPE_T923009632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.ATNType
struct  ATNType_t923009632 
{
public:
	// System.Int32 Antlr4.Runtime.Atn.ATNType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ATNType_t923009632, ___value___1)); }
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
#endif // ATNTYPE_T923009632_H
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
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef NULLABLE_1_T2483844694_H
#define NULLABLE_1_T2483844694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Antlr4.Runtime.Misc.Interval>
struct  Nullable_1_t2483844694 
{
public:
	// T System.Nullable`1::value
	Interval_t761282612  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2483844694, ___value_0)); }
	inline Interval_t761282612  get_value_0() const { return ___value_0; }
	inline Interval_t761282612 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Interval_t761282612  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2483844694, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2483844694_H
#ifndef FAILEDPREDICATEEXCEPTION_T1308833165_H
#define FAILEDPREDICATEEXCEPTION_T1308833165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.FailedPredicateException
struct  FailedPredicateException_t1308833165  : public RecognitionException_t4252147236
{
public:
	// System.Int32 Antlr4.Runtime.FailedPredicateException::ruleIndex
	int32_t ___ruleIndex_16;
	// System.Int32 Antlr4.Runtime.FailedPredicateException::predicateIndex
	int32_t ___predicateIndex_17;
	// System.String Antlr4.Runtime.FailedPredicateException::predicate
	String_t* ___predicate_18;

public:
	inline static int32_t get_offset_of_ruleIndex_16() { return static_cast<int32_t>(offsetof(FailedPredicateException_t1308833165, ___ruleIndex_16)); }
	inline int32_t get_ruleIndex_16() const { return ___ruleIndex_16; }
	inline int32_t* get_address_of_ruleIndex_16() { return &___ruleIndex_16; }
	inline void set_ruleIndex_16(int32_t value)
	{
		___ruleIndex_16 = value;
	}

	inline static int32_t get_offset_of_predicateIndex_17() { return static_cast<int32_t>(offsetof(FailedPredicateException_t1308833165, ___predicateIndex_17)); }
	inline int32_t get_predicateIndex_17() const { return ___predicateIndex_17; }
	inline int32_t* get_address_of_predicateIndex_17() { return &___predicateIndex_17; }
	inline void set_predicateIndex_17(int32_t value)
	{
		___predicateIndex_17 = value;
	}

	inline static int32_t get_offset_of_predicate_18() { return static_cast<int32_t>(offsetof(FailedPredicateException_t1308833165, ___predicate_18)); }
	inline String_t* get_predicate_18() const { return ___predicate_18; }
	inline String_t** get_address_of_predicate_18() { return &___predicate_18; }
	inline void set_predicate_18(String_t* value)
	{
		___predicate_18 = value;
		Il2CppCodeGenWriteBarrier((&___predicate_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAILEDPREDICATEEXCEPTION_T1308833165_H
#ifndef LEXERNOVIABLEALTEXCEPTION_T222117296_H
#define LEXERNOVIABLEALTEXCEPTION_T222117296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.LexerNoViableAltException
struct  LexerNoViableAltException_t222117296  : public RecognitionException_t4252147236
{
public:
	// System.Int32 Antlr4.Runtime.LexerNoViableAltException::startIndex
	int32_t ___startIndex_16;
	// Antlr4.Runtime.Atn.ATNConfigSet Antlr4.Runtime.LexerNoViableAltException::deadEndConfigs
	ATNConfigSet_t638728265 * ___deadEndConfigs_17;

public:
	inline static int32_t get_offset_of_startIndex_16() { return static_cast<int32_t>(offsetof(LexerNoViableAltException_t222117296, ___startIndex_16)); }
	inline int32_t get_startIndex_16() const { return ___startIndex_16; }
	inline int32_t* get_address_of_startIndex_16() { return &___startIndex_16; }
	inline void set_startIndex_16(int32_t value)
	{
		___startIndex_16 = value;
	}

	inline static int32_t get_offset_of_deadEndConfigs_17() { return static_cast<int32_t>(offsetof(LexerNoViableAltException_t222117296, ___deadEndConfigs_17)); }
	inline ATNConfigSet_t638728265 * get_deadEndConfigs_17() const { return ___deadEndConfigs_17; }
	inline ATNConfigSet_t638728265 ** get_address_of_deadEndConfigs_17() { return &___deadEndConfigs_17; }
	inline void set_deadEndConfigs_17(ATNConfigSet_t638728265 * value)
	{
		___deadEndConfigs_17 = value;
		Il2CppCodeGenWriteBarrier((&___deadEndConfigs_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEXERNOVIABLEALTEXCEPTION_T222117296_H
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
#ifndef NOVIABLEALTEXCEPTION_T2985419920_H
#define NOVIABLEALTEXCEPTION_T2985419920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.NoViableAltException
struct  NoViableAltException_t2985419920  : public RecognitionException_t4252147236
{
public:
	// Antlr4.Runtime.Atn.ATNConfigSet Antlr4.Runtime.NoViableAltException::deadEndConfigs
	ATNConfigSet_t638728265 * ___deadEndConfigs_16;
	// Antlr4.Runtime.IToken Antlr4.Runtime.NoViableAltException::startToken
	RuntimeObject* ___startToken_17;

public:
	inline static int32_t get_offset_of_deadEndConfigs_16() { return static_cast<int32_t>(offsetof(NoViableAltException_t2985419920, ___deadEndConfigs_16)); }
	inline ATNConfigSet_t638728265 * get_deadEndConfigs_16() const { return ___deadEndConfigs_16; }
	inline ATNConfigSet_t638728265 ** get_address_of_deadEndConfigs_16() { return &___deadEndConfigs_16; }
	inline void set_deadEndConfigs_16(ATNConfigSet_t638728265 * value)
	{
		___deadEndConfigs_16 = value;
		Il2CppCodeGenWriteBarrier((&___deadEndConfigs_16), value);
	}

	inline static int32_t get_offset_of_startToken_17() { return static_cast<int32_t>(offsetof(NoViableAltException_t2985419920, ___startToken_17)); }
	inline RuntimeObject* get_startToken_17() const { return ___startToken_17; }
	inline RuntimeObject** get_address_of_startToken_17() { return &___startToken_17; }
	inline void set_startToken_17(RuntimeObject* value)
	{
		___startToken_17 = value;
		Il2CppCodeGenWriteBarrier((&___startToken_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOVIABLEALTEXCEPTION_T2985419920_H
#ifndef INPUTMISMATCHEXCEPTION_T2387790745_H
#define INPUTMISMATCHEXCEPTION_T2387790745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.InputMismatchException
struct  InputMismatchException_t2387790745  : public RecognitionException_t4252147236
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTMISMATCHEXCEPTION_T2387790745_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-F07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8
	U24ArrayTypeU3D256_t1875414782  ___U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-8B016044F505C49F2DECCC1549FE1ABCFAB096D4
	U24ArrayTypeU3D256_t1875414782  ___U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-FF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0
	U24ArrayTypeU3D256_t1875414782  ___U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2;

public:
	inline static int32_t get_offset_of_U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0)); }
	inline U24ArrayTypeU3D256_t1875414782  get_U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0() const { return ___U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0; }
	inline U24ArrayTypeU3D256_t1875414782 * get_address_of_U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0() { return &___U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0; }
	inline void set_U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0(U24ArrayTypeU3D256_t1875414782  value)
	{
		___U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1)); }
	inline U24ArrayTypeU3D256_t1875414782  get_U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1() const { return ___U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1; }
	inline U24ArrayTypeU3D256_t1875414782 * get_address_of_U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1() { return &___U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1; }
	inline void set_U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1(U24ArrayTypeU3D256_t1875414782  value)
	{
		___U24fieldU2D8B016044F505C49F2DECCC1549FE1ABCFAB096D4_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2)); }
	inline U24ArrayTypeU3D256_t1875414782  get_U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2() const { return ___U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2; }
	inline U24ArrayTypeU3D256_t1875414782 * get_address_of_U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2() { return &___U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2; }
	inline void set_U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2(U24ArrayTypeU3D256_t1875414782  value)
	{
		___U24fieldU2DFF94516FD1228DF2E0E7BEE22EF2D0D0F0BD37A0_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifndef PREDICATETRANSITION_T1493066449_H
#define PREDICATETRANSITION_T1493066449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.PredicateTransition
struct  PredicateTransition_t1493066449  : public AbstractPredicateTransition_t234975995
{
public:
	// System.Int32 Antlr4.Runtime.Atn.PredicateTransition::ruleIndex
	int32_t ___ruleIndex_2;
	// System.Int32 Antlr4.Runtime.Atn.PredicateTransition::predIndex
	int32_t ___predIndex_3;
	// System.Boolean Antlr4.Runtime.Atn.PredicateTransition::isCtxDependent
	bool ___isCtxDependent_4;

public:
	inline static int32_t get_offset_of_ruleIndex_2() { return static_cast<int32_t>(offsetof(PredicateTransition_t1493066449, ___ruleIndex_2)); }
	inline int32_t get_ruleIndex_2() const { return ___ruleIndex_2; }
	inline int32_t* get_address_of_ruleIndex_2() { return &___ruleIndex_2; }
	inline void set_ruleIndex_2(int32_t value)
	{
		___ruleIndex_2 = value;
	}

	inline static int32_t get_offset_of_predIndex_3() { return static_cast<int32_t>(offsetof(PredicateTransition_t1493066449, ___predIndex_3)); }
	inline int32_t get_predIndex_3() const { return ___predIndex_3; }
	inline int32_t* get_address_of_predIndex_3() { return &___predIndex_3; }
	inline void set_predIndex_3(int32_t value)
	{
		___predIndex_3 = value;
	}

	inline static int32_t get_offset_of_isCtxDependent_4() { return static_cast<int32_t>(offsetof(PredicateTransition_t1493066449, ___isCtxDependent_4)); }
	inline bool get_isCtxDependent_4() const { return ___isCtxDependent_4; }
	inline bool* get_address_of_isCtxDependent_4() { return &___isCtxDependent_4; }
	inline void set_isCtxDependent_4(bool value)
	{
		___isCtxDependent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATETRANSITION_T1493066449_H
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
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef ATN_T715137711_H
#define ATN_T715137711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Antlr4.Runtime.Atn.ATN
struct  ATN_t715137711  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.ATNState> Antlr4.Runtime.Atn.ATN::states
	RuntimeObject* ___states_0;
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.DecisionState> Antlr4.Runtime.Atn.ATN::decisionToState
	RuntimeObject* ___decisionToState_1;
	// Antlr4.Runtime.Atn.RuleStartState[] Antlr4.Runtime.Atn.ATN::ruleToStartState
	RuleStartStateU5BU5D_t4074657009* ___ruleToStartState_2;
	// Antlr4.Runtime.Atn.RuleStopState[] Antlr4.Runtime.Atn.ATN::ruleToStopState
	RuleStopStateU5BU5D_t4055926814* ___ruleToStopState_3;
	// System.Collections.Generic.IDictionary`2<System.String,Antlr4.Runtime.Atn.TokensStartState> Antlr4.Runtime.Atn.ATN::modeNameToStartState
	RuntimeObject* ___modeNameToStartState_4;
	// Antlr4.Runtime.Atn.ATNType Antlr4.Runtime.Atn.ATN::grammarType
	int32_t ___grammarType_5;
	// System.Int32 Antlr4.Runtime.Atn.ATN::maxTokenType
	int32_t ___maxTokenType_6;
	// System.Int32[] Antlr4.Runtime.Atn.ATN::ruleToTokenType
	Int32U5BU5D_t385246372* ___ruleToTokenType_7;
	// Antlr4.Runtime.Atn.ILexerAction[] Antlr4.Runtime.Atn.ATN::lexerActions
	ILexerActionU5BU5D_t173737658* ___lexerActions_8;
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.TokensStartState> Antlr4.Runtime.Atn.ATN::modeToStartState
	RuntimeObject* ___modeToStartState_9;
	// Antlr4.Runtime.Atn.PredictionContextCache Antlr4.Runtime.Atn.ATN::contextCache
	PredictionContextCache_t36128749 * ___contextCache_10;
	// Antlr4.Runtime.Dfa.DFA[] Antlr4.Runtime.Atn.ATN::decisionToDFA
	DFAU5BU5D_t873243220* ___decisionToDFA_11;
	// Antlr4.Runtime.Dfa.DFA[] Antlr4.Runtime.Atn.ATN::modeToDFA
	DFAU5BU5D_t873243220* ___modeToDFA_12;
	// Antlr4.Runtime.Sharpen.ConcurrentDictionary`2<System.Int32,System.Int32> Antlr4.Runtime.Atn.ATN::LL1Table
	ConcurrentDictionary_2_t149580939 * ___LL1Table_13;

public:
	inline static int32_t get_offset_of_states_0() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___states_0)); }
	inline RuntimeObject* get_states_0() const { return ___states_0; }
	inline RuntimeObject** get_address_of_states_0() { return &___states_0; }
	inline void set_states_0(RuntimeObject* value)
	{
		___states_0 = value;
		Il2CppCodeGenWriteBarrier((&___states_0), value);
	}

	inline static int32_t get_offset_of_decisionToState_1() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___decisionToState_1)); }
	inline RuntimeObject* get_decisionToState_1() const { return ___decisionToState_1; }
	inline RuntimeObject** get_address_of_decisionToState_1() { return &___decisionToState_1; }
	inline void set_decisionToState_1(RuntimeObject* value)
	{
		___decisionToState_1 = value;
		Il2CppCodeGenWriteBarrier((&___decisionToState_1), value);
	}

	inline static int32_t get_offset_of_ruleToStartState_2() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___ruleToStartState_2)); }
	inline RuleStartStateU5BU5D_t4074657009* get_ruleToStartState_2() const { return ___ruleToStartState_2; }
	inline RuleStartStateU5BU5D_t4074657009** get_address_of_ruleToStartState_2() { return &___ruleToStartState_2; }
	inline void set_ruleToStartState_2(RuleStartStateU5BU5D_t4074657009* value)
	{
		___ruleToStartState_2 = value;
		Il2CppCodeGenWriteBarrier((&___ruleToStartState_2), value);
	}

	inline static int32_t get_offset_of_ruleToStopState_3() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___ruleToStopState_3)); }
	inline RuleStopStateU5BU5D_t4055926814* get_ruleToStopState_3() const { return ___ruleToStopState_3; }
	inline RuleStopStateU5BU5D_t4055926814** get_address_of_ruleToStopState_3() { return &___ruleToStopState_3; }
	inline void set_ruleToStopState_3(RuleStopStateU5BU5D_t4055926814* value)
	{
		___ruleToStopState_3 = value;
		Il2CppCodeGenWriteBarrier((&___ruleToStopState_3), value);
	}

	inline static int32_t get_offset_of_modeNameToStartState_4() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___modeNameToStartState_4)); }
	inline RuntimeObject* get_modeNameToStartState_4() const { return ___modeNameToStartState_4; }
	inline RuntimeObject** get_address_of_modeNameToStartState_4() { return &___modeNameToStartState_4; }
	inline void set_modeNameToStartState_4(RuntimeObject* value)
	{
		___modeNameToStartState_4 = value;
		Il2CppCodeGenWriteBarrier((&___modeNameToStartState_4), value);
	}

	inline static int32_t get_offset_of_grammarType_5() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___grammarType_5)); }
	inline int32_t get_grammarType_5() const { return ___grammarType_5; }
	inline int32_t* get_address_of_grammarType_5() { return &___grammarType_5; }
	inline void set_grammarType_5(int32_t value)
	{
		___grammarType_5 = value;
	}

	inline static int32_t get_offset_of_maxTokenType_6() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___maxTokenType_6)); }
	inline int32_t get_maxTokenType_6() const { return ___maxTokenType_6; }
	inline int32_t* get_address_of_maxTokenType_6() { return &___maxTokenType_6; }
	inline void set_maxTokenType_6(int32_t value)
	{
		___maxTokenType_6 = value;
	}

	inline static int32_t get_offset_of_ruleToTokenType_7() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___ruleToTokenType_7)); }
	inline Int32U5BU5D_t385246372* get_ruleToTokenType_7() const { return ___ruleToTokenType_7; }
	inline Int32U5BU5D_t385246372** get_address_of_ruleToTokenType_7() { return &___ruleToTokenType_7; }
	inline void set_ruleToTokenType_7(Int32U5BU5D_t385246372* value)
	{
		___ruleToTokenType_7 = value;
		Il2CppCodeGenWriteBarrier((&___ruleToTokenType_7), value);
	}

	inline static int32_t get_offset_of_lexerActions_8() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___lexerActions_8)); }
	inline ILexerActionU5BU5D_t173737658* get_lexerActions_8() const { return ___lexerActions_8; }
	inline ILexerActionU5BU5D_t173737658** get_address_of_lexerActions_8() { return &___lexerActions_8; }
	inline void set_lexerActions_8(ILexerActionU5BU5D_t173737658* value)
	{
		___lexerActions_8 = value;
		Il2CppCodeGenWriteBarrier((&___lexerActions_8), value);
	}

	inline static int32_t get_offset_of_modeToStartState_9() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___modeToStartState_9)); }
	inline RuntimeObject* get_modeToStartState_9() const { return ___modeToStartState_9; }
	inline RuntimeObject** get_address_of_modeToStartState_9() { return &___modeToStartState_9; }
	inline void set_modeToStartState_9(RuntimeObject* value)
	{
		___modeToStartState_9 = value;
		Il2CppCodeGenWriteBarrier((&___modeToStartState_9), value);
	}

	inline static int32_t get_offset_of_contextCache_10() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___contextCache_10)); }
	inline PredictionContextCache_t36128749 * get_contextCache_10() const { return ___contextCache_10; }
	inline PredictionContextCache_t36128749 ** get_address_of_contextCache_10() { return &___contextCache_10; }
	inline void set_contextCache_10(PredictionContextCache_t36128749 * value)
	{
		___contextCache_10 = value;
		Il2CppCodeGenWriteBarrier((&___contextCache_10), value);
	}

	inline static int32_t get_offset_of_decisionToDFA_11() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___decisionToDFA_11)); }
	inline DFAU5BU5D_t873243220* get_decisionToDFA_11() const { return ___decisionToDFA_11; }
	inline DFAU5BU5D_t873243220** get_address_of_decisionToDFA_11() { return &___decisionToDFA_11; }
	inline void set_decisionToDFA_11(DFAU5BU5D_t873243220* value)
	{
		___decisionToDFA_11 = value;
		Il2CppCodeGenWriteBarrier((&___decisionToDFA_11), value);
	}

	inline static int32_t get_offset_of_modeToDFA_12() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___modeToDFA_12)); }
	inline DFAU5BU5D_t873243220* get_modeToDFA_12() const { return ___modeToDFA_12; }
	inline DFAU5BU5D_t873243220** get_address_of_modeToDFA_12() { return &___modeToDFA_12; }
	inline void set_modeToDFA_12(DFAU5BU5D_t873243220* value)
	{
		___modeToDFA_12 = value;
		Il2CppCodeGenWriteBarrier((&___modeToDFA_12), value);
	}

	inline static int32_t get_offset_of_LL1Table_13() { return static_cast<int32_t>(offsetof(ATN_t715137711, ___LL1Table_13)); }
	inline ConcurrentDictionary_2_t149580939 * get_LL1Table_13() const { return ___LL1Table_13; }
	inline ConcurrentDictionary_2_t149580939 ** get_address_of_LL1Table_13() { return &___LL1Table_13; }
	inline void set_LL1Table_13(ConcurrentDictionary_2_t149580939 * value)
	{
		___LL1Table_13 = value;
		Il2CppCodeGenWriteBarrier((&___LL1Table_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATN_T715137711_H
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
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
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
#ifndef COMPARISON_1_T3562731817_H
#define COMPARISON_1_T3562731817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Comparison`1<Antlr4.Runtime.Dfa.DFAState>
struct  Comparison_1_t3562731817  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARISON_1_T3562731817_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
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
// Antlr4.Runtime.Dfa.DFAState[]
struct DFAStateU5BU5D_t2062627083  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DFAState_t3787800638 * m_Items[1];

public:
	inline DFAState_t3787800638 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DFAState_t3787800638 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DFAState_t3787800638 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DFAState_t3787800638 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DFAState_t3787800638 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DFAState_t3787800638 * value)
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
// Antlr4.Runtime.Dfa.PredPrediction[]
struct PredPredictionU5BU5D_t4019755882  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PredPrediction_t1259836427 * m_Items[1];

public:
	inline PredPrediction_t1259836427 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PredPrediction_t1259836427 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PredPrediction_t1259836427 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PredPrediction_t1259836427 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PredPrediction_t1259836427 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PredPrediction_t1259836427 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
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
// Antlr4.Runtime.Tree.IParseTreeListener[]
struct IParseTreeListenerU5BU5D_t672341357  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t1659327989  : public RuntimeArray
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


// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t1848589470 * Dictionary_2_get_Values_m2492087945_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m793514796_gshared (Comparison_1_t2855037343 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<!0>)
extern "C"  void List_1_Sort_m2076177611_gshared (List_1_t257213610 * __this, Comparison_1_t2855037343 * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.String Antlr4.Runtime.Sharpen.Arrays::ToString<System.Object>(T[])
extern "C"  String_t* Arrays_ToString_TisRuntimeObject_m698387067_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, const RuntimeMethod* method);
// System.Int32 Antlr4.Runtime.Recognizer`2<System.Object,System.Object>::get_State()
extern "C"  int32_t Recognizer_2_get_State_m594546730_gshared (Recognizer_2_t2972795787 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C"  void Stack_1__ctor_m3613734199_gshared (Stack_1_t3794335208 * __this, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Recognizer`2<System.Int32,System.Object>::.ctor()
extern "C"  void Recognizer_2__ctor_m4293242236_gshared (Recognizer_2_t514102834 * __this, const RuntimeMethod* method);
// Antlr4.Runtime.Sharpen.Tuple`2<T1,T2> Antlr4.Runtime.Sharpen.Tuple::Create<System.Object,System.Object>(T1,T2)
extern "C"  Tuple_2_t4246953639 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_m3968616828_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
extern "C"  void Stack_1_Push_m3986308287_gshared (Stack_1_t3794335208 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
extern "C"  int32_t Stack_1_get_Count_m1510087691_gshared (Stack_1_t3794335208 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C"  int32_t Stack_1_Pop_m2227085066_gshared (Stack_1_t3794335208 * __this, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Misc.ArrayList`1<Antlr4.Runtime.Misc.Interval>::.ctor(System.Int32)
extern "C"  void ArrayList_1__ctor_m1933890287_gshared (ArrayList_1_t2215970062 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<Antlr4.Runtime.Misc.Interval>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m2751154530_gshared (Nullable_1_t2483844694 * __this, Interval_t761282612  p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Antlr4.Runtime.Misc.Interval>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m1984449514_gshared (Nullable_1_t2483844694 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<Antlr4.Runtime.Misc.Interval>::get_Value()
extern "C"  Interval_t761282612  Nullable_1_get_Value_m3463444746_gshared (Nullable_1_t2483844694 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<Antlr4.Runtime.Misc.Interval>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  bool Enumerable_SequenceEqual_TisInterval_t761282612_m2164039892_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Misc.ArrayList`1<System.Int32>::.ctor()
extern "C"  void ArrayList_1__ctor_m3193375987_gshared (ArrayList_1_t110665907 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Recognizer`2<System.Object,System.Object>::.ctor()
extern "C"  void Recognizer_2__ctor_m470339484_gshared (Recognizer_2_t2972795787 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C"  void List_1_Clear_m807762771_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// T[] Antlr4.Runtime.Sharpen.Collections::EmptyList<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Collections_EmptyList_TisRuntimeObject_m1078777302_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Recognizer`2<System.Object,System.Object>::set_State(System.Int32)
extern "C"  void Recognizer_2_set_State_m199394592_gshared (Recognizer_2_t2972795787 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C"  int32_t List_1_get_Count_m639705184_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C"  int32_t List_1_get_Item_m3082246979_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m3700982366_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.ProxyErrorListener`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Symbol>>)
extern "C"  void ProxyErrorListener_1__ctor_m3941126776_gshared (ProxyErrorListener_1_t4096882367 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<T> Antlr4.Runtime.Sharpen.Arrays::AsList<System.Object>(T[])
extern "C"  RuntimeObject* Arrays_AsList_TisRuntimeObject_m141333641_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.UInt64>(!!0[]&,System.Int32)
extern "C"  void Array_Resize_TisUInt64_t4134040092_m3488754369_gshared (RuntimeObject * __this /* static, unused */, UInt64U5BU5D_t1659327989** p0, int32_t p1, const RuntimeMethod* method);

// System.Void Antlr4.Runtime.Dfa.DFASerializer::.ctor(Antlr4.Runtime.Dfa.DFA,Antlr4.Runtime.IVocabulary,System.String[],Antlr4.Runtime.Atn.ATN)
extern "C"  void DFASerializer__ctor_m159487309 (DFASerializer_t2623600291 * __this, DFA_t3195866089 * ___dfa0, RuntimeObject* ___vocabulary1, StringU5BU5D_t1281789340* ___ruleNames2, ATN_t715137711 * ___atn3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState>::get_Values()
#define Dictionary_2_get_Values_m2348716605(__this, method) ((  ValueCollection_t1774971702 * (*) (Dictionary_2_t58927384 *, const RuntimeMethod*))Dictionary_2_get_Values_m2492087945_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Antlr4.Runtime.Dfa.DFAState>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m407624247(__this, p0, method) ((  void (*) (List_1_t964908084 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Comparison`1<Antlr4.Runtime.Dfa.DFAState>::.ctor(System.Object,System.IntPtr)
#define Comparison_1__ctor_m106488015(__this, p0, p1, method) ((  void (*) (Comparison_1_t3562731817 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m793514796_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<Antlr4.Runtime.Dfa.DFAState>::Sort(System.Comparison`1<!0>)
#define List_1_Sort_m354603923(__this, p0, method) ((  void (*) (List_1_t964908084 *, Comparison_1_t3562731817 *, const RuntimeMethod*))List_1_Sort_m2076177611_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Antlr4.Runtime.Dfa.DFAState>::GetEnumerator()
#define List_1_GetEnumerator_m758939624(__this, method) ((  Enumerator_t2854151961  (*) (List_1_t964908084 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Antlr4.Runtime.Dfa.DFAState>::get_Current()
#define Enumerator_get_Current_m2174578786(__this, method) ((  DFAState_t3787800638 * (*) (Enumerator_t2854151961 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Antlr4.Runtime.Dfa.DFAState>::MoveNext()
#define Enumerator_MoveNext_m4132774324(__this, method) ((  bool (*) (Enumerator_t2854151961 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Antlr4.Runtime.Dfa.DFAState>::Dispose()
#define Enumerator_Dispose_m191394364(__this, method) ((  void (*) (Enumerator_t2854151961 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Antlr4.Runtime.Sharpen.Arrays::ToString<Antlr4.Runtime.Dfa.PredPrediction>(T[])
#define Arrays_ToString_TisPredPrediction_t1259836427_m2787947823(__this /* static, unused */, ___array0, method) ((  String_t* (*) (RuntimeObject * /* static, unused */, PredPredictionU5BU5D_t4019755882*, const RuntimeMethod*))Arrays_ToString_TisRuntimeObject_m698387067_gshared)(__this /* static, unused */, ___array0, method)
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Atn.ATNConfigSet::.ctor()
extern "C"  void ATNConfigSet__ctor_m2861178548 (ATNConfigSet_t638728265 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Initialize(System.Int32)
extern "C"  int32_t MurmurHash_Initialize_m4147079067 (RuntimeObject * __this /* static, unused */, int32_t ___seed0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Update(System.Int32,System.Int32)
extern "C"  int32_t MurmurHash_Update_m4269430083 (RuntimeObject * __this /* static, unused */, int32_t ___hash0, int32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Finish(System.Int32,System.Int32)
extern "C"  int32_t MurmurHash_Finish_m3445488384 (RuntimeObject * __this /* static, unused */, int32_t ___hash0, int32_t ___numberOfWords1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C"  StringBuilder_t * StringBuilder_Append_m890240332 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.FailedPredicateException::.ctor(Antlr4.Runtime.Parser,System.String,System.String)
extern "C"  void FailedPredicateException__ctor_m1379558220 (FailedPredicateException_t1308833165 * __this, Parser_t1471951952 * ___recognizer0, String_t* ___predicate1, String_t* ___message2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Antlr4.Runtime.FailedPredicateException::FormatMessage(System.String,System.String)
extern "C"  String_t* FailedPredicateException_FormatMessage_m1073146532 (RuntimeObject * __this /* static, unused */, String_t* ___predicate0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.RecognitionException::.ctor(System.String,Antlr4.Runtime.IRecognizer,Antlr4.Runtime.IIntStream,Antlr4.Runtime.ParserRuleContext)
extern "C"  void RecognitionException__ctor_m2949007240 (RecognitionException_t4252147236 * __this, String_t* ___message0, RuntimeObject* ___recognizer1, RuntimeObject* ___input2, ParserRuleContext_t3215563317 * ___ctx3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_State()
#define Recognizer_2_get_State_m3060556933(__this, method) ((  int32_t (*) (Recognizer_2_t1400415252 *, const RuntimeMethod*))Recognizer_2_get_State_m594546730_gshared)(__this, method)
// System.Void Antlr4.Runtime.RecognitionException::set_OffendingToken(Antlr4.Runtime.IToken)
extern "C"  void RecognitionException_set_OffendingToken_m4276417833 (RecognitionException_t4252147236 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_CurrentCulture_m1632690660 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.RecognitionException::.ctor(Antlr4.Runtime.IRecognizer,Antlr4.Runtime.IIntStream,Antlr4.Runtime.ParserRuleContext)
extern "C"  void RecognitionException__ctor_m1770152451 (RecognitionException_t4252147236 * __this, RuntimeObject* ___recognizer0, RuntimeObject* ___input1, ParserRuleContext_t3215563317 * ___ctx2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
#define Stack_1__ctor_m3613734199(__this, method) ((  void (*) (Stack_1_t3794335208 *, const RuntimeMethod*))Stack_1__ctor_m3613734199_gshared)(__this, method)
// System.Void Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::.ctor()
#define Recognizer_2__ctor_m58259054(__this, method) ((  void (*) (Recognizer_2_t1541209307 *, const RuntimeMethod*))Recognizer_2__ctor_m4293242236_gshared)(__this, method)
// Antlr4.Runtime.Sharpen.Tuple`2<T1,T2> Antlr4.Runtime.Sharpen.Tuple::Create<Antlr4.Runtime.ITokenSource,Antlr4.Runtime.ICharStream>(T1,T2)
#define Tuple_Create_TisITokenSource_t1820030580_TisICharStream_t1006341033_m2763071979(__this /* static, unused */, ___item10, ___item21, method) ((  Tuple_2_t601941212 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Tuple_Create_TisRuntimeObject_TisRuntimeObject_m3968616828_gshared)(__this /* static, unused */, ___item10, ___item21, method)
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::get_Column()
extern "C"  int32_t LexerATNSimulator_get_Column_m4048832684 (LexerATNSimulator_t4107212637 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::get_Line()
extern "C"  int32_t LexerATNSimulator_get_Line_m764240434 (LexerATNSimulator_t4107212637 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::Match(Antlr4.Runtime.ICharStream,System.Int32)
extern "C"  int32_t LexerATNSimulator_Match_m56808091 (LexerATNSimulator_t4107212637 * __this, RuntimeObject* ___input0, int32_t ___mode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
#define Stack_1_Push_m3986308287(__this, p0, method) ((  void (*) (Stack_1_t3794335208 *, int32_t, const RuntimeMethod*))Stack_1_Push_m3986308287_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
#define Stack_1_get_Count_m1510087691(__this, method) ((  int32_t (*) (Stack_1_t3794335208 *, const RuntimeMethod*))Stack_1_get_Count_m1510087691_gshared)(__this, method)
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
#define Stack_1_Pop_m2227085066(__this, method) ((  int32_t (*) (Stack_1_t3794335208 *, const RuntimeMethod*))Stack_1_Pop_m2227085066_gshared)(__this, method)
// System.Void Antlr4.Runtime.Atn.LexerATNSimulator::Consume(Antlr4.Runtime.ICharStream)
extern "C"  void LexerATNSimulator_Consume_m2849890643 (LexerATNSimulator_t4107212637 * __this, RuntimeObject* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Antlr4.Runtime.Misc.Interval Antlr4.Runtime.Misc.Interval::Of(System.Int32,System.Int32)
extern "C"  Interval_t761282612  Interval_Of_m4735343 (RuntimeObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::ConvertToUtf32(System.String,System.Int32)
extern "C"  int32_t Char_ConvertToUtf32_m2897437866 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ConvertFromUtf32(System.Int32)
extern "C"  String_t* Char_ConvertFromUtf32_m2726544766 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.RecognitionException::.ctor(Antlr4.Runtime.Lexer,Antlr4.Runtime.ICharStream)
extern "C"  void RecognitionException__ctor_m3776713516 (RecognitionException_t4252147236 * __this, Lexer_t1430611871 * ___lexer0, RuntimeObject* ___input1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Antlr4.Runtime.IIntStream Antlr4.Runtime.RecognitionException::get_InputStream()
extern "C"  RuntimeObject* RecognitionException_get_InputStream_m1843421705 (RecognitionException_t4252147236 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Antlr4.Runtime.Misc.Utils::EscapeWhitespace(System.String,System.Boolean)
extern "C"  String_t* Utils_EscapeWhitespace_m2832940154 (RuntimeObject * __this /* static, unused */, String_t* ___s0, bool ___escapeSpaces1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Misc.Interval::.ctor(System.Int32,System.Int32)
extern "C"  void Interval__ctor_m284295304 (Interval_t761282612 * __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Misc.Interval::get_Length()
extern "C"  int32_t Interval_get_Length_m4262951233 (Interval_t761282612 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Antlr4.Runtime.Misc.Interval::Equals(System.Object)
extern "C"  bool Interval_Equals_m1476015520 (Interval_t761282612 * __this, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Misc.Interval::GetHashCode()
extern "C"  int32_t Interval_GetHashCode_m253489057 (Interval_t761282612 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Antlr4.Runtime.Misc.Interval::StartsBeforeDisjoint(Antlr4.Runtime.Misc.Interval)
extern "C"  bool Interval_StartsBeforeDisjoint_m1443678442 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Antlr4.Runtime.Misc.Interval::StartsAfterDisjoint(Antlr4.Runtime.Misc.Interval)
extern "C"  bool Interval_StartsAfterDisjoint_m1128885028 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Antlr4.Runtime.Misc.Interval::Disjoint(Antlr4.Runtime.Misc.Interval)
extern "C"  bool Interval_Disjoint_m506696120 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Antlr4.Runtime.Misc.Interval::Adjacent(Antlr4.Runtime.Misc.Interval)
extern "C"  bool Interval_Adjacent_m1709587345 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C"  int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C"  int32_t Math_Max_m1873195862 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Antlr4.Runtime.Misc.Interval Antlr4.Runtime.Misc.Interval::Union(Antlr4.Runtime.Misc.Interval)
extern "C"  Interval_t761282612  Interval_Union_m2041984833 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Antlr4.Runtime.Misc.Interval::ToString()
extern "C"  String_t* Interval_ToString_m2124177410 (Interval_t761282612 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Of(System.Int32,System.Int32)
extern "C"  IntervalSet_t1736846379 * IntervalSet_Of_m3534000560 (RuntimeObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Misc.IntervalSet::.ctor(System.Int32[])
extern "C"  void IntervalSet__ctor_m587104109 (IntervalSet_t1736846379 * __this, Int32U5BU5D_t385246372* ___els0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Misc.ArrayList`1<Antlr4.Runtime.Misc.Interval>::.ctor(System.Int32)
#define ArrayList_1__ctor_m1933890287(__this, p0, method) ((  void (*) (ArrayList_1_t2215970062 *, int32_t, const RuntimeMethod*))ArrayList_1__ctor_m1933890287_gshared)(__this, p0, method)
// System.Void Antlr4.Runtime.Misc.IntervalSet::.ctor(Antlr4.Runtime.Misc.IntervalSet)
extern "C"  void IntervalSet__ctor_m3832018402 (IntervalSet_t1736846379 * __this, IntervalSet_t1736846379 * ___set0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Subtract(Antlr4.Runtime.Misc.IntervalSet,Antlr4.Runtime.Misc.IntervalSet)
extern "C"  IntervalSet_t1736846379 * IntervalSet_Subtract_m735012243 (RuntimeObject * __this /* static, unused */, IntervalSet_t1736846379 * ___left0, IntervalSet_t1736846379 * ___right1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<Antlr4.Runtime.Misc.Interval>::.ctor(!0)
#define Nullable_1__ctor_m2751154530(__this, p0, method) ((  void (*) (Nullable_1_t2483844694 *, Interval_t761282612 , const RuntimeMethod*))Nullable_1__ctor_m2751154530_gshared)(__this, p0, method)
// System.Boolean System.Nullable`1<Antlr4.Runtime.Misc.Interval>::get_HasValue()
#define Nullable_1_get_HasValue_m1984449514(__this, method) ((  bool (*) (Nullable_1_t2483844694 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1984449514_gshared)(__this, method)
// !0 System.Nullable`1<Antlr4.Runtime.Misc.Interval>::get_Value()
#define Nullable_1_get_Value_m3463444746(__this, method) ((  Interval_t761282612  (*) (Nullable_1_t2483844694 *, const RuntimeMethod*))Nullable_1_get_Value_m3463444746_gshared)(__this, method)
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Initialize()
extern "C"  int32_t MurmurHash_Initialize_m2619640990 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Enumerable::SequenceEqual<Antlr4.Runtime.Misc.Interval>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_SequenceEqual_TisInterval_t761282612_m2164039892(__this /* static, unused */, p0, p1, method) ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisInterval_t761282612_m2164039892_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void Antlr4.Runtime.Misc.ArrayList`1<System.Int32>::.ctor()
#define ArrayList_1__ctor_m3193375987(__this, method) ((  void (*) (ArrayList_1_t110665907 *, const RuntimeMethod*))ArrayList_1__ctor_m3193375987_gshared)(__this, method)
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.NoViableAltException::.ctor(Antlr4.Runtime.IRecognizer,Antlr4.Runtime.ITokenStream,Antlr4.Runtime.IToken,Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ATNConfigSet,Antlr4.Runtime.ParserRuleContext)
extern "C"  void NoViableAltException__ctor_m2680972170 (NoViableAltException_t2985419920 * __this, RuntimeObject* ___recognizer0, RuntimeObject* ___input1, RuntimeObject* ___startToken2, RuntimeObject* ___offendingToken3, ATNConfigSet_t638728265 * ___deadEndConfigs4, ParserRuleContext_t3215563317 * ___ctx5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.DefaultErrorStrategy::.ctor()
extern "C"  void DefaultErrorStrategy__ctor_m491871528 (DefaultErrorStrategy_t4185793398 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Void Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::.ctor()
#define Recognizer_2__ctor_m3024942240(__this, method) ((  void (*) (Recognizer_2_t1400415252 *, const RuntimeMethod*))Recognizer_2__ctor_m470339484_gshared)(__this, method)
// System.Void Antlr4.Runtime.Parser::set_TokenStream(Antlr4.Runtime.ITokenStream)
extern "C"  void Parser_set_TokenStream_m1866788125 (Parser_t1471951952 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
#define List_1_Clear_m807762771(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_Clear_m807762771_gshared)(__this, method)
// T[] Antlr4.Runtime.Sharpen.Collections::EmptyList<Antlr4.Runtime.Tree.IParseTreeListener>()
#define Collections_EmptyList_TisIParseTreeListener_t2202621444_m1710973521(__this /* static, unused */, method) ((  IParseTreeListenerU5BU5D_t672341357* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Collections_EmptyList_TisRuntimeObject_m1078777302_gshared)(__this /* static, unused */, method)
// System.Void System.Collections.Generic.List`1<Antlr4.Runtime.Tree.IParseTreeListener>::.ctor()
#define List_1__ctor_m2675073037(__this, method) ((  void (*) (List_1_t3674696186 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// Antlr4.Runtime.IParserErrorListener Antlr4.Runtime.Parser::get_ErrorListenerDispatch()
extern "C"  RuntimeObject* Parser_get_ErrorListenerDispatch_m3809067462 (Parser_t1471951952 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::set_State(System.Int32)
#define Recognizer_2_set_State_m3977995112(__this, p0, method) ((  void (*) (Recognizer_2_t1400415252 *, int32_t, const RuntimeMethod*))Recognizer_2_set_State_m199394592_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
#define List_1_get_Count_m639705184(__this, method) ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m639705184_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
#define List_1_get_Item_m3082246979(__this, p0, method) ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3082246979_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m3700982366(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3700982366_gshared)(__this, p0, method)
// System.Void Antlr4.Runtime.ProxyParserErrorListener::.ctor(System.Collections.Generic.ICollection`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>)
extern "C"  void ProxyParserErrorListener__ctor_m650388731 (ProxyParserErrorListener_t2678295775 * __this, RuntimeObject* ___delegates0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void Antlr4.Runtime.Parser/TraceListener::.ctor(Antlr4.Runtime.Parser)
extern "C"  void TraceListener__ctor_m1636313176 (TraceListener_t761327790 * __this, Parser_t1471951952 * ____enclosing0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Antlr4.Runtime.Atn.ATN>::.ctor()
#define Dictionary_2__ctor_m459584435(__this, method) ((  void (*) (Dictionary_2_t500394010 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.RuleContext::.ctor()
extern "C"  void RuleContext__ctor_m3287477817 (RuleContext_t846066196 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.RuleContext::.ctor(Antlr4.Runtime.RuleContext,System.Int32)
extern "C"  void RuleContext__ctor_m1560101012 (RuleContext_t846066196 * __this, RuleContext_t846066196 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Antlr4.Runtime.Tree.IParseTree>::.ctor()
#define List_1__ctor_m489926614(__this, method) ((  void (*) (List_1_t759730133 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void Antlr4.Runtime.Tree.TerminalNodeImpl::.ctor(Antlr4.Runtime.IToken)
extern "C"  void TerminalNodeImpl__ctor_m2394827149 (TerminalNodeImpl_t19686673 * __this, RuntimeObject* ___symbol0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Tree.ErrorNodeImpl::.ctor(Antlr4.Runtime.IToken)
extern "C"  void ErrorNodeImpl__ctor_m4186736754 (ErrorNodeImpl_t236481808 * __this, RuntimeObject* ___token0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.ParserRuleContext::.ctor()
extern "C"  void ParserRuleContext__ctor_m1984361021 (ParserRuleContext_t3215563317 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.ProxyErrorListener`1<Antlr4.Runtime.IToken>::.ctor(System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Symbol>>)
#define ProxyErrorListener_1__ctor_m3183614789(__this, p0, method) ((  void (*) (ProxyErrorListener_1_t1696335262 *, RuntimeObject*, const RuntimeMethod*))ProxyErrorListener_1__ctor_m3941126776_gshared)(__this, p0, method)
// System.Void System.Exception::.ctor()
extern "C"  void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.ParserRuleContext::get_EmptyContext()
extern "C"  ParserRuleContext_t3215563317 * ParserRuleContext_get_EmptyContext_m4054856611 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<T> Antlr4.Runtime.Sharpen.Arrays::AsList<System.String>(T[])
#define Arrays_AsList_TisString_t_m1958667525(__this /* static, unused */, ___array0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, StringU5BU5D_t1281789340*, const RuntimeMethod*))Arrays_AsList_TisRuntimeObject_m141333641_gshared)(__this /* static, unused */, ___array0, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Antlr4.Runtime.Sharpen.BitSet::Get(System.Int32)
extern "C"  bool BitSet_Get_m3703781334 (BitSet_t2017162039 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Sharpen.BitSet::Set(System.Int32)
extern "C"  void BitSet_Set_m625453983 (BitSet_t2017162039 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Resize<System.UInt64>(!!0[]&,System.Int32)
#define Array_Resize_TisUInt64_t4134040092_m3488754369(__this /* static, unused */, p0, p1, method) ((  void (*) (RuntimeObject * /* static, unused */, UInt64U5BU5D_t1659327989**, int32_t, const RuntimeMethod*))Array_Resize_TisUInt64_t4134040092_m3488754369_gshared)(__this /* static, unused */, p0, p1, method)
// System.Int32 Antlr4.Runtime.Sharpen.BitSet::GetBitCount(System.UInt64[])
extern "C"  int32_t BitSet_GetBitCount_m2661981328 (RuntimeObject * __this /* static, unused */, UInt64U5BU5D_t1659327989* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Antlr4.Runtime.Sharpen.BitSet::IsEmpty()
extern "C"  bool BitSet_IsEmpty_m3957180803 (BitSet_t2017162039 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Sharpen.BitSet::BitScanForward(System.UInt64)
extern "C"  int32_t BitSet_BitScanForward_m3438412263 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::GetHashCode()
extern "C"  int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Antlr4.Runtime.Sharpen.BitSet::NextSetBit(System.Int32)
extern "C"  int32_t BitSet_NextSetBit_m81789356 (BitSet_t2017162039 * __this, int32_t ___fromIndex0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C"  void ManualResetEvent__ctor_m4010886457 (ManualResetEvent_t451242010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Sharpen.SpinWait::SpinOnce()
extern "C"  void SpinWait_SpinOnce_m2959215841 (SpinWait_t3580045567 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_ProcessorCount()
extern "C"  int32_t Environment_get_ProcessorCount_m3616251798 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Tree.ParseTreeWalker::.ctor()
extern "C"  void ParseTreeWalker__ctor_m223722929 (ParseTreeWalker_t2338734297 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.Vocabulary::.ctor(System.String[],System.String[],System.String[])
extern "C"  void Vocabulary__ctor_m2407199093 (Vocabulary_t3272722500 * __this, StringU5BU5D_t1281789340* ___literalNames0, StringU5BU5D_t1281789340* ___symbolicNames1, StringU5BU5D_t1281789340* ___displayNames2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Antlr4.Runtime.Dfa.DFASerializer::.ctor(Antlr4.Runtime.Dfa.DFA,Antlr4.Runtime.IVocabulary)
extern "C"  void DFASerializer__ctor_m1926653668 (DFASerializer_t2623600291 * __this, DFA_t3195866089 * ___dfa0, RuntimeObject* ___vocabulary1, const RuntimeMethod* method)
{
	{
		DFA_t3195866089 * L_0 = ___dfa0;
		RuntimeObject* L_1 = ___vocabulary1;
		DFASerializer__ctor_m159487309(__this, L_0, L_1, (StringU5BU5D_t1281789340*)(StringU5BU5D_t1281789340*)NULL, (ATN_t715137711 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.Dfa.DFASerializer::.ctor(Antlr4.Runtime.Dfa.DFA,Antlr4.Runtime.IVocabulary,System.String[],Antlr4.Runtime.Atn.ATN)
extern "C"  void DFASerializer__ctor_m159487309 (DFASerializer_t2623600291 * __this, DFA_t3195866089 * ___dfa0, RuntimeObject* ___vocabulary1, StringU5BU5D_t1281789340* ___ruleNames2, ATN_t715137711 * ___atn3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		DFA_t3195866089 * L_0 = ___dfa0;
		__this->set_dfa_0(L_0);
		RuntimeObject* L_1 = ___vocabulary1;
		__this->set_vocabulary_1(L_1);
		StringU5BU5D_t1281789340* L_2 = ___ruleNames2;
		__this->set_ruleNames_2(L_2);
		ATN_t715137711 * L_3 = ___atn3;
		__this->set_atn_3(L_3);
		return;
	}
}
// System.String Antlr4.Runtime.Dfa.DFASerializer::ToString()
extern "C"  String_t* DFASerializer_ToString_m147001774 (DFASerializer_t2623600291 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DFASerializer_ToString_m147001774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	List_1_t964908084 * V_1 = NULL;
	DFAState_t3787800638 * V_2 = NULL;
	Enumerator_t2854151961  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	DFAState_t3787800638 * V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	List_1_t964908084 * G_B5_0 = NULL;
	List_1_t964908084 * G_B4_0 = NULL;
	int32_t G_B10_0 = 0;
	{
		DFA_t3195866089 * L_0 = __this->get_dfa_0();
		DFAState_t3787800638 * L_1 = L_0->get_s0_1();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0012:
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		DFA_t3195866089 * L_3 = __this->get_dfa_0();
		Dictionary_2_t58927384 * L_4 = L_3->get_states_0();
		if (!L_4)
		{
			goto IL_013a;
		}
	}
	{
		DFA_t3195866089 * L_5 = __this->get_dfa_0();
		Dictionary_2_t58927384 * L_6 = L_5->get_states_0();
		ValueCollection_t1774971702 * L_7 = Dictionary_2_get_Values_m2348716605(L_6, /*hidden argument*/Dictionary_2_get_Values_m2348716605_RuntimeMethod_var);
		List_1_t964908084 * L_8 = (List_1_t964908084 *)il2cpp_codegen_object_new(List_1_t964908084_il2cpp_TypeInfo_var);
		List_1__ctor_m407624247(L_8, L_7, /*hidden argument*/List_1__ctor_m407624247_RuntimeMethod_var);
		V_1 = L_8;
		List_1_t964908084 * L_9 = V_1;
		Comparison_1_t3562731817 * L_10 = ((DFASerializer_t2623600291_StaticFields*)il2cpp_codegen_static_fields_for(DFASerializer_t2623600291_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		G_B4_0 = L_9;
		if (L_10)
		{
			G_B5_0 = L_9;
			goto IL_0057;
		}
	}
	{
		intptr_t L_11 = (intptr_t)DFASerializer_U3CToStringU3Em__0_m1248961292_RuntimeMethod_var;
		Comparison_1_t3562731817 * L_12 = (Comparison_1_t3562731817 *)il2cpp_codegen_object_new(Comparison_1_t3562731817_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m106488015(L_12, NULL, L_11, /*hidden argument*/Comparison_1__ctor_m106488015_RuntimeMethod_var);
		((DFASerializer_t2623600291_StaticFields*)il2cpp_codegen_static_fields_for(DFASerializer_t2623600291_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_4(L_12);
		G_B5_0 = G_B4_0;
	}

IL_0057:
	{
		Comparison_1_t3562731817 * L_13 = ((DFASerializer_t2623600291_StaticFields*)il2cpp_codegen_static_fields_for(DFASerializer_t2623600291_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_4();
		List_1_Sort_m354603923(G_B5_0, L_13, /*hidden argument*/List_1_Sort_m354603923_RuntimeMethod_var);
		List_1_t964908084 * L_14 = V_1;
		Enumerator_t2854151961  L_15 = List_1_GetEnumerator_m758939624(L_14, /*hidden argument*/List_1_GetEnumerator_m758939624_RuntimeMethod_var);
		V_3 = L_15;
	}

IL_0068:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011b;
		}

IL_006d:
		{
			DFAState_t3787800638 * L_16 = Enumerator_get_Current_m2174578786((&V_3), /*hidden argument*/Enumerator_get_Current_m2174578786_RuntimeMethod_var);
			V_2 = L_16;
			DFAState_t3787800638 * L_17 = V_2;
			DFAStateU5BU5D_t2062627083* L_18 = L_17->get_edges_2();
			if (!L_18)
			{
				goto IL_008d;
			}
		}

IL_0080:
		{
			DFAState_t3787800638 * L_19 = V_2;
			DFAStateU5BU5D_t2062627083* L_20 = L_19->get_edges_2();
			G_B10_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length))));
			goto IL_008e;
		}

IL_008d:
		{
			G_B10_0 = 0;
		}

IL_008e:
		{
			V_4 = G_B10_0;
			V_5 = 0;
			goto IL_0112;
		}

IL_0098:
		{
			DFAState_t3787800638 * L_21 = V_2;
			DFAStateU5BU5D_t2062627083* L_22 = L_21->get_edges_2();
			int32_t L_23 = V_5;
			int32_t L_24 = L_23;
			DFAState_t3787800638 * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
			V_6 = L_25;
			DFAState_t3787800638 * L_26 = V_6;
			if (!L_26)
			{
				goto IL_010c;
			}
		}

IL_00aa:
		{
			DFAState_t3787800638 * L_27 = V_6;
			int32_t L_28 = L_27->get_stateNumber_0();
			if ((((int32_t)L_28) == ((int32_t)((int32_t)2147483647LL))))
			{
				goto IL_010c;
			}
		}

IL_00bb:
		{
			StringBuilder_t * L_29 = V_0;
			DFAState_t3787800638 * L_30 = V_2;
			String_t* L_31 = VirtFuncInvoker1< String_t*, DFAState_t3787800638 * >::Invoke(5 /* System.String Antlr4.Runtime.Dfa.DFASerializer::GetStateString(Antlr4.Runtime.Dfa.DFAState) */, __this, L_30);
			StringBuilder_Append_m1965104174(L_29, L_31, /*hidden argument*/NULL);
			int32_t L_32 = V_5;
			String_t* L_33 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(4 /* System.String Antlr4.Runtime.Dfa.DFASerializer::GetEdgeLabel(System.Int32) */, __this, L_32);
			V_7 = L_33;
			StringBuilder_t * L_34 = V_0;
			StringBuilder_Append_m1965104174(L_34, _stringLiteral3452614531, /*hidden argument*/NULL);
			StringBuilder_t * L_35 = V_0;
			String_t* L_36 = V_7;
			StringBuilder_Append_m1965104174(L_35, L_36, /*hidden argument*/NULL);
			StringBuilder_t * L_37 = V_0;
			StringBuilder_Append_m1965104174(L_37, _stringLiteral3451697027, /*hidden argument*/NULL);
			StringBuilder_t * L_38 = V_0;
			DFAState_t3787800638 * L_39 = V_6;
			String_t* L_40 = VirtFuncInvoker1< String_t*, DFAState_t3787800638 * >::Invoke(5 /* System.String Antlr4.Runtime.Dfa.DFASerializer::GetStateString(Antlr4.Runtime.Dfa.DFAState) */, __this, L_39);
			StringBuilder_Append_m1965104174(L_38, L_40, /*hidden argument*/NULL);
			StringBuilder_t * L_41 = V_0;
			StringBuilder_Append_m2383614642(L_41, ((int32_t)10), /*hidden argument*/NULL);
		}

IL_010c:
		{
			int32_t L_42 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_0112:
		{
			int32_t L_43 = V_5;
			int32_t L_44 = V_4;
			if ((((int32_t)L_43) < ((int32_t)L_44)))
			{
				goto IL_0098;
			}
		}

IL_011b:
		{
			bool L_45 = Enumerator_MoveNext_m4132774324((&V_3), /*hidden argument*/Enumerator_MoveNext_m4132774324_RuntimeMethod_var);
			if (L_45)
			{
				goto IL_006d;
			}
		}

IL_0127:
		{
			IL2CPP_LEAVE(0x13A, FINALLY_012c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012c;
	}

FINALLY_012c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m191394364((&V_3), /*hidden argument*/Enumerator_Dispose_m191394364_RuntimeMethod_var);
		IL2CPP_END_FINALLY(300)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(300)
	{
		IL2CPP_JUMP_TBL(0x13A, IL_013a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013a:
	{
		StringBuilder_t * L_46 = V_0;
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
		V_8 = L_47;
		String_t* L_48 = V_8;
		int32_t L_49 = String_get_Length_m3847582255(L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_0150;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0150:
	{
		String_t* L_50 = V_8;
		return L_50;
	}
}
// System.String Antlr4.Runtime.Dfa.DFASerializer::GetEdgeLabel(System.Int32)
extern "C"  String_t* DFASerializer_GetEdgeLabel_m9082919 (DFASerializer_t2623600291 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DFASerializer_GetEdgeLabel_m9082919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_vocabulary_1();
		int32_t L_1 = ___i0;
		String_t* L_2 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* System.String Antlr4.Runtime.IVocabulary::GetDisplayName(System.Int32) */, IVocabulary_t4253336316_il2cpp_TypeInfo_var, L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		return L_2;
	}
}
// System.String Antlr4.Runtime.Dfa.DFASerializer::GetStateString(Antlr4.Runtime.Dfa.DFAState)
extern "C"  String_t* DFASerializer_GetStateString_m2910401127 (DFASerializer_t2623600291 * __this, DFAState_t3787800638 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DFASerializer_GetStateString_m2910401127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t2843939325* G_B3_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_3 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t2843939325* G_B7_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B7_2 = NULL;
	int32_t G_B6_0 = 0;
	ObjectU5BU5D_t2843939325* G_B6_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	ObjectU5BU5D_t2843939325* G_B8_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B8_3 = NULL;
	{
		DFAState_t3787800638 * L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(ATNSimulator_t2448152846_il2cpp_TypeInfo_var);
		DFAState_t3787800638 * L_1 = ((ATNSimulator_t2448152846_StaticFields*)il2cpp_codegen_static_fields_for(ATNSimulator_t2448152846_il2cpp_TypeInfo_var))->get_ERROR_0();
		if ((!(((RuntimeObject*)(DFAState_t3787800638 *)L_0) == ((RuntimeObject*)(DFAState_t3787800638 *)L_1))))
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteral562053875;
	}

IL_0011:
	{
		DFAState_t3787800638 * L_2 = ___s0;
		int32_t L_3 = L_2->get_stateNumber_0();
		V_0 = L_3;
		ObjectU5BU5D_t2843939325* L_4 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		DFAState_t3787800638 * L_5 = ___s0;
		bool L_6 = L_5->get_isAcceptState_3();
		G_B3_0 = 0;
		G_B3_1 = L_4;
		G_B3_2 = L_4;
		if (!L_6)
		{
			G_B4_0 = 0;
			G_B4_1 = L_4;
			G_B4_2 = L_4;
			goto IL_0035;
		}
	}
	{
		G_B5_0 = _stringLiteral3452614550;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_003a;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_003a:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (RuntimeObject *)G_B5_0);
		ObjectU5BU5D_t2843939325* L_8 = G_B5_3;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614605);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614605);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		DFAState_t3787800638 * L_14 = ___s0;
		bool L_15 = L_14->get_requiresFullContext_6();
		G_B6_0 = 3;
		G_B6_1 = L_13;
		G_B6_2 = L_13;
		if (!L_15)
		{
			G_B7_0 = 3;
			G_B7_1 = L_13;
			G_B7_2 = L_13;
			goto IL_0063;
		}
	}
	{
		G_B8_0 = _stringLiteral3452614642;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_0068;
	}

IL_0063:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B8_0 = L_16;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_0068:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (RuntimeObject *)G_B8_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m2971454694(NULL /*static, unused*/, G_B8_3, /*hidden argument*/NULL);
		V_1 = L_17;
		DFAState_t3787800638 * L_18 = ___s0;
		bool L_19 = L_18->get_isAcceptState_3();
		if (!L_19)
		{
			goto IL_00b3;
		}
	}
	{
		DFAState_t3787800638 * L_20 = ___s0;
		PredPredictionU5BU5D_t4019755882* L_21 = L_20->get_predicates_7();
		if (!L_21)
		{
			goto IL_009c;
		}
	}
	{
		String_t* L_22 = V_1;
		DFAState_t3787800638 * L_23 = ___s0;
		PredPredictionU5BU5D_t4019755882* L_24 = L_23->get_predicates_7();
		String_t* L_25 = Arrays_ToString_TisPredPrediction_t1259836427_m2787947823(NULL /*static, unused*/, L_24, /*hidden argument*/Arrays_ToString_TisPredPrediction_t1259836427_m2787947823_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m3755062657(NULL /*static, unused*/, L_22, _stringLiteral3451697043, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_009c:
	{
		String_t* L_27 = V_1;
		DFAState_t3787800638 * L_28 = ___s0;
		int32_t L_29 = L_28->get_prediction_4();
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m1715369213(NULL /*static, unused*/, L_27, _stringLiteral3451697043, L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_00b3:
	{
		String_t* L_33 = V_1;
		return L_33;
	}
}
// System.Int32 Antlr4.Runtime.Dfa.DFASerializer::<ToString>m__0(Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState)
extern "C"  int32_t DFASerializer_U3CToStringU3Em__0_m1248961292 (RuntimeObject * __this /* static, unused */, DFAState_t3787800638 * ___x0, DFAState_t3787800638 * ___y1, const RuntimeMethod* method)
{
	{
		DFAState_t3787800638 * L_0 = ___x0;
		int32_t L_1 = L_0->get_stateNumber_0();
		DFAState_t3787800638 * L_2 = ___y1;
		int32_t L_3 = L_2->get_stateNumber_0();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3));
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
// System.Void Antlr4.Runtime.Dfa.DFAState::.ctor(Antlr4.Runtime.Atn.ATNConfigSet)
extern "C"  void DFAState__ctor_m3505122115 (DFAState_t3787800638 * __this, ATNConfigSet_t638728265 * ___configs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DFAState__ctor_m3505122115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_stateNumber_0((-1));
		ATNConfigSet_t638728265 * L_0 = (ATNConfigSet_t638728265 *)il2cpp_codegen_object_new(ATNConfigSet_t638728265_il2cpp_TypeInfo_var);
		ATNConfigSet__ctor_m2861178548(L_0, /*hidden argument*/NULL);
		__this->set_configSet_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ATNConfigSet_t638728265 * L_1 = ___configs0;
		__this->set_configSet_1(L_1);
		return;
	}
}
// System.Int32 Antlr4.Runtime.Dfa.DFAState::GetHashCode()
extern "C"  int32_t DFAState_GetHashCode_m1335015087 (DFAState_t3787800638 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = MurmurHash_Initialize_m4147079067(NULL /*static, unused*/, 7, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		ATNConfigSet_t638728265 * L_2 = __this->get_configSet_1();
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		int32_t L_4 = MurmurHash_Update_m4269430083(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = MurmurHash_Finish_m3445488384(NULL /*static, unused*/, L_5, 1, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Antlr4.Runtime.Dfa.DFAState::Equals(System.Object)
extern "C"  bool DFAState_Equals_m2714628367 (DFAState_t3787800638 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DFAState_Equals_m2714628367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DFAState_t3787800638 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___o0;
		if ((!(((RuntimeObject*)(DFAState_t3787800638 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}

IL_0009:
	{
		RuntimeObject * L_1 = ___o0;
		if (((DFAState_t3787800638 *)IsInstClass((RuntimeObject*)L_1, DFAState_t3787800638_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___o0;
		V_0 = ((DFAState_t3787800638 *)CastclassClass((RuntimeObject*)L_2, DFAState_t3787800638_il2cpp_TypeInfo_var));
		ATNConfigSet_t638728265 * L_3 = __this->get_configSet_1();
		DFAState_t3787800638 * L_4 = V_0;
		ATNConfigSet_t638728265 * L_5 = L_4->get_configSet_1();
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		return L_7;
	}
}
// System.String Antlr4.Runtime.Dfa.DFAState::ToString()
extern "C"  String_t* DFAState_ToString_m3749348288 (DFAState_t3787800638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DFAState_ToString_m3749348288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		int32_t L_2 = __this->get_stateNumber_0();
		StringBuilder_t * L_3 = StringBuilder_Append_m890240332(L_1, L_2, /*hidden argument*/NULL);
		StringBuilder_t * L_4 = StringBuilder_Append_m1965104174(L_3, _stringLiteral3452614550, /*hidden argument*/NULL);
		ATNConfigSet_t638728265 * L_5 = __this->get_configSet_1();
		StringBuilder_Append_m1640838743(L_4, L_5, /*hidden argument*/NULL);
		bool L_6 = __this->get_isAcceptState_3();
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		StringBuilder_t * L_7 = V_0;
		StringBuilder_Append_m1965104174(L_7, _stringLiteral3451697043, /*hidden argument*/NULL);
		PredPredictionU5BU5D_t4019755882* L_8 = __this->get_predicates_7();
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		StringBuilder_t * L_9 = V_0;
		PredPredictionU5BU5D_t4019755882* L_10 = __this->get_predicates_7();
		String_t* L_11 = Arrays_ToString_TisPredPrediction_t1259836427_m2787947823(NULL /*static, unused*/, L_10, /*hidden argument*/Arrays_ToString_TisPredPrediction_t1259836427_m2787947823_RuntimeMethod_var);
		StringBuilder_Append_m1965104174(L_9, L_11, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0061:
	{
		StringBuilder_t * L_12 = V_0;
		int32_t L_13 = __this->get_prediction_4();
		StringBuilder_Append_m890240332(L_12, L_13, /*hidden argument*/NULL);
	}

IL_006e:
	{
		StringBuilder_t * L_14 = V_0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
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
// System.Void Antlr4.Runtime.Dfa.PredPrediction::.ctor(Antlr4.Runtime.Atn.SemanticContext,System.Int32)
extern "C"  void PredPrediction__ctor_m1186906382 (PredPrediction_t1259836427 * __this, SemanticContext_t2197800441 * ___pred0, int32_t ___alt1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___alt1;
		__this->set_alt_1(L_0);
		SemanticContext_t2197800441 * L_1 = ___pred0;
		__this->set_pred_0(L_1);
		return;
	}
}
// System.String Antlr4.Runtime.Dfa.PredPrediction::ToString()
extern "C"  String_t* PredPrediction_ToString_m1883450749 (PredPrediction_t1259836427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PredPrediction_ToString_m1883450749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3452614536);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614536);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		SemanticContext_t2197800441 * L_2 = __this->get_pred_0();
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		ArrayElementTypeCheck (L_3, _stringLiteral3450517380);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3450517380);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		int32_t L_5 = __this->get_alt_1();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614535);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3452614535);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2971454694(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
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
// System.Void Antlr4.Runtime.FailedPredicateException::.ctor(Antlr4.Runtime.Parser,System.String)
extern "C"  void FailedPredicateException__ctor_m2595770569 (FailedPredicateException_t1308833165 * __this, Parser_t1471951952 * ___recognizer0, String_t* ___predicate1, const RuntimeMethod* method)
{
	{
		Parser_t1471951952 * L_0 = ___recognizer0;
		String_t* L_1 = ___predicate1;
		FailedPredicateException__ctor_m1379558220(__this, L_0, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.FailedPredicateException::.ctor(Antlr4.Runtime.Parser,System.String,System.String)
extern "C"  void FailedPredicateException__ctor_m1379558220 (FailedPredicateException_t1308833165 * __this, Parser_t1471951952 * ___recognizer0, String_t* ___predicate1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FailedPredicateException__ctor_m1379558220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ATNState_t3206414579 * V_0 = NULL;
	AbstractPredicateTransition_t234975995 * V_1 = NULL;
	{
		String_t* L_0 = ___predicate1;
		String_t* L_1 = ___message2;
		String_t* L_2 = FailedPredicateException_FormatMessage_m1073146532(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Parser_t1471951952 * L_3 = ___recognizer0;
		Parser_t1471951952 * L_4 = ___recognizer0;
		RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(19 /* Antlr4.Runtime.IIntStream Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_InputStream() */, L_4);
		Parser_t1471951952 * L_6 = ___recognizer0;
		ParserRuleContext_t3215563317 * L_7 = VirtFuncInvoker0< ParserRuleContext_t3215563317 * >::Invoke(41 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_RuleContext() */, L_6);
		RecognitionException__ctor_m2949007240(__this, L_2, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_5, ITokenStream_t1473438536_il2cpp_TypeInfo_var)), L_7, /*hidden argument*/NULL);
		Parser_t1471951952 * L_8 = ___recognizer0;
		ParserATNSimulator_t1762048632 * L_9 = VirtFuncInvoker0< ParserATNSimulator_t1762048632 * >::Invoke(10 /* ATNInterpreter Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_Interpreter() */, L_8);
		ATN_t715137711 * L_10 = ((ATNSimulator_t2448152846 *)L_9)->get_atn_1();
		RuntimeObject* L_11 = L_10->get_states_0();
		Parser_t1471951952 * L_12 = ___recognizer0;
		int32_t L_13 = Recognizer_2_get_State_m3060556933(L_12, /*hidden argument*/Recognizer_2_get_State_m3060556933_RuntimeMethod_var);
		ATNState_t3206414579 * L_14 = InterfaceFuncInvoker1< ATNState_t3206414579 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.ATNState>::get_Item(System.Int32) */, IList_1_t726767066_il2cpp_TypeInfo_var, L_11, L_13);
		V_0 = L_14;
		ATNState_t3206414579 * L_15 = V_0;
		Transition_t1070632176 * L_16 = VirtFuncInvoker1< Transition_t1070632176 *, int32_t >::Invoke(7 /* Antlr4.Runtime.Atn.Transition Antlr4.Runtime.Atn.ATNState::Transition(System.Int32) */, L_15, 0);
		V_1 = ((AbstractPredicateTransition_t234975995 *)CastclassClass((RuntimeObject*)L_16, AbstractPredicateTransition_t234975995_il2cpp_TypeInfo_var));
		AbstractPredicateTransition_t234975995 * L_17 = V_1;
		if (!((PredicateTransition_t1493066449 *)IsInstSealed((RuntimeObject*)L_17, PredicateTransition_t1493066449_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		AbstractPredicateTransition_t234975995 * L_18 = V_1;
		int32_t L_19 = ((PredicateTransition_t1493066449 *)CastclassSealed((RuntimeObject*)L_18, PredicateTransition_t1493066449_il2cpp_TypeInfo_var))->get_ruleIndex_2();
		__this->set_ruleIndex_16(L_19);
		AbstractPredicateTransition_t234975995 * L_20 = V_1;
		int32_t L_21 = ((PredicateTransition_t1493066449 *)CastclassSealed((RuntimeObject*)L_20, PredicateTransition_t1493066449_il2cpp_TypeInfo_var))->get_predIndex_3();
		__this->set_predicateIndex_17(L_21);
		goto IL_0088;
	}

IL_007a:
	{
		__this->set_ruleIndex_16(0);
		__this->set_predicateIndex_17(0);
	}

IL_0088:
	{
		String_t* L_22 = ___predicate1;
		__this->set_predicate_18(L_22);
		Parser_t1471951952 * L_23 = ___recognizer0;
		RuntimeObject* L_24 = VirtFuncInvoker0< RuntimeObject* >::Invoke(28 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::get_CurrentToken() */, L_23);
		RecognitionException_set_OffendingToken_m4276417833(__this, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.String Antlr4.Runtime.FailedPredicateException::FormatMessage(System.String,System.String)
extern "C"  String_t* FailedPredicateException_FormatMessage_m1073146532 (RuntimeObject * __this /* static, unused */, String_t* ___predicate0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FailedPredicateException_FormatMessage_m1073146532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_1 = ___message1;
		return L_1;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_2 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_3 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_4 = ___predicate0;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m1881875187(NULL /*static, unused*/, L_2, _stringLiteral4159354282, L_3, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Antlr4.Runtime.InputMismatchException::.ctor(Antlr4.Runtime.Parser)
extern "C"  void InputMismatchException__ctor_m981030686 (InputMismatchException_t2387790745 * __this, Parser_t1471951952 * ___recognizer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputMismatchException__ctor_m981030686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Parser_t1471951952 * L_0 = ___recognizer0;
		Parser_t1471951952 * L_1 = ___recognizer0;
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(19 /* Antlr4.Runtime.IIntStream Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_InputStream() */, L_1);
		Parser_t1471951952 * L_3 = ___recognizer0;
		ParserRuleContext_t3215563317 * L_4 = VirtFuncInvoker0< ParserRuleContext_t3215563317 * >::Invoke(41 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_RuleContext() */, L_3);
		RecognitionException__ctor_m1770152451(__this, L_0, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, ITokenStream_t1473438536_il2cpp_TypeInfo_var)), L_4, /*hidden argument*/NULL);
		Parser_t1471951952 * L_5 = ___recognizer0;
		RuntimeObject* L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(28 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::get_CurrentToken() */, L_5);
		RecognitionException_set_OffendingToken_m4276417833(__this, L_6, /*hidden argument*/NULL);
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
// System.Void Antlr4.Runtime.Lexer::.ctor(Antlr4.Runtime.ICharStream,System.IO.TextWriter,System.IO.TextWriter)
extern "C"  void Lexer__ctor_m2913819262 (Lexer_t1430611871 * __this, RuntimeObject* ___input0, TextWriter_t3478189236 * ___output1, TextWriter_t3478189236 * ___errorOutput2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer__ctor_m2913819262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CommonTokenFactory_t334140376_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CommonTokenFactory_t334140376_StaticFields*)il2cpp_codegen_static_fields_for(CommonTokenFactory_t334140376_il2cpp_TypeInfo_var))->get_Default_0();
		__this->set__factory_7(L_0);
		__this->set__tokenStartCharIndex_9((-1));
		Stack_1_t3794335208 * L_1 = (Stack_1_t3794335208 *)il2cpp_codegen_object_new(Stack_1_t3794335208_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3613734199(L_1, /*hidden argument*/Stack_1__ctor_m3613734199_RuntimeMethod_var);
		__this->set__modeStack_15(L_1);
		Recognizer_2__ctor_m58259054(__this, /*hidden argument*/Recognizer_2__ctor_m58259054_RuntimeMethod_var);
		RuntimeObject* L_2 = ___input0;
		__this->set__input_3(L_2);
		TextWriter_t3478189236 * L_3 = ___output1;
		__this->set_Output_4(L_3);
		TextWriter_t3478189236 * L_4 = ___errorOutput2;
		__this->set_ErrorOutput_5(L_4);
		RuntimeObject* L_5 = ___input0;
		Tuple_2_t601941212 * L_6 = Tuple_Create_TisITokenSource_t1820030580_TisICharStream_t1006341033_m2763071979(NULL /*static, unused*/, __this, L_5, /*hidden argument*/Tuple_Create_TisITokenSource_t1820030580_TisICharStream_t1006341033_m2763071979_RuntimeMethod_var);
		__this->set__tokenFactorySourcePair_6(L_6);
		return;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.Lexer::NextToken()
extern "C"  RuntimeObject* Lexer_NextToken_m2957990783 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_NextToken_m2957990783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	LexerNoViableAltException_t222117296 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = __this->get__input_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral3957560846, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		RuntimeObject* L_2 = __this->get__input_3();
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Antlr4.Runtime.IIntStream::Mark() */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			bool L_4 = __this->get__hitEOF_12();
			if (!L_4)
			{
				goto IL_0040;
			}
		}

IL_002d:
		{
			VirtFuncInvoker0< RuntimeObject* >::Invoke(34 /* Antlr4.Runtime.IToken Antlr4.Runtime.Lexer::EmitEOF() */, __this);
			RuntimeObject* L_5 = __this->get__token_8();
			V_1 = L_5;
			IL2CPP_LEAVE(0x13D, FINALLY_0130);
		}

IL_0040:
		{
			__this->set__token_8((RuntimeObject*)NULL);
			__this->set__channel_13(0);
			RuntimeObject* L_6 = __this->get__input_3();
			int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr4.Runtime.IIntStream::get_Index() */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_6);
			__this->set__tokenStartCharIndex_9(L_7);
			LexerATNSimulator_t4107212637 * L_8 = VirtFuncInvoker0< LexerATNSimulator_t4107212637 * >::Invoke(10 /* ATNInterpreter Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::get_Interpreter() */, __this);
			int32_t L_9 = LexerATNSimulator_get_Column_m4048832684(L_8, /*hidden argument*/NULL);
			__this->set__tokenStartColumn_11(L_9);
			LexerATNSimulator_t4107212637 * L_10 = VirtFuncInvoker0< LexerATNSimulator_t4107212637 * >::Invoke(10 /* ATNInterpreter Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::get_Interpreter() */, __this);
			int32_t L_11 = LexerATNSimulator_get_Line_m764240434(L_10, /*hidden argument*/NULL);
			__this->set__tokenStartLine_10(L_11);
			__this->set__text_17((String_t*)NULL);
		}

IL_0088:
		{
			__this->set__type_14(0);
		}

IL_008f:
		try
		{ // begin try (depth: 2)
			LexerATNSimulator_t4107212637 * L_12 = VirtFuncInvoker0< LexerATNSimulator_t4107212637 * >::Invoke(10 /* ATNInterpreter Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::get_Interpreter() */, __this);
			RuntimeObject* L_13 = __this->get__input_3();
			int32_t L_14 = __this->get__mode_16();
			int32_t L_15 = LexerATNSimulator_Match_m56808091(L_12, L_13, L_14, /*hidden argument*/NULL);
			V_2 = L_15;
			goto IL_00c3;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (LexerNoViableAltException_t222117296_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00ac;
			throw e;
		}

CATCH_00ac:
		{ // begin catch(Antlr4.Runtime.LexerNoViableAltException)
			V_3 = ((LexerNoViableAltException_t222117296 *)__exception_local);
			LexerNoViableAltException_t222117296 * L_16 = V_3;
			VirtActionInvoker1< LexerNoViableAltException_t222117296 * >::Invoke(41 /* System.Void Antlr4.Runtime.Lexer::NotifyListeners(Antlr4.Runtime.LexerNoViableAltException) */, __this, L_16);
			LexerNoViableAltException_t222117296 * L_17 = V_3;
			VirtActionInvoker1< LexerNoViableAltException_t222117296 * >::Invoke(40 /* System.Void Antlr4.Runtime.Lexer::Recover(Antlr4.Runtime.LexerNoViableAltException) */, __this, L_17);
			V_2 = ((int32_t)-3);
			goto IL_00c3;
		} // end catch (depth: 2)

IL_00c3:
		{
			RuntimeObject* L_18 = __this->get__input_3();
			int32_t L_19 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_18, 1);
			if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
			{
				goto IL_00dc;
			}
		}

IL_00d5:
		{
			__this->set__hitEOF_12((bool)1);
		}

IL_00dc:
		{
			int32_t L_20 = __this->get__type_14();
			if (L_20)
			{
				goto IL_00ee;
			}
		}

IL_00e7:
		{
			int32_t L_21 = V_2;
			__this->set__type_14(L_21);
		}

IL_00ee:
		{
			int32_t L_22 = __this->get__type_14();
			if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)-3)))))
			{
				goto IL_0100;
			}
		}

IL_00fb:
		{
			goto IL_012b;
		}

IL_0100:
		{
			int32_t L_23 = __this->get__type_14();
			if ((((int32_t)L_23) == ((int32_t)((int32_t)-2))))
			{
				goto IL_0088;
			}
		}

IL_010d:
		{
			RuntimeObject* L_24 = __this->get__token_8();
			if (L_24)
			{
				goto IL_011f;
			}
		}

IL_0118:
		{
			VirtFuncInvoker0< RuntimeObject* >::Invoke(33 /* Antlr4.Runtime.IToken Antlr4.Runtime.Lexer::Emit() */, __this);
		}

IL_011f:
		{
			RuntimeObject* L_25 = __this->get__token_8();
			V_1 = L_25;
			IL2CPP_LEAVE(0x13D, FINALLY_0130);
		}

IL_012b:
		{
			goto IL_0022;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0130;
	}

FINALLY_0130:
	{ // begin finally (depth: 1)
		RuntimeObject* L_26 = __this->get__input_3();
		int32_t L_27 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Antlr4.Runtime.IIntStream::Release(System.Int32) */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_26, L_27);
		IL2CPP_END_FINALLY(304)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(304)
	{
		IL2CPP_JUMP_TBL(0x13D, IL_013d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013d:
	{
		RuntimeObject* L_28 = V_1;
		return L_28;
	}
}
// System.Void Antlr4.Runtime.Lexer::Skip()
extern "C"  void Lexer_Skip_m4005119840 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	{
		__this->set__type_14(((int32_t)-3));
		return;
	}
}
// System.Void Antlr4.Runtime.Lexer::More()
extern "C"  void Lexer_More_m3193568721 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	{
		__this->set__type_14(((int32_t)-2));
		return;
	}
}
// System.Void Antlr4.Runtime.Lexer::Mode(System.Int32)
extern "C"  void Lexer_Mode_m1194067939 (Lexer_t1430611871 * __this, int32_t ___m0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___m0;
		__this->set__mode_16(L_0);
		return;
	}
}
// System.Void Antlr4.Runtime.Lexer::PushMode(System.Int32)
extern "C"  void Lexer_PushMode_m2768301315 (Lexer_t1430611871 * __this, int32_t ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_PushMode_m2768301315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3794335208 * L_0 = __this->get__modeStack_15();
		int32_t L_1 = __this->get__mode_16();
		Stack_1_Push_m3986308287(L_0, L_1, /*hidden argument*/Stack_1_Push_m3986308287_RuntimeMethod_var);
		int32_t L_2 = ___m0;
		VirtActionInvoker1< int32_t >::Invoke(28 /* System.Void Antlr4.Runtime.Lexer::Mode(System.Int32) */, __this, L_2);
		return;
	}
}
// System.Int32 Antlr4.Runtime.Lexer::PopMode()
extern "C"  int32_t Lexer_PopMode_m3808358206 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_PopMode_m3808358206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Stack_1_t3794335208 * L_0 = __this->get__modeStack_15();
		int32_t L_1 = Stack_1_get_Count_m1510087691(L_0, /*hidden argument*/Stack_1_get_Count_m1510087691_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0016:
	{
		Stack_1_t3794335208 * L_3 = __this->get__modeStack_15();
		int32_t L_4 = Stack_1_Pop_m2227085066(L_3, /*hidden argument*/Stack_1_Pop_m2227085066_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(28 /* System.Void Antlr4.Runtime.Lexer::Mode(System.Int32) */, __this, L_5);
		int32_t L_6 = __this->get__mode_16();
		return L_6;
	}
}
// Antlr4.Runtime.ITokenFactory Antlr4.Runtime.Lexer::get_TokenFactory()
extern "C"  RuntimeObject* Lexer_get_TokenFactory_m2307827503 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__factory_7();
		return L_0;
	}
}
// Antlr4.Runtime.IIntStream Antlr4.Runtime.Lexer::get_InputStream()
extern "C"  RuntimeObject* Lexer_get_InputStream_m1261713787 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__input_3();
		return L_0;
	}
}
// Antlr4.Runtime.ICharStream Antlr4.Runtime.Lexer::Antlr4.Runtime.ITokenSource.get_InputStream()
extern "C"  RuntimeObject* Lexer_Antlr4_Runtime_ITokenSource_get_InputStream_m771989694 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__input_3();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.Lexer::Emit(Antlr4.Runtime.IToken)
extern "C"  void Lexer_Emit_m4088156469 (Lexer_t1430611871 * __this, RuntimeObject* ___token0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___token0;
		__this->set__token_8(L_0);
		return;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.Lexer::Emit()
extern "C"  RuntimeObject* Lexer_Emit_m1744143047 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_Emit_m1744143047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get__factory_7();
		Tuple_2_t601941212 * L_1 = __this->get__tokenFactorySourcePair_6();
		int32_t L_2 = __this->get__type_14();
		String_t* L_3 = __this->get__text_17();
		int32_t L_4 = __this->get__channel_13();
		int32_t L_5 = __this->get__tokenStartCharIndex_9();
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(37 /* System.Int32 Antlr4.Runtime.Lexer::get_CharIndex() */, __this);
		int32_t L_7 = __this->get__tokenStartLine_10();
		int32_t L_8 = __this->get__tokenStartColumn_11();
		RuntimeObject* L_9 = InterfaceFuncInvoker8< RuntimeObject*, Tuple_2_t601941212 *, int32_t, String_t*, int32_t, int32_t, int32_t, int32_t, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenFactory::Create(Antlr4.Runtime.Sharpen.Tuple`2<Antlr4.Runtime.ITokenSource,Antlr4.Runtime.ICharStream>,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32) */, ITokenFactory_t3521433125_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), L_7, L_8);
		V_0 = L_9;
		RuntimeObject* L_10 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(32 /* System.Void Antlr4.Runtime.Lexer::Emit(Antlr4.Runtime.IToken) */, __this, L_10);
		RuntimeObject* L_11 = V_0;
		return L_11;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.Lexer::EmitEOF()
extern "C"  RuntimeObject* Lexer_EmitEOF_m313701054 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_EmitEOF_m313701054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 Antlr4.Runtime.Lexer::get_Column() */, __this);
		V_0 = L_0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Int32 Antlr4.Runtime.Lexer::get_Line() */, __this);
		V_1 = L_1;
		RuntimeObject* L_2 = __this->get__factory_7();
		Tuple_2_t601941212 * L_3 = __this->get__tokenFactorySourcePair_6();
		RuntimeObject* L_4 = __this->get__input_3();
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr4.Runtime.IIntStream::get_Index() */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = __this->get__input_3();
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr4.Runtime.IIntStream::get_Index() */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		RuntimeObject* L_10 = InterfaceFuncInvoker8< RuntimeObject*, Tuple_2_t601941212 *, int32_t, String_t*, int32_t, int32_t, int32_t, int32_t, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenFactory::Create(Antlr4.Runtime.Sharpen.Tuple`2<Antlr4.Runtime.ITokenSource,Antlr4.Runtime.ICharStream>,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32) */, ITokenFactory_t3521433125_il2cpp_TypeInfo_var, L_2, L_3, (-1), (String_t*)NULL, 0, L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), L_8, L_9);
		V_2 = L_10;
		RuntimeObject* L_11 = V_2;
		VirtActionInvoker1< RuntimeObject* >::Invoke(32 /* System.Void Antlr4.Runtime.Lexer::Emit(Antlr4.Runtime.IToken) */, __this, L_11);
		RuntimeObject* L_12 = V_2;
		return L_12;
	}
}
// System.Int32 Antlr4.Runtime.Lexer::get_Line()
extern "C"  int32_t Lexer_get_Line_m399753142 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	{
		LexerATNSimulator_t4107212637 * L_0 = VirtFuncInvoker0< LexerATNSimulator_t4107212637 * >::Invoke(10 /* ATNInterpreter Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::get_Interpreter() */, __this);
		int32_t L_1 = LexerATNSimulator_get_Line_m764240434(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Antlr4.Runtime.Lexer::get_Column()
extern "C"  int32_t Lexer_get_Column_m935173469 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	{
		LexerATNSimulator_t4107212637 * L_0 = VirtFuncInvoker0< LexerATNSimulator_t4107212637 * >::Invoke(10 /* ATNInterpreter Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::get_Interpreter() */, __this);
		int32_t L_1 = LexerATNSimulator_get_Column_m4048832684(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Antlr4.Runtime.Lexer::get_CharIndex()
extern "C"  int32_t Lexer_get_CharIndex_m1152376311 (Lexer_t1430611871 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_get_CharIndex_m1152376311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__input_3();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr4.Runtime.IIntStream::get_Index() */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Antlr4.Runtime.Lexer::set_Type(System.Int32)
extern "C"  void Lexer_set_Type_m2804283688 (Lexer_t1430611871 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set__type_14(L_1);
		return;
	}
}
// System.Void Antlr4.Runtime.Lexer::set_Channel(System.Int32)
extern "C"  void Lexer_set_Channel_m1165361051 (Lexer_t1430611871 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set__channel_13(L_1);
		return;
	}
}
// System.Void Antlr4.Runtime.Lexer::Recover(Antlr4.Runtime.LexerNoViableAltException)
extern "C"  void Lexer_Recover_m3810936439 (Lexer_t1430611871 * __this, LexerNoViableAltException_t222117296 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_Recover_m3810936439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__input_3();
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_0, 1);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0023;
		}
	}
	{
		LexerATNSimulator_t4107212637 * L_2 = VirtFuncInvoker0< LexerATNSimulator_t4107212637 * >::Invoke(10 /* ATNInterpreter Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::get_Interpreter() */, __this);
		RuntimeObject* L_3 = __this->get__input_3();
		LexerATNSimulator_Consume_m2849890643(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Lexer::NotifyListeners(Antlr4.Runtime.LexerNoViableAltException)
extern "C"  void Lexer_NotifyListeners_m2965061625 (Lexer_t1430611871 * __this, LexerNoViableAltException_t222117296 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_NotifyListeners_m2965061625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->get__input_3();
		int32_t L_1 = __this->get__tokenStartCharIndex_9();
		RuntimeObject* L_2 = __this->get__input_3();
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Antlr4.Runtime.IIntStream::get_Index() */, IIntStream_t2059504296_il2cpp_TypeInfo_var, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Interval_t761282612_il2cpp_TypeInfo_var);
		Interval_t761282612  L_4 = Interval_Of_m4735343(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		String_t* L_5 = InterfaceFuncInvoker1< String_t*, Interval_t761282612  >::Invoke(0 /* System.String Antlr4.Runtime.ICharStream::GetText(Antlr4.Runtime.Misc.Interval) */, ICharStream_t1006341033_il2cpp_TypeInfo_var, L_0, L_4);
		V_0 = L_5;
		String_t* L_6 = V_0;
		String_t* L_7 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(42 /* System.String Antlr4.Runtime.Lexer::GetErrorDisplay(System.String) */, __this, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral816236271, L_7, _stringLiteral3452614521, /*hidden argument*/NULL);
		V_1 = L_8;
		RuntimeObject* L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(15 /* Antlr4.Runtime.IAntlrErrorListener`1<Symbol> Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::get_ErrorListenerDispatch() */, __this);
		V_2 = L_9;
		RuntimeObject* L_10 = V_2;
		TextWriter_t3478189236 * L_11 = __this->get_ErrorOutput_5();
		int32_t L_12 = __this->get__tokenStartLine_10();
		int32_t L_13 = __this->get__tokenStartColumn_11();
		String_t* L_14 = V_1;
		LexerNoViableAltException_t222117296 * L_15 = ___e0;
		InterfaceActionInvoker7< TextWriter_t3478189236 *, RuntimeObject*, int32_t, int32_t, int32_t, String_t*, RecognitionException_t4252147236 * >::Invoke(0 /* System.Void Antlr4.Runtime.IAntlrErrorListener`1<System.Int32>::SyntaxError(System.IO.TextWriter,Antlr4.Runtime.IRecognizer,TSymbol,System.Int32,System.Int32,System.String,Antlr4.Runtime.RecognitionException) */, IAntlrErrorListener_1_t1802947167_il2cpp_TypeInfo_var, L_10, L_11, __this, 0, L_12, L_13, L_14, L_15);
		return;
	}
}
// System.String Antlr4.Runtime.Lexer::GetErrorDisplay(System.String)
extern "C"  String_t* Lexer_GetErrorDisplay_m2840672910 (Lexer_t1430611871 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_GetErrorDisplay_m2840672910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0038;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		int32_t L_3 = Char_ConvertToUtf32_m2897437866(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		StringBuilder_t * L_4 = V_0;
		int32_t L_5 = V_2;
		String_t* L_6 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(43 /* System.String Antlr4.Runtime.Lexer::GetErrorDisplay(System.Int32) */, __this, L_5);
		StringBuilder_Append_m1965104174(L_4, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		G_B2_0 = L_7;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)65535))))
		{
			G_B3_0 = L_7;
			goto IL_0035;
		}
	}
	{
		G_B4_0 = 2;
		G_B4_1 = G_B2_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0036:
	{
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)G_B4_1, (int32_t)G_B4_0));
	}

IL_0038:
	{
		int32_t L_9 = V_1;
		String_t* L_10 = ___s0;
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000d;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
	}
}
// System.String Antlr4.Runtime.Lexer::GetErrorDisplay(System.Int32)
extern "C"  String_t* Lexer_GetErrorDisplay_m1943936160 (Lexer_t1430611871 * __this, int32_t ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_GetErrorDisplay_m1943936160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___c0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_001d;
			}
			case 3:
			{
				goto IL_001d;
			}
			case 4:
			{
				goto IL_004a;
			}
		}
	}

IL_001d:
	{
		int32_t L_1 = ___c0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_0055;
	}

IL_0029:
	{
		V_0 = _stringLiteral2446009687;
		goto IL_0061;
	}

IL_0034:
	{
		V_0 = _stringLiteral3454842868;
		goto IL_0061;
	}

IL_003f:
	{
		V_0 = _stringLiteral3455498228;
		goto IL_0061;
	}

IL_004a:
	{
		V_0 = _stringLiteral3455629300;
		goto IL_0061;
	}

IL_0055:
	{
		int32_t L_2 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		String_t* L_3 = Char_ConvertFromUtf32_m2726544766(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0061;
	}

IL_0061:
	{
		String_t* L_4 = V_0;
		return L_4;
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
// System.Void Antlr4.Runtime.LexerNoViableAltException::.ctor(Antlr4.Runtime.Lexer,Antlr4.Runtime.ICharStream,System.Int32,Antlr4.Runtime.Atn.ATNConfigSet)
extern "C"  void LexerNoViableAltException__ctor_m3108734252 (LexerNoViableAltException_t222117296 * __this, Lexer_t1430611871 * ___lexer0, RuntimeObject* ___input1, int32_t ___startIndex2, ATNConfigSet_t638728265 * ___deadEndConfigs3, const RuntimeMethod* method)
{
	{
		Lexer_t1430611871 * L_0 = ___lexer0;
		RuntimeObject* L_1 = ___input1;
		RecognitionException__ctor_m3776713516(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___startIndex2;
		__this->set_startIndex_16(L_2);
		ATNConfigSet_t638728265 * L_3 = ___deadEndConfigs3;
		__this->set_deadEndConfigs_17(L_3);
		return;
	}
}
// Antlr4.Runtime.IIntStream Antlr4.Runtime.LexerNoViableAltException::get_InputStream()
extern "C"  RuntimeObject* LexerNoViableAltException_get_InputStream_m2565965180 (LexerNoViableAltException_t222117296 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LexerNoViableAltException_get_InputStream_m2565965180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = RecognitionException_get_InputStream_m1843421705(__this, /*hidden argument*/NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ICharStream_t1006341033_il2cpp_TypeInfo_var));
	}
}
// System.String Antlr4.Runtime.LexerNoViableAltException::ToString()
extern "C"  String_t* LexerNoViableAltException_ToString_m3326489891 (LexerNoViableAltException_t222117296 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LexerNoViableAltException_ToString_m3326489891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		int32_t L_1 = __this->get_startIndex_16();
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_2 = __this->get_startIndex_16();
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(13 /* Antlr4.Runtime.IIntStream Antlr4.Runtime.RecognitionException::get_InputStream() */, __this);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Antlr4.Runtime.IIntStream::get_Size() */, IIntStream_t2059504296_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ICharStream_t1006341033_il2cpp_TypeInfo_var)));
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(13 /* Antlr4.Runtime.IIntStream Antlr4.Runtime.RecognitionException::get_InputStream() */, __this);
		int32_t L_6 = __this->get_startIndex_16();
		int32_t L_7 = __this->get_startIndex_16();
		IL2CPP_RUNTIME_CLASS_INIT(Interval_t761282612_il2cpp_TypeInfo_var);
		Interval_t761282612  L_8 = Interval_Of_m4735343(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = InterfaceFuncInvoker1< String_t*, Interval_t761282612  >::Invoke(0 /* System.String Antlr4.Runtime.ICharStream::GetText(Antlr4.Runtime.Misc.Interval) */, ICharStream_t1006341033_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_5, ICharStream_t1006341033_il2cpp_TypeInfo_var)), L_8);
		V_0 = L_9;
		String_t* L_10 = V_0;
		String_t* L_11 = Utils_EscapeWhitespace_m2832940154(NULL /*static, unused*/, L_10, (bool)0, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0057:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_12 = CultureInfo_get_CurrentCulture_m1632690660(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_13 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (LexerNoViableAltException_t222117296_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_13;
		String_t* L_18 = V_0;
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m1881875187(NULL /*static, unused*/, L_12, _stringLiteral4102237450, L_17, /*hidden argument*/NULL);
		return L_19;
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
// System.Void Antlr4.Runtime.Misc.Args::NotNull(System.String,System.Object)
extern "C"  void Args_NotNull_m2033810888 (RuntimeObject * __this /* static, unused */, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Args_NotNull_m2033810888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___parameterName0;
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_000d:
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
// System.Void Antlr4.Runtime.Misc.Interval::.ctor(System.Int32,System.Int32)
extern "C"  void Interval__ctor_m284295304 (Interval_t761282612 * __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___a0;
		__this->set_a_1(L_0);
		int32_t L_1 = ___b1;
		__this->set_b_2(L_1);
		return;
	}
}
extern "C"  void Interval__ctor_m284295304_AdjustorThunk (RuntimeObject * __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	Interval__ctor_m284295304(_thisAdjusted, ___a0, ___b1, method);
}
// Antlr4.Runtime.Misc.Interval Antlr4.Runtime.Misc.Interval::Of(System.Int32,System.Int32)
extern "C"  Interval_t761282612  Interval_Of_m4735343 (RuntimeObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		Interval_t761282612  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Interval__ctor_m284295304((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Antlr4.Runtime.Misc.Interval::get_Length()
extern "C"  int32_t Interval_get_Length_m4262951233 (Interval_t761282612 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_b_2();
		int32_t L_1 = __this->get_a_1();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		int32_t L_2 = __this->get_b_2();
		int32_t L_3 = __this->get_a_1();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), (int32_t)1));
	}
}
extern "C"  int32_t Interval_get_Length_m4262951233_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_get_Length_m4262951233(_thisAdjusted, method);
}
// System.Boolean Antlr4.Runtime.Misc.Interval::Equals(System.Object)
extern "C"  bool Interval_Equals_m1476015520 (Interval_t761282612 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interval_Equals_m1476015520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Interval_t761282612  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___o0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Interval_t761282612_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___o0;
		V_0 = ((*(Interval_t761282612 *)((Interval_t761282612 *)UnBox(L_1, Interval_t761282612_il2cpp_TypeInfo_var))));
		int32_t L_2 = __this->get_a_1();
		int32_t L_3 = (&V_0)->get_a_1();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_4 = __this->get_b_2();
		int32_t L_5 = (&V_0)->get_b_2();
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 0;
	}

IL_0038:
	{
		return (bool)G_B5_0;
	}
}
extern "C"  bool Interval_Equals_m1476015520_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_Equals_m1476015520(_thisAdjusted, ___o0, method);
}
// System.Int32 Antlr4.Runtime.Misc.Interval::GetHashCode()
extern "C"  int32_t Interval_GetHashCode_m253489057 (Interval_t761282612 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)23);
		int32_t L_0 = V_0;
		int32_t L_1 = __this->get_a_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)31))), (int32_t)L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_b_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)31))), (int32_t)L_3));
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t Interval_GetHashCode_m253489057_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_GetHashCode_m253489057(_thisAdjusted, method);
}
// System.Boolean Antlr4.Runtime.Misc.Interval::StartsBeforeDisjoint(Antlr4.Runtime.Misc.Interval)
extern "C"  bool Interval_StartsBeforeDisjoint_m1443678442 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_a_1();
		int32_t L_1 = (&___other0)->get_a_1();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = __this->get_b_2();
		int32_t L_3 = (&___other0)->get_a_1();
		G_B3_0 = ((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		return (bool)G_B3_0;
	}
}
extern "C"  bool Interval_StartsBeforeDisjoint_m1443678442_AdjustorThunk (RuntimeObject * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_StartsBeforeDisjoint_m1443678442(_thisAdjusted, ___other0, method);
}
// System.Boolean Antlr4.Runtime.Misc.Interval::StartsAfterDisjoint(Antlr4.Runtime.Misc.Interval)
extern "C"  bool Interval_StartsAfterDisjoint_m1128885028 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_a_1();
		int32_t L_1 = (&___other0)->get_b_2();
		return (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
	}
}
extern "C"  bool Interval_StartsAfterDisjoint_m1128885028_AdjustorThunk (RuntimeObject * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_StartsAfterDisjoint_m1128885028(_thisAdjusted, ___other0, method);
}
// System.Boolean Antlr4.Runtime.Misc.Interval::Disjoint(Antlr4.Runtime.Misc.Interval)
extern "C"  bool Interval_Disjoint_m506696120 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Interval_t761282612  L_0 = ___other0;
		bool L_1 = Interval_StartsBeforeDisjoint_m1443678442(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Interval_t761282612  L_2 = ___other0;
		bool L_3 = Interval_StartsAfterDisjoint_m1128885028(__this, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
extern "C"  bool Interval_Disjoint_m506696120_AdjustorThunk (RuntimeObject * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_Disjoint_m506696120(_thisAdjusted, ___other0, method);
}
// System.Boolean Antlr4.Runtime.Misc.Interval::Adjacent(Antlr4.Runtime.Misc.Interval)
extern "C"  bool Interval_Adjacent_m1709587345 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_a_1();
		int32_t L_1 = (&___other0)->get_b_2();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = __this->get_b_2();
		int32_t L_3 = (&___other0)->get_a_1();
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1))))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 1;
	}

IL_0028:
	{
		return (bool)G_B3_0;
	}
}
extern "C"  bool Interval_Adjacent_m1709587345_AdjustorThunk (RuntimeObject * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_Adjacent_m1709587345(_thisAdjusted, ___other0, method);
}
// Antlr4.Runtime.Misc.Interval Antlr4.Runtime.Misc.Interval::Union(Antlr4.Runtime.Misc.Interval)
extern "C"  Interval_t761282612  Interval_Union_m2041984833 (Interval_t761282612 * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interval_Union_m2041984833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_a_1();
		int32_t L_1 = (&___other0)->get_a_1();
		int32_t L_2 = Math_Min_m3468062251(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_b_2();
		int32_t L_4 = (&___other0)->get_b_2();
		int32_t L_5 = Math_Max_m1873195862(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Interval_t761282612_il2cpp_TypeInfo_var);
		Interval_t761282612  L_6 = Interval_Of_m4735343(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
extern "C"  Interval_t761282612  Interval_Union_m2041984833_AdjustorThunk (RuntimeObject * __this, Interval_t761282612  ___other0, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_Union_m2041984833(_thisAdjusted, ___other0, method);
}
// System.String Antlr4.Runtime.Misc.Interval::ToString()
extern "C"  String_t* Interval_ToString_m2124177410 (Interval_t761282612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interval_ToString_m2124177410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_a_1();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->get_b_2();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m1715369213(NULL /*static, unused*/, L_2, _stringLiteral3450648450, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
extern "C"  String_t* Interval_ToString_m2124177410_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Interval_t761282612 * _thisAdjusted = reinterpret_cast<Interval_t761282612 *>(__this + 1);
	return Interval_ToString_m2124177410(_thisAdjusted, method);
}
// System.Void Antlr4.Runtime.Misc.Interval::.cctor()
extern "C"  void Interval__cctor_m2640414395 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Interval__cctor_m2640414395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Interval_t761282612  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Interval__ctor_m284295304((&L_0), (-1), ((int32_t)-2), /*hidden argument*/NULL);
		((Interval_t761282612_StaticFields*)il2cpp_codegen_static_fields_for(Interval_t761282612_il2cpp_TypeInfo_var))->set_Invalid_0(L_0);
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
// System.Void Antlr4.Runtime.Misc.IntervalSet::.cctor()
extern "C"  void IntervalSet__cctor_m218751962 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet__cctor_m218751962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntervalSet_t1736846379 * L_0 = IntervalSet_Of_m3534000560(NULL /*static, unused*/, 0, ((int32_t)1114111), /*hidden argument*/NULL);
		((IntervalSet_t1736846379_StaticFields*)il2cpp_codegen_static_fields_for(IntervalSet_t1736846379_il2cpp_TypeInfo_var))->set_CompleteCharSet_0(L_0);
		IntervalSet_t1736846379 * L_1 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m587104109(L_1, ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		((IntervalSet_t1736846379_StaticFields*)il2cpp_codegen_static_fields_for(IntervalSet_t1736846379_il2cpp_TypeInfo_var))->set_EmptySet_1(L_1);
		IntervalSet_t1736846379 * L_2 = ((IntervalSet_t1736846379_StaticFields*)il2cpp_codegen_static_fields_for(IntervalSet_t1736846379_il2cpp_TypeInfo_var))->get_CompleteCharSet_0();
		VirtActionInvoker1< bool >::Invoke(23 /* System.Void Antlr4.Runtime.Misc.IntervalSet::SetReadonly(System.Boolean) */, L_2, (bool)1);
		IntervalSet_t1736846379 * L_3 = ((IntervalSet_t1736846379_StaticFields*)il2cpp_codegen_static_fields_for(IntervalSet_t1736846379_il2cpp_TypeInfo_var))->get_EmptySet_1();
		VirtActionInvoker1< bool >::Invoke(23 /* System.Void Antlr4.Runtime.Misc.IntervalSet::SetReadonly(System.Boolean) */, L_3, (bool)1);
		return;
	}
}
// System.Void Antlr4.Runtime.Misc.IntervalSet::.ctor(Antlr4.Runtime.Misc.IntervalSet)
extern "C"  void IntervalSet__ctor_m3832018402 (IntervalSet_t1736846379 * __this, IntervalSet_t1736846379 * ___set0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet__ctor_m3832018402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntervalSet__ctor_m587104109(__this, ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		IntervalSet_t1736846379 * L_0 = ___set0;
		VirtFuncInvoker1< IntervalSet_t1736846379 *, RuntimeObject* >::Invoke(9 /* Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::AddAll(Antlr4.Runtime.Misc.IIntSet) */, __this, L_0);
		return;
	}
}
// System.Void Antlr4.Runtime.Misc.IntervalSet::.ctor(System.Int32[])
extern "C"  void IntervalSet__ctor_m587104109 (IntervalSet_t1736846379 * __this, Int32U5BU5D_t385246372* ___els0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet__ctor_m587104109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t385246372* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_0 = ___els0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		ArrayList_1_t2215970062 * L_1 = (ArrayList_1_t2215970062 *)il2cpp_codegen_object_new(ArrayList_1_t2215970062_il2cpp_TypeInfo_var);
		ArrayList_1__ctor_m1933890287(L_1, 2, /*hidden argument*/ArrayList_1__ctor_m1933890287_RuntimeMethod_var);
		__this->set_intervals_2(L_1);
		goto IL_004c;
	}

IL_001d:
	{
		Int32U5BU5D_t385246372* L_2 = ___els0;
		ArrayList_1_t2215970062 * L_3 = (ArrayList_1_t2215970062 *)il2cpp_codegen_object_new(ArrayList_1_t2215970062_il2cpp_TypeInfo_var);
		ArrayList_1__ctor_m1933890287(L_3, (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), /*hidden argument*/ArrayList_1__ctor_m1933890287_RuntimeMethod_var);
		__this->set_intervals_2(L_3);
		Int32U5BU5D_t385246372* L_4 = ___els0;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0043;
	}

IL_0034:
	{
		Int32U5BU5D_t385246372* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		int32_t L_9 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32) */, __this, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_11 = V_2;
		Int32U5BU5D_t385246372* L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0034;
		}
	}

IL_004c:
	{
		return;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Of(System.Int32)
extern "C"  IntervalSet_t1736846379 * IntervalSet_Of_m4154009723 (RuntimeObject * __this /* static, unused */, int32_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Of_m4154009723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalSet_t1736846379 * V_0 = NULL;
	{
		IntervalSet_t1736846379 * L_0 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m587104109(L_0, ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_0 = L_0;
		IntervalSet_t1736846379 * L_1 = V_0;
		int32_t L_2 = ___a0;
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32) */, L_1, L_2);
		IntervalSet_t1736846379 * L_3 = V_0;
		return L_3;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Of(System.Int32,System.Int32)
extern "C"  IntervalSet_t1736846379 * IntervalSet_Of_m3534000560 (RuntimeObject * __this /* static, unused */, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Of_m3534000560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalSet_t1736846379 * V_0 = NULL;
	{
		IntervalSet_t1736846379 * L_0 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m587104109(L_0, ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_0 = L_0;
		IntervalSet_t1736846379 * L_1 = V_0;
		int32_t L_2 = ___a0;
		int32_t L_3 = ___b1;
		VirtActionInvoker2< int32_t, int32_t >::Invoke(7 /* System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32,System.Int32) */, L_1, L_2, L_3);
		IntervalSet_t1736846379 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32)
extern "C"  void IntervalSet_Add_m853502082 (IntervalSet_t1736846379 * __this, int32_t ___el0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Add_m853502082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_readonly_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral743142750, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		int32_t L_2 = ___el0;
		int32_t L_3 = ___el0;
		VirtActionInvoker2< int32_t, int32_t >::Invoke(7 /* System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32,System.Int32) */, __this, L_2, L_3);
		return;
	}
}
// System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32,System.Int32)
extern "C"  void IntervalSet_Add_m1503837587 (IntervalSet_t1736846379 * __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Add_m1503837587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Interval_t761282612_il2cpp_TypeInfo_var);
		Interval_t761282612  L_2 = Interval_Of_m4735343(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< Interval_t761282612  >::Invoke(8 /* System.Void Antlr4.Runtime.Misc.IntervalSet::Add(Antlr4.Runtime.Misc.Interval) */, __this, L_2);
		return;
	}
}
// System.Void Antlr4.Runtime.Misc.IntervalSet::Add(Antlr4.Runtime.Misc.Interval)
extern "C"  void IntervalSet_Add_m3126313092 (IntervalSet_t1736846379 * __this, Interval_t761282612  ___addition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Add_m3126313092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Interval_t761282612  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Interval_t761282612  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Interval_t761282612  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		bool L_0 = __this->get_readonly_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral743142750, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		int32_t L_2 = (&___addition0)->get_b_2();
		int32_t L_3 = (&___addition0)->get_a_1();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		V_0 = 0;
		goto IL_0113;
	}

IL_0031:
	{
		RuntimeObject* L_4 = __this->get_intervals_2();
		int32_t L_5 = V_0;
		Interval_t761282612  L_6 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_4, L_5);
		V_1 = L_6;
		Interval_t761282612  L_7 = V_1;
		Interval_t761282612  L_8 = L_7;
		RuntimeObject * L_9 = Box(Interval_t761282612_il2cpp_TypeInfo_var, &L_8);
		bool L_10 = Interval_Equals_m1476015520((&___addition0), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		Interval_t761282612  L_11 = V_1;
		bool L_12 = Interval_Adjacent_m1709587345((&___addition0), L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0071;
		}
	}
	{
		Interval_t761282612  L_13 = V_1;
		bool L_14 = Interval_Disjoint_m506696120((&___addition0), L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00f4;
		}
	}

IL_0071:
	{
		Interval_t761282612  L_15 = V_1;
		Interval_t761282612  L_16 = Interval_Union_m2041984833((&___addition0), L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		RuntimeObject* L_17 = __this->get_intervals_2();
		int32_t L_18 = V_0;
		Interval_t761282612  L_19 = V_2;
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::set_Item(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_17, L_18, L_19);
		goto IL_00e0;
	}

IL_008c:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		RuntimeObject* L_21 = __this->get_intervals_2();
		int32_t L_22 = V_0;
		Interval_t761282612  L_23 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_21, L_22);
		V_3 = L_23;
		Interval_t761282612  L_24 = V_3;
		bool L_25 = Interval_Adjacent_m1709587345((&V_2), L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00bc;
		}
	}
	{
		Interval_t761282612  L_26 = V_3;
		bool L_27 = Interval_Disjoint_m506696120((&V_2), L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_00f3;
	}

IL_00bc:
	{
		RuntimeObject* L_28 = __this->get_intervals_2();
		int32_t L_29 = V_0;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::RemoveAt(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_28, L_29);
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
		RuntimeObject* L_31 = __this->get_intervals_2();
		int32_t L_32 = V_0;
		Interval_t761282612  L_33 = V_3;
		Interval_t761282612  L_34 = Interval_Union_m2041984833((&V_2), L_33, /*hidden argument*/NULL);
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::set_Item(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_31, L_32, L_34);
	}

IL_00e0:
	{
		int32_t L_35 = V_0;
		RuntimeObject* L_36 = __this->get_intervals_2();
		int32_t L_37 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)))))
		{
			goto IL_008c;
		}
	}

IL_00f3:
	{
		return;
	}

IL_00f4:
	{
		Interval_t761282612  L_38 = V_1;
		bool L_39 = Interval_StartsBeforeDisjoint_m1443678442((&___addition0), L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_010f;
		}
	}
	{
		RuntimeObject* L_40 = __this->get_intervals_2();
		int32_t L_41 = V_0;
		Interval_t761282612  L_42 = ___addition0;
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::Insert(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_40, L_41, L_42);
		return;
	}

IL_010f:
	{
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_0113:
	{
		int32_t L_44 = V_0;
		RuntimeObject* L_45 = __this->get_intervals_2();
		int32_t L_46 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_45);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_47 = __this->get_intervals_2();
		Interval_t761282612  L_48 = ___addition0;
		InterfaceActionInvoker1< Interval_t761282612  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::Add(!0) */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_47, L_48);
		return;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::AddAll(Antlr4.Runtime.Misc.IIntSet)
extern "C"  IntervalSet_t1736846379 * IntervalSet_AddAll_m4024847840 (IntervalSet_t1736846379 * __this, RuntimeObject* ___set0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_AddAll_m4024847840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalSet_t1736846379 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Interval_t761282612  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___set0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return __this;
	}

IL_0008:
	{
		RuntimeObject* L_1 = ___set0;
		if (!((IntervalSet_t1736846379 *)IsInstClass((RuntimeObject*)L_1, IntervalSet_t1736846379_il2cpp_TypeInfo_var)))
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_2 = ___set0;
		V_0 = ((IntervalSet_t1736846379 *)CastclassClass((RuntimeObject*)L_2, IntervalSet_t1736846379_il2cpp_TypeInfo_var));
		IntervalSet_t1736846379 * L_3 = V_0;
		RuntimeObject* L_4 = L_3->get_intervals_2();
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0052;
	}

IL_002d:
	{
		IntervalSet_t1736846379 * L_6 = V_0;
		RuntimeObject* L_7 = L_6->get_intervals_2();
		int32_t L_8 = V_2;
		Interval_t761282612  L_9 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_7, L_8);
		V_3 = L_9;
		int32_t L_10 = (&V_3)->get_a_1();
		int32_t L_11 = (&V_3)->get_b_2();
		VirtActionInvoker2< int32_t, int32_t >::Invoke(7 /* System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32,System.Int32) */, __this, L_10, L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_00a1;
	}

IL_005e:
	{
		RuntimeObject* L_15 = ___set0;
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IList`1<System.Int32> Antlr4.Runtime.Misc.IIntSet::ToList() */, IIntSet_t3939299716_il2cpp_TypeInfo_var, L_15);
		RuntimeObject* L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t1930798642_il2cpp_TypeInfo_var, L_16);
		V_5 = L_17;
	}

IL_006b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0070:
		{
			RuntimeObject* L_18 = V_5;
			int32_t L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t3383516221_il2cpp_TypeInfo_var, L_18);
			V_4 = L_19;
			int32_t L_20 = V_4;
			VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32) */, __this, L_20);
		}

IL_0081:
		{
			RuntimeObject* L_21 = V_5;
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0070;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_5;
			if (!L_23)
			{
				goto IL_00a0;
			}
		}

IL_0099:
		{
			RuntimeObject* L_24 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_24);
		}

IL_00a0:
		{
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a1:
	{
		return __this;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Complement(Antlr4.Runtime.Misc.IIntSet)
extern "C"  IntervalSet_t1736846379 * IntervalSet_Complement_m1221113938 (IntervalSet_t1736846379 * __this, RuntimeObject* ___vocabulary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Complement_m1221113938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalSet_t1736846379 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___vocabulary0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___vocabulary0;
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Antlr4.Runtime.Misc.IIntSet::get_IsNil() */, IIntSet_t3939299716_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (IntervalSet_t1736846379 *)NULL;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___vocabulary0;
		if (!((IntervalSet_t1736846379 *)IsInstClass((RuntimeObject*)L_3, IntervalSet_t1736846379_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_4 = ___vocabulary0;
		V_0 = ((IntervalSet_t1736846379 *)CastclassClass((RuntimeObject*)L_4, IntervalSet_t1736846379_il2cpp_TypeInfo_var));
		goto IL_003e;
	}

IL_002a:
	{
		IntervalSet_t1736846379 * L_5 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m587104109(L_5, ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_0 = L_5;
		IntervalSet_t1736846379 * L_6 = V_0;
		RuntimeObject* L_7 = ___vocabulary0;
		VirtFuncInvoker1< IntervalSet_t1736846379 *, RuntimeObject* >::Invoke(9 /* Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::AddAll(Antlr4.Runtime.Misc.IIntSet) */, L_6, L_7);
	}

IL_003e:
	{
		IntervalSet_t1736846379 * L_8 = V_0;
		IntervalSet_t1736846379 * L_9 = VirtFuncInvoker1< IntervalSet_t1736846379 *, RuntimeObject* >::Invoke(11 /* Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Subtract(Antlr4.Runtime.Misc.IIntSet) */, L_8, __this);
		return L_9;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Subtract(Antlr4.Runtime.Misc.IIntSet)
extern "C"  IntervalSet_t1736846379 * IntervalSet_Subtract_m2754352174 (IntervalSet_t1736846379 * __this, RuntimeObject* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Subtract_m2754352174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalSet_t1736846379 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___a0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___a0;
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Antlr4.Runtime.Misc.IIntSet::get_IsNil() */, IIntSet_t3939299716_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		IntervalSet_t1736846379 * L_3 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m3832018402(L_3, __this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___a0;
		if (!((IntervalSet_t1736846379 *)IsInstClass((RuntimeObject*)L_4, IntervalSet_t1736846379_il2cpp_TypeInfo_var)))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet_t1736846379 * L_6 = IntervalSet_Subtract_m735012243(NULL /*static, unused*/, __this, ((IntervalSet_t1736846379 *)CastclassClass((RuntimeObject*)L_5, IntervalSet_t1736846379_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_6;
	}

IL_0030:
	{
		IntervalSet_t1736846379 * L_7 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m587104109(L_7, ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_0 = L_7;
		IntervalSet_t1736846379 * L_8 = V_0;
		RuntimeObject* L_9 = ___a0;
		VirtFuncInvoker1< IntervalSet_t1736846379 *, RuntimeObject* >::Invoke(9 /* Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::AddAll(Antlr4.Runtime.Misc.IIntSet) */, L_8, L_9);
		IntervalSet_t1736846379 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet_t1736846379 * L_11 = IntervalSet_Subtract_m735012243(NULL /*static, unused*/, __this, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Subtract(Antlr4.Runtime.Misc.IntervalSet,Antlr4.Runtime.Misc.IntervalSet)
extern "C"  IntervalSet_t1736846379 * IntervalSet_Subtract_m735012243 (RuntimeObject * __this /* static, unused */, IntervalSet_t1736846379 * ___left0, IntervalSet_t1736846379 * ___right1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Subtract_m735012243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalSet_t1736846379 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Interval_t761282612  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Interval_t761282612  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Nullable_1_t2483844694  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Nullable_1_t2483844694  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Nullable_1_t2483844694  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		IntervalSet_t1736846379 * L_0 = ___left0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IntervalSet_t1736846379 * L_1 = ___left0;
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean Antlr4.Runtime.Misc.IntervalSet::get_IsNil() */, L_1);
		if (!L_2)
		{
			goto IL_001d;
		}
	}

IL_0011:
	{
		IntervalSet_t1736846379 * L_3 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m587104109(L_3, ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		IntervalSet_t1736846379 * L_4 = ___left0;
		IntervalSet_t1736846379 * L_5 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m3832018402(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		IntervalSet_t1736846379 * L_6 = ___right1;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		IntervalSet_t1736846379 * L_7 = ___right1;
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean Antlr4.Runtime.Misc.IntervalSet::get_IsNil() */, L_7);
		if (!L_8)
		{
			goto IL_0037;
		}
	}

IL_0035:
	{
		IntervalSet_t1736846379 * L_9 = V_0;
		return L_9;
	}

IL_0037:
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_01ab;
	}

IL_0040:
	{
		IntervalSet_t1736846379 * L_10 = V_0;
		RuntimeObject* L_11 = L_10->get_intervals_2();
		int32_t L_12 = V_1;
		Interval_t761282612  L_13 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_11, L_12);
		V_3 = L_13;
		IntervalSet_t1736846379 * L_14 = ___right1;
		RuntimeObject* L_15 = L_14->get_intervals_2();
		int32_t L_16 = V_2;
		Interval_t761282612  L_17 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_15, L_16);
		V_4 = L_17;
		int32_t L_18 = (&V_4)->get_b_2();
		int32_t L_19 = (&V_3)->get_a_1();
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		goto IL_01ab;
	}

IL_0077:
	{
		int32_t L_21 = (&V_4)->get_a_1();
		int32_t L_22 = (&V_3)->get_b_2();
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		goto IL_01ab;
	}

IL_0093:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t2483844694 ));
		Nullable_1_t2483844694  L_24 = V_6;
		V_5 = L_24;
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t2483844694 ));
		Nullable_1_t2483844694  L_25 = V_6;
		V_7 = L_25;
		int32_t L_26 = (&V_4)->get_a_1();
		int32_t L_27 = (&V_3)->get_a_1();
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_28 = (&V_3)->get_a_1();
		int32_t L_29 = (&V_4)->get_a_1();
		Interval_t761282612  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Interval__ctor_m284295304((&L_30), L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		Nullable_1_t2483844694  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Nullable_1__ctor_m2751154530((&L_31), L_30, /*hidden argument*/Nullable_1__ctor_m2751154530_RuntimeMethod_var);
		V_5 = L_31;
	}

IL_00da:
	{
		int32_t L_32 = (&V_4)->get_b_2();
		int32_t L_33 = (&V_3)->get_b_2();
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_34 = (&V_4)->get_b_2();
		int32_t L_35 = (&V_3)->get_b_2();
		Interval_t761282612  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Interval__ctor_m284295304((&L_36), ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)), L_35, /*hidden argument*/NULL);
		Nullable_1_t2483844694  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Nullable_1__ctor_m2751154530((&L_37), L_36, /*hidden argument*/Nullable_1__ctor_m2751154530_RuntimeMethod_var);
		V_7 = L_37;
	}

IL_0109:
	{
		bool L_38 = Nullable_1_get_HasValue_m1984449514((&V_5), /*hidden argument*/Nullable_1_get_HasValue_m1984449514_RuntimeMethod_var);
		if (!L_38)
		{
			goto IL_0172;
		}
	}
	{
		bool L_39 = Nullable_1_get_HasValue_m1984449514((&V_7), /*hidden argument*/Nullable_1_get_HasValue_m1984449514_RuntimeMethod_var);
		if (!L_39)
		{
			goto IL_0156;
		}
	}
	{
		IntervalSet_t1736846379 * L_40 = V_0;
		RuntimeObject* L_41 = L_40->get_intervals_2();
		int32_t L_42 = V_1;
		Interval_t761282612  L_43 = Nullable_1_get_Value_m3463444746((&V_5), /*hidden argument*/Nullable_1_get_Value_m3463444746_RuntimeMethod_var);
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::set_Item(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_41, L_42, L_43);
		IntervalSet_t1736846379 * L_44 = V_0;
		RuntimeObject* L_45 = L_44->get_intervals_2();
		int32_t L_46 = V_1;
		Interval_t761282612  L_47 = Nullable_1_get_Value_m3463444746((&V_7), /*hidden argument*/Nullable_1_get_Value_m3463444746_RuntimeMethod_var);
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::Insert(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_45, ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)), L_47);
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		goto IL_01ab;
	}

IL_0156:
	{
		IntervalSet_t1736846379 * L_50 = V_0;
		RuntimeObject* L_51 = L_50->get_intervals_2();
		int32_t L_52 = V_1;
		Interval_t761282612  L_53 = Nullable_1_get_Value_m3463444746((&V_5), /*hidden argument*/Nullable_1_get_Value_m3463444746_RuntimeMethod_var);
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::set_Item(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_51, L_52, L_53);
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		goto IL_01ab;
	}

IL_0172:
	{
		bool L_55 = Nullable_1_get_HasValue_m1984449514((&V_7), /*hidden argument*/Nullable_1_get_HasValue_m1984449514_RuntimeMethod_var);
		if (!L_55)
		{
			goto IL_019a;
		}
	}
	{
		IntervalSet_t1736846379 * L_56 = V_0;
		RuntimeObject* L_57 = L_56->get_intervals_2();
		int32_t L_58 = V_1;
		Interval_t761282612  L_59 = Nullable_1_get_Value_m3463444746((&V_7), /*hidden argument*/Nullable_1_get_Value_m3463444746_RuntimeMethod_var);
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::set_Item(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_57, L_58, L_59);
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		goto IL_01ab;
	}

IL_019a:
	{
		IntervalSet_t1736846379 * L_61 = V_0;
		RuntimeObject* L_62 = L_61->get_intervals_2();
		int32_t L_63 = V_1;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::RemoveAt(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_62, L_63);
		goto IL_01ab;
	}

IL_01ab:
	{
		int32_t L_64 = V_1;
		IntervalSet_t1736846379 * L_65 = V_0;
		RuntimeObject* L_66 = L_65->get_intervals_2();
		int32_t L_67 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_66);
		if ((((int32_t)L_64) >= ((int32_t)L_67)))
		{
			goto IL_01cd;
		}
	}
	{
		int32_t L_68 = V_2;
		IntervalSet_t1736846379 * L_69 = ___right1;
		RuntimeObject* L_70 = L_69->get_intervals_2();
		int32_t L_71 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_70);
		if ((((int32_t)L_68) < ((int32_t)L_71)))
		{
			goto IL_0040;
		}
	}

IL_01cd:
	{
		IntervalSet_t1736846379 * L_72 = V_0;
		return L_72;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::Or(Antlr4.Runtime.Misc.IIntSet)
extern "C"  IntervalSet_t1736846379 * IntervalSet_Or_m310572215 (IntervalSet_t1736846379 * __this, RuntimeObject* ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Or_m310572215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalSet_t1736846379 * V_0 = NULL;
	{
		IntervalSet_t1736846379 * L_0 = (IntervalSet_t1736846379 *)il2cpp_codegen_object_new(IntervalSet_t1736846379_il2cpp_TypeInfo_var);
		IntervalSet__ctor_m587104109(L_0, ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_0 = L_0;
		IntervalSet_t1736846379 * L_1 = V_0;
		VirtFuncInvoker1< IntervalSet_t1736846379 *, RuntimeObject* >::Invoke(9 /* Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::AddAll(Antlr4.Runtime.Misc.IIntSet) */, L_1, __this);
		IntervalSet_t1736846379 * L_2 = V_0;
		RuntimeObject* L_3 = ___a0;
		VirtFuncInvoker1< IntervalSet_t1736846379 *, RuntimeObject* >::Invoke(9 /* Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Misc.IntervalSet::AddAll(Antlr4.Runtime.Misc.IIntSet) */, L_2, L_3);
		IntervalSet_t1736846379 * L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Antlr4.Runtime.Misc.IntervalSet::Contains(System.Int32)
extern "C"  bool IntervalSet_Contains_m269169025 (IntervalSet_t1736846379 * __this, int32_t ___el0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Contains_m269169025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Interval_t761282612  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		RuntimeObject* L_0 = __this->get_intervals_2();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0052;
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->get_intervals_2();
		int32_t L_3 = V_1;
		Interval_t761282612  L_4 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_2, L_3);
		V_2 = L_4;
		int32_t L_5 = (&V_2)->get_a_1();
		V_3 = L_5;
		int32_t L_6 = (&V_2)->get_b_2();
		V_4 = L_6;
		int32_t L_7 = ___el0;
		int32_t L_8 = V_3;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0059;
	}

IL_003d:
	{
		int32_t L_9 = ___el0;
		int32_t L_10 = V_3;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_11 = ___el0;
		int32_t L_12 = V_4;
		if ((((int32_t)L_11) > ((int32_t)L_12)))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)1;
	}

IL_004e:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}

IL_0059:
	{
		return (bool)0;
	}
}
// System.Boolean Antlr4.Runtime.Misc.IntervalSet::get_IsNil()
extern "C"  bool IntervalSet_get_IsNil_m2579482861 (IntervalSet_t1736846379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_get_IsNil_m2579482861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->get_intervals_2();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_intervals_2();
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 Antlr4.Runtime.Misc.IntervalSet::get_MinElement()
extern "C"  int32_t IntervalSet_get_MinElement_m554850539 (IntervalSet_t1736846379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_get_MinElement_m554850539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Interval_t761282612  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean Antlr4.Runtime.Misc.IntervalSet::get_IsNil() */, __this);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		RuntimeObject* L_1 = __this->get_intervals_2();
		Interval_t761282612  L_2 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_1, 0);
		V_0 = L_2;
		int32_t L_3 = (&V_0)->get_a_1();
		return L_3;
	}
}
// System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval> Antlr4.Runtime.Misc.IntervalSet::GetIntervals()
extern "C"  RuntimeObject* IntervalSet_GetIntervals_m1593451079 (IntervalSet_t1736846379 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_intervals_2();
		return L_0;
	}
}
// System.Int32 Antlr4.Runtime.Misc.IntervalSet::GetHashCode()
extern "C"  int32_t IntervalSet_GetHashCode_m1397104723 (IntervalSet_t1736846379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_GetHashCode_m1397104723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Interval_t761282612  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = MurmurHash_Initialize_m2619640990(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->get_intervals_2();
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Misc.Interval>::GetEnumerator() */, IEnumerable_1_t4036102797_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0017:
		{
			RuntimeObject* L_3 = V_2;
			Interval_t761282612  L_4 = InterfaceFuncInvoker0< Interval_t761282612  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.Misc.Interval>::get_Current() */, IEnumerator_1_t1193853080_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			int32_t L_5 = V_0;
			int32_t L_6 = (&V_1)->get_a_1();
			int32_t L_7 = MurmurHash_Update_m4269430083(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			int32_t L_8 = V_0;
			int32_t L_9 = (&V_1)->get_b_2();
			int32_t L_10 = MurmurHash_Update_m4269430083(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_003a:
		{
			RuntimeObject* L_11 = V_2;
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0017;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x57, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_2;
			if (!L_13)
			{
				goto IL_0056;
			}
		}

IL_0050:
		{
			RuntimeObject* L_14 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_14);
		}

IL_0056:
		{
			IL2CPP_END_FINALLY(74)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		int32_t L_15 = V_0;
		RuntimeObject* L_16 = __this->get_intervals_2();
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_16);
		int32_t L_18 = MurmurHash_Finish_m3445488384(NULL /*static, unused*/, L_15, ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_18;
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Boolean Antlr4.Runtime.Misc.IntervalSet::Equals(System.Object)
extern "C"  bool IntervalSet_Equals_m2004170789 (IntervalSet_t1736846379 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Equals_m2004170789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalSet_t1736846379 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((IntervalSet_t1736846379 *)IsInstClass((RuntimeObject*)L_1, IntervalSet_t1736846379_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = ((IntervalSet_t1736846379 *)CastclassClass((RuntimeObject*)L_2, IntervalSet_t1736846379_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = __this->get_intervals_2();
		IntervalSet_t1736846379 * L_4 = V_0;
		RuntimeObject* L_5 = L_4->get_intervals_2();
		bool L_6 = Enumerable_SequenceEqual_TisInterval_t761282612_m2164039892(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/Enumerable_SequenceEqual_TisInterval_t761282612_m2164039892_RuntimeMethod_var);
		return L_6;
	}
}
// System.String Antlr4.Runtime.Misc.IntervalSet::ToString()
extern "C"  String_t* IntervalSet_ToString_m3318748342 (IntervalSet_t1736846379 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker1< String_t*, bool >::Invoke(17 /* System.String Antlr4.Runtime.Misc.IntervalSet::ToString(System.Boolean) */, __this, (bool)0);
		return L_0;
	}
}
// System.String Antlr4.Runtime.Misc.IntervalSet::ToString(System.Boolean)
extern "C"  String_t* IntervalSet_ToString_m1590204545 (IntervalSet_t1736846379 * __this, bool ___elemAreChar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_ToString_m1590204545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	Interval_t761282612  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->get_intervals_2();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_intervals_2();
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0027;
		}
	}

IL_0021:
	{
		return _stringLiteral3455956949;
	}

IL_0027:
	{
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 Antlr4.Runtime.Misc.IntervalSet::get_Count() */, __this);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		StringBuilder_t * L_5 = V_0;
		StringBuilder_Append_m1965104174(L_5, _stringLiteral3452614613, /*hidden argument*/NULL);
	}

IL_003f:
	{
		V_1 = (bool)1;
		RuntimeObject* L_6 = __this->get_intervals_2();
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Misc.Interval>::GetEnumerator() */, IEnumerable_1_t4036102797_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012d;
		}

IL_0052:
		{
			RuntimeObject* L_8 = V_3;
			Interval_t761282612  L_9 = InterfaceFuncInvoker0< Interval_t761282612  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.Misc.Interval>::get_Current() */, IEnumerator_1_t1193853080_il2cpp_TypeInfo_var, L_8);
			V_2 = L_9;
			bool L_10 = V_1;
			if (L_10)
			{
				goto IL_006b;
			}
		}

IL_005f:
		{
			StringBuilder_t * L_11 = V_0;
			StringBuilder_Append_m1965104174(L_11, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_006b:
		{
			V_1 = (bool)0;
			int32_t L_12 = (&V_2)->get_a_1();
			V_4 = L_12;
			int32_t L_13 = (&V_2)->get_b_2();
			V_5 = L_13;
			int32_t L_14 = V_4;
			int32_t L_15 = V_5;
			if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
			{
				goto IL_00d8;
			}
		}

IL_0088:
		{
			int32_t L_16 = V_4;
			if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
			{
				goto IL_00a1;
			}
		}

IL_0090:
		{
			StringBuilder_t * L_17 = V_0;
			StringBuilder_Append_m1965104174(L_17, _stringLiteral2446009687, /*hidden argument*/NULL);
			goto IL_00d3;
		}

IL_00a1:
		{
			bool L_18 = ___elemAreChar0;
			if (!L_18)
			{
				goto IL_00ca;
			}
		}

IL_00a7:
		{
			StringBuilder_t * L_19 = V_0;
			StringBuilder_t * L_20 = StringBuilder_Append_m1965104174(L_19, _stringLiteral3452614521, /*hidden argument*/NULL);
			int32_t L_21 = V_4;
			StringBuilder_t * L_22 = StringBuilder_Append_m2383614642(L_20, (((int32_t)((uint16_t)L_21))), /*hidden argument*/NULL);
			StringBuilder_Append_m1965104174(L_22, _stringLiteral3452614521, /*hidden argument*/NULL);
			goto IL_00d3;
		}

IL_00ca:
		{
			StringBuilder_t * L_23 = V_0;
			int32_t L_24 = V_4;
			StringBuilder_Append_m890240332(L_23, L_24, /*hidden argument*/NULL);
		}

IL_00d3:
		{
			goto IL_012d;
		}

IL_00d8:
		{
			bool L_25 = ___elemAreChar0;
			if (!L_25)
			{
				goto IL_0113;
			}
		}

IL_00de:
		{
			StringBuilder_t * L_26 = V_0;
			StringBuilder_t * L_27 = StringBuilder_Append_m1965104174(L_26, _stringLiteral3452614521, /*hidden argument*/NULL);
			int32_t L_28 = V_4;
			StringBuilder_t * L_29 = StringBuilder_Append_m2383614642(L_27, (((int32_t)((uint16_t)L_28))), /*hidden argument*/NULL);
			StringBuilder_t * L_30 = StringBuilder_Append_m1965104174(L_29, _stringLiteral1610266509, /*hidden argument*/NULL);
			int32_t L_31 = V_5;
			StringBuilder_t * L_32 = StringBuilder_Append_m2383614642(L_30, (((int32_t)((uint16_t)L_31))), /*hidden argument*/NULL);
			StringBuilder_Append_m1965104174(L_32, _stringLiteral3452614521, /*hidden argument*/NULL);
			goto IL_012d;
		}

IL_0113:
		{
			StringBuilder_t * L_33 = V_0;
			int32_t L_34 = V_4;
			StringBuilder_t * L_35 = StringBuilder_Append_m890240332(L_33, L_34, /*hidden argument*/NULL);
			StringBuilder_t * L_36 = StringBuilder_Append_m1965104174(L_35, _stringLiteral3450648450, /*hidden argument*/NULL);
			int32_t L_37 = V_5;
			StringBuilder_Append_m890240332(L_36, L_37, /*hidden argument*/NULL);
		}

IL_012d:
		{
			RuntimeObject* L_38 = V_3;
			bool L_39 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_38);
			if (L_39)
			{
				goto IL_0052;
			}
		}

IL_0138:
		{
			IL2CPP_LEAVE(0x14A, FINALLY_013d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013d;
	}

FINALLY_013d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_40 = V_3;
			if (!L_40)
			{
				goto IL_0149;
			}
		}

IL_0143:
		{
			RuntimeObject* L_41 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_41);
		}

IL_0149:
		{
			IL2CPP_END_FINALLY(317)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(317)
	{
		IL2CPP_JUMP_TBL(0x14A, IL_014a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014a:
	{
		int32_t L_42 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 Antlr4.Runtime.Misc.IntervalSet::get_Count() */, __this);
		if ((((int32_t)L_42) <= ((int32_t)1)))
		{
			goto IL_0162;
		}
	}
	{
		StringBuilder_t * L_43 = V_0;
		StringBuilder_Append_m1965104174(L_43, _stringLiteral3452614611, /*hidden argument*/NULL);
	}

IL_0162:
	{
		StringBuilder_t * L_44 = V_0;
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		return L_45;
	}
}
// System.String Antlr4.Runtime.Misc.IntervalSet::ToString(Antlr4.Runtime.IVocabulary)
extern "C"  String_t* IntervalSet_ToString_m1552895163 (IntervalSet_t1736846379 * __this, RuntimeObject* ___vocabulary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_ToString_m1552895163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	Interval_t761282612  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->get_intervals_2();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_intervals_2();
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0027;
		}
	}

IL_0021:
	{
		return _stringLiteral3455956949;
	}

IL_0027:
	{
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 Antlr4.Runtime.Misc.IntervalSet::get_Count() */, __this);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		StringBuilder_t * L_5 = V_0;
		StringBuilder_Append_m1965104174(L_5, _stringLiteral3452614613, /*hidden argument*/NULL);
	}

IL_003f:
	{
		V_1 = (bool)1;
		RuntimeObject* L_6 = __this->get_intervals_2();
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Misc.Interval>::GetEnumerator() */, IEnumerable_1_t4036102797_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00da;
		}

IL_0052:
		{
			RuntimeObject* L_8 = V_3;
			Interval_t761282612  L_9 = InterfaceFuncInvoker0< Interval_t761282612  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.Misc.Interval>::get_Current() */, IEnumerator_1_t1193853080_il2cpp_TypeInfo_var, L_8);
			V_2 = L_9;
			bool L_10 = V_1;
			if (L_10)
			{
				goto IL_006b;
			}
		}

IL_005f:
		{
			StringBuilder_t * L_11 = V_0;
			StringBuilder_Append_m1965104174(L_11, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_006b:
		{
			V_1 = (bool)0;
			int32_t L_12 = (&V_2)->get_a_1();
			V_4 = L_12;
			int32_t L_13 = (&V_2)->get_b_2();
			V_5 = L_13;
			int32_t L_14 = V_4;
			int32_t L_15 = V_5;
			if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
			{
				goto IL_009d;
			}
		}

IL_0088:
		{
			StringBuilder_t * L_16 = V_0;
			RuntimeObject* L_17 = ___vocabulary0;
			int32_t L_18 = V_4;
			String_t* L_19 = VirtFuncInvoker2< String_t*, RuntimeObject*, int32_t >::Invoke(19 /* System.String Antlr4.Runtime.Misc.IntervalSet::ElementName(Antlr4.Runtime.IVocabulary,System.Int32) */, __this, L_17, L_18);
			StringBuilder_Append_m1965104174(L_16, L_19, /*hidden argument*/NULL);
			goto IL_00da;
		}

IL_009d:
		{
			int32_t L_20 = V_4;
			V_6 = L_20;
			goto IL_00d1;
		}

IL_00a6:
		{
			int32_t L_21 = V_6;
			int32_t L_22 = V_4;
			if ((((int32_t)L_21) <= ((int32_t)L_22)))
			{
				goto IL_00bb;
			}
		}

IL_00af:
		{
			StringBuilder_t * L_23 = V_0;
			StringBuilder_Append_m1965104174(L_23, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_00bb:
		{
			StringBuilder_t * L_24 = V_0;
			RuntimeObject* L_25 = ___vocabulary0;
			int32_t L_26 = V_6;
			String_t* L_27 = VirtFuncInvoker2< String_t*, RuntimeObject*, int32_t >::Invoke(19 /* System.String Antlr4.Runtime.Misc.IntervalSet::ElementName(Antlr4.Runtime.IVocabulary,System.Int32) */, __this, L_25, L_26);
			StringBuilder_Append_m1965104174(L_24, L_27, /*hidden argument*/NULL);
			int32_t L_28 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		}

IL_00d1:
		{
			int32_t L_29 = V_6;
			int32_t L_30 = V_5;
			if ((((int32_t)L_29) <= ((int32_t)L_30)))
			{
				goto IL_00a6;
			}
		}

IL_00da:
		{
			RuntimeObject* L_31 = V_3;
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_0052;
			}
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0xF7, FINALLY_00ea);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ea;
	}

FINALLY_00ea:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_3;
			if (!L_33)
			{
				goto IL_00f6;
			}
		}

IL_00f0:
		{
			RuntimeObject* L_34 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_34);
		}

IL_00f6:
		{
			IL2CPP_END_FINALLY(234)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(234)
	{
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f7:
	{
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 Antlr4.Runtime.Misc.IntervalSet::get_Count() */, __this);
		if ((((int32_t)L_35) <= ((int32_t)1)))
		{
			goto IL_010f;
		}
	}
	{
		StringBuilder_t * L_36 = V_0;
		StringBuilder_Append_m1965104174(L_36, _stringLiteral3452614611, /*hidden argument*/NULL);
	}

IL_010f:
	{
		StringBuilder_t * L_37 = V_0;
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
	}
}
// System.String Antlr4.Runtime.Misc.IntervalSet::ElementName(Antlr4.Runtime.IVocabulary,System.Int32)
extern "C"  String_t* IntervalSet_ElementName_m2778144576 (IntervalSet_t1736846379 * __this, RuntimeObject* ___vocabulary0, int32_t ___a1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_ElementName_m2778144576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___a1;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000d;
		}
	}
	{
		return _stringLiteral2446009687;
	}

IL_000d:
	{
		int32_t L_1 = ___a1;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		return _stringLiteral1341918530;
	}

IL_001b:
	{
		RuntimeObject* L_2 = ___vocabulary0;
		int32_t L_3 = ___a1;
		String_t* L_4 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* System.String Antlr4.Runtime.IVocabulary::GetDisplayName(System.Int32) */, IVocabulary_t4253336316_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Int32 Antlr4.Runtime.Misc.IntervalSet::get_Count()
extern "C"  int32_t IntervalSet_get_Count_m4059077317 (IntervalSet_t1736846379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_get_Count_m4059077317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Interval_t761282612  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	Interval_t761282612  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		V_0 = 0;
		RuntimeObject* L_0 = __this->get_intervals_2();
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_intervals_2();
		Interval_t761282612  L_4 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_3, 0);
		V_2 = L_4;
		int32_t L_5 = (&V_2)->get_b_2();
		int32_t L_6 = (&V_2)->get_a_1();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), (int32_t)1));
	}

IL_0034:
	{
		V_3 = 0;
		goto IL_0061;
	}

IL_003b:
	{
		RuntimeObject* L_7 = __this->get_intervals_2();
		int32_t L_8 = V_3;
		Interval_t761282612  L_9 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_7, L_8);
		V_4 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = (&V_4)->get_b_2();
		int32_t L_12 = (&V_4)->get_a_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), (int32_t)1))));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Collections.Generic.IList`1<System.Int32> Antlr4.Runtime.Misc.IntervalSet::ToList()
extern "C"  RuntimeObject* IntervalSet_ToList_m1809790799 (IntervalSet_t1736846379 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_ToList_m1809790799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Interval_t761282612  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		ArrayList_1_t110665907 * L_0 = (ArrayList_1_t110665907 *)il2cpp_codegen_object_new(ArrayList_1_t110665907_il2cpp_TypeInfo_var);
		ArrayList_1__ctor_m3193375987(L_0, /*hidden argument*/ArrayList_1__ctor_m3193375987_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = __this->get_intervals_2();
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_005c;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->get_intervals_2();
		int32_t L_4 = V_2;
		Interval_t761282612  L_5 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_3, L_4);
		V_3 = L_5;
		int32_t L_6 = (&V_3)->get_a_1();
		V_4 = L_6;
		int32_t L_7 = (&V_3)->get_b_2();
		V_5 = L_7;
		int32_t L_8 = V_4;
		V_6 = L_8;
		goto IL_004f;
	}

IL_0041:
	{
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = V_6;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Add(!0) */, ICollection_1_t1484130691_il2cpp_TypeInfo_var, L_9, L_10);
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_12 = V_6;
		int32_t L_13 = V_5;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_005c:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_17 = V_0;
		return L_17;
	}
}
// System.Void Antlr4.Runtime.Misc.IntervalSet::Remove(System.Int32)
extern "C"  void IntervalSet_Remove_m3576166578 (IntervalSet_t1736846379 * __this, int32_t ___el0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_Remove_m3576166578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Interval_t761282612  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		bool L_0 = __this->get_readonly_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral743142750, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		RuntimeObject* L_2 = __this->get_intervals_2();
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Misc.Interval>::get_Count() */, ICollection_1_t3589434846_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0110;
	}

IL_0029:
	{
		RuntimeObject* L_4 = __this->get_intervals_2();
		int32_t L_5 = V_1;
		Interval_t761282612  L_6 = InterfaceFuncInvoker1< Interval_t761282612 , int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::get_Item(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_4, L_5);
		V_2 = L_6;
		int32_t L_7 = (&V_2)->get_a_1();
		V_3 = L_7;
		int32_t L_8 = (&V_2)->get_b_2();
		V_4 = L_8;
		int32_t L_9 = ___el0;
		int32_t L_10 = V_3;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0117;
	}

IL_0053:
	{
		int32_t L_11 = ___el0;
		int32_t L_12 = V_3;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_13 = ___el0;
		int32_t L_14 = V_4;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject* L_15 = __this->get_intervals_2();
		int32_t L_16 = V_1;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::RemoveAt(System.Int32) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_15, L_16);
		goto IL_0117;
	}

IL_0073:
	{
		int32_t L_17 = ___el0;
		int32_t L_18 = V_3;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject* L_19 = __this->get_intervals_2();
		int32_t L_20 = V_1;
		int32_t L_21 = (&V_2)->get_a_1();
		int32_t L_22 = (&V_2)->get_b_2();
		IL2CPP_RUNTIME_CLASS_INIT(Interval_t761282612_il2cpp_TypeInfo_var);
		Interval_t761282612  L_23 = Interval_Of_m4735343(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), L_22, /*hidden argument*/NULL);
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::set_Item(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_19, L_20, L_23);
		goto IL_0117;
	}

IL_00a0:
	{
		int32_t L_24 = ___el0;
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ce;
		}
	}
	{
		RuntimeObject* L_26 = __this->get_intervals_2();
		int32_t L_27 = V_1;
		int32_t L_28 = (&V_2)->get_a_1();
		int32_t L_29 = (&V_2)->get_b_2();
		IL2CPP_RUNTIME_CLASS_INIT(Interval_t761282612_il2cpp_TypeInfo_var);
		Interval_t761282612  L_30 = Interval_Of_m4735343(NULL /*static, unused*/, L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::set_Item(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_26, L_27, L_30);
		goto IL_0117;
	}

IL_00ce:
	{
		int32_t L_31 = ___el0;
		int32_t L_32 = V_3;
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_33 = ___el0;
		int32_t L_34 = V_4;
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_35 = (&V_2)->get_b_2();
		V_5 = L_35;
		RuntimeObject* L_36 = __this->get_intervals_2();
		int32_t L_37 = V_1;
		int32_t L_38 = (&V_2)->get_a_1();
		int32_t L_39 = ___el0;
		IL2CPP_RUNTIME_CLASS_INIT(Interval_t761282612_il2cpp_TypeInfo_var);
		Interval_t761282612  L_40 = Interval_Of_m4735343(NULL /*static, unused*/, L_38, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), /*hidden argument*/NULL);
		InterfaceActionInvoker2< int32_t, Interval_t761282612  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Misc.Interval>::set_Item(System.Int32,!0) */, IList_1_t2576602395_il2cpp_TypeInfo_var, L_36, L_37, L_40);
		int32_t L_41 = ___el0;
		int32_t L_42 = V_5;
		VirtActionInvoker2< int32_t, int32_t >::Invoke(7 /* System.Void Antlr4.Runtime.Misc.IntervalSet::Add(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)), L_42);
	}

IL_010c:
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_0110:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0029;
		}
	}

IL_0117:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Misc.IntervalSet::SetReadonly(System.Boolean)
extern "C"  void IntervalSet_SetReadonly_m290491741 (IntervalSet_t1736846379 * __this, bool ___readonly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalSet_SetReadonly_m290491741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_readonly_3();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = ___readonly0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_2, _stringLiteral743142750, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001c:
	{
		bool L_3 = ___readonly0;
		__this->set_readonly_3(L_3);
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
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Initialize()
extern "C"  int32_t MurmurHash_Initialize_m2619640990 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = MurmurHash_Initialize_m4147079067(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Initialize(System.Int32)
extern "C"  int32_t MurmurHash_Initialize_m4147079067 (RuntimeObject * __this /* static, unused */, int32_t ___seed0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___seed0;
		return L_0;
	}
}
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Update(System.Int32,System.Int32)
extern "C"  int32_t MurmurHash_Update_m4269430083 (RuntimeObject * __this /* static, unused */, int32_t ___hash0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = ((int32_t)-862048943);
		V_1 = ((int32_t)461845907);
		V_2 = ((int32_t)15);
		V_3 = ((int32_t)13);
		V_4 = 5;
		V_5 = ((int32_t)-430675100);
		int32_t L_0 = ___value1;
		V_6 = L_0;
		int32_t L_1 = V_6;
		int32_t L_2 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_6;
		int32_t L_4 = V_2;
		int32_t L_5 = V_6;
		int32_t L_6 = V_2;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31)))))|(int32_t)((int32_t)((uint32_t)L_5>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_6))&(int32_t)((int32_t)31)))))));
		int32_t L_7 = V_6;
		int32_t L_8 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8));
		int32_t L_9 = ___hash0;
		int32_t L_10 = V_6;
		___hash0 = ((int32_t)((int32_t)L_9^(int32_t)L_10));
		int32_t L_11 = ___hash0;
		int32_t L_12 = V_3;
		int32_t L_13 = ___hash0;
		int32_t L_14 = V_3;
		___hash0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)31)))))|(int32_t)((int32_t)((uint32_t)L_13>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_14))&(int32_t)((int32_t)31)))))));
		int32_t L_15 = ___hash0;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		___hash0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)L_16)), (int32_t)L_17));
		int32_t L_18 = ___hash0;
		return L_18;
	}
}
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Update(System.Int32,System.Object)
extern "C"  int32_t MurmurHash_Update_m2879193374 (RuntimeObject * __this /* static, unused */, int32_t ___hash0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___hash0;
		RuntimeObject * L_1 = ___value1;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_2 = ___value1;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		int32_t L_4 = MurmurHash_Update_m4269430083(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Antlr4.Runtime.Misc.MurmurHash::Finish(System.Int32,System.Int32)
extern "C"  int32_t MurmurHash_Finish_m3445488384 (RuntimeObject * __this /* static, unused */, int32_t ___hash0, int32_t ___numberOfWords1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___hash0;
		int32_t L_1 = ___numberOfWords1;
		___hash0 = ((int32_t)((int32_t)L_0^(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)4))));
		int32_t L_2 = ___hash0;
		int32_t L_3 = ___hash0;
		___hash0 = ((int32_t)((int32_t)L_2^(int32_t)((int32_t)((uint32_t)L_3>>((int32_t)16)))));
		int32_t L_4 = ___hash0;
		___hash0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)-2048144789)));
		int32_t L_5 = ___hash0;
		int32_t L_6 = ___hash0;
		___hash0 = ((int32_t)((int32_t)L_5^(int32_t)((int32_t)((uint32_t)L_6>>((int32_t)13)))));
		int32_t L_7 = ___hash0;
		___hash0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)-1028477387)));
		int32_t L_8 = ___hash0;
		int32_t L_9 = ___hash0;
		___hash0 = ((int32_t)((int32_t)L_8^(int32_t)((int32_t)((uint32_t)L_9>>((int32_t)16)))));
		int32_t L_10 = ___hash0;
		return L_10;
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
// System.Void Antlr4.Runtime.Misc.NotNullAttribute::.ctor()
extern "C"  void NotNullAttribute__ctor_m334831516 (NotNullAttribute_t935244695 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void Antlr4.Runtime.Misc.NullableAttribute::.ctor()
extern "C"  void NullableAttribute__ctor_m1694419243 (NullableAttribute_t2798464271 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.String Antlr4.Runtime.Misc.Utils::EscapeWhitespace(System.String,System.Boolean)
extern "C"  String_t* Utils_EscapeWhitespace_m2832940154 (RuntimeObject * __this /* static, unused */, String_t* ___s0, bool ___escapeSpaces1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_EscapeWhitespace_m2832940154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	CharU5BU5D_t3528271667* V_2 = NULL;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___s0;
		CharU5BU5D_t3528271667* L_2 = String_ToCharArray_m1492846834(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		V_3 = 0;
		goto IL_008e;
	}

IL_0014:
	{
		CharU5BU5D_t3528271667* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		Il2CppChar L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0037;
		}
	}
	{
		bool L_8 = ___escapeSpaces1;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t * L_9 = V_0;
		StringBuilder_Append_m2383614642(L_9, ((int32_t)183), /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_0037:
	{
		Il2CppChar L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t * L_11 = V_0;
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_0050:
	{
		Il2CppChar L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		StringBuilder_Append_m1965104174(L_13, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_0069:
	{
		Il2CppChar L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0082;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_0082:
	{
		StringBuilder_t * L_16 = V_0;
		Il2CppChar L_17 = V_1;
		StringBuilder_Append_m2383614642(L_16, L_17, /*hidden argument*/NULL);
	}

IL_008a:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_008e:
	{
		int32_t L_19 = V_3;
		CharU5BU5D_t3528271667* L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t * L_21 = V_0;
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		return L_22;
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
// System.Void Antlr4.Runtime.NoViableAltException::.ctor(Antlr4.Runtime.Parser)
extern "C"  void NoViableAltException__ctor_m3656066489 (NoViableAltException_t2985419920 * __this, Parser_t1471951952 * ___recognizer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NoViableAltException__ctor_m3656066489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Parser_t1471951952 * L_0 = ___recognizer0;
		Parser_t1471951952 * L_1 = ___recognizer0;
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(19 /* Antlr4.Runtime.IIntStream Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_InputStream() */, L_1);
		Parser_t1471951952 * L_3 = ___recognizer0;
		RuntimeObject* L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(28 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::get_CurrentToken() */, L_3);
		Parser_t1471951952 * L_5 = ___recognizer0;
		RuntimeObject* L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(28 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::get_CurrentToken() */, L_5);
		Parser_t1471951952 * L_7 = ___recognizer0;
		ParserRuleContext_t3215563317 * L_8 = VirtFuncInvoker0< ParserRuleContext_t3215563317 * >::Invoke(41 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_RuleContext() */, L_7);
		NoViableAltException__ctor_m2680972170(__this, L_0, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, ITokenStream_t1473438536_il2cpp_TypeInfo_var)), L_4, L_6, (ATNConfigSet_t638728265 *)NULL, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.NoViableAltException::.ctor(Antlr4.Runtime.IRecognizer,Antlr4.Runtime.ITokenStream,Antlr4.Runtime.IToken,Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ATNConfigSet,Antlr4.Runtime.ParserRuleContext)
extern "C"  void NoViableAltException__ctor_m2680972170 (NoViableAltException_t2985419920 * __this, RuntimeObject* ___recognizer0, RuntimeObject* ___input1, RuntimeObject* ___startToken2, RuntimeObject* ___offendingToken3, ATNConfigSet_t638728265 * ___deadEndConfigs4, ParserRuleContext_t3215563317 * ___ctx5, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___recognizer0;
		RuntimeObject* L_1 = ___input1;
		ParserRuleContext_t3215563317 * L_2 = ___ctx5;
		RecognitionException__ctor_m1770152451(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		ATNConfigSet_t638728265 * L_3 = ___deadEndConfigs4;
		__this->set_deadEndConfigs_16(L_3);
		RuntimeObject* L_4 = ___startToken2;
		__this->set_startToken_17(L_4);
		RuntimeObject* L_5 = ___offendingToken3;
		RecognitionException_set_OffendingToken_m4276417833(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.NoViableAltException::get_StartToken()
extern "C"  RuntimeObject* NoViableAltException_get_StartToken_m2580470021 (NoViableAltException_t2985419920 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_startToken_17();
		return L_0;
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
// System.Void Antlr4.Runtime.Parser::.ctor(Antlr4.Runtime.ITokenStream,System.IO.TextWriter,System.IO.TextWriter)
extern "C"  void Parser__ctor_m406941518 (Parser_t1471951952 * __this, RuntimeObject* ___input0, TextWriter_t3478189236 * ___output1, TextWriter_t3478189236 * ___errorOutput2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m406941518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	{
		DefaultErrorStrategy_t4185793398 * L_0 = (DefaultErrorStrategy_t4185793398 *)il2cpp_codegen_object_new(DefaultErrorStrategy_t4185793398_il2cpp_TypeInfo_var);
		DefaultErrorStrategy__ctor_m491871528(L_0, /*hidden argument*/NULL);
		__this->set__errHandler_4(L_0);
		List_1_t128053199 * L_1 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_1, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t128053199 * L_2 = V_0;
		List_1_Add_m697420525(L_2, 0, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		List_1_t128053199 * L_3 = V_0;
		__this->set__precedenceStack_6(L_3);
		__this->set__buildParseTrees_8((bool)1);
		Recognizer_2__ctor_m3024942240(__this, /*hidden argument*/Recognizer_2__ctor_m3024942240_RuntimeMethod_var);
		RuntimeObject* L_4 = ___input0;
		Parser_set_TokenStream_m1866788125(__this, L_4, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_5 = ___output1;
		__this->set_Output_12(L_5);
		TextWriter_t3478189236 * L_6 = ___errorOutput2;
		__this->set_ErrorOutput_13(L_6);
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::Reset()
extern "C"  void Parser_Reset_m3582455776 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Reset_m3582455776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ATNSimulator_t2448152846 * V_0 = NULL;
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(19 /* Antlr4.Runtime.IIntStream Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_InputStream() */, __this);
		if (!((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITokenStream_t1473438536_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(19 /* Antlr4.Runtime.IIntStream Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_InputStream() */, __this);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void Antlr4.Runtime.IIntStream::Seek(System.Int32) */, IIntStream_t2059504296_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITokenStream_t1473438536_il2cpp_TypeInfo_var)), 0);
	}

IL_0021:
	{
		RuntimeObject* L_2 = __this->get__errHandler_4();
		InterfaceActionInvoker1< Parser_t1471951952 * >::Invoke(0 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Reset(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_t164569187_il2cpp_TypeInfo_var, L_2, __this);
		__this->set__ctx_7((ParserRuleContext_t3215563317 *)NULL);
		__this->set__syntaxErrors_11(0);
		VirtActionInvoker1< bool >::Invoke(44 /* System.Void Antlr4.Runtime.Parser::set_Trace(System.Boolean) */, __this, (bool)0);
		List_1_t128053199 * L_3 = __this->get__precedenceStack_6();
		List_1_Clear_m807762771(L_3, /*hidden argument*/List_1_Clear_m807762771_RuntimeMethod_var);
		List_1_t128053199 * L_4 = __this->get__precedenceStack_6();
		List_1_Add_m697420525(L_4, 0, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		ParserATNSimulator_t1762048632 * L_5 = VirtFuncInvoker0< ParserATNSimulator_t1762048632 * >::Invoke(10 /* ATNInterpreter Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_Interpreter() */, __this);
		V_0 = L_5;
		ATNSimulator_t2448152846 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		ATNSimulator_t2448152846 * L_7 = V_0;
		VirtActionInvoker0::Invoke(4 /* System.Void Antlr4.Runtime.Atn.ATNSimulator::Reset() */, L_7);
	}

IL_006c:
	{
		return;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32)
extern "C"  RuntimeObject* Parser_Match_m1793043704 (Parser_t1471951952 * __this, int32_t ___ttype0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Match_m1793043704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(28 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::get_CurrentToken() */, __this);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IToken::get_Type() */, IToken_t679559059_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = ___ttype0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = __this->get__errHandler_4();
		InterfaceActionInvoker1< Parser_t1471951952 * >::Invoke(5 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::ReportMatch(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_t164569187_il2cpp_TypeInfo_var, L_4, __this);
		VirtFuncInvoker0< RuntimeObject* >::Invoke(30 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Consume() */, __this);
		goto IL_005c;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->get__errHandler_4();
		RuntimeObject* L_6 = InterfaceFuncInvoker1< RuntimeObject*, Parser_t1471951952 * >::Invoke(1 /* Antlr4.Runtime.IToken Antlr4.Runtime.IAntlrErrorStrategy::RecoverInline(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_t164569187_il2cpp_TypeInfo_var, L_5, __this);
		V_0 = L_6;
		bool L_7 = __this->get__buildParseTrees_8();
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Antlr4.Runtime.IToken::get_TokenIndex() */, IToken_t679559059_il2cpp_TypeInfo_var, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_005c;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_10 = __this->get__ctx_7();
		RuntimeObject* L_11 = V_0;
		VirtFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(27 /* Antlr4.Runtime.Tree.IErrorNode Antlr4.Runtime.ParserRuleContext::AddErrorNode(Antlr4.Runtime.IToken) */, L_10, L_11);
	}

IL_005c:
	{
		RuntimeObject* L_12 = V_0;
		return L_12;
	}
}
// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTreeListener> Antlr4.Runtime.Parser::get_ParseListeners()
extern "C"  RuntimeObject* Parser_get_ParseListeners_m2813631707 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_ParseListeners_m2813631707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get__parseListeners_10();
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		IParseTreeListenerU5BU5D_t672341357* L_2 = Collections_EmptyList_TisIParseTreeListener_t2202621444_m1710973521(NULL /*static, unused*/, /*hidden argument*/Collections_EmptyList_TisIParseTreeListener_t2202621444_m1710973521_RuntimeMethod_var);
		return (RuntimeObject*)L_2;
	}

IL_0013:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Void Antlr4.Runtime.Parser::AddParseListener(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Parser_AddParseListener_m1298435566 (Parser_t1471951952 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_AddParseListener_m1298435566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___listener0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4263589583, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		RuntimeObject* L_2 = __this->get__parseListeners_10();
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		List_1_t3674696186 * L_3 = (List_1_t3674696186 *)il2cpp_codegen_object_new(List_1_t3674696186_il2cpp_TypeInfo_var);
		List_1__ctor_m2675073037(L_3, /*hidden argument*/List_1__ctor_m2675073037_RuntimeMethod_var);
		__this->set__parseListeners_10(L_3);
	}

IL_0027:
	{
		RuntimeObject* L_4 = __this->get__parseListeners_10();
		RuntimeObject* L_5 = ___listener0;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTreeListener>::Add(!0) */, ICollection_1_t735806382_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::RemoveParseListener(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Parser_RemoveParseListener_m1801343579 (Parser_t1471951952 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_RemoveParseListener_m1801343579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__parseListeners_10();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__parseListeners_10();
		RuntimeObject* L_2 = ___listener0;
		bool L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTreeListener>::Remove(!0) */, ICollection_1_t735806382_il2cpp_TypeInfo_var, L_1, L_2);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_4 = __this->get__parseListeners_10();
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTreeListener>::get_Count() */, ICollection_1_t735806382_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		__this->set__parseListeners_10((RuntimeObject*)NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::TriggerEnterRuleEvent()
extern "C"  void Parser_TriggerEnterRuleEvent_m2172201693 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_TriggerEnterRuleEvent_m2172201693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = __this->get__parseListeners_10();
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Tree.IParseTreeListener>::GetEnumerator() */, IEnumerable_1_t1182474333_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.Tree.IParseTreeListener>::get_Current() */, IEnumerator_1_t2635191912_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			RuntimeObject* L_4 = V_0;
			ParserRuleContext_t3215563317 * L_5 = __this->get__ctx_7();
			InterfaceActionInvoker1< ParserRuleContext_t3215563317 * >::Invoke(2 /* System.Void Antlr4.Runtime.Tree.IParseTreeListener::EnterEveryRule(Antlr4.Runtime.ParserRuleContext) */, IParseTreeListener_t2202621444_il2cpp_TypeInfo_var, L_4, L_5);
			ParserRuleContext_t3215563317 * L_6 = __this->get__ctx_7();
			RuntimeObject* L_7 = V_0;
			VirtActionInvoker1< RuntimeObject* >::Invoke(21 /* System.Void Antlr4.Runtime.ParserRuleContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener) */, L_6, L_7);
		}

IL_0030:
		{
			RuntimeObject* L_8 = V_1;
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_11 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::TriggerExitRuleEvent()
extern "C"  void Parser_TriggerExitRuleEvent_m3719113121 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_TriggerExitRuleEvent_m3719113121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->get__parseListeners_10();
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__parseListeners_10();
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTreeListener>::get_Count() */, ICollection_1_t735806382_il2cpp_TypeInfo_var, L_1);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		goto IL_0047;
	}

IL_001e:
	{
		RuntimeObject* L_3 = __this->get__parseListeners_10();
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTreeListener>::get_Item(System.Int32) */, IList_1_t4017941227_il2cpp_TypeInfo_var, L_3, L_4);
		V_1 = L_5;
		ParserRuleContext_t3215563317 * L_6 = __this->get__ctx_7();
		RuntimeObject* L_7 = V_1;
		VirtActionInvoker1< RuntimeObject* >::Invoke(22 /* System.Void Antlr4.Runtime.ParserRuleContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener) */, L_6, L_7);
		RuntimeObject* L_8 = V_1;
		ParserRuleContext_t3215563317 * L_9 = __this->get__ctx_7();
		InterfaceActionInvoker1< ParserRuleContext_t3215563317 * >::Invoke(3 /* System.Void Antlr4.Runtime.Tree.IParseTreeListener::ExitEveryRule(Antlr4.Runtime.ParserRuleContext) */, IParseTreeListener_t2202621444_il2cpp_TypeInfo_var, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}

IL_004e:
	{
		return;
	}
}
// Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler()
extern "C"  RuntimeObject* Parser_get_ErrorHandler_m4227356494 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__errHandler_4();
		return L_0;
	}
}
// Antlr4.Runtime.IIntStream Antlr4.Runtime.Parser::get_InputStream()
extern "C"  RuntimeObject* Parser_get_InputStream_m41677497 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__input_5();
		return L_0;
	}
}
// Antlr4.Runtime.ITokenStream Antlr4.Runtime.Parser::get_TokenStream()
extern "C"  RuntimeObject* Parser_get_TokenStream_m3581343062 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__input_5();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.Parser::set_TokenStream(Antlr4.Runtime.ITokenStream)
extern "C"  void Parser_set_TokenStream_m1866788125 (Parser_t1471951952 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		__this->set__input_5((RuntimeObject*)NULL);
		VirtActionInvoker0::Invoke(20 /* System.Void Antlr4.Runtime.Parser::Reset() */, __this);
		RuntimeObject* L_0 = ___value0;
		__this->set__input_5(L_0);
		return;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.Parser::get_CurrentToken()
extern "C"  RuntimeObject* Parser_get_CurrentToken_m1702825664 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_CurrentToken_m1702825664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__input_5();
		RuntimeObject* L_1 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_t1473438536_il2cpp_TypeInfo_var, L_0, 1);
		return L_1;
	}
}
// System.Void Antlr4.Runtime.Parser::NotifyErrorListeners(Antlr4.Runtime.IToken,System.String,Antlr4.Runtime.RecognitionException)
extern "C"  void Parser_NotifyErrorListeners_m73282294 (Parser_t1471951952 * __this, RuntimeObject* ___offendingToken0, String_t* ___msg1, RecognitionException_t4252147236 * ___e2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_NotifyErrorListeners_m73282294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = __this->get__syntaxErrors_11();
		__this->set__syntaxErrors_11(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		V_0 = (-1);
		V_1 = (-1);
		RuntimeObject* L_1 = ___offendingToken0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_2 = ___offendingToken0;
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Antlr4.Runtime.IToken::get_Line() */, IToken_t679559059_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = ___offendingToken0;
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Antlr4.Runtime.IToken::get_Column() */, IToken_t679559059_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
	}

IL_0026:
	{
		RuntimeObject* L_6 = Parser_get_ErrorListenerDispatch_m3809067462(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		RuntimeObject* L_7 = V_2;
		TextWriter_t3478189236 * L_8 = __this->get_ErrorOutput_13();
		RuntimeObject* L_9 = ___offendingToken0;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		String_t* L_12 = ___msg1;
		RecognitionException_t4252147236 * L_13 = ___e2;
		InterfaceActionInvoker7< TextWriter_t3478189236 *, RuntimeObject*, RuntimeObject*, int32_t, int32_t, String_t*, RecognitionException_t4252147236 * >::Invoke(0 /* System.Void Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>::SyntaxError(System.IO.TextWriter,Antlr4.Runtime.IRecognizer,TSymbol,System.Int32,System.Int32,System.String,Antlr4.Runtime.RecognitionException) */, IAntlrErrorListener_1_t3826527769_il2cpp_TypeInfo_var, L_7, L_8, __this, L_9, L_10, L_11, L_12, L_13);
		return;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Consume()
extern "C"  RuntimeObject* Parser_Consume_m2677757258 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Consume_m2677757258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(28 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::get_CurrentToken() */, __this);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IToken::get_Type() */, IToken_t679559059_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(19 /* Antlr4.Runtime.IIntStream Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_InputStream() */, __this);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Antlr4.Runtime.IIntStream::Consume() */, IIntStream_t2059504296_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ITokenStream_t1473438536_il2cpp_TypeInfo_var)));
	}

IL_0023:
	{
		RuntimeObject* L_4 = __this->get__parseListeners_10();
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_5 = __this->get__parseListeners_10();
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTreeListener>::get_Count() */, ICollection_1_t735806382_il2cpp_TypeInfo_var, L_5);
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = 0;
	}

IL_0042:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = __this->get__buildParseTrees_8();
		if (L_7)
		{
			goto IL_0054;
		}
	}
	{
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0120;
		}
	}

IL_0054:
	{
		RuntimeObject* L_9 = __this->get__errHandler_4();
		bool L_10 = InterfaceFuncInvoker1< bool, Parser_t1471951952 * >::Invoke(4 /* System.Boolean Antlr4.Runtime.IAntlrErrorStrategy::InErrorRecoveryMode(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_t164569187_il2cpp_TypeInfo_var, L_9, __this);
		if (!L_10)
		{
			goto IL_00c3;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_11 = __this->get__ctx_7();
		RuntimeObject* L_12 = V_0;
		RuntimeObject* L_13 = VirtFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(27 /* Antlr4.Runtime.Tree.IErrorNode Antlr4.Runtime.ParserRuleContext::AddErrorNode(Antlr4.Runtime.IToken) */, L_11, L_12);
		V_2 = L_13;
		RuntimeObject* L_14 = __this->get__parseListeners_10();
		if (!L_14)
		{
			goto IL_00be;
		}
	}
	{
		RuntimeObject* L_15 = __this->get__parseListeners_10();
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Tree.IParseTreeListener>::GetEnumerator() */, IEnumerable_1_t1182474333_il2cpp_TypeInfo_var, L_15);
		V_4 = L_16;
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009e;
		}

IL_008f:
		{
			RuntimeObject* L_17 = V_4;
			RuntimeObject* L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.Tree.IParseTreeListener>::get_Current() */, IEnumerator_1_t2635191912_il2cpp_TypeInfo_var, L_17);
			V_3 = L_18;
			RuntimeObject* L_19 = V_3;
			RuntimeObject* L_20 = V_2;
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Antlr4.Runtime.Tree.IParseTreeListener::VisitErrorNode(Antlr4.Runtime.Tree.IErrorNode) */, IParseTreeListener_t2202621444_il2cpp_TypeInfo_var, L_19, L_20);
		}

IL_009e:
		{
			RuntimeObject* L_21 = V_4;
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_008f;
			}
		}

IL_00aa:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00af);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_4;
			if (!L_23)
			{
				goto IL_00bd;
			}
		}

IL_00b6:
		{
			RuntimeObject* L_24 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_24);
		}

IL_00bd:
		{
			IL2CPP_END_FINALLY(175)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00be:
	{
		goto IL_0120;
	}

IL_00c3:
	{
		ParserRuleContext_t3215563317 * L_25 = __this->get__ctx_7();
		RuntimeObject* L_26 = V_0;
		RuntimeObject* L_27 = VirtFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(26 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.IToken) */, L_25, L_26);
		V_5 = L_27;
		RuntimeObject* L_28 = __this->get__parseListeners_10();
		if (!L_28)
		{
			goto IL_0120;
		}
	}
	{
		RuntimeObject* L_29 = __this->get__parseListeners_10();
		RuntimeObject* L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Tree.IParseTreeListener>::GetEnumerator() */, IEnumerable_1_t1182474333_il2cpp_TypeInfo_var, L_29);
		V_7 = L_30;
	}

IL_00e9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0100;
		}

IL_00ee:
		{
			RuntimeObject* L_31 = V_7;
			RuntimeObject* L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.Tree.IParseTreeListener>::get_Current() */, IEnumerator_1_t2635191912_il2cpp_TypeInfo_var, L_31);
			V_6 = L_32;
			RuntimeObject* L_33 = V_6;
			RuntimeObject* L_34 = V_5;
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Antlr4.Runtime.Tree.IParseTreeListener::VisitTerminal(Antlr4.Runtime.Tree.ITerminalNode) */, IParseTreeListener_t2202621444_il2cpp_TypeInfo_var, L_33, L_34);
		}

IL_0100:
		{
			RuntimeObject* L_35 = V_7;
			bool L_36 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_35);
			if (L_36)
			{
				goto IL_00ee;
			}
		}

IL_010c:
		{
			IL2CPP_LEAVE(0x120, FINALLY_0111);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0111;
	}

FINALLY_0111:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_37 = V_7;
			if (!L_37)
			{
				goto IL_011f;
			}
		}

IL_0118:
		{
			RuntimeObject* L_38 = V_7;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_38);
		}

IL_011f:
		{
			IL2CPP_END_FINALLY(273)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(273)
	{
		IL2CPP_JUMP_TBL(0x120, IL_0120)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0120:
	{
		RuntimeObject* L_39 = V_0;
		return L_39;
	}
}
// System.Void Antlr4.Runtime.Parser::AddContextToParseTree()
extern "C"  void Parser_AddContextToParseTree_m1383133436 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_AddContextToParseTree_m1383133436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParserRuleContext_t3215563317 * V_0 = NULL;
	{
		ParserRuleContext_t3215563317 * L_0 = __this->get__ctx_7();
		RuleContext_t846066196 * L_1 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_0);
		V_0 = ((ParserRuleContext_t3215563317 *)CastclassClass((RuntimeObject*)L_1, ParserRuleContext_t3215563317_il2cpp_TypeInfo_var));
		ParserRuleContext_t3215563317 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_3 = V_0;
		ParserRuleContext_t3215563317 * L_4 = __this->get__ctx_7();
		VirtActionInvoker1< RuleContext_t846066196 * >::Invoke(24 /* System.Void Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.RuleContext) */, L_3, L_4);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::EnterRule(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32)
extern "C"  void Parser_EnterRule_m895376233 (Parser_t1471951952 * __this, ParserRuleContext_t3215563317 * ___localctx0, int32_t ___state1, int32_t ___ruleIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EnterRule_m895376233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___state1;
		Recognizer_2_set_State_m3977995112(__this, L_0, /*hidden argument*/Recognizer_2_set_State_m3977995112_RuntimeMethod_var);
		ParserRuleContext_t3215563317 * L_1 = ___localctx0;
		__this->set__ctx_7(L_1);
		ParserRuleContext_t3215563317 * L_2 = __this->get__ctx_7();
		RuntimeObject* L_3 = __this->get__input_5();
		RuntimeObject* L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_t1473438536_il2cpp_TypeInfo_var, L_3, 1);
		VirtActionInvoker1< RuntimeObject* >::Invoke(33 /* System.Void Antlr4.Runtime.ParserRuleContext::set_Start(Antlr4.Runtime.IToken) */, L_2, L_4);
		bool L_5 = __this->get__buildParseTrees_8();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		VirtActionInvoker0::Invoke(31 /* System.Void Antlr4.Runtime.Parser::AddContextToParseTree() */, __this);
	}

IL_0036:
	{
		RuntimeObject* L_6 = __this->get__parseListeners_10();
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		VirtActionInvoker0::Invoke(25 /* System.Void Antlr4.Runtime.Parser::TriggerEnterRuleEvent() */, __this);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::ExitRule()
extern "C"  void Parser_ExitRule_m2008393058 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ExitRule_m2008393058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = __this->get__ctx_7();
		RuntimeObject* L_1 = __this->get__input_5();
		RuntimeObject* L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_t1473438536_il2cpp_TypeInfo_var, L_1, (-1));
		VirtActionInvoker1< RuntimeObject* >::Invoke(35 /* System.Void Antlr4.Runtime.ParserRuleContext::set_Stop(Antlr4.Runtime.IToken) */, L_0, L_2);
		RuntimeObject* L_3 = __this->get__parseListeners_10();
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		VirtActionInvoker0::Invoke(26 /* System.Void Antlr4.Runtime.Parser::TriggerExitRuleEvent() */, __this);
	}

IL_0028:
	{
		ParserRuleContext_t3215563317 * L_4 = __this->get__ctx_7();
		int32_t L_5 = ((RuleContext_t846066196 *)L_4)->get_invokingState_1();
		Recognizer_2_set_State_m3977995112(__this, L_5, /*hidden argument*/Recognizer_2_set_State_m3977995112_RuntimeMethod_var);
		ParserRuleContext_t3215563317 * L_6 = __this->get__ctx_7();
		RuleContext_t846066196 * L_7 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_6);
		__this->set__ctx_7(((ParserRuleContext_t3215563317 *)CastclassClass((RuntimeObject*)L_7, ParserRuleContext_t3215563317_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::EnterOuterAlt(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Parser_EnterOuterAlt_m1961378988 (Parser_t1471951952 * __this, ParserRuleContext_t3215563317 * ___localctx0, int32_t ___altNum1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EnterOuterAlt_m1961378988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParserRuleContext_t3215563317 * V_0 = NULL;
	{
		ParserRuleContext_t3215563317 * L_0 = ___localctx0;
		int32_t L_1 = ___altNum1;
		VirtActionInvoker1< int32_t >::Invoke(14 /* System.Void Antlr4.Runtime.RuleContext::setAltNumber(System.Int32) */, L_0, L_1);
		bool L_2 = __this->get__buildParseTrees_8();
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_3 = __this->get__ctx_7();
		ParserRuleContext_t3215563317 * L_4 = ___localctx0;
		if ((((RuntimeObject*)(ParserRuleContext_t3215563317 *)L_3) == ((RuntimeObject*)(ParserRuleContext_t3215563317 *)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_5 = __this->get__ctx_7();
		RuleContext_t846066196 * L_6 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_5);
		V_0 = ((ParserRuleContext_t3215563317 *)CastclassClass((RuntimeObject*)L_6, ParserRuleContext_t3215563317_il2cpp_TypeInfo_var));
		ParserRuleContext_t3215563317 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_8 = V_0;
		VirtActionInvoker0::Invoke(25 /* System.Void Antlr4.Runtime.ParserRuleContext::RemoveLastChild() */, L_8);
		ParserRuleContext_t3215563317 * L_9 = V_0;
		ParserRuleContext_t3215563317 * L_10 = ___localctx0;
		VirtActionInvoker1< RuleContext_t846066196 * >::Invoke(24 /* System.Void Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.RuleContext) */, L_9, L_10);
	}

IL_0042:
	{
		ParserRuleContext_t3215563317 * L_11 = ___localctx0;
		__this->set__ctx_7(L_11);
		return;
	}
}
// System.Int32 Antlr4.Runtime.Parser::get_Precedence()
extern "C"  int32_t Parser_get_Precedence_m4017377402 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_Precedence_m4017377402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t128053199 * L_0 = __this->get__precedenceStack_6();
		int32_t L_1 = List_1_get_Count_m639705184(L_0, /*hidden argument*/List_1_get_Count_m639705184_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		List_1_t128053199 * L_2 = __this->get__precedenceStack_6();
		List_1_t128053199 * L_3 = __this->get__precedenceStack_6();
		int32_t L_4 = List_1_get_Count_m639705184(L_3, /*hidden argument*/List_1_get_Count_m639705184_RuntimeMethod_var);
		int32_t L_5 = List_1_get_Item_m3082246979(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3082246979_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Antlr4.Runtime.Parser::EnterRecursionRule(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32,System.Int32)
extern "C"  void Parser_EnterRecursionRule_m65286469 (Parser_t1471951952 * __this, ParserRuleContext_t3215563317 * ___localctx0, int32_t ___state1, int32_t ___ruleIndex2, int32_t ___precedence3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EnterRecursionRule_m65286469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___state1;
		Recognizer_2_set_State_m3977995112(__this, L_0, /*hidden argument*/Recognizer_2_set_State_m3977995112_RuntimeMethod_var);
		List_1_t128053199 * L_1 = __this->get__precedenceStack_6();
		int32_t L_2 = ___precedence3;
		List_1_Add_m697420525(L_1, L_2, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		ParserRuleContext_t3215563317 * L_3 = ___localctx0;
		__this->set__ctx_7(L_3);
		ParserRuleContext_t3215563317 * L_4 = __this->get__ctx_7();
		RuntimeObject* L_5 = __this->get__input_5();
		RuntimeObject* L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_t1473438536_il2cpp_TypeInfo_var, L_5, 1);
		VirtActionInvoker1< RuntimeObject* >::Invoke(33 /* System.Void Antlr4.Runtime.ParserRuleContext::set_Start(Antlr4.Runtime.IToken) */, L_4, L_6);
		RuntimeObject* L_7 = __this->get__parseListeners_10();
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		VirtActionInvoker0::Invoke(25 /* System.Void Antlr4.Runtime.Parser::TriggerEnterRuleEvent() */, __this);
	}

IL_0043:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::PushNewRecursionContext(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32)
extern "C"  void Parser_PushNewRecursionContext_m2088685762 (Parser_t1471951952 * __this, ParserRuleContext_t3215563317 * ___localctx0, int32_t ___state1, int32_t ___ruleIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_PushNewRecursionContext_m2088685762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParserRuleContext_t3215563317 * V_0 = NULL;
	{
		ParserRuleContext_t3215563317 * L_0 = __this->get__ctx_7();
		V_0 = L_0;
		ParserRuleContext_t3215563317 * L_1 = V_0;
		ParserRuleContext_t3215563317 * L_2 = ___localctx0;
		VirtActionInvoker1< RuleContext_t846066196 * >::Invoke(11 /* System.Void Antlr4.Runtime.RuleContext::set_Parent(Antlr4.Runtime.RuleContext) */, L_1, L_2);
		ParserRuleContext_t3215563317 * L_3 = V_0;
		int32_t L_4 = ___state1;
		((RuleContext_t846066196 *)L_3)->set_invokingState_1(L_4);
		ParserRuleContext_t3215563317 * L_5 = V_0;
		RuntimeObject* L_6 = __this->get__input_5();
		RuntimeObject* L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_t1473438536_il2cpp_TypeInfo_var, L_6, (-1));
		VirtActionInvoker1< RuntimeObject* >::Invoke(35 /* System.Void Antlr4.Runtime.ParserRuleContext::set_Stop(Antlr4.Runtime.IToken) */, L_5, L_7);
		ParserRuleContext_t3215563317 * L_8 = ___localctx0;
		__this->set__ctx_7(L_8);
		ParserRuleContext_t3215563317 * L_9 = __this->get__ctx_7();
		ParserRuleContext_t3215563317 * L_10 = V_0;
		RuntimeObject* L_11 = VirtFuncInvoker0< RuntimeObject* >::Invoke(32 /* Antlr4.Runtime.IToken Antlr4.Runtime.ParserRuleContext::get_Start() */, L_10);
		VirtActionInvoker1< RuntimeObject* >::Invoke(33 /* System.Void Antlr4.Runtime.ParserRuleContext::set_Start(Antlr4.Runtime.IToken) */, L_9, L_11);
		bool L_12 = __this->get__buildParseTrees_8();
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_13 = __this->get__ctx_7();
		ParserRuleContext_t3215563317 * L_14 = V_0;
		VirtActionInvoker1< RuleContext_t846066196 * >::Invoke(24 /* System.Void Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.RuleContext) */, L_13, L_14);
	}

IL_0056:
	{
		RuntimeObject* L_15 = __this->get__parseListeners_10();
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		VirtActionInvoker0::Invoke(25 /* System.Void Antlr4.Runtime.Parser::TriggerEnterRuleEvent() */, __this);
	}

IL_0067:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::UnrollRecursionContexts(Antlr4.Runtime.ParserRuleContext)
extern "C"  void Parser_UnrollRecursionContexts_m3893029095 (Parser_t1471951952 * __this, ParserRuleContext_t3215563317 * ____parentctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_UnrollRecursionContexts_m3893029095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParserRuleContext_t3215563317 * V_0 = NULL;
	{
		List_1_t128053199 * L_0 = __this->get__precedenceStack_6();
		List_1_t128053199 * L_1 = __this->get__precedenceStack_6();
		int32_t L_2 = List_1_get_Count_m639705184(L_1, /*hidden argument*/List_1_get_Count_m639705184_RuntimeMethod_var);
		List_1_RemoveAt_m3700982366(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m3700982366_RuntimeMethod_var);
		ParserRuleContext_t3215563317 * L_3 = __this->get__ctx_7();
		RuntimeObject* L_4 = __this->get__input_5();
		RuntimeObject* L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_t1473438536_il2cpp_TypeInfo_var, L_4, (-1));
		VirtActionInvoker1< RuntimeObject* >::Invoke(35 /* System.Void Antlr4.Runtime.ParserRuleContext::set_Stop(Antlr4.Runtime.IToken) */, L_3, L_5);
		ParserRuleContext_t3215563317 * L_6 = __this->get__ctx_7();
		V_0 = L_6;
		RuntimeObject* L_7 = __this->get__parseListeners_10();
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		goto IL_0062;
	}

IL_0046:
	{
		VirtActionInvoker0::Invoke(26 /* System.Void Antlr4.Runtime.Parser::TriggerExitRuleEvent() */, __this);
		ParserRuleContext_t3215563317 * L_8 = __this->get__ctx_7();
		RuleContext_t846066196 * L_9 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_8);
		__this->set__ctx_7(((ParserRuleContext_t3215563317 *)CastclassClass((RuntimeObject*)L_9, ParserRuleContext_t3215563317_il2cpp_TypeInfo_var)));
	}

IL_0062:
	{
		ParserRuleContext_t3215563317 * L_10 = __this->get__ctx_7();
		ParserRuleContext_t3215563317 * L_11 = ____parentctx0;
		if ((!(((RuntimeObject*)(ParserRuleContext_t3215563317 *)L_10) == ((RuntimeObject*)(ParserRuleContext_t3215563317 *)L_11))))
		{
			goto IL_0046;
		}
	}
	{
		goto IL_007a;
	}

IL_0073:
	{
		ParserRuleContext_t3215563317 * L_12 = ____parentctx0;
		__this->set__ctx_7(L_12);
	}

IL_007a:
	{
		ParserRuleContext_t3215563317 * L_13 = V_0;
		ParserRuleContext_t3215563317 * L_14 = ____parentctx0;
		VirtActionInvoker1< RuleContext_t846066196 * >::Invoke(11 /* System.Void Antlr4.Runtime.RuleContext::set_Parent(Antlr4.Runtime.RuleContext) */, L_13, L_14);
		bool L_15 = __this->get__buildParseTrees_8();
		if (!L_15)
		{
			goto IL_0099;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_16 = ____parentctx0;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		ParserRuleContext_t3215563317 * L_17 = ____parentctx0;
		ParserRuleContext_t3215563317 * L_18 = V_0;
		VirtActionInvoker1< RuleContext_t846066196 * >::Invoke(24 /* System.Void Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.RuleContext) */, L_17, L_18);
	}

IL_0099:
	{
		return;
	}
}
// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context()
extern "C"  ParserRuleContext_t3215563317 * Parser_get_Context_m3587053688 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	{
		ParserRuleContext_t3215563317 * L_0 = __this->get__ctx_7();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.Parser::set_Context(Antlr4.Runtime.ParserRuleContext)
extern "C"  void Parser_set_Context_m3221924854 (Parser_t1471951952 * __this, ParserRuleContext_t3215563317 * ___value0, const RuntimeMethod* method)
{
	ParserRuleContext_t3215563317 * V_0 = NULL;
	{
		ParserRuleContext_t3215563317 * L_0 = ___value0;
		V_0 = L_0;
		ParserRuleContext_t3215563317 * L_1 = V_0;
		__this->set__ctx_7(L_1);
		return;
	}
}
// System.Boolean Antlr4.Runtime.Parser::Precpred(Antlr4.Runtime.RuleContext,System.Int32)
extern "C"  bool Parser_Precpred_m3641040778 (Parser_t1471951952 * __this, RuleContext_t846066196 * ___localctx0, int32_t ___precedence1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Precpred_m3641040778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___precedence1;
		List_1_t128053199 * L_1 = __this->get__precedenceStack_6();
		List_1_t128053199 * L_2 = __this->get__precedenceStack_6();
		int32_t L_3 = List_1_get_Count_m639705184(L_2, /*hidden argument*/List_1_get_Count_m639705184_RuntimeMethod_var);
		int32_t L_4 = List_1_get_Item_m3082246979(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3082246979_RuntimeMethod_var);
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Antlr4.Runtime.IParserErrorListener Antlr4.Runtime.Parser::get_ErrorListenerDispatch()
extern "C"  RuntimeObject* Parser_get_ErrorListenerDispatch_m3809067462 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_ErrorListenerDispatch_m3809067462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(14 /* System.Collections.Generic.IList`1<Antlr4.Runtime.IAntlrErrorListener`1<Symbol>> Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_ErrorListeners() */, __this);
		ProxyParserErrorListener_t2678295775 * L_1 = (ProxyParserErrorListener_t2678295775 *)il2cpp_codegen_object_new(ProxyParserErrorListener_t2678295775_il2cpp_TypeInfo_var);
		ProxyParserErrorListener__ctor_m650388731(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Parser::GetExpectedTokens()
extern "C"  IntervalSet_t1736846379 * Parser_GetExpectedTokens_m3841769549 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_GetExpectedTokens_m3841769549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ATN_t715137711 * L_0 = VirtFuncInvoker0< ATN_t715137711 * >::Invoke(9 /* Antlr4.Runtime.Atn.ATN Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_Atn() */, __this);
		int32_t L_1 = Recognizer_2_get_State_m3060556933(__this, /*hidden argument*/Recognizer_2_get_State_m3060556933_RuntimeMethod_var);
		ParserRuleContext_t3215563317 * L_2 = VirtFuncInvoker0< ParserRuleContext_t3215563317 * >::Invoke(38 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context() */, __this);
		IntervalSet_t1736846379 * L_3 = VirtFuncInvoker2< IntervalSet_t1736846379 *, int32_t, RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Atn.ATN::GetExpectedTokens(System.Int32,Antlr4.Runtime.RuleContext) */, L_0, L_1, L_2);
		return L_3;
	}
}
// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_RuleContext()
extern "C"  ParserRuleContext_t3215563317 * Parser_get_RuleContext_m628960819 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	{
		ParserRuleContext_t3215563317 * L_0 = __this->get__ctx_7();
		return L_0;
	}
}
// System.Collections.Generic.IList`1<System.String> Antlr4.Runtime.Parser::GetRuleInvocationStack()
extern "C"  RuntimeObject* Parser_GetRuleInvocationStack_m360266089 (Parser_t1471951952 * __this, const RuntimeMethod* method)
{
	{
		ParserRuleContext_t3215563317 * L_0 = __this->get__ctx_7();
		RuntimeObject* L_1 = VirtFuncInvoker1< RuntimeObject*, RuleContext_t846066196 * >::Invoke(43 /* System.Collections.Generic.IList`1<System.String> Antlr4.Runtime.Parser::GetRuleInvocationStack(Antlr4.Runtime.RuleContext) */, __this, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IList`1<System.String> Antlr4.Runtime.Parser::GetRuleInvocationStack(Antlr4.Runtime.RuleContext)
extern "C"  RuntimeObject* Parser_GetRuleInvocationStack_m139238304 (Parser_t1471951952 * __this, RuleContext_t846066196 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_GetRuleInvocationStack_m139238304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(7 /* System.String[] Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_RuleNames() */, __this);
		V_0 = L_0;
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_1, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_1 = (RuntimeObject*)L_1;
		goto IL_0041;
	}

IL_0012:
	{
		RuleContext_t846066196 * L_2 = ___p0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 Antlr4.Runtime.RuleContext::get_RuleIndex() */, L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_5, _stringLiteral3665161959);
		goto IL_0039;
	}

IL_0030:
	{
		RuntimeObject* L_6 = V_1;
		StringU5BU5D_t1281789340* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_6, L_10);
	}

IL_0039:
	{
		RuleContext_t846066196 * L_11 = ___p0;
		RuleContext_t846066196 * L_12 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_11);
		___p0 = L_12;
	}

IL_0041:
	{
		RuleContext_t846066196 * L_13 = ___p0;
		if (L_13)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_14 = V_1;
		return L_14;
	}
}
// System.Void Antlr4.Runtime.Parser::set_Trace(System.Boolean)
extern "C"  void Parser_set_Trace_m1298068963 (Parser_t1471951952 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_set_Trace_m1298068963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		TraceListener_t761327790 * L_2 = __this->get__tracer_9();
		VirtActionInvoker1< RuntimeObject* >::Invoke(24 /* System.Void Antlr4.Runtime.Parser::RemoveParseListener(Antlr4.Runtime.Tree.IParseTreeListener) */, __this, L_2);
		__this->set__tracer_9((TraceListener_t761327790 *)NULL);
		goto IL_0054;
	}

IL_0020:
	{
		TraceListener_t761327790 * L_3 = __this->get__tracer_9();
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		TraceListener_t761327790 * L_4 = __this->get__tracer_9();
		VirtActionInvoker1< RuntimeObject* >::Invoke(24 /* System.Void Antlr4.Runtime.Parser::RemoveParseListener(Antlr4.Runtime.Tree.IParseTreeListener) */, __this, L_4);
		goto IL_0048;
	}

IL_003c:
	{
		TraceListener_t761327790 * L_5 = (TraceListener_t761327790 *)il2cpp_codegen_object_new(TraceListener_t761327790_il2cpp_TypeInfo_var);
		TraceListener__ctor_m1636313176(L_5, __this, /*hidden argument*/NULL);
		__this->set__tracer_9(L_5);
	}

IL_0048:
	{
		TraceListener_t761327790 * L_6 = __this->get__tracer_9();
		VirtActionInvoker1< RuntimeObject* >::Invoke(23 /* System.Void Antlr4.Runtime.Parser::AddParseListener(Antlr4.Runtime.Tree.IParseTreeListener) */, __this, L_6);
	}

IL_0054:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Parser::.cctor()
extern "C"  void Parser__cctor_m3396906171 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__cctor_m3396906171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t500394010 * L_0 = (Dictionary_2_t500394010 *)il2cpp_codegen_object_new(Dictionary_2_t500394010_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m459584435(L_0, /*hidden argument*/Dictionary_2__ctor_m459584435_RuntimeMethod_var);
		((Parser_t1471951952_StaticFields*)il2cpp_codegen_static_fields_for(Parser_t1471951952_il2cpp_TypeInfo_var))->set_bypassAltsAtnCache_3(L_0);
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
// System.Void Antlr4.Runtime.Parser/TraceListener::.ctor(Antlr4.Runtime.Parser)
extern "C"  void TraceListener__ctor_m1636313176 (TraceListener_t761327790 * __this, Parser_t1471951952 * ____enclosing0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Parser_t1471951952 * L_0 = ____enclosing0;
		__this->set__enclosing_1(L_0);
		return;
	}
}
// System.Void Antlr4.Runtime.Parser/TraceListener::EnterEveryRule(Antlr4.Runtime.ParserRuleContext)
extern "C"  void TraceListener_EnterEveryRule_m3890510524 (TraceListener_t761327790 * __this, ParserRuleContext_t3215563317 * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TraceListener_EnterEveryRule_m3890510524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = __this->get_Output_0();
		Parser_t1471951952 * L_1 = __this->get__enclosing_1();
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(7 /* System.String[] Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_RuleNames() */, L_1);
		ParserRuleContext_t3215563317 * L_3 = ___ctx0;
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 Antlr4.Runtime.RuleContext::get_RuleIndex() */, L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Parser_t1471951952 * L_7 = __this->get__enclosing_1();
		RuntimeObject* L_8 = L_7->get__input_5();
		RuntimeObject* L_9 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_t1473438536_il2cpp_TypeInfo_var, L_8, 1);
		String_t* L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Antlr4.Runtime.IToken::get_Text() */, IToken_t679559059_il2cpp_TypeInfo_var, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3820389399, L_6, _stringLiteral1010394833, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_0, L_11);
		return;
	}
}
// System.Void Antlr4.Runtime.Parser/TraceListener::ExitEveryRule(Antlr4.Runtime.ParserRuleContext)
extern "C"  void TraceListener_ExitEveryRule_m3804216621 (TraceListener_t761327790 * __this, ParserRuleContext_t3215563317 * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TraceListener_ExitEveryRule_m3804216621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t3478189236 * L_0 = __this->get_Output_0();
		Parser_t1471951952 * L_1 = __this->get__enclosing_1();
		StringU5BU5D_t1281789340* L_2 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(7 /* System.String[] Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_RuleNames() */, L_1);
		ParserRuleContext_t3215563317 * L_3 = ___ctx0;
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 Antlr4.Runtime.RuleContext::get_RuleIndex() */, L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Parser_t1471951952 * L_7 = __this->get__enclosing_1();
		RuntimeObject* L_8 = L_7->get__input_5();
		RuntimeObject* L_9 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_t1473438536_il2cpp_TypeInfo_var, L_8, 1);
		String_t* L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Antlr4.Runtime.IToken::get_Text() */, IToken_t679559059_il2cpp_TypeInfo_var, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral2331149708, L_6, _stringLiteral1010394833, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_0, L_11);
		return;
	}
}
// System.Void Antlr4.Runtime.Parser/TraceListener::VisitErrorNode(Antlr4.Runtime.Tree.IErrorNode)
extern "C"  void TraceListener_VisitErrorNode_m777615826 (TraceListener_t761327790 * __this, RuntimeObject* ___node0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Antlr4.Runtime.Parser/TraceListener::VisitTerminal(Antlr4.Runtime.Tree.ITerminalNode)
extern "C"  void TraceListener_VisitTerminal_m1545369418 (TraceListener_t761327790 * __this, RuntimeObject* ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TraceListener_VisitTerminal_m1545369418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParserRuleContext_t3215563317 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___node0;
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Antlr4.Runtime.Tree.IRuleNode Antlr4.Runtime.Tree.ITerminalNode::get_Parent() */, ITerminalNode_t3564352371_il2cpp_TypeInfo_var, L_0);
		RuleContext_t846066196 * L_2 = InterfaceFuncInvoker0< RuleContext_t846066196 * >::Invoke(0 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.Tree.IRuleNode::get_RuleContext() */, IRuleNode_t2960422016_il2cpp_TypeInfo_var, L_1);
		V_0 = ((ParserRuleContext_t3215563317 *)CastclassClass((RuntimeObject*)L_2, ParserRuleContext_t3215563317_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = ___node0;
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.Tree.ITerminalNode::get_Symbol() */, ITerminalNode_t3564352371_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		TextWriter_t3478189236 * L_5 = __this->get_Output_0();
		ObjectU5BU5D_t2843939325* L_6 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_6, _stringLiteral1401166769);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1401166769);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		RuntimeObject* L_8 = V_1;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		ArrayElementTypeCheck (L_9, _stringLiteral2415142930);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2415142930);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		Parser_t1471951952 * L_11 = __this->get__enclosing_1();
		StringU5BU5D_t1281789340* L_12 = VirtFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(7 /* System.String[] Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_RuleNames() */, L_11);
		ParserRuleContext_t3215563317 * L_13 = V_0;
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 Antlr4.Runtime.RuleContext::get_RuleIndex() */, L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		ArrayElementTypeCheck (L_10, L_16);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m2971454694(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_5, L_17);
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
// System.Void Antlr4.Runtime.ParserRuleContext::.ctor()
extern "C"  void ParserRuleContext__ctor_m1984361021 (ParserRuleContext_t3215563317 * __this, const RuntimeMethod* method)
{
	{
		RuleContext__ctor_m3287477817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void ParserRuleContext__ctor_m3865993304 (ParserRuleContext_t3215563317 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingStateNumber1, const RuntimeMethod* method)
{
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingStateNumber1;
		RuleContext__ctor_m1560101012(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.ParserRuleContext::get_EmptyContext()
extern "C"  ParserRuleContext_t3215563317 * ParserRuleContext_get_EmptyContext_m4054856611 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_get_EmptyContext_m4054856611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext_t3215563317 * L_0 = ((ParserRuleContext_t3215563317_StaticFields*)il2cpp_codegen_static_fields_for(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var))->get_EMPTY_2();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::CopyFrom(Antlr4.Runtime.ParserRuleContext)
extern "C"  void ParserRuleContext_CopyFrom_m3597367641 (ParserRuleContext_t3215563317 * __this, ParserRuleContext_t3215563317 * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_CopyFrom_m3597367641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ErrorNodeImpl_t236481808 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ParserRuleContext_t3215563317 * L_0 = ___ctx0;
		RuleContext_t846066196 * L_1 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_0);
		VirtActionInvoker1< RuleContext_t846066196 * >::Invoke(11 /* System.Void Antlr4.Runtime.RuleContext::set_Parent(Antlr4.Runtime.RuleContext) */, __this, L_1);
		ParserRuleContext_t3215563317 * L_2 = ___ctx0;
		int32_t L_3 = ((RuleContext_t846066196 *)L_2)->get_invokingState_1();
		((RuleContext_t846066196 *)__this)->set_invokingState_1(L_3);
		ParserRuleContext_t3215563317 * L_4 = ___ctx0;
		RuntimeObject* L_5 = L_4->get__start_4();
		__this->set__start_4(L_5);
		ParserRuleContext_t3215563317 * L_6 = ___ctx0;
		RuntimeObject* L_7 = L_6->get__stop_5();
		__this->set__stop_5(L_7);
		ParserRuleContext_t3215563317 * L_8 = ___ctx0;
		RuntimeObject* L_9 = L_8->get_children_3();
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		List_1_t759730133 * L_10 = (List_1_t759730133 *)il2cpp_codegen_object_new(List_1_t759730133_il2cpp_TypeInfo_var);
		List_1__ctor_m489926614(L_10, /*hidden argument*/List_1__ctor_m489926614_RuntimeMethod_var);
		__this->set_children_3(L_10);
		ParserRuleContext_t3215563317 * L_11 = ___ctx0;
		RuntimeObject* L_12 = L_11->get_children_3();
		RuntimeObject* L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Tree.IParseTree>::GetEnumerator() */, IEnumerable_1_t2562475576_il2cpp_TypeInfo_var, L_12);
		V_1 = L_13;
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007e;
		}

IL_0057:
		{
			RuntimeObject* L_14 = V_1;
			RuntimeObject* L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.Tree.IParseTree>::get_Current() */, IEnumerator_1_t4015193155_il2cpp_TypeInfo_var, L_14);
			V_0 = L_15;
			RuntimeObject* L_16 = V_0;
			V_2 = ((ErrorNodeImpl_t236481808 *)IsInstClass((RuntimeObject*)L_16, ErrorNodeImpl_t236481808_il2cpp_TypeInfo_var));
			ErrorNodeImpl_t236481808 * L_17 = V_2;
			if (!L_17)
			{
				goto IL_007e;
			}
		}

IL_006b:
		{
			RuntimeObject* L_18 = __this->get_children_3();
			ErrorNodeImpl_t236481808 * L_19 = V_2;
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTree>::Add(!0) */, ICollection_1_t2115807625_il2cpp_TypeInfo_var, L_18, L_19);
			ErrorNodeImpl_t236481808 * L_20 = V_2;
			VirtActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void Antlr4.Runtime.Tree.TerminalNodeImpl::set_Parent(Antlr4.Runtime.Tree.IRuleNode) */, L_20, __this);
		}

IL_007e:
		{
			RuntimeObject* L_21 = V_1;
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0057;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x9B, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_1;
			if (!L_23)
			{
				goto IL_009a;
			}
		}

IL_0094:
		{
			RuntimeObject* L_24 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_24);
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0x9B, IL_009b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009b:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ParserRuleContext_EnterRule_m1794695095 (ParserRuleContext_t3215563317 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ParserRuleContext_ExitRule_m715041525 (ParserRuleContext_t3215563317 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.Tree.ITerminalNode)
extern "C"  void ParserRuleContext_AddChild_m254667534 (ParserRuleContext_t3215563317 * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_AddChild_m254667534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_children_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t759730133 * L_1 = (List_1_t759730133 *)il2cpp_codegen_object_new(List_1_t759730133_il2cpp_TypeInfo_var);
		List_1__ctor_m489926614(L_1, /*hidden argument*/List_1__ctor_m489926614_RuntimeMethod_var);
		__this->set_children_3(L_1);
	}

IL_0016:
	{
		RuntimeObject* L_2 = __this->get_children_3();
		RuntimeObject* L_3 = ___t0;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTree>::Add(!0) */, ICollection_1_t2115807625_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.RuleContext)
extern "C"  void ParserRuleContext_AddChild_m935919523 (ParserRuleContext_t3215563317 * __this, RuleContext_t846066196 * ___ruleInvocation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_AddChild_m935919523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_children_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t759730133 * L_1 = (List_1_t759730133 *)il2cpp_codegen_object_new(List_1_t759730133_il2cpp_TypeInfo_var);
		List_1__ctor_m489926614(L_1, /*hidden argument*/List_1__ctor_m489926614_RuntimeMethod_var);
		__this->set_children_3(L_1);
	}

IL_0016:
	{
		RuntimeObject* L_2 = __this->get_children_3();
		RuleContext_t846066196 * L_3 = ___ruleInvocation0;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTree>::Add(!0) */, ICollection_1_t2115807625_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::RemoveLastChild()
extern "C"  void ParserRuleContext_RemoveLastChild_m1225597485 (ParserRuleContext_t3215563317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_RemoveLastChild_m1225597485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_children_3();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_children_3();
		RuntimeObject* L_2 = __this->get_children_3();
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTree>::get_Count() */, ICollection_1_t2115807625_il2cpp_TypeInfo_var, L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTree>::RemoveAt(System.Int32) */, IList_1_t1102975174_il2cpp_TypeInfo_var, L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
	}

IL_0023:
	{
		return;
	}
}
// Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.IToken)
extern "C"  RuntimeObject* ParserRuleContext_AddChild_m2887362312 (ParserRuleContext_t3215563317 * __this, RuntimeObject* ___matchedToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_AddChild_m2887362312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TerminalNodeImpl_t19686673 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___matchedToken0;
		TerminalNodeImpl_t19686673 * L_1 = (TerminalNodeImpl_t19686673 *)il2cpp_codegen_object_new(TerminalNodeImpl_t19686673_il2cpp_TypeInfo_var);
		TerminalNodeImpl__ctor_m2394827149(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TerminalNodeImpl_t19686673 * L_2 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(23 /* System.Void Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.Tree.ITerminalNode) */, __this, L_2);
		TerminalNodeImpl_t19686673 * L_3 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void Antlr4.Runtime.Tree.TerminalNodeImpl::set_Parent(Antlr4.Runtime.Tree.IRuleNode) */, L_3, __this);
		TerminalNodeImpl_t19686673 * L_4 = V_0;
		return L_4;
	}
}
// Antlr4.Runtime.Tree.IErrorNode Antlr4.Runtime.ParserRuleContext::AddErrorNode(Antlr4.Runtime.IToken)
extern "C"  RuntimeObject* ParserRuleContext_AddErrorNode_m2909629434 (ParserRuleContext_t3215563317 * __this, RuntimeObject* ___badToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_AddErrorNode_m2909629434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorNodeImpl_t236481808 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___badToken0;
		ErrorNodeImpl_t236481808 * L_1 = (ErrorNodeImpl_t236481808 *)il2cpp_codegen_object_new(ErrorNodeImpl_t236481808_il2cpp_TypeInfo_var);
		ErrorNodeImpl__ctor_m4186736754(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ErrorNodeImpl_t236481808 * L_2 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(23 /* System.Void Antlr4.Runtime.ParserRuleContext::AddChild(Antlr4.Runtime.Tree.ITerminalNode) */, __this, L_2);
		ErrorNodeImpl_t236481808 * L_3 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void Antlr4.Runtime.Tree.TerminalNodeImpl::set_Parent(Antlr4.Runtime.Tree.IRuleNode) */, L_3, __this);
		ErrorNodeImpl_t236481808 * L_4 = V_0;
		return L_4;
	}
}
// Antlr4.Runtime.Tree.IParseTree Antlr4.Runtime.ParserRuleContext::GetChild(System.Int32)
extern "C"  RuntimeObject* ParserRuleContext_GetChild_m101932005 (ParserRuleContext_t3215563317 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_GetChild_m101932005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_children_3();
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = ___i0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_2 = ___i0;
		RuntimeObject* L_3 = __this->get_children_3();
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTree>::get_Count() */, ICollection_1_t2115807625_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_children_3();
		int32_t L_6 = ___i0;
		RuntimeObject* L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTree>::get_Item(System.Int32) */, IList_1_t1102975174_il2cpp_TypeInfo_var, L_5, L_6);
		G_B5_0 = L_7;
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = ((RuntimeObject*)(NULL));
	}

IL_0035:
	{
		return G_B5_0;
	}
}
// Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32)
extern "C"  RuntimeObject* ParserRuleContext_GetToken_m279842247 (ParserRuleContext_t3215563317 * __this, int32_t ___ttype0, int32_t ___i1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_GetToken_m279842247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = __this->get_children_3();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___i1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = ___i1;
		RuntimeObject* L_3 = __this->get_children_3();
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTree>::get_Count() */, ICollection_1_t2115807625_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0025;
		}
	}

IL_0023:
	{
		return (RuntimeObject*)NULL;
	}

IL_0025:
	{
		V_0 = (-1);
		RuntimeObject* L_5 = __this->get_children_3();
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.Tree.IParseTree>::GetEnumerator() */, IEnumerable_1_t2562475576_il2cpp_TypeInfo_var, L_5);
		V_2 = L_6;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_0038:
		{
			RuntimeObject* L_7 = V_2;
			RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.Tree.IParseTree>::get_Current() */, IEnumerator_1_t4015193155_il2cpp_TypeInfo_var, L_7);
			V_1 = L_8;
			RuntimeObject* L_9 = V_1;
			if (!((RuntimeObject*)IsInst((RuntimeObject*)L_9, ITerminalNode_t3564352371_il2cpp_TypeInfo_var)))
			{
				goto IL_0079;
			}
		}

IL_004a:
		{
			RuntimeObject* L_10 = V_1;
			V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, ITerminalNode_t3564352371_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Antlr4.Runtime.IToken Antlr4.Runtime.Tree.ITerminalNode::get_Symbol() */, ITerminalNode_t3564352371_il2cpp_TypeInfo_var, L_11);
			V_4 = L_12;
			RuntimeObject* L_13 = V_4;
			int32_t L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IToken::get_Type() */, IToken_t679559059_il2cpp_TypeInfo_var, L_13);
			int32_t L_15 = ___ttype0;
			if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
			{
				goto IL_0079;
			}
		}

IL_0066:
		{
			int32_t L_16 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
			int32_t L_17 = V_0;
			int32_t L_18 = ___i1;
			if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
			{
				goto IL_0079;
			}
		}

IL_0071:
		{
			RuntimeObject* L_19 = V_3;
			V_5 = L_19;
			IL2CPP_LEAVE(0x98, FINALLY_0089);
		}

IL_0079:
		{
			RuntimeObject* L_20 = V_2;
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0038;
			}
		}

IL_0084:
		{
			IL2CPP_LEAVE(0x96, FINALLY_0089);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0089;
	}

FINALLY_0089:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_2;
			if (!L_22)
			{
				goto IL_0095;
			}
		}

IL_008f:
		{
			RuntimeObject* L_23 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_0095:
		{
			IL2CPP_END_FINALLY(137)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(137)
	{
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_JUMP_TBL(0x96, IL_0096)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0096:
	{
		return (RuntimeObject*)NULL;
	}

IL_0098:
	{
		RuntimeObject* L_24 = V_5;
		return L_24;
	}
}
// System.Int32 Antlr4.Runtime.ParserRuleContext::get_ChildCount()
extern "C"  int32_t ParserRuleContext_get_ChildCount_m195035306 (ParserRuleContext_t3215563317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext_get_ChildCount_m195035306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->get_children_3();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_children_3();
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Antlr4.Runtime.Tree.IParseTree>::get_Count() */, ICollection_1_t2115807625_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.ParserRuleContext::get_Start()
extern "C"  RuntimeObject* ParserRuleContext_get_Start_m1063038317 (ParserRuleContext_t3215563317 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__start_4();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::set_Start(Antlr4.Runtime.IToken)
extern "C"  void ParserRuleContext_set_Start_m819119635 (ParserRuleContext_t3215563317 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set__start_4(L_0);
		return;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.ParserRuleContext::get_Stop()
extern "C"  RuntimeObject* ParserRuleContext_get_Stop_m1428089205 (ParserRuleContext_t3215563317 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__stop_5();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::set_Stop(Antlr4.Runtime.IToken)
extern "C"  void ParserRuleContext_set_Stop_m2256459849 (ParserRuleContext_t3215563317 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set__stop_5(L_0);
		return;
	}
}
// System.Void Antlr4.Runtime.ParserRuleContext::.cctor()
extern "C"  void ParserRuleContext__cctor_m1619874302 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParserRuleContext__cctor_m1619874302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = (ParserRuleContext_t3215563317 *)il2cpp_codegen_object_new(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m1984361021(L_0, /*hidden argument*/NULL);
		((ParserRuleContext_t3215563317_StaticFields*)il2cpp_codegen_static_fields_for(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var))->set_EMPTY_2(L_0);
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
// System.Void Antlr4.Runtime.ProxyParserErrorListener::.ctor(System.Collections.Generic.ICollection`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>)
extern "C"  void ProxyParserErrorListener__ctor_m650388731 (ProxyParserErrorListener_t2678295775 * __this, RuntimeObject* ___delegates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProxyParserErrorListener__ctor_m650388731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___delegates0;
		ProxyErrorListener_1__ctor_m3183614789(__this, L_0, /*hidden argument*/ProxyErrorListener_1__ctor_m3183614789_RuntimeMethod_var);
		return;
	}
}
// System.Void Antlr4.Runtime.ProxyParserErrorListener::ReportAmbiguity(Antlr4.Runtime.Parser,Antlr4.Runtime.Dfa.DFA,System.Int32,System.Int32,System.Boolean,Antlr4.Runtime.Sharpen.BitSet,Antlr4.Runtime.Atn.ATNConfigSet)
extern "C"  void ProxyParserErrorListener_ReportAmbiguity_m2636621240 (ProxyParserErrorListener_t2678295775 * __this, Parser_t1471951952 * ___recognizer0, DFA_t3195866089 * ___dfa1, int32_t ___startIndex2, int32_t ___stopIndex3, bool ___exact4, BitSet_t2017162039 * ___ambigAlts5, ATNConfigSet_t638728265 * ___configs6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProxyParserErrorListener_ReportAmbiguity_m2636621240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Symbol>> Antlr4.Runtime.ProxyErrorListener`1<Antlr4.Runtime.IToken>::get_Delegates() */, __this);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>::GetEnumerator() */, IEnumerable_1_t2806380658_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>::get_Current() */, IEnumerator_1_t4259098237_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			RuntimeObject* L_4 = V_0;
			if (((RuntimeObject*)IsInst((RuntimeObject*)L_4, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var)))
			{
				goto IL_0028;
			}
		}

IL_0023:
		{
			goto IL_0040;
		}

IL_0028:
		{
			RuntimeObject* L_5 = V_0;
			V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var));
			RuntimeObject* L_6 = V_2;
			Parser_t1471951952 * L_7 = ___recognizer0;
			DFA_t3195866089 * L_8 = ___dfa1;
			int32_t L_9 = ___startIndex2;
			int32_t L_10 = ___stopIndex3;
			bool L_11 = ___exact4;
			BitSet_t2017162039 * L_12 = ___ambigAlts5;
			ATNConfigSet_t638728265 * L_13 = ___configs6;
			InterfaceActionInvoker7< Parser_t1471951952 *, DFA_t3195866089 *, int32_t, int32_t, bool, BitSet_t2017162039 *, ATNConfigSet_t638728265 * >::Invoke(0 /* System.Void Antlr4.Runtime.IParserErrorListener::ReportAmbiguity(Antlr4.Runtime.Parser,Antlr4.Runtime.Dfa.DFA,System.Int32,System.Int32,System.Boolean,Antlr4.Runtime.Sharpen.BitSet,Antlr4.Runtime.Atn.ATNConfigSet) */, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13);
		}

IL_0040:
		{
			RuntimeObject* L_14 = V_1;
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0011;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			if (!L_16)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			RuntimeObject* L_17 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_17);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.ProxyParserErrorListener::ReportAttemptingFullContext(Antlr4.Runtime.Parser,Antlr4.Runtime.Dfa.DFA,System.Int32,System.Int32,Antlr4.Runtime.Sharpen.BitSet,Antlr4.Runtime.Atn.SimulatorState)
extern "C"  void ProxyParserErrorListener_ReportAttemptingFullContext_m4084051013 (ProxyParserErrorListener_t2678295775 * __this, Parser_t1471951952 * ___recognizer0, DFA_t3195866089 * ___dfa1, int32_t ___startIndex2, int32_t ___stopIndex3, BitSet_t2017162039 * ___conflictingAlts4, SimulatorState_t4227844472 * ___conflictState5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProxyParserErrorListener_ReportAttemptingFullContext_m4084051013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Symbol>> Antlr4.Runtime.ProxyErrorListener`1<Antlr4.Runtime.IToken>::get_Delegates() */, __this);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>::GetEnumerator() */, IEnumerable_1_t2806380658_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>::get_Current() */, IEnumerator_1_t4259098237_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			RuntimeObject* L_4 = V_0;
			if (((RuntimeObject*)IsInst((RuntimeObject*)L_4, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var)))
			{
				goto IL_0028;
			}
		}

IL_0023:
		{
			goto IL_003e;
		}

IL_0028:
		{
			RuntimeObject* L_5 = V_0;
			V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var));
			RuntimeObject* L_6 = V_2;
			Parser_t1471951952 * L_7 = ___recognizer0;
			DFA_t3195866089 * L_8 = ___dfa1;
			int32_t L_9 = ___startIndex2;
			int32_t L_10 = ___stopIndex3;
			BitSet_t2017162039 * L_11 = ___conflictingAlts4;
			SimulatorState_t4227844472 * L_12 = ___conflictState5;
			InterfaceActionInvoker6< Parser_t1471951952 *, DFA_t3195866089 *, int32_t, int32_t, BitSet_t2017162039 *, SimulatorState_t4227844472 * >::Invoke(1 /* System.Void Antlr4.Runtime.IParserErrorListener::ReportAttemptingFullContext(Antlr4.Runtime.Parser,Antlr4.Runtime.Dfa.DFA,System.Int32,System.Int32,Antlr4.Runtime.Sharpen.BitSet,Antlr4.Runtime.Atn.SimulatorState) */, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var, L_6, L_7, L_8, L_9, L_10, L_11, L_12);
		}

IL_003e:
		{
			RuntimeObject* L_13 = V_1;
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0011;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_1;
			if (!L_15)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_16 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.ProxyParserErrorListener::ReportContextSensitivity(Antlr4.Runtime.Parser,Antlr4.Runtime.Dfa.DFA,System.Int32,System.Int32,System.Int32,Antlr4.Runtime.Atn.SimulatorState)
extern "C"  void ProxyParserErrorListener_ReportContextSensitivity_m1388573322 (ProxyParserErrorListener_t2678295775 * __this, Parser_t1471951952 * ___recognizer0, DFA_t3195866089 * ___dfa1, int32_t ___startIndex2, int32_t ___stopIndex3, int32_t ___prediction4, SimulatorState_t4227844472 * ___acceptState5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProxyParserErrorListener_ReportContextSensitivity_m1388573322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Symbol>> Antlr4.Runtime.ProxyErrorListener`1<Antlr4.Runtime.IToken>::get_Delegates() */, __this);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>::GetEnumerator() */, IEnumerable_1_t2806380658_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>>::get_Current() */, IEnumerator_1_t4259098237_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			RuntimeObject* L_4 = V_0;
			if (((RuntimeObject*)IsInst((RuntimeObject*)L_4, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var)))
			{
				goto IL_0028;
			}
		}

IL_0023:
		{
			goto IL_003e;
		}

IL_0028:
		{
			RuntimeObject* L_5 = V_0;
			V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var));
			RuntimeObject* L_6 = V_2;
			Parser_t1471951952 * L_7 = ___recognizer0;
			DFA_t3195866089 * L_8 = ___dfa1;
			int32_t L_9 = ___startIndex2;
			int32_t L_10 = ___stopIndex3;
			int32_t L_11 = ___prediction4;
			SimulatorState_t4227844472 * L_12 = ___acceptState5;
			InterfaceActionInvoker6< Parser_t1471951952 *, DFA_t3195866089 *, int32_t, int32_t, int32_t, SimulatorState_t4227844472 * >::Invoke(2 /* System.Void Antlr4.Runtime.IParserErrorListener::ReportContextSensitivity(Antlr4.Runtime.Parser,Antlr4.Runtime.Dfa.DFA,System.Int32,System.Int32,System.Int32,Antlr4.Runtime.Atn.SimulatorState) */, IParserErrorListener_t3329675261_il2cpp_TypeInfo_var, L_6, L_7, L_8, L_9, L_10, L_11, L_12);
		}

IL_003e:
		{
			RuntimeObject* L_13 = V_1;
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0011;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_1;
			if (!L_15)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_16 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
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
// System.Void Antlr4.Runtime.RecognitionException::.ctor(Antlr4.Runtime.Lexer,Antlr4.Runtime.ICharStream)
extern "C"  void RecognitionException__ctor_m3776713516 (RecognitionException_t4252147236 * __this, Lexer_t1430611871 * ___lexer0, RuntimeObject* ___input1, const RuntimeMethod* method)
{
	{
		__this->set_offendingState_15((-1));
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		Lexer_t1430611871 * L_0 = ___lexer0;
		__this->set_recognizer_11(L_0);
		RuntimeObject* L_1 = ___input1;
		__this->set_input_13(L_1);
		__this->set_ctx_12((RuleContext_t846066196 *)NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.RecognitionException::.ctor(Antlr4.Runtime.IRecognizer,Antlr4.Runtime.IIntStream,Antlr4.Runtime.ParserRuleContext)
extern "C"  void RecognitionException__ctor_m1770152451 (RecognitionException_t4252147236 * __this, RuntimeObject* ___recognizer0, RuntimeObject* ___input1, ParserRuleContext_t3215563317 * ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionException__ctor_m1770152451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_offendingState_15((-1));
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___recognizer0;
		__this->set_recognizer_11(L_0);
		RuntimeObject* L_1 = ___input1;
		__this->set_input_13(L_1);
		ParserRuleContext_t3215563317 * L_2 = ___ctx2;
		__this->set_ctx_12(L_2);
		RuntimeObject* L_3 = ___recognizer0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___recognizer0;
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Antlr4.Runtime.IRecognizer::get_State() */, IRecognizer_t3904599715_il2cpp_TypeInfo_var, L_4);
		__this->set_offendingState_15(L_5);
	}

IL_0034:
	{
		return;
	}
}
// System.Void Antlr4.Runtime.RecognitionException::.ctor(System.String,Antlr4.Runtime.IRecognizer,Antlr4.Runtime.IIntStream,Antlr4.Runtime.ParserRuleContext)
extern "C"  void RecognitionException__ctor_m2949007240 (RecognitionException_t4252147236 * __this, String_t* ___message0, RuntimeObject* ___recognizer1, RuntimeObject* ___input2, ParserRuleContext_t3215563317 * ___ctx3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionException__ctor_m2949007240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_offendingState_15((-1));
		String_t* L_0 = ___message0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___recognizer1;
		__this->set_recognizer_11(L_1);
		RuntimeObject* L_2 = ___input2;
		__this->set_input_13(L_2);
		ParserRuleContext_t3215563317 * L_3 = ___ctx3;
		__this->set_ctx_12(L_3);
		RuntimeObject* L_4 = ___recognizer1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_5 = ___recognizer1;
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Antlr4.Runtime.IRecognizer::get_State() */, IRecognizer_t3904599715_il2cpp_TypeInfo_var, L_5);
		__this->set_offendingState_15(L_6);
	}

IL_0036:
	{
		return;
	}
}
// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.RecognitionException::GetExpectedTokens()
extern "C"  IntervalSet_t1736846379 * RecognitionException_GetExpectedTokens_m501409210 (RecognitionException_t4252147236 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionException_GetExpectedTokens_m501409210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_recognizer_11();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_recognizer_11();
		ATN_t715137711 * L_2 = InterfaceFuncInvoker0< ATN_t715137711 * >::Invoke(1 /* Antlr4.Runtime.Atn.ATN Antlr4.Runtime.IRecognizer::get_Atn() */, IRecognizer_t3904599715_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = __this->get_offendingState_15();
		RuleContext_t846066196 * L_4 = __this->get_ctx_12();
		IntervalSet_t1736846379 * L_5 = VirtFuncInvoker2< IntervalSet_t1736846379 *, int32_t, RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Atn.ATN::GetExpectedTokens(System.Int32,Antlr4.Runtime.RuleContext) */, L_2, L_3, L_4);
		return L_5;
	}

IL_0028:
	{
		return (IntervalSet_t1736846379 *)NULL;
	}
}
// Antlr4.Runtime.IIntStream Antlr4.Runtime.RecognitionException::get_InputStream()
extern "C"  RuntimeObject* RecognitionException_get_InputStream_m1843421705 (RecognitionException_t4252147236 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_input_13();
		return L_0;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.RecognitionException::get_OffendingToken()
extern "C"  RuntimeObject* RecognitionException_get_OffendingToken_m3655733691 (RecognitionException_t4252147236 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_offendingToken_14();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.RecognitionException::set_OffendingToken(Antlr4.Runtime.IToken)
extern "C"  void RecognitionException_set_OffendingToken_m4276417833 (RecognitionException_t4252147236 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		__this->set_offendingToken_14(L_1);
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
// System.Void Antlr4.Runtime.RuleContext::.ctor()
extern "C"  void RuleContext__ctor_m3287477817 (RuleContext_t846066196 * __this, const RuntimeMethod* method)
{
	{
		__this->set_invokingState_1((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.RuleContext::.ctor(Antlr4.Runtime.RuleContext,System.Int32)
extern "C"  void RuleContext__ctor_m1560101012 (RuleContext_t846066196 * __this, RuleContext_t846066196 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	{
		__this->set_invokingState_1((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuleContext_t846066196 * L_0 = ___parent0;
		__this->set__parent_0(L_0);
		int32_t L_1 = ___invokingState1;
		__this->set_invokingState_1(L_1);
		return;
	}
}
// System.Boolean Antlr4.Runtime.RuleContext::get_IsEmpty()
extern "C"  bool RuleContext_get_IsEmpty_m1193937510 (RuleContext_t846066196 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_invokingState_1();
		return (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
	}
}
// Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::Antlr4.Runtime.Tree.IRuleNode.get_RuleContext()
extern "C"  RuleContext_t846066196 * RuleContext_Antlr4_Runtime_Tree_IRuleNode_get_RuleContext_m1201658898 (RuleContext_t846066196 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent()
extern "C"  RuleContext_t846066196 * RuleContext_get_Parent_m1532699621 (RuleContext_t846066196 * __this, const RuntimeMethod* method)
{
	{
		RuleContext_t846066196 * L_0 = __this->get__parent_0();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.RuleContext::set_Parent(Antlr4.Runtime.RuleContext)
extern "C"  void RuleContext_set_Parent_m111888118 (RuleContext_t846066196 * __this, RuleContext_t846066196 * ___value0, const RuntimeMethod* method)
{
	{
		RuleContext_t846066196 * L_0 = ___value0;
		__this->set__parent_0(L_0);
		return;
	}
}
// System.String Antlr4.Runtime.RuleContext::GetText()
extern "C"  String_t* RuleContext_GetText_m3145088527 (RuleContext_t846066196 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuleContext_GetText_m3145088527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Antlr4.Runtime.RuleContext::get_ChildCount() */, __this);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		StringBuilder_t * L_3 = V_0;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(15 /* Antlr4.Runtime.Tree.IParseTree Antlr4.Runtime.RuleContext::GetChild(System.Int32) */, __this, L_4);
		String_t* L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Antlr4.Runtime.Tree.IParseTree::GetText() */, IParseTree_t3582622687_il2cpp_TypeInfo_var, L_5);
		StringBuilder_Append_m1965104174(L_3, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 Antlr4.Runtime.RuleContext::get_ChildCount() */, __this);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t * L_10 = V_0;
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		return L_11;
	}
}
// System.Int32 Antlr4.Runtime.RuleContext::get_RuleIndex()
extern "C"  int32_t RuleContext_get_RuleIndex_m1621728098 (RuleContext_t846066196 * __this, const RuntimeMethod* method)
{
	{
		return (-1);
	}
}
// System.Void Antlr4.Runtime.RuleContext::setAltNumber(System.Int32)
extern "C"  void RuleContext_setAltNumber_m3738350250 (RuleContext_t846066196 * __this, int32_t ___altNumber0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Antlr4.Runtime.Tree.IParseTree Antlr4.Runtime.RuleContext::GetChild(System.Int32)
extern "C"  RuntimeObject* RuleContext_GetChild_m1387731898 (RuleContext_t846066196 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Int32 Antlr4.Runtime.RuleContext::get_ChildCount()
extern "C"  int32_t RuleContext_get_ChildCount_m2405230483 (RuleContext_t846066196 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.String Antlr4.Runtime.RuleContext::ToString()
extern "C"  String_t* RuleContext_ToString_m2547439887 (RuleContext_t846066196 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker2< String_t*, RuntimeObject*, RuleContext_t846066196 * >::Invoke(19 /* System.String Antlr4.Runtime.RuleContext::ToString(System.Collections.Generic.IList`1<System.String>,Antlr4.Runtime.RuleContext) */, __this, (RuntimeObject*)NULL, (RuleContext_t846066196 *)NULL);
		return L_0;
	}
}
// System.String Antlr4.Runtime.RuleContext::ToString(Antlr4.Runtime.IRecognizer)
extern "C"  String_t* RuleContext_ToString_m2655851943 (RuleContext_t846066196 * __this, RuntimeObject* ___recog0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuleContext_ToString_m2655851943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___recog0;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext_t3215563317 * L_1 = ParserRuleContext_get_EmptyContext_m4054856611(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = VirtFuncInvoker2< String_t*, RuntimeObject*, RuleContext_t846066196 * >::Invoke(18 /* System.String Antlr4.Runtime.RuleContext::ToString(Antlr4.Runtime.IRecognizer,Antlr4.Runtime.RuleContext) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.String Antlr4.Runtime.RuleContext::ToString(Antlr4.Runtime.IRecognizer,Antlr4.Runtime.RuleContext)
extern "C"  String_t* RuleContext_ToString_m1480298188 (RuleContext_t846066196 * __this, RuntimeObject* ___recog0, RuleContext_t846066196 * ___stop1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuleContext_ToString_m1480298188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	StringU5BU5D_t1281789340* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = ___recog0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___recog0;
		StringU5BU5D_t1281789340* L_2 = InterfaceFuncInvoker0< StringU5BU5D_t1281789340* >::Invoke(0 /* System.String[] Antlr4.Runtime.IRecognizer::get_RuleNames() */, IRecognizer_t3904599715_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = ((StringU5BU5D_t1281789340*)(NULL));
	}

IL_0012:
	{
		V_0 = G_B3_0;
		StringU5BU5D_t1281789340* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		RuntimeObject* L_5 = Arrays_AsList_TisString_t_m1958667525(NULL /*static, unused*/, L_4, /*hidden argument*/Arrays_AsList_TisString_t_m1958667525_RuntimeMethod_var);
		G_B6_0 = L_5;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = ((RuntimeObject*)(NULL));
	}

IL_0025:
	{
		V_1 = G_B6_0;
		RuntimeObject* L_6 = V_1;
		RuleContext_t846066196 * L_7 = ___stop1;
		String_t* L_8 = VirtFuncInvoker2< String_t*, RuntimeObject*, RuleContext_t846066196 * >::Invoke(19 /* System.String Antlr4.Runtime.RuleContext::ToString(System.Collections.Generic.IList`1<System.String>,Antlr4.Runtime.RuleContext) */, __this, L_6, L_7);
		return L_8;
	}
}
// System.String Antlr4.Runtime.RuleContext::ToString(System.Collections.Generic.IList`1<System.String>,Antlr4.Runtime.RuleContext)
extern "C"  String_t* RuleContext_ToString_m4123194578 (RuleContext_t846066196 * __this, RuntimeObject* ___ruleNames0, RuleContext_t846066196 * ___stop1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuleContext_ToString_m4123194578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RuleContext_t846066196 * V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* G_B9_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = __this;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m1965104174(L_1, _stringLiteral3452614645, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_0019:
	{
		RuntimeObject* L_2 = ___ruleNames0;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		RuleContext_t846066196 * L_3 = V_1;
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Antlr4.Runtime.RuleContext::get_IsEmpty() */, L_3);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t * L_5 = V_0;
		RuleContext_t846066196 * L_6 = V_1;
		int32_t L_7 = L_6->get_invokingState_1();
		StringBuilder_Append_m890240332(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0037:
	{
		goto IL_0078;
	}

IL_003c:
	{
		RuleContext_t846066196 * L_8 = V_1;
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 Antlr4.Runtime.RuleContext::get_RuleIndex() */, L_8);
		V_2 = L_9;
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_11 = V_2;
		RuntimeObject* L_12 = ___ruleNames0;
		int32_t L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_14 = ___ruleNames0;
		int32_t L_15 = V_2;
		String_t* L_16 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t3662770472_il2cpp_TypeInfo_var, L_14, L_15);
		G_B9_0 = L_16;
		goto IL_006f;
	}

IL_0062:
	{
		String_t* L_17 = Int32_ToString_m141394615((&V_2), /*hidden argument*/NULL);
		G_B9_0 = L_17;
	}

IL_006f:
	{
		V_3 = G_B9_0;
		StringBuilder_t * L_18 = V_0;
		String_t* L_19 = V_3;
		StringBuilder_Append_m1965104174(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0078:
	{
		RuleContext_t846066196 * L_20 = V_1;
		RuleContext_t846066196 * L_21 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_20);
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		RuntimeObject* L_22 = ___ruleNames0;
		if (L_22)
		{
			goto IL_0099;
		}
	}
	{
		RuleContext_t846066196 * L_23 = V_1;
		RuleContext_t846066196 * L_24 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_23);
		bool L_25 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Antlr4.Runtime.RuleContext::get_IsEmpty() */, L_24);
		if (L_25)
		{
			goto IL_00a5;
		}
	}

IL_0099:
	{
		StringBuilder_t * L_26 = V_0;
		StringBuilder_Append_m1965104174(L_26, _stringLiteral3452614528, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		RuleContext_t846066196 * L_27 = V_1;
		RuleContext_t846066196 * L_28 = VirtFuncInvoker0< RuleContext_t846066196 * >::Invoke(10 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::get_Parent() */, L_27);
		V_1 = L_28;
	}

IL_00ac:
	{
		RuleContext_t846066196 * L_29 = V_1;
		if (!L_29)
		{
			goto IL_00b9;
		}
	}
	{
		RuleContext_t846066196 * L_30 = V_1;
		RuleContext_t846066196 * L_31 = ___stop1;
		if ((!(((RuntimeObject*)(RuleContext_t846066196 *)L_30) == ((RuntimeObject*)(RuleContext_t846066196 *)L_31))))
		{
			goto IL_0019;
		}
	}

IL_00b9:
	{
		StringBuilder_t * L_32 = V_0;
		StringBuilder_Append_m1965104174(L_32, _stringLiteral3452614643, /*hidden argument*/NULL);
		StringBuilder_t * L_33 = V_0;
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		return L_34;
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
// System.Void Antlr4.Runtime.RuleVersionAttribute::.ctor(System.Int32)
extern "C"  void RuleVersionAttribute__ctor_m1456538869 (RuleVersionAttribute_t88391030 * __this, int32_t ___version0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___version0;
		__this->set__version_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Antlr4.Runtime.Sharpen.BitSet::.ctor()
extern "C"  void BitSet__ctor_m1854132015 (BitSet_t2017162039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet__ctor_m1854132015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t2017162039_il2cpp_TypeInfo_var);
		UInt64U5BU5D_t1659327989* L_0 = ((BitSet_t2017162039_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t2017162039_il2cpp_TypeInfo_var))->get_EmptyBits_0();
		__this->set__data_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.Sharpen.BitSet::.ctor(System.Int32)
extern "C"  void BitSet__ctor_m1382192312 (BitSet_t2017162039 * __this, int32_t ___nbits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet__ctor_m1382192312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t2017162039_il2cpp_TypeInfo_var);
		UInt64U5BU5D_t1659327989* L_0 = ((BitSet_t2017162039_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t2017162039_il2cpp_TypeInfo_var))->get_EmptyBits_0();
		__this->set__data_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___nbits0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, _stringLiteral1938424562, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0023:
	{
		int32_t L_3 = ___nbits0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = ___nbits0;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)64))), (int32_t)1))/(int32_t)((int32_t)64)));
		int32_t L_5 = V_0;
		__this->set__data_1(((UInt64U5BU5D_t1659327989*)SZArrayNew(UInt64U5BU5D_t1659327989_il2cpp_TypeInfo_var, (uint32_t)L_5)));
	}

IL_0040:
	{
		return;
	}
}
// System.Int32 Antlr4.Runtime.Sharpen.BitSet::GetBitCount(System.UInt64[])
extern "C"  int32_t BitSet_GetBitCount_m2661981328 (RuntimeObject * __this /* static, unused */, UInt64U5BU5D_t1659327989* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint64_t V_5 = 0;
	uint32_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		V_0 = 0;
		UInt64U5BU5D_t1659327989* L_0 = ___value0;
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		V_2 = 0;
		uint32_t L_1 = V_1;
		uint32_t L_2 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)30)))));
		V_4 = 0;
		goto IL_0159;
	}

IL_0017:
	{
		V_5 = (((int64_t)((int64_t)0)));
		V_6 = 0;
		goto IL_0103;
	}

IL_0023:
	{
		UInt64U5BU5D_t1659327989* L_3 = ___value0;
		int32_t L_4 = V_0;
		uint32_t L_5 = V_6;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_4))), (int64_t)(((int64_t)((uint64_t)L_5)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		intptr_t L_6 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_4))), (int64_t)(((int64_t)((uint64_t)L_5)))))));
		int64_t L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_7 = L_7;
		UInt64U5BU5D_t1659327989* L_8 = ___value0;
		int32_t L_9 = V_0;
		uint32_t L_10 = V_6;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_9))), (int64_t)(((int64_t)((uint64_t)L_10))))), (int64_t)(((int64_t)((int64_t)1)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		intptr_t L_11 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_9))), (int64_t)(((int64_t)((uint64_t)L_10))))), (int64_t)(((int64_t)((int64_t)1)))))));
		int64_t L_12 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_8 = L_12;
		UInt64U5BU5D_t1659327989* L_13 = ___value0;
		int32_t L_14 = V_0;
		uint32_t L_15 = V_6;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_14))), (int64_t)(((int64_t)((uint64_t)L_15))))), (int64_t)(((int64_t)((int64_t)2)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		intptr_t L_16 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_14))), (int64_t)(((int64_t)((uint64_t)L_15))))), (int64_t)(((int64_t)((int64_t)2)))))));
		int64_t L_17 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_9 = L_17;
		uint64_t L_18 = V_9;
		V_10 = L_18;
		uint64_t L_19 = V_9;
		V_9 = ((int64_t)((int64_t)L_19&(int64_t)((int64_t)6148914691236517205LL)));
		uint64_t L_20 = V_10;
		V_10 = ((int64_t)((int64_t)((int64_t)((uint64_t)L_20>>1))&(int64_t)((int64_t)6148914691236517205LL)));
		uint64_t L_21 = V_7;
		uint64_t L_22 = V_7;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_21, (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_22>>1))&(int64_t)((int64_t)6148914691236517205LL)))));
		uint64_t L_23 = V_8;
		uint64_t L_24 = V_8;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_23, (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_24>>1))&(int64_t)((int64_t)6148914691236517205LL)))));
		uint64_t L_25 = V_7;
		uint64_t L_26 = V_9;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_25, (int64_t)L_26));
		uint64_t L_27 = V_8;
		uint64_t L_28 = V_10;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, (int64_t)L_28));
		uint64_t L_29 = V_7;
		uint64_t L_30 = V_7;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_29&(int64_t)((int64_t)3689348814741910323LL))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_30>>2))&(int64_t)((int64_t)3689348814741910323LL)))));
		uint64_t L_31 = V_7;
		uint64_t L_32 = V_8;
		uint64_t L_33 = V_8;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_32&(int64_t)((int64_t)3689348814741910323LL))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_33>>2))&(int64_t)((int64_t)3689348814741910323LL)))))));
		uint64_t L_34 = V_5;
		uint64_t L_35 = V_7;
		uint64_t L_36 = V_7;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_34, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_35&(int64_t)((int64_t)1085102592571150095LL))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_36>>4))&(int64_t)((int64_t)1085102592571150095LL)))))));
		uint32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)3));
	}

IL_0103:
	{
		uint32_t L_38 = V_6;
		if ((!(((uint32_t)L_38) >= ((uint32_t)((int32_t)30)))))
		{
			goto IL_0023;
		}
	}
	{
		uint64_t L_39 = V_5;
		uint64_t L_40 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_39&(int64_t)((int64_t)71777214294589695LL))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_40>>8))&(int64_t)((int64_t)71777214294589695LL)))));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_5;
		V_5 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_41, (int64_t)((int64_t)((uint64_t)L_42>>((int32_t)16)))))&(int64_t)((int64_t)281470681808895LL)));
		uint64_t L_43 = V_5;
		uint64_t L_44 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, (int64_t)((int64_t)((uint64_t)L_44>>((int32_t)32)))));
		uint32_t L_45 = V_2;
		uint64_t L_46 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)(((int32_t)((uint32_t)L_46)))));
		uint32_t L_47 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)((int32_t)30)));
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)((int32_t)30)));
	}

IL_0159:
	{
		uint32_t L_49 = V_4;
		uint32_t L_50 = V_3;
		if ((!(((uint32_t)L_49) >= ((uint32_t)L_50))))
		{
			goto IL_0017;
		}
	}
	{
		V_11 = 0;
		goto IL_01d0;
	}

IL_0169:
	{
		UInt64U5BU5D_t1659327989* L_51 = ___value0;
		int32_t L_52 = V_0;
		uint32_t L_53 = V_11;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_52))), (int64_t)(((int64_t)((uint64_t)L_53)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		intptr_t L_54 = (((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_52))), (int64_t)(((int64_t)((uint64_t)L_53)))))));
		int64_t L_55 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		V_12 = L_55;
		uint64_t L_56 = V_12;
		uint64_t L_57 = V_12;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_56, (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_57>>1))&(int64_t)((int64_t)6148914691236517205LL)))));
		uint64_t L_58 = V_12;
		uint64_t L_59 = V_12;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_58&(int64_t)((int64_t)3689348814741910323LL))), (int64_t)((int64_t)((int64_t)((int64_t)((uint64_t)L_59>>2))&(int64_t)((int64_t)3689348814741910323LL)))));
		uint64_t L_60 = V_12;
		uint64_t L_61 = V_12;
		V_12 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_60, (int64_t)((int64_t)((uint64_t)L_61>>4))))&(int64_t)((int64_t)1085102592571150095LL)));
		uint32_t L_62 = V_2;
		uint64_t L_63 = V_12;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)(((int32_t)((uint32_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_63, (int64_t)((int64_t)72340172838076673LL)))>>((int32_t)56))))))));
		uint32_t L_64 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_01d0:
	{
		uint32_t L_65 = V_11;
		uint32_t L_66 = V_1;
		uint32_t L_67 = V_3;
		if ((!(((uint32_t)L_65) >= ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)L_67))))))
		{
			goto IL_0169;
		}
	}
	{
		uint32_t L_68 = V_2;
		return L_68;
	}
}
// System.Int32 Antlr4.Runtime.Sharpen.BitSet::BitScanForward(System.UInt64)
extern "C"  int32_t BitSet_BitScanForward_m3438412263 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_BitScanForward_m3438412263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t2017162039_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_1 = ((BitSet_t2017162039_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t2017162039_il2cpp_TypeInfo_var))->get_index64_2();
		uint64_t L_2 = ___value0;
		uint64_t L_3 = ___value0;
		if ((uint64_t)(((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_2^(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)(((int64_t)((int64_t)1))))))), (int64_t)((int64_t)285870213051386505LL)))>>((int32_t)58)))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		intptr_t L_4 = (((intptr_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_2^(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_3, (int64_t)(((int64_t)((int64_t)1))))))), (int64_t)((int64_t)285870213051386505LL)))>>((int32_t)58)))));
		int32_t L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Void Antlr4.Runtime.Sharpen.BitSet::Clear(System.Int32)
extern "C"  void BitSet_Clear_m3171391619 (BitSet_t2017162039 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_Clear_m3171391619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		int32_t L_2 = ___index0;
		V_0 = ((int32_t)((int32_t)L_2/(int32_t)((int32_t)64)));
		int32_t L_3 = V_0;
		UInt64U5BU5D_t1659327989* L_4 = __this->get__data_1();
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		UInt64U5BU5D_t1659327989* L_5 = __this->get__data_1();
		int32_t L_6 = V_0;
		uint64_t* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = ___index0;
		*((int64_t*)(L_7)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_7))&(int64_t)((~((int64_t)((int64_t)(((int64_t)((int64_t)1)))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8%(int32_t)((int32_t)64)))&(int32_t)((int32_t)63)))))))));
		return;
	}
}
// System.Boolean Antlr4.Runtime.Sharpen.BitSet::get_Item(System.Int32)
extern "C"  bool BitSet_get_Item_m1809720433 (BitSet_t2017162039 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		bool L_1 = BitSet_Get_m3703781334(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Antlr4.Runtime.Sharpen.BitSet::set_Item(System.Int32,System.Boolean)
extern "C"  void BitSet_set_Item_m1065354541 (BitSet_t2017162039 * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		BitSet_Set_m625453983(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Antlr4.Runtime.Sharpen.BitSet::Get(System.Int32)
extern "C"  bool BitSet_Get_m3703781334 (BitSet_t2017162039 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_Get_m3703781334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		int32_t L_2 = ___index0;
		V_0 = ((int32_t)((int32_t)L_2/(int32_t)((int32_t)64)));
		int32_t L_3 = V_0;
		UInt64U5BU5D_t1659327989* L_4 = __this->get__data_1();
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		UInt64U5BU5D_t1659327989* L_5 = __this->get__data_1();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		int64_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___index0;
		return (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)L_8&(int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)1)))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9%(int32_t)((int32_t)64)))&(int32_t)((int32_t)63)))))))) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Antlr4.Runtime.Sharpen.BitSet::Set(System.Int32)
extern "C"  void BitSet_Set_m625453983 (BitSet_t2017162039 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_Set_m625453983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		int32_t L_2 = ___index0;
		V_0 = ((int32_t)((int32_t)L_2/(int32_t)((int32_t)64)));
		int32_t L_3 = V_0;
		UInt64U5BU5D_t1659327989* L_4 = __this->get__data_1();
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_0042;
		}
	}
	{
		UInt64U5BU5D_t1659327989** L_5 = __this->get_address_of__data_1();
		UInt64U5BU5D_t1659327989* L_6 = __this->get__data_1();
		int32_t L_7 = V_0;
		int32_t L_8 = Math_Max_m1873195862(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)2)), ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
		Array_Resize_TisUInt64_t4134040092_m3488754369(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/Array_Resize_TisUInt64_t4134040092_m3488754369_RuntimeMethod_var);
	}

IL_0042:
	{
		UInt64U5BU5D_t1659327989* L_9 = __this->get__data_1();
		int32_t L_10 = V_0;
		uint64_t* L_11 = ((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)));
		int32_t L_12 = ___index0;
		*((int64_t*)(L_11)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_11))|(int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)1)))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12%(int32_t)((int32_t)64)))&(int32_t)((int32_t)63)))))));
		return;
	}
}
// System.Boolean Antlr4.Runtime.Sharpen.BitSet::IsEmpty()
extern "C"  bool BitSet_IsEmpty_m3957180803 (BitSet_t2017162039 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0007:
	{
		UInt64U5BU5D_t1659327989* L_0 = __this->get__data_1();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		int64_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int64_t)L_3) == ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		UInt64U5BU5D_t1659327989* L_6 = __this->get__data_1();
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 Antlr4.Runtime.Sharpen.BitSet::Cardinality()
extern "C"  int32_t BitSet_Cardinality_m505674344 (BitSet_t2017162039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_Cardinality_m505674344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_t1659327989* L_0 = __this->get__data_1();
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t2017162039_il2cpp_TypeInfo_var);
		int32_t L_1 = BitSet_GetBitCount_m2661981328(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Antlr4.Runtime.Sharpen.BitSet::NextSetBit(System.Int32)
extern "C"  int32_t BitSet_NextSetBit_m81789356 (BitSet_t2017162039 * __this, int32_t ___fromIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_NextSetBit_m81789356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___fromIndex0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral3897572118, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		bool L_2 = BitSet_IsEmpty_m3957180803(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}

IL_001f:
	{
		int32_t L_3 = ___fromIndex0;
		V_0 = ((int32_t)((int32_t)L_3/(int32_t)((int32_t)64)));
		int32_t L_4 = V_0;
		UInt64U5BU5D_t1659327989* L_5 = __this->get__data_1();
		if ((((int32_t)L_4) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}

IL_0034:
	{
		UInt64U5BU5D_t1659327989* L_6 = __this->get__data_1();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		int64_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = ___fromIndex0;
		V_1 = ((int64_t)((int64_t)L_9&(int64_t)((~((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)1)))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10%(int32_t)((int32_t)64)))&(int32_t)((int32_t)63))))), (int64_t)(((int64_t)((int64_t)1)))))))));
	}

IL_004c:
	{
		uint64_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitSet_t2017162039_il2cpp_TypeInfo_var);
		int32_t L_12 = BitSet_BitScanForward_m3438412263(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)((int32_t)64)))));
	}

IL_0061:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_0;
		UInt64U5BU5D_t1659327989* L_18 = __this->get__data_1();
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0086;
	}

IL_0078:
	{
		UInt64U5BU5D_t1659327989* L_19 = __this->get__data_1();
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		int64_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_1 = L_22;
		goto IL_004c;
	}

IL_0086:
	{
		return (-1);
	}
}
// System.Void Antlr4.Runtime.Sharpen.BitSet::Or(Antlr4.Runtime.Sharpen.BitSet)
extern "C"  void BitSet_Or_m2595964849 (BitSet_t2017162039 * __this, BitSet_t2017162039 * ___set0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_Or_m2595964849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BitSet_t2017162039 * L_0 = ___set0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2553217811, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		BitSet_t2017162039 * L_2 = ___set0;
		UInt64U5BU5D_t1659327989* L_3 = L_2->get__data_1();
		UInt64U5BU5D_t1659327989* L_4 = __this->get__data_1();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_0039;
		}
	}
	{
		UInt64U5BU5D_t1659327989** L_5 = __this->get_address_of__data_1();
		BitSet_t2017162039 * L_6 = ___set0;
		UInt64U5BU5D_t1659327989* L_7 = L_6->get__data_1();
		Array_Resize_TisUInt64_t4134040092_m3488754369(NULL /*static, unused*/, L_5, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), /*hidden argument*/Array_Resize_TisUInt64_t4134040092_m3488754369_RuntimeMethod_var);
	}

IL_0039:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0040:
	{
		UInt64U5BU5D_t1659327989* L_8 = __this->get__data_1();
		int32_t L_9 = V_0;
		uint64_t* L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)));
		BitSet_t2017162039 * L_11 = ___set0;
		UInt64U5BU5D_t1659327989* L_12 = L_11->get__data_1();
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		int64_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		*((int64_t*)(L_10)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_10))|(int64_t)L_15));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005c:
	{
		int32_t L_17 = V_0;
		BitSet_t2017162039 * L_18 = ___set0;
		UInt64U5BU5D_t1659327989* L_19 = L_18->get__data_1();
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0040;
		}
	}
	{
		return;
	}
}
// System.Boolean Antlr4.Runtime.Sharpen.BitSet::Equals(System.Object)
extern "C"  bool BitSet_Equals_m2049087785 (BitSet_t2017162039 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_Equals_m2049087785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BitSet_t2017162039 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((BitSet_t2017162039 *)IsInstClass((RuntimeObject*)L_0, BitSet_t2017162039_il2cpp_TypeInfo_var));
		BitSet_t2017162039 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		bool L_2 = BitSet_IsEmpty_m3957180803(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		BitSet_t2017162039 * L_3 = V_0;
		bool L_4 = BitSet_IsEmpty_m3957180803(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0021:
	{
		UInt64U5BU5D_t1659327989* L_5 = __this->get__data_1();
		BitSet_t2017162039 * L_6 = V_0;
		UInt64U5BU5D_t1659327989* L_7 = L_6->get__data_1();
		int32_t L_8 = Math_Min_m3468062251(NULL /*static, unused*/, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), /*hidden argument*/NULL);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0059;
	}

IL_003e:
	{
		UInt64U5BU5D_t1659327989* L_9 = __this->get__data_1();
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		int64_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		BitSet_t2017162039 * L_13 = V_0;
		UInt64U5BU5D_t1659327989* L_14 = L_13->get__data_1();
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		int64_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((int64_t)L_12) == ((int64_t)L_17)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_21 = V_1;
		V_3 = L_21;
		goto IL_007c;
	}

IL_0067:
	{
		UInt64U5BU5D_t1659327989* L_22 = __this->get__data_1();
		int32_t L_23 = V_3;
		int32_t L_24 = L_23;
		int64_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int64_t)L_25) == ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0078:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_007c:
	{
		int32_t L_27 = V_3;
		UInt64U5BU5D_t1659327989* L_28 = __this->get__data_1();
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_29 = V_1;
		V_4 = L_29;
		goto IL_00aa;
	}

IL_0092:
	{
		BitSet_t2017162039 * L_30 = V_0;
		UInt64U5BU5D_t1659327989* L_31 = L_30->get__data_1();
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		int64_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		if ((((int64_t)L_34) == ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_00a4:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00aa:
	{
		int32_t L_36 = V_4;
		BitSet_t2017162039 * L_37 = V_0;
		UInt64U5BU5D_t1659327989* L_38 = L_37->get__data_1();
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))))))
		{
			goto IL_0092;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 Antlr4.Runtime.Sharpen.BitSet::GetHashCode()
extern "C"  int32_t BitSet_GetHashCode_m21523737 (BitSet_t2017162039 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = (((int64_t)((int64_t)1)));
		V_1 = 0;
		goto IL_0037;
	}

IL_000a:
	{
		UInt64U5BU5D_t1659327989* L_0 = __this->get__data_1();
		uint32_t L_1 = V_1;
		uintptr_t L_2 = (((uintptr_t)L_1));
		int64_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int64_t)L_3) == ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0033;
		}
	}
	{
		uint64_t L_4 = V_0;
		uint32_t L_5 = V_1;
		V_0 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_4, (int64_t)(((int64_t)((int64_t)((int32_t)31))))))^(int64_t)(((int64_t)((uint64_t)L_5)))));
		uint64_t L_6 = V_0;
		UInt64U5BU5D_t1659327989* L_7 = __this->get__data_1();
		uint32_t L_8 = V_1;
		uintptr_t L_9 = (((uintptr_t)L_8));
		int64_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)(((int64_t)((int64_t)((int32_t)31))))))^(int64_t)L_10));
	}

IL_0033:
	{
		uint32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0037:
	{
		uint32_t L_12 = V_1;
		UInt64U5BU5D_t1659327989* L_13 = __this->get__data_1();
		if ((((int64_t)(((int64_t)((uint64_t)L_12)))) < ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))))))))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_14 = UInt64_GetHashCode_m4209760355((&V_0), /*hidden argument*/NULL);
		return L_14;
	}
}
// System.String Antlr4.Runtime.Sharpen.BitSet::ToString()
extern "C"  String_t* BitSet_ToString_m2300578886 (BitSet_t2017162039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet_ToString_m2300578886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		StringBuilder_Append_m2383614642(L_1, ((int32_t)123), /*hidden argument*/NULL);
		int32_t L_2 = BitSet_NextSetBit_m81789356(__this, 0, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0046;
	}

IL_001c:
	{
		StringBuilder_t * L_3 = V_0;
		int32_t L_4 = StringBuilder_get_Length_m3238060835(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		StringBuilder_t * L_5 = V_0;
		StringBuilder_Append_m1965104174(L_5, _stringLiteral3450517380, /*hidden argument*/NULL);
	}

IL_0034:
	{
		StringBuilder_t * L_6 = V_0;
		int32_t L_7 = V_1;
		StringBuilder_Append_m890240332(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = BitSet_NextSetBit_m81789356(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_0046:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_11 = V_0;
		StringBuilder_Append_m2383614642(L_11, ((int32_t)125), /*hidden argument*/NULL);
		StringBuilder_t * L_12 = V_0;
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
	}
}
// System.Void Antlr4.Runtime.Sharpen.BitSet::.cctor()
extern "C"  void BitSet__cctor_m2126130115 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BitSet__cctor_m2126130115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((BitSet_t2017162039_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t2017162039_il2cpp_TypeInfo_var))->set_EmptyBits_0(((UInt64U5BU5D_t1659327989*)SZArrayNew(UInt64U5BU5D_t1659327989_il2cpp_TypeInfo_var, (uint32_t)0)));
		Int32U5BU5D_t385246372* L_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255367____U24fieldU2DF07C49A3D1E5BE20A8AFEB1860BBA6F1163464F8_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((BitSet_t2017162039_StaticFields*)il2cpp_codegen_static_fields_for(BitSet_t2017162039_il2cpp_TypeInfo_var))->set_index64_2(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Antlr4.Runtime.Sharpen.SpinWait::SpinOnce()
extern "C"  void SpinWait_SpinOnce_m2959215841 (SpinWait_t3580045567 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpinWait_SpinOnce_m2959215841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t451242010 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_ntime_1();
		__this->set_ntime_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		ManualResetEvent_t451242010 * L_1 = (ManualResetEvent_t451242010 *)il2cpp_codegen_object_new(ManualResetEvent_t451242010_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m4010886457(L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpinWait_t3580045567_il2cpp_TypeInfo_var);
		bool L_2 = ((SpinWait_t3580045567_StaticFields*)il2cpp_codegen_static_fields_for(SpinWait_t3580045567_il2cpp_TypeInfo_var))->get_isSingleCpu_0();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		ManualResetEvent_t451242010 * L_3 = V_0;
		VirtFuncInvoker1< bool, int32_t >::Invoke(12 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_3, 0);
		goto IL_0060;
	}

IL_002c:
	{
		int32_t L_4 = __this->get_ntime_1();
		if (((int32_t)((int32_t)L_4%(int32_t)((int32_t)10))))
		{
			goto IL_0047;
		}
	}
	{
		ManualResetEvent_t451242010 * L_5 = V_0;
		VirtFuncInvoker1< bool, int32_t >::Invoke(12 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_5, 0);
		goto IL_0060;
	}

IL_0047:
	{
		ManualResetEvent_t451242010 * L_6 = V_0;
		int32_t L_7 = __this->get_ntime_1();
		int32_t L_8 = Math_Min_m3468062251(NULL /*static, unused*/, L_7, ((int32_t)200), /*hidden argument*/NULL);
		VirtFuncInvoker1< bool, int32_t >::Invoke(12 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_6, ((int32_t)((int32_t)L_8<<(int32_t)1)));
	}

IL_0060:
	{
		return;
	}
}
extern "C"  void SpinWait_SpinOnce_m2959215841_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SpinWait_t3580045567 * _thisAdjusted = reinterpret_cast<SpinWait_t3580045567 *>(__this + 1);
	SpinWait_SpinOnce_m2959215841(_thisAdjusted, method);
}
// System.Void Antlr4.Runtime.Sharpen.SpinWait::.cctor()
extern "C"  void SpinWait__cctor_m2290468480 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpinWait__cctor_m2290468480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Environment_get_ProcessorCount_m3616251798(NULL /*static, unused*/, /*hidden argument*/NULL);
		((SpinWait_t3580045567_StaticFields*)il2cpp_codegen_static_fields_for(SpinWait_t3580045567_il2cpp_TypeInfo_var))->set_isSingleCpu_0((bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Antlr4.Runtime.Tree.ErrorNodeImpl::.ctor(Antlr4.Runtime.IToken)
extern "C"  void ErrorNodeImpl__ctor_m4186736754 (ErrorNodeImpl_t236481808 * __this, RuntimeObject* ___token0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___token0;
		TerminalNodeImpl__ctor_m2394827149(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Antlr4.Runtime.Tree.ParseTreeWalker::.ctor()
extern "C"  void ParseTreeWalker__ctor_m223722929 (ParseTreeWalker_t2338734297 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.Tree.ParseTreeWalker::Walk(Antlr4.Runtime.Tree.IParseTreeListener,Antlr4.Runtime.Tree.IParseTree)
extern "C"  void ParseTreeWalker_Walk_m3650548984 (ParseTreeWalker_t2338734297 * __this, RuntimeObject* ___listener0, RuntimeObject* ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParseTreeWalker_Walk_m3650548984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___t1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IErrorNode_t1315474453_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = ___listener0;
		RuntimeObject* L_2 = ___t1;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Antlr4.Runtime.Tree.IParseTreeListener::VisitErrorNode(Antlr4.Runtime.Tree.IErrorNode) */, IParseTreeListener_t2202621444_il2cpp_TypeInfo_var, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IErrorNode_t1315474453_il2cpp_TypeInfo_var)));
		return;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___t1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, ITerminalNode_t3564352371_il2cpp_TypeInfo_var)))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_4 = ___listener0;
		RuntimeObject* L_5 = ___t1;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Antlr4.Runtime.Tree.IParseTreeListener::VisitTerminal(Antlr4.Runtime.Tree.ITerminalNode) */, IParseTreeListener_t2202621444_il2cpp_TypeInfo_var, L_4, ((RuntimeObject*)Castclass((RuntimeObject*)L_5, ITerminalNode_t3564352371_il2cpp_TypeInfo_var)));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___t1;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IRuleNode_t2960422016_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = ___listener0;
		RuntimeObject* L_8 = V_0;
		VirtActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Antlr4.Runtime.Tree.ParseTreeWalker::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener,Antlr4.Runtime.Tree.IRuleNode) */, __this, L_7, L_8);
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Antlr4.Runtime.Tree.ITree::get_ChildCount() */, ITree_t1650705538_il2cpp_TypeInfo_var, L_9);
		V_1 = L_10;
		V_2 = 0;
		goto IL_005f;
	}

IL_004d:
	{
		RuntimeObject* L_11 = ___listener0;
		RuntimeObject* L_12 = V_0;
		int32_t L_13 = V_2;
		RuntimeObject* L_14 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Antlr4.Runtime.Tree.IParseTree Antlr4.Runtime.Tree.IParseTree::GetChild(System.Int32) */, IParseTree_t3582622687_il2cpp_TypeInfo_var, L_12, L_13);
		VirtActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Void Antlr4.Runtime.Tree.ParseTreeWalker::Walk(Antlr4.Runtime.Tree.IParseTreeListener,Antlr4.Runtime.Tree.IParseTree) */, __this, L_11, L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_18 = ___listener0;
		RuntimeObject* L_19 = V_0;
		VirtActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Antlr4.Runtime.Tree.ParseTreeWalker::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener,Antlr4.Runtime.Tree.IRuleNode) */, __this, L_18, L_19);
		return;
	}
}
// System.Void Antlr4.Runtime.Tree.ParseTreeWalker::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener,Antlr4.Runtime.Tree.IRuleNode)
extern "C"  void ParseTreeWalker_EnterRule_m3337339851 (ParseTreeWalker_t2338734297 * __this, RuntimeObject* ___listener0, RuntimeObject* ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParseTreeWalker_EnterRule_m3337339851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParserRuleContext_t3215563317 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___r1;
		RuleContext_t846066196 * L_1 = InterfaceFuncInvoker0< RuleContext_t846066196 * >::Invoke(0 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.Tree.IRuleNode::get_RuleContext() */, IRuleNode_t2960422016_il2cpp_TypeInfo_var, L_0);
		V_0 = ((ParserRuleContext_t3215563317 *)CastclassClass((RuntimeObject*)L_1, ParserRuleContext_t3215563317_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = ___listener0;
		ParserRuleContext_t3215563317 * L_3 = V_0;
		InterfaceActionInvoker1< ParserRuleContext_t3215563317 * >::Invoke(2 /* System.Void Antlr4.Runtime.Tree.IParseTreeListener::EnterEveryRule(Antlr4.Runtime.ParserRuleContext) */, IParseTreeListener_t2202621444_il2cpp_TypeInfo_var, L_2, L_3);
		ParserRuleContext_t3215563317 * L_4 = V_0;
		RuntimeObject* L_5 = ___listener0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(21 /* System.Void Antlr4.Runtime.ParserRuleContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener) */, L_4, L_5);
		return;
	}
}
// System.Void Antlr4.Runtime.Tree.ParseTreeWalker::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener,Antlr4.Runtime.Tree.IRuleNode)
extern "C"  void ParseTreeWalker_ExitRule_m1393477870 (ParseTreeWalker_t2338734297 * __this, RuntimeObject* ___listener0, RuntimeObject* ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParseTreeWalker_ExitRule_m1393477870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParserRuleContext_t3215563317 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___r1;
		RuleContext_t846066196 * L_1 = InterfaceFuncInvoker0< RuleContext_t846066196 * >::Invoke(0 /* Antlr4.Runtime.RuleContext Antlr4.Runtime.Tree.IRuleNode::get_RuleContext() */, IRuleNode_t2960422016_il2cpp_TypeInfo_var, L_0);
		V_0 = ((ParserRuleContext_t3215563317 *)CastclassClass((RuntimeObject*)L_1, ParserRuleContext_t3215563317_il2cpp_TypeInfo_var));
		ParserRuleContext_t3215563317 * L_2 = V_0;
		RuntimeObject* L_3 = ___listener0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(22 /* System.Void Antlr4.Runtime.ParserRuleContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener) */, L_2, L_3);
		RuntimeObject* L_4 = ___listener0;
		ParserRuleContext_t3215563317 * L_5 = V_0;
		InterfaceActionInvoker1< ParserRuleContext_t3215563317 * >::Invoke(3 /* System.Void Antlr4.Runtime.Tree.IParseTreeListener::ExitEveryRule(Antlr4.Runtime.ParserRuleContext) */, IParseTreeListener_t2202621444_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Void Antlr4.Runtime.Tree.ParseTreeWalker::.cctor()
extern "C"  void ParseTreeWalker__cctor_m2971831369 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParseTreeWalker__cctor_m2971831369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParseTreeWalker_t2338734297 * L_0 = (ParseTreeWalker_t2338734297 *)il2cpp_codegen_object_new(ParseTreeWalker_t2338734297_il2cpp_TypeInfo_var);
		ParseTreeWalker__ctor_m223722929(L_0, /*hidden argument*/NULL);
		((ParseTreeWalker_t2338734297_StaticFields*)il2cpp_codegen_static_fields_for(ParseTreeWalker_t2338734297_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Antlr4.Runtime.Tree.TerminalNodeImpl::.ctor(Antlr4.Runtime.IToken)
extern "C"  void TerminalNodeImpl__ctor_m2394827149 (TerminalNodeImpl_t19686673 * __this, RuntimeObject* ___symbol0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___symbol0;
		__this->set__symbol_0(L_0);
		return;
	}
}
// Antlr4.Runtime.Tree.IParseTree Antlr4.Runtime.Tree.TerminalNodeImpl::GetChild(System.Int32)
extern "C"  RuntimeObject* TerminalNodeImpl_GetChild_m693259786 (TerminalNodeImpl_t19686673 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		return (RuntimeObject*)NULL;
	}
}
// Antlr4.Runtime.IToken Antlr4.Runtime.Tree.TerminalNodeImpl::get_Symbol()
extern "C"  RuntimeObject* TerminalNodeImpl_get_Symbol_m2186056534 (TerminalNodeImpl_t19686673 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__symbol_0();
		return L_0;
	}
}
// Antlr4.Runtime.Tree.IRuleNode Antlr4.Runtime.Tree.TerminalNodeImpl::get_Parent()
extern "C"  RuntimeObject* TerminalNodeImpl_get_Parent_m1503186659 (TerminalNodeImpl_t19686673 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__parent_1();
		return L_0;
	}
}
// System.Void Antlr4.Runtime.Tree.TerminalNodeImpl::set_Parent(Antlr4.Runtime.Tree.IRuleNode)
extern "C"  void TerminalNodeImpl_set_Parent_m3501644751 (TerminalNodeImpl_t19686673 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set__parent_1(L_0);
		return;
	}
}
// System.Int32 Antlr4.Runtime.Tree.TerminalNodeImpl::get_ChildCount()
extern "C"  int32_t TerminalNodeImpl_get_ChildCount_m2930232545 (TerminalNodeImpl_t19686673 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.String Antlr4.Runtime.Tree.TerminalNodeImpl::GetText()
extern "C"  String_t* TerminalNodeImpl_GetText_m3505950425 (TerminalNodeImpl_t19686673 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerminalNodeImpl_GetText_m3505950425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* Antlr4.Runtime.IToken Antlr4.Runtime.Tree.TerminalNodeImpl::get_Symbol() */, __this);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* Antlr4.Runtime.IToken Antlr4.Runtime.Tree.TerminalNodeImpl::get_Symbol() */, __this);
		String_t* L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Antlr4.Runtime.IToken::get_Text() */, IToken_t679559059_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0017:
	{
		return (String_t*)NULL;
	}
}
// System.String Antlr4.Runtime.Tree.TerminalNodeImpl::ToString()
extern "C"  String_t* TerminalNodeImpl_ToString_m3996228711 (TerminalNodeImpl_t19686673 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerminalNodeImpl_ToString_m3996228711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* Antlr4.Runtime.IToken Antlr4.Runtime.Tree.TerminalNodeImpl::get_Symbol() */, __this);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* Antlr4.Runtime.IToken Antlr4.Runtime.Tree.TerminalNodeImpl::get_Symbol() */, __this);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IToken::get_Type() */, IToken_t679559059_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		return _stringLiteral2446009687;
	}

IL_0022:
	{
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* Antlr4.Runtime.IToken Antlr4.Runtime.Tree.TerminalNodeImpl::get_Symbol() */, __this);
		String_t* L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Antlr4.Runtime.IToken::get_Text() */, IToken_t679559059_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}

IL_002e:
	{
		return _stringLiteral2391157367;
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
// System.Void Antlr4.Runtime.Vocabulary::.ctor(System.String[],System.String[])
extern "C"  void Vocabulary__ctor_m3560961280 (Vocabulary_t3272722500 * __this, StringU5BU5D_t1281789340* ___literalNames0, StringU5BU5D_t1281789340* ___symbolicNames1, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___literalNames0;
		StringU5BU5D_t1281789340* L_1 = ___symbolicNames1;
		Vocabulary__ctor_m2407199093(__this, L_0, L_1, (StringU5BU5D_t1281789340*)(StringU5BU5D_t1281789340*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Antlr4.Runtime.Vocabulary::.ctor(System.String[],System.String[],System.String[])
extern "C"  void Vocabulary__ctor_m2407199093 (Vocabulary_t3272722500 * __this, StringU5BU5D_t1281789340* ___literalNames0, StringU5BU5D_t1281789340* ___symbolicNames1, StringU5BU5D_t1281789340* ___displayNames2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vocabulary__ctor_m2407199093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vocabulary_t3272722500 * G_B2_0 = NULL;
	Vocabulary_t3272722500 * G_B1_0 = NULL;
	StringU5BU5D_t1281789340* G_B3_0 = NULL;
	Vocabulary_t3272722500 * G_B3_1 = NULL;
	Vocabulary_t3272722500 * G_B5_0 = NULL;
	Vocabulary_t3272722500 * G_B4_0 = NULL;
	StringU5BU5D_t1281789340* G_B6_0 = NULL;
	Vocabulary_t3272722500 * G_B6_1 = NULL;
	Vocabulary_t3272722500 * G_B8_0 = NULL;
	Vocabulary_t3272722500 * G_B7_0 = NULL;
	StringU5BU5D_t1281789340* G_B9_0 = NULL;
	Vocabulary_t3272722500 * G_B9_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_0 = ___literalNames0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		StringU5BU5D_t1281789340* L_1 = ___literalNames0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vocabulary_t3272722500_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_2 = ((Vocabulary_t3272722500_StaticFields*)il2cpp_codegen_static_fields_for(Vocabulary_t3272722500_il2cpp_TypeInfo_var))->get_EmptyNames_0();
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		G_B3_1->set_literalNames_2(G_B3_0);
		StringU5BU5D_t1281789340* L_3 = ___symbolicNames1;
		G_B4_0 = __this;
		if (!L_3)
		{
			G_B5_0 = __this;
			goto IL_002a;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = ___symbolicNames1;
		G_B6_0 = L_4;
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vocabulary_t3272722500_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_5 = ((Vocabulary_t3272722500_StaticFields*)il2cpp_codegen_static_fields_for(Vocabulary_t3272722500_il2cpp_TypeInfo_var))->get_EmptyNames_0();
		G_B6_0 = L_5;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		G_B6_1->set_symbolicNames_3(G_B6_0);
		StringU5BU5D_t1281789340* L_6 = ___displayNames2;
		G_B7_0 = __this;
		if (!L_6)
		{
			G_B8_0 = __this;
			goto IL_0041;
		}
	}
	{
		StringU5BU5D_t1281789340* L_7 = ___displayNames2;
		G_B9_0 = L_7;
		G_B9_1 = G_B7_0;
		goto IL_0046;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vocabulary_t3272722500_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_8 = ((Vocabulary_t3272722500_StaticFields*)il2cpp_codegen_static_fields_for(Vocabulary_t3272722500_il2cpp_TypeInfo_var))->get_EmptyNames_0();
		G_B9_0 = L_8;
		G_B9_1 = G_B8_0;
	}

IL_0046:
	{
		G_B9_1->set_displayNames_4(G_B9_0);
		StringU5BU5D_t1281789340* L_9 = __this->get_displayNames_4();
		StringU5BU5D_t1281789340* L_10 = __this->get_literalNames_2();
		StringU5BU5D_t1281789340* L_11 = __this->get_symbolicNames_3();
		int32_t L_12 = Math_Max_m1873195862(NULL /*static, unused*/, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), /*hidden argument*/NULL);
		int32_t L_13 = Math_Max_m1873195862(NULL /*static, unused*/, (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), L_12, /*hidden argument*/NULL);
		__this->set_maxTokenType_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
		return;
	}
}
// System.String Antlr4.Runtime.Vocabulary::GetLiteralName(System.Int32)
extern "C"  String_t* Vocabulary_GetLiteralName_m1569546043 (Vocabulary_t3272722500 * __this, int32_t ___tokenType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___tokenType0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___tokenType0;
		StringU5BU5D_t1281789340* L_2 = __this->get_literalNames_2();
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		StringU5BU5D_t1281789340* L_3 = __this->get_literalNames_2();
		int32_t L_4 = ___tokenType0;
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}

IL_001e:
	{
		return (String_t*)NULL;
	}
}
// System.String Antlr4.Runtime.Vocabulary::GetSymbolicName(System.Int32)
extern "C"  String_t* Vocabulary_GetSymbolicName_m2368711500 (Vocabulary_t3272722500 * __this, int32_t ___tokenType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vocabulary_GetSymbolicName_m2368711500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___tokenType0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___tokenType0;
		StringU5BU5D_t1281789340* L_2 = __this->get_symbolicNames_3();
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		StringU5BU5D_t1281789340* L_3 = __this->get_symbolicNames_3();
		int32_t L_4 = ___tokenType0;
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}

IL_001e:
	{
		int32_t L_7 = ___tokenType0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		return _stringLiteral3006046887;
	}

IL_002b:
	{
		return (String_t*)NULL;
	}
}
// System.String Antlr4.Runtime.Vocabulary::GetDisplayName(System.Int32)
extern "C"  String_t* Vocabulary_GetDisplayName_m2978177503 (Vocabulary_t3272722500 * __this, int32_t ___tokenType0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = ___tokenType0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = ___tokenType0;
		StringU5BU5D_t1281789340* L_2 = __this->get_displayNames_4();
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		StringU5BU5D_t1281789340* L_3 = __this->get_displayNames_4();
		int32_t L_4 = ___tokenType0;
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_8 = V_0;
		return L_8;
	}

IL_0026:
	{
		int32_t L_9 = ___tokenType0;
		String_t* L_10 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Antlr4.Runtime.Vocabulary::GetLiteralName(System.Int32) */, __this, L_9);
		V_1 = L_10;
		String_t* L_11 = V_1;
		if (!L_11)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_12 = V_1;
		return L_12;
	}

IL_0036:
	{
		int32_t L_13 = ___tokenType0;
		String_t* L_14 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(6 /* System.String Antlr4.Runtime.Vocabulary::GetSymbolicName(System.Int32) */, __this, L_13);
		V_2 = L_14;
		String_t* L_15 = V_2;
		if (!L_15)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_16 = V_2;
		return L_16;
	}

IL_0046:
	{
		String_t* L_17 = Int32_ToString_m141394615((&___tokenType0), /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void Antlr4.Runtime.Vocabulary::.cctor()
extern "C"  void Vocabulary__cctor_m2190465954 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vocabulary__cctor_m2190465954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Vocabulary_t3272722500_StaticFields*)il2cpp_codegen_static_fields_for(Vocabulary_t3272722500_il2cpp_TypeInfo_var))->set_EmptyNames_0(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)0)));
		StringU5BU5D_t1281789340* L_0 = ((Vocabulary_t3272722500_StaticFields*)il2cpp_codegen_static_fields_for(Vocabulary_t3272722500_il2cpp_TypeInfo_var))->get_EmptyNames_0();
		StringU5BU5D_t1281789340* L_1 = ((Vocabulary_t3272722500_StaticFields*)il2cpp_codegen_static_fields_for(Vocabulary_t3272722500_il2cpp_TypeInfo_var))->get_EmptyNames_0();
		StringU5BU5D_t1281789340* L_2 = ((Vocabulary_t3272722500_StaticFields*)il2cpp_codegen_static_fields_for(Vocabulary_t3272722500_il2cpp_TypeInfo_var))->get_EmptyNames_0();
		Vocabulary_t3272722500 * L_3 = (Vocabulary_t3272722500 *)il2cpp_codegen_object_new(Vocabulary_t3272722500_il2cpp_TypeInfo_var);
		Vocabulary__ctor_m2407199093(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		((Vocabulary_t3272722500_StaticFields*)il2cpp_codegen_static_fields_for(Vocabulary_t3272722500_il2cpp_TypeInfo_var))->set_EmptyVocabulary_1(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
