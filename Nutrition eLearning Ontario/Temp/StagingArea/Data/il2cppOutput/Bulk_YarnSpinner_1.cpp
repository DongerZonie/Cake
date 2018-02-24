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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// YarnSpinnerParser/Action_statementContext
struct Action_statementContext_t336721119;
// Antlr4.Runtime.ParserRuleContext
struct ParserRuleContext_t3215563317;
// Antlr4.Runtime.Tree.IParseTreeListener
struct IParseTreeListener_t2202621444;
// YarnSpinnerParser/BodyContext
struct BodyContext_t1127179312;
// YarnSpinnerParser/StatementContext[]
struct StatementContextU5BU5D_t2333700405;
// YarnSpinnerParser/StatementContext
struct StatementContext_t1304201180;
// YarnSpinnerParser/DialogueContext
struct DialogueContext_t950888852;
// YarnSpinnerParser/Else_clauseContext
struct Else_clauseContext_t117630170;
// YarnSpinnerParser/Else_if_clauseContext
struct Else_if_clauseContext_t1663705049;
// YarnSpinnerParser/ExpressionContext
struct ExpressionContext_t4156557213;
// YarnSpinnerParser/ExpAddSubContext
struct ExpAddSubContext_t3291599059;
// YarnSpinnerParser/ExpAndOrXorContext
struct ExpAndOrXorContext_t3486759600;
// YarnSpinnerParser/ExpComparisonContext
struct ExpComparisonContext_t2005925874;
// YarnSpinnerParser/ExpEqualityContext
struct ExpEqualityContext_t3120361692;
// YarnSpinnerParser/ExpMultDivModContext
struct ExpMultDivModContext_t1610360120;
// YarnSpinnerParser/ExpMultDivModEqualsContext
struct ExpMultDivModEqualsContext_t506470414;
// YarnSpinnerParser/VariableContext
struct VariableContext_t1517118608;
// YarnSpinnerParser/ExpNegativeContext
struct ExpNegativeContext_t944999273;
// YarnSpinnerParser/ExpNotContext
struct ExpNotContext_t2787672394;
// YarnSpinnerParser/ExpParensContext
struct ExpParensContext_t668106348;
// YarnSpinnerParser/ExpPlusMinusEqualsContext
struct ExpPlusMinusEqualsContext_t826317233;
// YarnSpinnerParser/ExpValueContext
struct ExpValueContext_t2880146557;
// YarnSpinnerParser/ValueContext
struct ValueContext_t985627136;
// YarnSpinnerParser/Function_statementContext
struct Function_statementContext_t1512458714;
// YarnSpinnerParser/ExpressionContext[]
struct ExpressionContextU5BU5D_t292150608;
// YarnSpinnerParser/FunctionContext
struct FunctionContext_t3439243301;
// Antlr4.Runtime.Tree.ITerminalNode
struct ITerminalNode_t3564352371;
// YarnSpinnerParser/Hashtag_blockContext
struct Hashtag_blockContext_t2033704137;
// YarnSpinnerParser/HashtagContext[]
struct HashtagContextU5BU5D_t3350391612;
// YarnSpinnerParser/HashtagContext
struct HashtagContext_t624613153;
// YarnSpinnerParser/Header_lineContext
struct Header_lineContext_t832134280;
// YarnSpinnerParser/Header_tagContext
struct Header_tagContext_t1239473226;
// YarnSpinnerParser/Header_titleContext
struct Header_titleContext_t4266626001;
// YarnSpinnerParser/HeaderContext
struct HeaderContext_t3816626548;
// YarnSpinnerParser/Header_tagContext[]
struct Header_tagContextU5BU5D_t3070707535;
// YarnSpinnerParser/If_clauseContext
struct If_clauseContext_t433839448;
// YarnSpinnerParser/If_statementContext
struct If_statementContext_t134624494;
// YarnSpinnerParser/Else_if_clauseContext[]
struct Else_if_clauseContextU5BU5D_t1394249892;
// YarnSpinnerParser/Line_statementContext
struct Line_statementContext_t2655749263;
// YarnSpinnerParser/TextContext
struct TextContext_t1415966466;
// YarnSpinnerParser/NodeContext
struct NodeContext_t3984547532;
// YarnSpinnerParser/Option_statementContext
struct Option_statementContext_t2631346611;
// YarnSpinnerParser/Set_statementContext
struct Set_statementContext_t46281311;
// YarnSpinnerParser/Shortcut_conditionalContext
struct Shortcut_conditionalContext_t2827451331;
// YarnSpinnerParser/Shortcut_statementContext
struct Shortcut_statementContext_t3521849716;
// YarnSpinnerParser/ShortcutContext[]
struct ShortcutContextU5BU5D_t3884824668;
// YarnSpinnerParser/ShortcutContext
struct ShortcutContext_t2133948545;
// YarnSpinnerParser/Shortcut_textContext
struct Shortcut_textContext_t3731605062;
// YarnSpinnerParser/ValueFalseContext
struct ValueFalseContext_t1433625895;
// YarnSpinnerParser/ValueFuncContext
struct ValueFuncContext_t1993483790;
// YarnSpinnerParser/ValueNullContext
struct ValueNullContext_t1482382033;
// YarnSpinnerParser/ValueNumberContext
struct ValueNumberContext_t2539936067;
// YarnSpinnerParser/ValueStringContext
struct ValueStringContext_t470402646;
// YarnSpinnerParser/ValueTrueContext
struct ValueTrueContext_t465383134;
// YarnSpinnerParser/ValueVarContext
struct ValueVarContext_t3081726169;
// YarnSpinnerParserBaseListener
struct YarnSpinnerParserBaseListener_t2715304878;
// Antlr4.Runtime.Tree.IErrorNode
struct IErrorNode_t1315474453;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTree>
struct IList_1_t1102975174;
// Antlr4.Runtime.IToken
struct IToken_t679559059;
// Antlr4.Runtime.RecognitionException
struct RecognitionException_t4252147236;

extern RuntimeClass* ParserRuleContext_t3215563317_il2cpp_TypeInfo_var;
extern const uint32_t Action_statementContext__ctor_m432645309_MetadataUsageId;
extern RuntimeClass* IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var;
extern const uint32_t Action_statementContext_EnterRule_m1102038301_MetadataUsageId;
extern const uint32_t Action_statementContext_ExitRule_m2389970387_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisStatementContext_t1304201180_m54646415_RuntimeMethod_var;
extern const uint32_t BodyContext_statement_m2927849998_MetadataUsageId;
extern const uint32_t BodyContext__ctor_m2191966432_MetadataUsageId;
extern const uint32_t BodyContext_EnterRule_m1415640378_MetadataUsageId;
extern const uint32_t BodyContext_ExitRule_m4256467827_MetadataUsageId;
extern const uint32_t DialogueContext__ctor_m1687152166_MetadataUsageId;
extern const uint32_t DialogueContext_EnterRule_m2940109984_MetadataUsageId;
extern const uint32_t DialogueContext_ExitRule_m2374785926_MetadataUsageId;
extern const uint32_t Else_clauseContext_statement_m3752972534_MetadataUsageId;
extern const uint32_t Else_clauseContext__ctor_m789629570_MetadataUsageId;
extern const uint32_t Else_clauseContext_EnterRule_m2140825148_MetadataUsageId;
extern const uint32_t Else_clauseContext_ExitRule_m2375976501_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var;
extern const uint32_t Else_if_clauseContext_expression_m2473156732_MetadataUsageId;
extern const uint32_t Else_if_clauseContext_statement_m2640827655_MetadataUsageId;
extern const uint32_t Else_if_clauseContext__ctor_m1037257499_MetadataUsageId;
extern const uint32_t Else_if_clauseContext_EnterRule_m880017896_MetadataUsageId;
extern const uint32_t Else_if_clauseContext_ExitRule_m1753729338_MetadataUsageId;
extern const uint32_t ExpAddSubContext_expression_m3119524916_MetadataUsageId;
extern const uint32_t ExpAddSubContext_EnterRule_m1679245402_MetadataUsageId;
extern const uint32_t ExpAddSubContext_ExitRule_m2512366399_MetadataUsageId;
extern const uint32_t ExpAndOrXorContext_expression_m912398060_MetadataUsageId;
extern const uint32_t ExpAndOrXorContext_EnterRule_m1478184154_MetadataUsageId;
extern const uint32_t ExpAndOrXorContext_ExitRule_m362155530_MetadataUsageId;
extern const uint32_t ExpComparisonContext_expression_m525886590_MetadataUsageId;
extern const uint32_t ExpComparisonContext_EnterRule_m1966325192_MetadataUsageId;
extern const uint32_t ExpComparisonContext_ExitRule_m1886387747_MetadataUsageId;
extern const uint32_t ExpEqualityContext_expression_m668278749_MetadataUsageId;
extern const uint32_t ExpEqualityContext_EnterRule_m3249013511_MetadataUsageId;
extern const uint32_t ExpEqualityContext_ExitRule_m1345759752_MetadataUsageId;
extern const uint32_t ExpMultDivModContext_expression_m2782615945_MetadataUsageId;
extern const uint32_t ExpMultDivModContext_EnterRule_m2784927584_MetadataUsageId;
extern const uint32_t ExpMultDivModContext_ExitRule_m2582600614_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisVariableContext_t1517118608_m280824563_RuntimeMethod_var;
extern const uint32_t ExpMultDivModEqualsContext_variable_m3187960803_MetadataUsageId;
extern const uint32_t ExpMultDivModEqualsContext_expression_m1447902058_MetadataUsageId;
extern const uint32_t ExpMultDivModEqualsContext_EnterRule_m676277181_MetadataUsageId;
extern const uint32_t ExpMultDivModEqualsContext_ExitRule_m2791783946_MetadataUsageId;
extern const uint32_t ExpNegativeContext_expression_m2539136480_MetadataUsageId;
extern const uint32_t ExpNegativeContext_EnterRule_m896279425_MetadataUsageId;
extern const uint32_t ExpNegativeContext_ExitRule_m2914499687_MetadataUsageId;
extern const uint32_t ExpNotContext_expression_m545405183_MetadataUsageId;
extern const uint32_t ExpNotContext_EnterRule_m3110332213_MetadataUsageId;
extern const uint32_t ExpNotContext_ExitRule_m3917812532_MetadataUsageId;
extern const uint32_t ExpParensContext_expression_m4110003111_MetadataUsageId;
extern const uint32_t ExpParensContext_EnterRule_m3590784765_MetadataUsageId;
extern const uint32_t ExpParensContext_ExitRule_m818846523_MetadataUsageId;
extern const uint32_t ExpPlusMinusEqualsContext_variable_m1270460905_MetadataUsageId;
extern const uint32_t ExpPlusMinusEqualsContext_expression_m334819130_MetadataUsageId;
extern const uint32_t ExpPlusMinusEqualsContext_EnterRule_m586985810_MetadataUsageId;
extern const uint32_t ExpPlusMinusEqualsContext_ExitRule_m509406409_MetadataUsageId;
extern const uint32_t ExpressionContext__ctor_m2623714539_MetadataUsageId;
extern const uint32_t ExpressionContext__ctor_m2921147313_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisValueContext_t985627136_m211883825_RuntimeMethod_var;
extern const uint32_t ExpValueContext_value_m3579596969_MetadataUsageId;
extern const uint32_t ExpValueContext_EnterRule_m1756391372_MetadataUsageId;
extern const uint32_t ExpValueContext_ExitRule_m116777504_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisExpressionContext_t4156557213_m719172526_RuntimeMethod_var;
extern const uint32_t Function_statementContext_expression_m1612210405_MetadataUsageId;
extern const uint32_t Function_statementContext__ctor_m490120435_MetadataUsageId;
extern const uint32_t Function_statementContext_EnterRule_m1841088110_MetadataUsageId;
extern const uint32_t Function_statementContext_ExitRule_m2721824068_MetadataUsageId;
extern const uint32_t FunctionContext_expression_m2697939872_MetadataUsageId;
extern const uint32_t FunctionContext__ctor_m4158624437_MetadataUsageId;
extern const uint32_t FunctionContext_EnterRule_m3503169812_MetadataUsageId;
extern const uint32_t FunctionContext_ExitRule_m3912274022_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisHashtagContext_t624613153_m809750008_RuntimeMethod_var;
extern const uint32_t Hashtag_blockContext_hashtag_m453822898_MetadataUsageId;
extern const uint32_t Hashtag_blockContext__ctor_m1361203416_MetadataUsageId;
extern const uint32_t Hashtag_blockContext_EnterRule_m2250865541_MetadataUsageId;
extern const uint32_t Hashtag_blockContext_ExitRule_m348769813_MetadataUsageId;
extern const uint32_t HashtagContext__ctor_m2233539084_MetadataUsageId;
extern const uint32_t HashtagContext_EnterRule_m2438235730_MetadataUsageId;
extern const uint32_t HashtagContext_ExitRule_m2934095337_MetadataUsageId;
extern const uint32_t Header_lineContext__ctor_m1295163014_MetadataUsageId;
extern const uint32_t Header_lineContext_EnterRule_m2727432242_MetadataUsageId;
extern const uint32_t Header_lineContext_ExitRule_m3190719968_MetadataUsageId;
extern const uint32_t Header_tagContext__ctor_m3681709327_MetadataUsageId;
extern const uint32_t Header_tagContext_EnterRule_m608729154_MetadataUsageId;
extern const uint32_t Header_tagContext_ExitRule_m1666191893_MetadataUsageId;
extern const uint32_t Header_titleContext__ctor_m250253274_MetadataUsageId;
extern const uint32_t Header_titleContext_EnterRule_m1277553436_MetadataUsageId;
extern const uint32_t Header_titleContext_ExitRule_m152460735_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisHeader_titleContext_t4266626001_m529101623_RuntimeMethod_var;
extern const uint32_t HeaderContext_header_title_m2826858791_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisHeader_tagContext_t1239473226_m2964111929_RuntimeMethod_var;
extern const uint32_t HeaderContext_header_tag_m2094513941_MetadataUsageId;
extern const uint32_t HeaderContext__ctor_m3474812366_MetadataUsageId;
extern const uint32_t HeaderContext_EnterRule_m2455243154_MetadataUsageId;
extern const uint32_t HeaderContext_ExitRule_m1150922153_MetadataUsageId;
extern const uint32_t If_clauseContext_expression_m2641329843_MetadataUsageId;
extern const uint32_t If_clauseContext_statement_m1762487816_MetadataUsageId;
extern const uint32_t If_clauseContext__ctor_m2698409454_MetadataUsageId;
extern const uint32_t If_clauseContext_EnterRule_m4149154000_MetadataUsageId;
extern const uint32_t If_clauseContext_ExitRule_m2887565148_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisIf_clauseContext_t433839448_m951746136_RuntimeMethod_var;
extern const uint32_t If_statementContext_if_clause_m3256646843_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisElse_if_clauseContext_t1663705049_m1165319463_RuntimeMethod_var;
extern const uint32_t If_statementContext_else_if_clause_m665586007_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisElse_clauseContext_t117630170_m1873697170_RuntimeMethod_var;
extern const uint32_t If_statementContext_else_clause_m555957786_MetadataUsageId;
extern const uint32_t If_statementContext__ctor_m2886940069_MetadataUsageId;
extern const uint32_t If_statementContext_EnterRule_m4169181973_MetadataUsageId;
extern const uint32_t If_statementContext_ExitRule_m444965441_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisTextContext_t1415966466_m2820525319_RuntimeMethod_var;
extern const uint32_t Line_statementContext_text_m454825187_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisHashtag_blockContext_t2033704137_m4259321631_RuntimeMethod_var;
extern const uint32_t Line_statementContext_hashtag_block_m2422966150_MetadataUsageId;
extern const uint32_t Line_statementContext__ctor_m2157480886_MetadataUsageId;
extern const uint32_t Line_statementContext_EnterRule_m161399120_MetadataUsageId;
extern const uint32_t Line_statementContext_ExitRule_m3467791895_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisHeaderContext_t3816626548_m2804549645_RuntimeMethod_var;
extern const uint32_t NodeContext_header_m2786942468_MetadataUsageId;
extern const uint32_t NodeContext__ctor_m3531824270_MetadataUsageId;
extern const uint32_t NodeContext_EnterRule_m3763690823_MetadataUsageId;
extern const uint32_t NodeContext_ExitRule_m3508493148_MetadataUsageId;
extern const uint32_t Option_statementContext_hashtag_block_m3118739170_MetadataUsageId;
extern const uint32_t Option_statementContext__ctor_m1633042326_MetadataUsageId;
extern const uint32_t Option_statementContext_EnterRule_m1671536086_MetadataUsageId;
extern const uint32_t Option_statementContext_ExitRule_m1847831250_MetadataUsageId;
extern const uint32_t Set_statementContext_variable_m4056607759_MetadataUsageId;
extern const uint32_t Set_statementContext_expression_m3747437255_MetadataUsageId;
extern const uint32_t Set_statementContext__ctor_m3289035558_MetadataUsageId;
extern const uint32_t Set_statementContext_EnterRule_m288350734_MetadataUsageId;
extern const uint32_t Set_statementContext_ExitRule_m2665500380_MetadataUsageId;
extern const uint32_t Shortcut_conditionalContext_expression_m2919789251_MetadataUsageId;
extern const uint32_t Shortcut_conditionalContext__ctor_m3571164168_MetadataUsageId;
extern const uint32_t Shortcut_conditionalContext_EnterRule_m1845762492_MetadataUsageId;
extern const uint32_t Shortcut_conditionalContext_ExitRule_m3306691526_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisShortcutContext_t2133948545_m1435303066_RuntimeMethod_var;
extern const uint32_t Shortcut_statementContext_shortcut_m826112993_MetadataUsageId;
extern const uint32_t Shortcut_statementContext__ctor_m88600948_MetadataUsageId;
extern const uint32_t Shortcut_statementContext_EnterRule_m2129831940_MetadataUsageId;
extern const uint32_t Shortcut_statementContext_ExitRule_m1213680592_MetadataUsageId;
extern const uint32_t Shortcut_textContext__ctor_m1429027767_MetadataUsageId;
extern const uint32_t Shortcut_textContext_EnterRule_m3440204565_MetadataUsageId;
extern const uint32_t Shortcut_textContext_ExitRule_m73466431_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisShortcut_textContext_t3731605062_m1323180438_RuntimeMethod_var;
extern const uint32_t ShortcutContext_shortcut_text_m4081885024_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisShortcut_conditionalContext_t2827451331_m3834314468_RuntimeMethod_var;
extern const uint32_t ShortcutContext_shortcut_conditional_m3811735627_MetadataUsageId;
extern const uint32_t ShortcutContext_hashtag_block_m266794148_MetadataUsageId;
extern const uint32_t ShortcutContext_statement_m4266704225_MetadataUsageId;
extern const uint32_t ShortcutContext__ctor_m1502265774_MetadataUsageId;
extern const uint32_t ShortcutContext_EnterRule_m1420850264_MetadataUsageId;
extern const uint32_t ShortcutContext_ExitRule_m3120995295_MetadataUsageId;
extern const uint32_t StatementContext__ctor_m2135736363_MetadataUsageId;
extern const uint32_t StatementContext_EnterRule_m1369059041_MetadataUsageId;
extern const uint32_t StatementContext_ExitRule_m2287789926_MetadataUsageId;
extern const uint32_t TextContext__ctor_m3952225769_MetadataUsageId;
extern const uint32_t TextContext_EnterRule_m3097745813_MetadataUsageId;
extern const uint32_t TextContext_ExitRule_m1626104217_MetadataUsageId;
extern const uint32_t ValueContext__ctor_m2858615264_MetadataUsageId;
extern const uint32_t ValueContext__ctor_m1119228882_MetadataUsageId;
extern const uint32_t ValueFalseContext_EnterRule_m1990784620_MetadataUsageId;
extern const uint32_t ValueFalseContext_ExitRule_m1097642558_MetadataUsageId;
extern const RuntimeMethod* ParserRuleContext_GetRuleContext_TisFunctionContext_t3439243301_m2784921659_RuntimeMethod_var;
extern const uint32_t ValueFuncContext_function_m126636041_MetadataUsageId;
extern const uint32_t ValueFuncContext_EnterRule_m2392368472_MetadataUsageId;
extern const uint32_t ValueFuncContext_ExitRule_m2011154754_MetadataUsageId;
extern const uint32_t ValueNullContext_EnterRule_m213841568_MetadataUsageId;
extern const uint32_t ValueNullContext_ExitRule_m2657122087_MetadataUsageId;
extern const uint32_t ValueNumberContext_EnterRule_m3708648421_MetadataUsageId;
extern const uint32_t ValueNumberContext_ExitRule_m2390804805_MetadataUsageId;
extern const uint32_t ValueStringContext_EnterRule_m2068836677_MetadataUsageId;
extern const uint32_t ValueStringContext_ExitRule_m3873861089_MetadataUsageId;
extern const uint32_t ValueTrueContext_EnterRule_m3425367458_MetadataUsageId;
extern const uint32_t ValueTrueContext_ExitRule_m1880660287_MetadataUsageId;
extern const uint32_t ValueVarContext_variable_m4282458120_MetadataUsageId;
extern const uint32_t ValueVarContext_EnterRule_m1487739489_MetadataUsageId;
extern const uint32_t ValueVarContext_ExitRule_m430884149_MetadataUsageId;
extern const uint32_t VariableContext__ctor_m695169527_MetadataUsageId;
extern const uint32_t VariableContext_EnterRule_m526211239_MetadataUsageId;
extern const uint32_t VariableContext_ExitRule_m2944078848_MetadataUsageId;

struct StatementContextU5BU5D_t2333700405;
struct ExpressionContextU5BU5D_t292150608;
struct HashtagContextU5BU5D_t3350391612;
struct Header_tagContextU5BU5D_t3070707535;
struct Else_if_clauseContextU5BU5D_t1394249892;
struct ShortcutContextU5BU5D_t3884824668;


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
#ifndef IF_CLAUSECONTEXT_T433839448_H
#define IF_CLAUSECONTEXT_T433839448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/If_clauseContext
struct  If_clauseContext_t433839448  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IF_CLAUSECONTEXT_T433839448_H
#ifndef HEADERCONTEXT_T3816626548_H
#define HEADERCONTEXT_T3816626548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/HeaderContext
struct  HeaderContext_t3816626548  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERCONTEXT_T3816626548_H
#ifndef IF_STATEMENTCONTEXT_T134624494_H
#define IF_STATEMENTCONTEXT_T134624494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/If_statementContext
struct  If_statementContext_t134624494  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IF_STATEMENTCONTEXT_T134624494_H
#ifndef LINE_STATEMENTCONTEXT_T2655749263_H
#define LINE_STATEMENTCONTEXT_T2655749263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Line_statementContext
struct  Line_statementContext_t2655749263  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINE_STATEMENTCONTEXT_T2655749263_H
#ifndef HASHTAGCONTEXT_T624613153_H
#define HASHTAGCONTEXT_T624613153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/HashtagContext
struct  HashtagContext_t624613153  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTAGCONTEXT_T624613153_H
#ifndef OPTION_STATEMENTCONTEXT_T2631346611_H
#define OPTION_STATEMENTCONTEXT_T2631346611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Option_statementContext
struct  Option_statementContext_t2631346611  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTION_STATEMENTCONTEXT_T2631346611_H
#ifndef HEADER_LINECONTEXT_T832134280_H
#define HEADER_LINECONTEXT_T832134280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Header_lineContext
struct  Header_lineContext_t832134280  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_LINECONTEXT_T832134280_H
#ifndef HEADER_TITLECONTEXT_T4266626001_H
#define HEADER_TITLECONTEXT_T4266626001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Header_titleContext
struct  Header_titleContext_t4266626001  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_TITLECONTEXT_T4266626001_H
#ifndef HEADER_TAGCONTEXT_T1239473226_H
#define HEADER_TAGCONTEXT_T1239473226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Header_tagContext
struct  Header_tagContext_t1239473226  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_TAGCONTEXT_T1239473226_H
#ifndef SHORTCUT_TEXTCONTEXT_T3731605062_H
#define SHORTCUT_TEXTCONTEXT_T3731605062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Shortcut_textContext
struct  Shortcut_textContext_t3731605062  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCUT_TEXTCONTEXT_T3731605062_H
#ifndef SHORTCUTCONTEXT_T2133948545_H
#define SHORTCUTCONTEXT_T2133948545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ShortcutContext
struct  ShortcutContext_t2133948545  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCUTCONTEXT_T2133948545_H
#ifndef ACTION_STATEMENTCONTEXT_T336721119_H
#define ACTION_STATEMENTCONTEXT_T336721119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Action_statementContext
struct  Action_statementContext_t336721119  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_STATEMENTCONTEXT_T336721119_H
#ifndef HASHTAG_BLOCKCONTEXT_T2033704137_H
#define HASHTAG_BLOCKCONTEXT_T2033704137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Hashtag_blockContext
struct  Hashtag_blockContext_t2033704137  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTAG_BLOCKCONTEXT_T2033704137_H
#ifndef SHORTCUT_STATEMENTCONTEXT_T3521849716_H
#define SHORTCUT_STATEMENTCONTEXT_T3521849716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Shortcut_statementContext
struct  Shortcut_statementContext_t3521849716  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCUT_STATEMENTCONTEXT_T3521849716_H
#ifndef NODECONTEXT_T3984547532_H
#define NODECONTEXT_T3984547532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/NodeContext
struct  NodeContext_t3984547532  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODECONTEXT_T3984547532_H
#ifndef TEXTCONTEXT_T1415966466_H
#define TEXTCONTEXT_T1415966466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/TextContext
struct  TextContext_t1415966466  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTCONTEXT_T1415966466_H
#ifndef SHORTCUT_CONDITIONALCONTEXT_T2827451331_H
#define SHORTCUT_CONDITIONALCONTEXT_T2827451331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Shortcut_conditionalContext
struct  Shortcut_conditionalContext_t2827451331  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCUT_CONDITIONALCONTEXT_T2827451331_H
#ifndef SET_STATEMENTCONTEXT_T46281311_H
#define SET_STATEMENTCONTEXT_T46281311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Set_statementContext
struct  Set_statementContext_t46281311  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SET_STATEMENTCONTEXT_T46281311_H
#ifndef EXPRESSIONCONTEXT_T4156557213_H
#define EXPRESSIONCONTEXT_T4156557213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpressionContext
struct  ExpressionContext_t4156557213  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONCONTEXT_T4156557213_H
#ifndef BODYCONTEXT_T1127179312_H
#define BODYCONTEXT_T1127179312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/BodyContext
struct  BodyContext_t1127179312  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BODYCONTEXT_T1127179312_H
#ifndef VARIABLECONTEXT_T1517118608_H
#define VARIABLECONTEXT_T1517118608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/VariableContext
struct  VariableContext_t1517118608  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIABLECONTEXT_T1517118608_H
#ifndef ELSE_IF_CLAUSECONTEXT_T1663705049_H
#define ELSE_IF_CLAUSECONTEXT_T1663705049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Else_if_clauseContext
struct  Else_if_clauseContext_t1663705049  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELSE_IF_CLAUSECONTEXT_T1663705049_H
#ifndef STATEMENTCONTEXT_T1304201180_H
#define STATEMENTCONTEXT_T1304201180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/StatementContext
struct  StatementContext_t1304201180  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMENTCONTEXT_T1304201180_H
#ifndef DIALOGUECONTEXT_T950888852_H
#define DIALOGUECONTEXT_T950888852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/DialogueContext
struct  DialogueContext_t950888852  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGUECONTEXT_T950888852_H
#ifndef ELSE_CLAUSECONTEXT_T117630170_H
#define ELSE_CLAUSECONTEXT_T117630170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Else_clauseContext
struct  Else_clauseContext_t117630170  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELSE_CLAUSECONTEXT_T117630170_H
#ifndef VALUECONTEXT_T985627136_H
#define VALUECONTEXT_T985627136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ValueContext
struct  ValueContext_t985627136  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECONTEXT_T985627136_H
#ifndef FUNCTIONCONTEXT_T3439243301_H
#define FUNCTIONCONTEXT_T3439243301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/FunctionContext
struct  FunctionContext_t3439243301  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCTIONCONTEXT_T3439243301_H
#ifndef FUNCTION_STATEMENTCONTEXT_T1512458714_H
#define FUNCTION_STATEMENTCONTEXT_T1512458714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/Function_statementContext
struct  Function_statementContext_t1512458714  : public ParserRuleContext_t3215563317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCTION_STATEMENTCONTEXT_T1512458714_H
#ifndef VALUENUMBERCONTEXT_T2539936067_H
#define VALUENUMBERCONTEXT_T2539936067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ValueNumberContext
struct  ValueNumberContext_t2539936067  : public ValueContext_t985627136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUENUMBERCONTEXT_T2539936067_H
#ifndef VALUENULLCONTEXT_T1482382033_H
#define VALUENULLCONTEXT_T1482382033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ValueNullContext
struct  ValueNullContext_t1482382033  : public ValueContext_t985627136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUENULLCONTEXT_T1482382033_H
#ifndef VALUEFUNCCONTEXT_T1993483790_H
#define VALUEFUNCCONTEXT_T1993483790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ValueFuncContext
struct  ValueFuncContext_t1993483790  : public ValueContext_t985627136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEFUNCCONTEXT_T1993483790_H
#ifndef VALUESTRINGCONTEXT_T470402646_H
#define VALUESTRINGCONTEXT_T470402646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ValueStringContext
struct  ValueStringContext_t470402646  : public ValueContext_t985627136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUESTRINGCONTEXT_T470402646_H
#ifndef EXPANDORXORCONTEXT_T3486759600_H
#define EXPANDORXORCONTEXT_T3486759600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpAndOrXorContext
struct  ExpAndOrXorContext_t3486759600  : public ExpressionContext_t4156557213
{
public:
	// Antlr4.Runtime.IToken YarnSpinnerParser/ExpAndOrXorContext::op
	RuntimeObject* ___op_7;

public:
	inline static int32_t get_offset_of_op_7() { return static_cast<int32_t>(offsetof(ExpAndOrXorContext_t3486759600, ___op_7)); }
	inline RuntimeObject* get_op_7() const { return ___op_7; }
	inline RuntimeObject** get_address_of_op_7() { return &___op_7; }
	inline void set_op_7(RuntimeObject* value)
	{
		___op_7 = value;
		Il2CppCodeGenWriteBarrier((&___op_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDORXORCONTEXT_T3486759600_H
#ifndef VALUEVARCONTEXT_T3081726169_H
#define VALUEVARCONTEXT_T3081726169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ValueVarContext
struct  ValueVarContext_t3081726169  : public ValueContext_t985627136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEVARCONTEXT_T3081726169_H
#ifndef VALUETRUECONTEXT_T465383134_H
#define VALUETRUECONTEXT_T465383134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ValueTrueContext
struct  ValueTrueContext_t465383134  : public ValueContext_t985627136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUETRUECONTEXT_T465383134_H
#ifndef VALUEFALSECONTEXT_T1433625895_H
#define VALUEFALSECONTEXT_T1433625895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ValueFalseContext
struct  ValueFalseContext_t1433625895  : public ValueContext_t985627136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUEFALSECONTEXT_T1433625895_H
#ifndef EXPMULTDIVMODCONTEXT_T1610360120_H
#define EXPMULTDIVMODCONTEXT_T1610360120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpMultDivModContext
struct  ExpMultDivModContext_t1610360120  : public ExpressionContext_t4156557213
{
public:
	// Antlr4.Runtime.IToken YarnSpinnerParser/ExpMultDivModContext::op
	RuntimeObject* ___op_7;

public:
	inline static int32_t get_offset_of_op_7() { return static_cast<int32_t>(offsetof(ExpMultDivModContext_t1610360120, ___op_7)); }
	inline RuntimeObject* get_op_7() const { return ___op_7; }
	inline RuntimeObject** get_address_of_op_7() { return &___op_7; }
	inline void set_op_7(RuntimeObject* value)
	{
		___op_7 = value;
		Il2CppCodeGenWriteBarrier((&___op_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPMULTDIVMODCONTEXT_T1610360120_H
#ifndef EXPEQUALITYCONTEXT_T3120361692_H
#define EXPEQUALITYCONTEXT_T3120361692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpEqualityContext
struct  ExpEqualityContext_t3120361692  : public ExpressionContext_t4156557213
{
public:
	// Antlr4.Runtime.IToken YarnSpinnerParser/ExpEqualityContext::op
	RuntimeObject* ___op_7;

public:
	inline static int32_t get_offset_of_op_7() { return static_cast<int32_t>(offsetof(ExpEqualityContext_t3120361692, ___op_7)); }
	inline RuntimeObject* get_op_7() const { return ___op_7; }
	inline RuntimeObject** get_address_of_op_7() { return &___op_7; }
	inline void set_op_7(RuntimeObject* value)
	{
		___op_7 = value;
		Il2CppCodeGenWriteBarrier((&___op_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPEQUALITYCONTEXT_T3120361692_H
#ifndef EXPMULTDIVMODEQUALSCONTEXT_T506470414_H
#define EXPMULTDIVMODEQUALSCONTEXT_T506470414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpMultDivModEqualsContext
struct  ExpMultDivModEqualsContext_t506470414  : public ExpressionContext_t4156557213
{
public:
	// Antlr4.Runtime.IToken YarnSpinnerParser/ExpMultDivModEqualsContext::op
	RuntimeObject* ___op_7;

public:
	inline static int32_t get_offset_of_op_7() { return static_cast<int32_t>(offsetof(ExpMultDivModEqualsContext_t506470414, ___op_7)); }
	inline RuntimeObject* get_op_7() const { return ___op_7; }
	inline RuntimeObject** get_address_of_op_7() { return &___op_7; }
	inline void set_op_7(RuntimeObject* value)
	{
		___op_7 = value;
		Il2CppCodeGenWriteBarrier((&___op_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPMULTDIVMODEQUALSCONTEXT_T506470414_H
#ifndef EXPNEGATIVECONTEXT_T944999273_H
#define EXPNEGATIVECONTEXT_T944999273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpNegativeContext
struct  ExpNegativeContext_t944999273  : public ExpressionContext_t4156557213
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPNEGATIVECONTEXT_T944999273_H
#ifndef EXPNOTCONTEXT_T2787672394_H
#define EXPNOTCONTEXT_T2787672394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpNotContext
struct  ExpNotContext_t2787672394  : public ExpressionContext_t4156557213
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPNOTCONTEXT_T2787672394_H
#ifndef EXPPLUSMINUSEQUALSCONTEXT_T826317233_H
#define EXPPLUSMINUSEQUALSCONTEXT_T826317233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpPlusMinusEqualsContext
struct  ExpPlusMinusEqualsContext_t826317233  : public ExpressionContext_t4156557213
{
public:
	// Antlr4.Runtime.IToken YarnSpinnerParser/ExpPlusMinusEqualsContext::op
	RuntimeObject* ___op_7;

public:
	inline static int32_t get_offset_of_op_7() { return static_cast<int32_t>(offsetof(ExpPlusMinusEqualsContext_t826317233, ___op_7)); }
	inline RuntimeObject* get_op_7() const { return ___op_7; }
	inline RuntimeObject** get_address_of_op_7() { return &___op_7; }
	inline void set_op_7(RuntimeObject* value)
	{
		___op_7 = value;
		Il2CppCodeGenWriteBarrier((&___op_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPPLUSMINUSEQUALSCONTEXT_T826317233_H
#ifndef EXPVALUECONTEXT_T2880146557_H
#define EXPVALUECONTEXT_T2880146557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpValueContext
struct  ExpValueContext_t2880146557  : public ExpressionContext_t4156557213
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPVALUECONTEXT_T2880146557_H
#ifndef EXPADDSUBCONTEXT_T3291599059_H
#define EXPADDSUBCONTEXT_T3291599059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpAddSubContext
struct  ExpAddSubContext_t3291599059  : public ExpressionContext_t4156557213
{
public:
	// Antlr4.Runtime.IToken YarnSpinnerParser/ExpAddSubContext::op
	RuntimeObject* ___op_7;

public:
	inline static int32_t get_offset_of_op_7() { return static_cast<int32_t>(offsetof(ExpAddSubContext_t3291599059, ___op_7)); }
	inline RuntimeObject* get_op_7() const { return ___op_7; }
	inline RuntimeObject** get_address_of_op_7() { return &___op_7; }
	inline void set_op_7(RuntimeObject* value)
	{
		___op_7 = value;
		Il2CppCodeGenWriteBarrier((&___op_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPADDSUBCONTEXT_T3291599059_H
#ifndef EXPCOMPARISONCONTEXT_T2005925874_H
#define EXPCOMPARISONCONTEXT_T2005925874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpComparisonContext
struct  ExpComparisonContext_t2005925874  : public ExpressionContext_t4156557213
{
public:
	// Antlr4.Runtime.IToken YarnSpinnerParser/ExpComparisonContext::op
	RuntimeObject* ___op_7;

public:
	inline static int32_t get_offset_of_op_7() { return static_cast<int32_t>(offsetof(ExpComparisonContext_t2005925874, ___op_7)); }
	inline RuntimeObject* get_op_7() const { return ___op_7; }
	inline RuntimeObject** get_address_of_op_7() { return &___op_7; }
	inline void set_op_7(RuntimeObject* value)
	{
		___op_7 = value;
		Il2CppCodeGenWriteBarrier((&___op_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPCOMPARISONCONTEXT_T2005925874_H
#ifndef EXPPARENSCONTEXT_T668106348_H
#define EXPPARENSCONTEXT_T668106348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YarnSpinnerParser/ExpParensContext
struct  ExpParensContext_t668106348  : public ExpressionContext_t4156557213
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPPARENSCONTEXT_T668106348_H
// YarnSpinnerParser/StatementContext[]
struct StatementContextU5BU5D_t2333700405  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StatementContext_t1304201180 * m_Items[1];

public:
	inline StatementContext_t1304201180 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StatementContext_t1304201180 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StatementContext_t1304201180 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StatementContext_t1304201180 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StatementContext_t1304201180 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StatementContext_t1304201180 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// YarnSpinnerParser/ExpressionContext[]
struct ExpressionContextU5BU5D_t292150608  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ExpressionContext_t4156557213 * m_Items[1];

public:
	inline ExpressionContext_t4156557213 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExpressionContext_t4156557213 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExpressionContext_t4156557213 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ExpressionContext_t4156557213 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExpressionContext_t4156557213 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExpressionContext_t4156557213 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// YarnSpinnerParser/HashtagContext[]
struct HashtagContextU5BU5D_t3350391612  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HashtagContext_t624613153 * m_Items[1];

public:
	inline HashtagContext_t624613153 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HashtagContext_t624613153 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HashtagContext_t624613153 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline HashtagContext_t624613153 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HashtagContext_t624613153 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HashtagContext_t624613153 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// YarnSpinnerParser/Header_tagContext[]
struct Header_tagContextU5BU5D_t3070707535  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Header_tagContext_t1239473226 * m_Items[1];

public:
	inline Header_tagContext_t1239473226 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Header_tagContext_t1239473226 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Header_tagContext_t1239473226 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Header_tagContext_t1239473226 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Header_tagContext_t1239473226 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Header_tagContext_t1239473226 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// YarnSpinnerParser/Else_if_clauseContext[]
struct Else_if_clauseContextU5BU5D_t1394249892  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Else_if_clauseContext_t1663705049 * m_Items[1];

public:
	inline Else_if_clauseContext_t1663705049 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Else_if_clauseContext_t1663705049 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Else_if_clauseContext_t1663705049 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Else_if_clauseContext_t1663705049 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Else_if_clauseContext_t1663705049 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Else_if_clauseContext_t1663705049 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// YarnSpinnerParser/ShortcutContext[]
struct ShortcutContextU5BU5D_t3884824668  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ShortcutContext_t2133948545 * m_Items[1];

public:
	inline ShortcutContext_t2133948545 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShortcutContext_t2133948545 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShortcutContext_t2133948545 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ShortcutContext_t2133948545 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShortcutContext_t2133948545 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShortcutContext_t2133948545 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void Antlr4.Runtime.ParserRuleContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void ParserRuleContext__ctor_m3865993304 (ParserRuleContext_t3215563317 * __this, ParserRuleContext_t3215563317 * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void YarnSpinnerParser/ExpressionContext::.ctor()
extern "C"  void ExpressionContext__ctor_m2921147313 (ExpressionContext_t4156557213 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.ParserRuleContext::.ctor()
extern "C"  void ParserRuleContext__ctor_m1984361021 (ParserRuleContext_t3215563317 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Antlr4.Runtime.ParserRuleContext::CopyFrom(Antlr4.Runtime.ParserRuleContext)
extern "C"  void ParserRuleContext_CopyFrom_m3597367641 (ParserRuleContext_t3215563317 * __this, ParserRuleContext_t3215563317 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void YarnSpinnerParser/ValueContext::.ctor()
extern "C"  void ValueContext__ctor_m1119228882 (ValueContext_t985627136 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YarnSpinnerParser/Action_statementContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Action_statementContext__ctor_m432645309 (Action_statementContext_t336721119 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Action_statementContext__ctor_m432645309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Action_statementContext::get_RuleIndex()
extern "C"  int32_t Action_statementContext_get_RuleIndex_m4284954611 (Action_statementContext_t336721119 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)20);
	}
}
// System.Void YarnSpinnerParser/Action_statementContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Action_statementContext_EnterRule_m1102038301 (Action_statementContext_t336721119 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Action_statementContext_EnterRule_m1102038301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Action_statementContext_t336721119 * >::Invoke(40 /* System.Void IYarnSpinnerParserListener::EnterAction_statement(YarnSpinnerParser/Action_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Action_statementContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Action_statementContext_ExitRule_m2389970387 (Action_statementContext_t336721119 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Action_statementContext_ExitRule_m2389970387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Action_statementContext_t336721119 * >::Invoke(41 /* System.Void IYarnSpinnerParserListener::ExitAction_statement(YarnSpinnerParser/Action_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/StatementContext[] YarnSpinnerParser/BodyContext::statement()
extern "C"  StatementContextU5BU5D_t2333700405* BodyContext_statement_m2927849998 (BodyContext_t1127179312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BodyContext_statement_m2927849998_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StatementContextU5BU5D_t2333700405* L_0 = GenericVirtFuncInvoker0< StatementContextU5BU5D_t2333700405* >::Invoke(ParserRuleContext_GetRuleContexts_TisStatementContext_t1304201180_m54646415_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/BodyContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void BodyContext__ctor_m2191966432 (BodyContext_t1127179312 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BodyContext__ctor_m2191966432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/BodyContext::get_RuleIndex()
extern "C"  int32_t BodyContext_get_RuleIndex_m548948521 (BodyContext_t1127179312 * __this, const RuntimeMethod* method)
{
	{
		return 6;
	}
}
// System.Void YarnSpinnerParser/BodyContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void BodyContext_EnterRule_m1415640378 (BodyContext_t1127179312 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BodyContext_EnterRule_m1415640378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< BodyContext_t1127179312 * >::Invoke(12 /* System.Void IYarnSpinnerParserListener::EnterBody(YarnSpinnerParser/BodyContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/BodyContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void BodyContext_ExitRule_m4256467827 (BodyContext_t1127179312 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BodyContext_ExitRule_m4256467827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< BodyContext_t1127179312 * >::Invoke(13 /* System.Void IYarnSpinnerParserListener::ExitBody(YarnSpinnerParser/BodyContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/DialogueContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void DialogueContext__ctor_m1687152166 (DialogueContext_t950888852 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueContext__ctor_m1687152166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/DialogueContext::get_RuleIndex()
extern "C"  int32_t DialogueContext_get_RuleIndex_m2100324641 (DialogueContext_t950888852 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void YarnSpinnerParser/DialogueContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void DialogueContext_EnterRule_m2940109984 (DialogueContext_t950888852 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueContext_EnterRule_m2940109984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< DialogueContext_t950888852 * >::Invoke(0 /* System.Void IYarnSpinnerParserListener::EnterDialogue(YarnSpinnerParser/DialogueContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/DialogueContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void DialogueContext_ExitRule_m2374785926 (DialogueContext_t950888852 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DialogueContext_ExitRule_m2374785926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< DialogueContext_t950888852 * >::Invoke(1 /* System.Void IYarnSpinnerParserListener::ExitDialogue(YarnSpinnerParser/DialogueContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/StatementContext[] YarnSpinnerParser/Else_clauseContext::statement()
extern "C"  StatementContextU5BU5D_t2333700405* Else_clauseContext_statement_m3752972534 (Else_clauseContext_t117630170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_clauseContext_statement_m3752972534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StatementContextU5BU5D_t2333700405* L_0 = GenericVirtFuncInvoker0< StatementContextU5BU5D_t2333700405* >::Invoke(ParserRuleContext_GetRuleContexts_TisStatementContext_t1304201180_m54646415_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Else_clauseContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Else_clauseContext__ctor_m789629570 (Else_clauseContext_t117630170 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_clauseContext__ctor_m789629570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Else_clauseContext::get_RuleIndex()
extern "C"  int32_t Else_clauseContext_get_RuleIndex_m3341276051 (Else_clauseContext_t117630170 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)15);
	}
}
// System.Void YarnSpinnerParser/Else_clauseContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Else_clauseContext_EnterRule_m2140825148 (Else_clauseContext_t117630170 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_clauseContext_EnterRule_m2140825148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Else_clauseContext_t117630170 * >::Invoke(30 /* System.Void IYarnSpinnerParserListener::EnterElse_clause(YarnSpinnerParser/Else_clauseContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Else_clauseContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Else_clauseContext_ExitRule_m2375976501 (Else_clauseContext_t117630170 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_clauseContext_ExitRule_m2375976501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Else_clauseContext_t117630170 * >::Invoke(31 /* System.Void IYarnSpinnerParserListener::ExitElse_clause(YarnSpinnerParser/Else_clauseContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/Else_if_clauseContext::expression()
extern "C"  ExpressionContext_t4156557213 * Else_if_clauseContext_expression_m2473156732 (Else_if_clauseContext_t1663705049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_if_clauseContext_expression_m2473156732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/StatementContext[] YarnSpinnerParser/Else_if_clauseContext::statement()
extern "C"  StatementContextU5BU5D_t2333700405* Else_if_clauseContext_statement_m2640827655 (Else_if_clauseContext_t1663705049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_if_clauseContext_statement_m2640827655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StatementContextU5BU5D_t2333700405* L_0 = GenericVirtFuncInvoker0< StatementContextU5BU5D_t2333700405* >::Invoke(ParserRuleContext_GetRuleContexts_TisStatementContext_t1304201180_m54646415_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Else_if_clauseContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Else_if_clauseContext__ctor_m1037257499 (Else_if_clauseContext_t1663705049 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_if_clauseContext__ctor_m1037257499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Else_if_clauseContext::get_RuleIndex()
extern "C"  int32_t Else_if_clauseContext_get_RuleIndex_m2428139410 (Else_if_clauseContext_t1663705049 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)14);
	}
}
// System.Void YarnSpinnerParser/Else_if_clauseContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Else_if_clauseContext_EnterRule_m880017896 (Else_if_clauseContext_t1663705049 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_if_clauseContext_EnterRule_m880017896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Else_if_clauseContext_t1663705049 * >::Invoke(28 /* System.Void IYarnSpinnerParserListener::EnterElse_if_clause(YarnSpinnerParser/Else_if_clauseContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Else_if_clauseContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Else_if_clauseContext_ExitRule_m1753729338 (Else_if_clauseContext_t1663705049 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Else_if_clauseContext_ExitRule_m1753729338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Else_if_clauseContext_t1663705049 * >::Invoke(29 /* System.Void IYarnSpinnerParserListener::ExitElse_if_clause(YarnSpinnerParser/Else_if_clauseContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpAddSubContext::expression(System.Int32)
extern "C"  ExpressionContext_t4156557213 * ExpAddSubContext_expression_m3119524916 (ExpAddSubContext_t3291599059 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpAddSubContext_expression_m3119524916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		ExpressionContext_t4156557213 * L_1 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, L_0);
		return L_1;
	}
}
// System.Void YarnSpinnerParser/ExpAddSubContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpAddSubContext__ctor_m1812910139 (ExpAddSubContext_t3291599059 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpAddSubContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpAddSubContext_EnterRule_m1679245402 (ExpAddSubContext_t3291599059 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpAddSubContext_EnterRule_m1679245402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpAddSubContext_t3291599059 * >::Invoke(64 /* System.Void IYarnSpinnerParserListener::EnterExpAddSub(YarnSpinnerParser/ExpAddSubContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpAddSubContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpAddSubContext_ExitRule_m2512366399 (ExpAddSubContext_t3291599059 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpAddSubContext_ExitRule_m2512366399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpAddSubContext_t3291599059 * >::Invoke(65 /* System.Void IYarnSpinnerParserListener::ExitExpAddSub(YarnSpinnerParser/ExpAddSubContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpAndOrXorContext::expression(System.Int32)
extern "C"  ExpressionContext_t4156557213 * ExpAndOrXorContext_expression_m912398060 (ExpAndOrXorContext_t3486759600 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpAndOrXorContext_expression_m912398060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		ExpressionContext_t4156557213 * L_1 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, L_0);
		return L_1;
	}
}
// System.Void YarnSpinnerParser/ExpAndOrXorContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpAndOrXorContext__ctor_m935886040 (ExpAndOrXorContext_t3486759600 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpAndOrXorContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpAndOrXorContext_EnterRule_m1478184154 (ExpAndOrXorContext_t3486759600 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpAndOrXorContext_EnterRule_m1478184154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpAndOrXorContext_t3486759600 * >::Invoke(60 /* System.Void IYarnSpinnerParserListener::EnterExpAndOrXor(YarnSpinnerParser/ExpAndOrXorContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpAndOrXorContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpAndOrXorContext_ExitRule_m362155530 (ExpAndOrXorContext_t3486759600 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpAndOrXorContext_ExitRule_m362155530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpAndOrXorContext_t3486759600 * >::Invoke(61 /* System.Void IYarnSpinnerParserListener::ExitExpAndOrXor(YarnSpinnerParser/ExpAndOrXorContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpComparisonContext::expression(System.Int32)
extern "C"  ExpressionContext_t4156557213 * ExpComparisonContext_expression_m525886590 (ExpComparisonContext_t2005925874 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpComparisonContext_expression_m525886590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		ExpressionContext_t4156557213 * L_1 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, L_0);
		return L_1;
	}
}
// System.Void YarnSpinnerParser/ExpComparisonContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpComparisonContext__ctor_m2270761661 (ExpComparisonContext_t2005925874 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpComparisonContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpComparisonContext_EnterRule_m1966325192 (ExpComparisonContext_t2005925874 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpComparisonContext_EnterRule_m1966325192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpComparisonContext_t2005925874 * >::Invoke(56 /* System.Void IYarnSpinnerParserListener::EnterExpComparison(YarnSpinnerParser/ExpComparisonContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpComparisonContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpComparisonContext_ExitRule_m1886387747 (ExpComparisonContext_t2005925874 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpComparisonContext_ExitRule_m1886387747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpComparisonContext_t2005925874 * >::Invoke(57 /* System.Void IYarnSpinnerParserListener::ExitExpComparison(YarnSpinnerParser/ExpComparisonContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpEqualityContext::expression(System.Int32)
extern "C"  ExpressionContext_t4156557213 * ExpEqualityContext_expression_m668278749 (ExpEqualityContext_t3120361692 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpEqualityContext_expression_m668278749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		ExpressionContext_t4156557213 * L_1 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, L_0);
		return L_1;
	}
}
// System.Void YarnSpinnerParser/ExpEqualityContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpEqualityContext__ctor_m2127065212 (ExpEqualityContext_t3120361692 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpEqualityContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpEqualityContext_EnterRule_m3249013511 (ExpEqualityContext_t3120361692 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpEqualityContext_EnterRule_m3249013511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpEqualityContext_t3120361692 * >::Invoke(70 /* System.Void IYarnSpinnerParserListener::EnterExpEquality(YarnSpinnerParser/ExpEqualityContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpEqualityContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpEqualityContext_ExitRule_m1345759752 (ExpEqualityContext_t3120361692 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpEqualityContext_ExitRule_m1345759752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpEqualityContext_t3120361692 * >::Invoke(71 /* System.Void IYarnSpinnerParserListener::ExitExpEquality(YarnSpinnerParser/ExpEqualityContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpMultDivModContext::expression(System.Int32)
extern "C"  ExpressionContext_t4156557213 * ExpMultDivModContext_expression_m2782615945 (ExpMultDivModContext_t1610360120 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpMultDivModContext_expression_m2782615945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		ExpressionContext_t4156557213 * L_1 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, L_0);
		return L_1;
	}
}
// System.Void YarnSpinnerParser/ExpMultDivModContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpMultDivModContext__ctor_m2135498932 (ExpMultDivModContext_t1610360120 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpMultDivModContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpMultDivModContext_EnterRule_m2784927584 (ExpMultDivModContext_t1610360120 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpMultDivModContext_EnterRule_m2784927584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpMultDivModContext_t1610360120 * >::Invoke(52 /* System.Void IYarnSpinnerParserListener::EnterExpMultDivMod(YarnSpinnerParser/ExpMultDivModContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpMultDivModContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpMultDivModContext_ExitRule_m2582600614 (ExpMultDivModContext_t1610360120 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpMultDivModContext_ExitRule_m2582600614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpMultDivModContext_t1610360120 * >::Invoke(53 /* System.Void IYarnSpinnerParserListener::ExitExpMultDivMod(YarnSpinnerParser/ExpMultDivModContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/VariableContext YarnSpinnerParser/ExpMultDivModEqualsContext::variable()
extern "C"  VariableContext_t1517118608 * ExpMultDivModEqualsContext_variable_m3187960803 (ExpMultDivModEqualsContext_t506470414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpMultDivModEqualsContext_variable_m3187960803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VariableContext_t1517118608 * L_0 = GenericVirtFuncInvoker1< VariableContext_t1517118608 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisVariableContext_t1517118608_m280824563_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpMultDivModEqualsContext::expression()
extern "C"  ExpressionContext_t4156557213 * ExpMultDivModEqualsContext_expression_m1447902058 (ExpMultDivModEqualsContext_t506470414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpMultDivModEqualsContext_expression_m1447902058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ExpMultDivModEqualsContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpMultDivModEqualsContext__ctor_m1037715891 (ExpMultDivModEqualsContext_t506470414 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpMultDivModEqualsContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpMultDivModEqualsContext_EnterRule_m676277181 (ExpMultDivModEqualsContext_t506470414 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpMultDivModEqualsContext_EnterRule_m676277181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpMultDivModEqualsContext_t506470414 * >::Invoke(54 /* System.Void IYarnSpinnerParserListener::EnterExpMultDivModEquals(YarnSpinnerParser/ExpMultDivModEqualsContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpMultDivModEqualsContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpMultDivModEqualsContext_ExitRule_m2791783946 (ExpMultDivModEqualsContext_t506470414 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpMultDivModEqualsContext_ExitRule_m2791783946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpMultDivModEqualsContext_t506470414 * >::Invoke(55 /* System.Void IYarnSpinnerParserListener::ExitExpMultDivModEquals(YarnSpinnerParser/ExpMultDivModEqualsContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpNegativeContext::expression()
extern "C"  ExpressionContext_t4156557213 * ExpNegativeContext_expression_m2539136480 (ExpNegativeContext_t944999273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpNegativeContext_expression_m2539136480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ExpNegativeContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpNegativeContext__ctor_m440909582 (ExpNegativeContext_t944999273 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpNegativeContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpNegativeContext_EnterRule_m896279425 (ExpNegativeContext_t944999273 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpNegativeContext_EnterRule_m896279425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpNegativeContext_t944999273 * >::Invoke(58 /* System.Void IYarnSpinnerParserListener::EnterExpNegative(YarnSpinnerParser/ExpNegativeContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpNegativeContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpNegativeContext_ExitRule_m2914499687 (ExpNegativeContext_t944999273 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpNegativeContext_ExitRule_m2914499687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpNegativeContext_t944999273 * >::Invoke(59 /* System.Void IYarnSpinnerParserListener::ExitExpNegative(YarnSpinnerParser/ExpNegativeContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpNotContext::expression()
extern "C"  ExpressionContext_t4156557213 * ExpNotContext_expression_m545405183 (ExpNotContext_t2787672394 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpNotContext_expression_m545405183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ExpNotContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpNotContext__ctor_m1183938794 (ExpNotContext_t2787672394 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpNotContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpNotContext_EnterRule_m3110332213 (ExpNotContext_t2787672394 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpNotContext_EnterRule_m3110332213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpNotContext_t2787672394 * >::Invoke(66 /* System.Void IYarnSpinnerParserListener::EnterExpNot(YarnSpinnerParser/ExpNotContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpNotContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpNotContext_ExitRule_m3917812532 (ExpNotContext_t2787672394 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpNotContext_ExitRule_m3917812532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpNotContext_t2787672394 * >::Invoke(67 /* System.Void IYarnSpinnerParserListener::ExitExpNot(YarnSpinnerParser/ExpNotContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpParensContext::expression()
extern "C"  ExpressionContext_t4156557213 * ExpParensContext_expression_m4110003111 (ExpParensContext_t668106348 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpParensContext_expression_m4110003111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ExpParensContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpParensContext__ctor_m1419690117 (ExpParensContext_t668106348 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpParensContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpParensContext_EnterRule_m3590784765 (ExpParensContext_t668106348 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpParensContext_EnterRule_m3590784765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpParensContext_t668106348 * >::Invoke(50 /* System.Void IYarnSpinnerParserListener::EnterExpParens(YarnSpinnerParser/ExpParensContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpParensContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpParensContext_ExitRule_m818846523 (ExpParensContext_t668106348 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpParensContext_ExitRule_m818846523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpParensContext_t668106348 * >::Invoke(51 /* System.Void IYarnSpinnerParserListener::ExitExpParens(YarnSpinnerParser/ExpParensContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/VariableContext YarnSpinnerParser/ExpPlusMinusEqualsContext::variable()
extern "C"  VariableContext_t1517118608 * ExpPlusMinusEqualsContext_variable_m1270460905 (ExpPlusMinusEqualsContext_t826317233 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpPlusMinusEqualsContext_variable_m1270460905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VariableContext_t1517118608 * L_0 = GenericVirtFuncInvoker1< VariableContext_t1517118608 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisVariableContext_t1517118608_m280824563_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/ExpPlusMinusEqualsContext::expression()
extern "C"  ExpressionContext_t4156557213 * ExpPlusMinusEqualsContext_expression_m334819130 (ExpPlusMinusEqualsContext_t826317233 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpPlusMinusEqualsContext_expression_m334819130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ExpPlusMinusEqualsContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpPlusMinusEqualsContext__ctor_m1957087185 (ExpPlusMinusEqualsContext_t826317233 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpPlusMinusEqualsContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpPlusMinusEqualsContext_EnterRule_m586985810 (ExpPlusMinusEqualsContext_t826317233 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpPlusMinusEqualsContext_EnterRule_m586985810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpPlusMinusEqualsContext_t826317233 * >::Invoke(62 /* System.Void IYarnSpinnerParserListener::EnterExpPlusMinusEquals(YarnSpinnerParser/ExpPlusMinusEqualsContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpPlusMinusEqualsContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpPlusMinusEqualsContext_ExitRule_m509406409 (ExpPlusMinusEqualsContext_t826317233 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpPlusMinusEqualsContext_ExitRule_m509406409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpPlusMinusEqualsContext_t826317233 * >::Invoke(63 /* System.Void IYarnSpinnerParserListener::ExitExpPlusMinusEquals(YarnSpinnerParser/ExpPlusMinusEqualsContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/ExpressionContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void ExpressionContext__ctor_m2623714539 (ExpressionContext_t4156557213 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionContext__ctor_m2623714539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/ExpressionContext::get_RuleIndex()
extern "C"  int32_t ExpressionContext_get_RuleIndex_m3318783159 (ExpressionContext_t4156557213 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)25);
	}
}
// System.Void YarnSpinnerParser/ExpressionContext::.ctor()
extern "C"  void ExpressionContext__ctor_m2921147313 (ExpressionContext_t4156557213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionContext__ctor_m2921147313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m1984361021(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpressionContext_CopyFrom_m1490285415 (ExpressionContext_t4156557213 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext_t4156557213 * L_0 = ___context0;
		ParserRuleContext_CopyFrom_m3597367641(__this, L_0, /*hidden argument*/NULL);
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
// YarnSpinnerParser/ValueContext YarnSpinnerParser/ExpValueContext::value()
extern "C"  ValueContext_t985627136 * ExpValueContext_value_m3579596969 (ExpValueContext_t2880146557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpValueContext_value_m3579596969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueContext_t985627136 * L_0 = GenericVirtFuncInvoker1< ValueContext_t985627136 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisValueContext_t985627136_m211883825_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ExpValueContext::.ctor(YarnSpinnerParser/ExpressionContext)
extern "C"  void ExpValueContext__ctor_m4149869854 (ExpValueContext_t2880146557 * __this, ExpressionContext_t4156557213 * ___context0, const RuntimeMethod* method)
{
	{
		ExpressionContext__ctor_m2921147313(__this, /*hidden argument*/NULL);
		ExpressionContext_t4156557213 * L_0 = ___context0;
		VirtActionInvoker1< ExpressionContext_t4156557213 * >::Invoke(36 /* System.Void YarnSpinnerParser/ExpressionContext::CopyFrom(YarnSpinnerParser/ExpressionContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ExpValueContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpValueContext_EnterRule_m1756391372 (ExpValueContext_t2880146557 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpValueContext_EnterRule_m1756391372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpValueContext_t2880146557 * >::Invoke(68 /* System.Void IYarnSpinnerParserListener::EnterExpValue(YarnSpinnerParser/ExpValueContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ExpValueContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ExpValueContext_ExitRule_m116777504 (ExpValueContext_t2880146557 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpValueContext_ExitRule_m116777504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ExpValueContext_t2880146557 * >::Invoke(69 /* System.Void IYarnSpinnerParserListener::ExitExpValue(YarnSpinnerParser/ExpValueContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext[] YarnSpinnerParser/Function_statementContext::expression()
extern "C"  ExpressionContextU5BU5D_t292150608* Function_statementContext_expression_m1612210405 (Function_statementContext_t1512458714 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Function_statementContext_expression_m1612210405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContextU5BU5D_t292150608* L_0 = GenericVirtFuncInvoker0< ExpressionContextU5BU5D_t292150608* >::Invoke(ParserRuleContext_GetRuleContexts_TisExpressionContext_t4156557213_m719172526_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Function_statementContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Function_statementContext__ctor_m490120435 (Function_statementContext_t1512458714 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Function_statementContext__ctor_m490120435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Function_statementContext::get_RuleIndex()
extern "C"  int32_t Function_statementContext_get_RuleIndex_m213648022 (Function_statementContext_t1512458714 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)19);
	}
}
// System.Void YarnSpinnerParser/Function_statementContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Function_statementContext_EnterRule_m1841088110 (Function_statementContext_t1512458714 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Function_statementContext_EnterRule_m1841088110_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Function_statementContext_t1512458714 * >::Invoke(38 /* System.Void IYarnSpinnerParserListener::EnterFunction_statement(YarnSpinnerParser/Function_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Function_statementContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Function_statementContext_ExitRule_m2721824068 (Function_statementContext_t1512458714 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Function_statementContext_ExitRule_m2721824068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Function_statementContext_t1512458714 * >::Invoke(39 /* System.Void IYarnSpinnerParserListener::ExitFunction_statement(YarnSpinnerParser/Function_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/FunctionContext::FUNC_ID()
extern "C"  RuntimeObject* FunctionContext_FUNC_ID_m438351601 (FunctionContext_t3439243301 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)69), 0);
		return L_0;
	}
}
// YarnSpinnerParser/ExpressionContext[] YarnSpinnerParser/FunctionContext::expression()
extern "C"  ExpressionContextU5BU5D_t292150608* FunctionContext_expression_m2697939872 (FunctionContext_t3439243301 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FunctionContext_expression_m2697939872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContextU5BU5D_t292150608* L_0 = GenericVirtFuncInvoker0< ExpressionContextU5BU5D_t292150608* >::Invoke(ParserRuleContext_GetRuleContexts_TisExpressionContext_t4156557213_m719172526_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/FunctionContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void FunctionContext__ctor_m4158624437 (FunctionContext_t3439243301 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FunctionContext__ctor_m4158624437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/FunctionContext::get_RuleIndex()
extern "C"  int32_t FunctionContext_get_RuleIndex_m3197654160 (FunctionContext_t3439243301 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)18);
	}
}
// System.Void YarnSpinnerParser/FunctionContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void FunctionContext_EnterRule_m3503169812 (FunctionContext_t3439243301 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FunctionContext_EnterRule_m3503169812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< FunctionContext_t3439243301 * >::Invoke(36 /* System.Void IYarnSpinnerParserListener::EnterFunction(YarnSpinnerParser/FunctionContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/FunctionContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void FunctionContext_ExitRule_m3912274022 (FunctionContext_t3439243301 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FunctionContext_ExitRule_m3912274022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< FunctionContext_t3439243301 * >::Invoke(37 /* System.Void IYarnSpinnerParserListener::ExitFunction(YarnSpinnerParser/FunctionContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/HashtagContext[] YarnSpinnerParser/Hashtag_blockContext::hashtag()
extern "C"  HashtagContextU5BU5D_t3350391612* Hashtag_blockContext_hashtag_m453822898 (Hashtag_blockContext_t2033704137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hashtag_blockContext_hashtag_m453822898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashtagContextU5BU5D_t3350391612* L_0 = GenericVirtFuncInvoker0< HashtagContextU5BU5D_t3350391612* >::Invoke(ParserRuleContext_GetRuleContexts_TisHashtagContext_t624613153_m809750008_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Hashtag_blockContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Hashtag_blockContext__ctor_m1361203416 (Hashtag_blockContext_t2033704137 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hashtag_blockContext__ctor_m1361203416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Hashtag_blockContext::get_RuleIndex()
extern "C"  int32_t Hashtag_blockContext_get_RuleIndex_m1969030580 (Hashtag_blockContext_t2033704137 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)23);
	}
}
// System.Void YarnSpinnerParser/Hashtag_blockContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Hashtag_blockContext_EnterRule_m2250865541 (Hashtag_blockContext_t2033704137 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hashtag_blockContext_EnterRule_m2250865541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Hashtag_blockContext_t2033704137 * >::Invoke(46 /* System.Void IYarnSpinnerParserListener::EnterHashtag_block(YarnSpinnerParser/Hashtag_blockContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Hashtag_blockContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Hashtag_blockContext_ExitRule_m348769813 (Hashtag_blockContext_t2033704137 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hashtag_blockContext_ExitRule_m348769813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Hashtag_blockContext_t2033704137 * >::Invoke(47 /* System.Void IYarnSpinnerParserListener::ExitHashtag_block(YarnSpinnerParser/Hashtag_blockContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/HashtagContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void HashtagContext__ctor_m2233539084 (HashtagContext_t624613153 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashtagContext__ctor_m2233539084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/HashtagContext::get_RuleIndex()
extern "C"  int32_t HashtagContext_get_RuleIndex_m2258894594 (HashtagContext_t624613153 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)24);
	}
}
// System.Void YarnSpinnerParser/HashtagContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void HashtagContext_EnterRule_m2438235730 (HashtagContext_t624613153 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashtagContext_EnterRule_m2438235730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< HashtagContext_t624613153 * >::Invoke(48 /* System.Void IYarnSpinnerParserListener::EnterHashtag(YarnSpinnerParser/HashtagContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/HashtagContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void HashtagContext_ExitRule_m2934095337 (HashtagContext_t624613153 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashtagContext_ExitRule_m2934095337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< HashtagContext_t624613153 * >::Invoke(49 /* System.Void IYarnSpinnerParserListener::ExitHashtag(YarnSpinnerParser/HashtagContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/Header_lineContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Header_lineContext__ctor_m1295163014 (Header_lineContext_t832134280 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_lineContext__ctor_m1295163014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Header_lineContext::get_RuleIndex()
extern "C"  int32_t Header_lineContext_get_RuleIndex_m965577412 (Header_lineContext_t832134280 * __this, const RuntimeMethod* method)
{
	{
		return 5;
	}
}
// System.Void YarnSpinnerParser/Header_lineContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Header_lineContext_EnterRule_m2727432242 (Header_lineContext_t832134280 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_lineContext_EnterRule_m2727432242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Header_lineContext_t832134280 * >::Invoke(10 /* System.Void IYarnSpinnerParserListener::EnterHeader_line(YarnSpinnerParser/Header_lineContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Header_lineContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Header_lineContext_ExitRule_m3190719968 (Header_lineContext_t832134280 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_lineContext_ExitRule_m3190719968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Header_lineContext_t832134280 * >::Invoke(11 /* System.Void IYarnSpinnerParserListener::ExitHeader_line(YarnSpinnerParser/Header_lineContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/Header_tagContext::TAG_TEXT()
extern "C"  RuntimeObject* Header_tagContext_TAG_TEXT_m860394678 (Header_tagContext_t1239473226 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)12), 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Header_tagContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Header_tagContext__ctor_m3681709327 (Header_tagContext_t1239473226 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_tagContext__ctor_m3681709327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Header_tagContext::get_RuleIndex()
extern "C"  int32_t Header_tagContext_get_RuleIndex_m874284297 (Header_tagContext_t1239473226 * __this, const RuntimeMethod* method)
{
	{
		return 4;
	}
}
// System.Void YarnSpinnerParser/Header_tagContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Header_tagContext_EnterRule_m608729154 (Header_tagContext_t1239473226 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_tagContext_EnterRule_m608729154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Header_tagContext_t1239473226 * >::Invoke(8 /* System.Void IYarnSpinnerParserListener::EnterHeader_tag(YarnSpinnerParser/Header_tagContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Header_tagContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Header_tagContext_ExitRule_m1666191893 (Header_tagContext_t1239473226 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_tagContext_ExitRule_m1666191893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Header_tagContext_t1239473226 * >::Invoke(9 /* System.Void IYarnSpinnerParserListener::ExitHeader_tag(YarnSpinnerParser/Header_tagContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/Header_titleContext::TITLE_TEXT()
extern "C"  RuntimeObject* Header_titleContext_TITLE_TEXT_m826271794 (Header_titleContext_t4266626001 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)11), 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Header_titleContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Header_titleContext__ctor_m250253274 (Header_titleContext_t4266626001 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_titleContext__ctor_m250253274_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Header_titleContext::get_RuleIndex()
extern "C"  int32_t Header_titleContext_get_RuleIndex_m280076401 (Header_titleContext_t4266626001 * __this, const RuntimeMethod* method)
{
	{
		return 3;
	}
}
// System.Void YarnSpinnerParser/Header_titleContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Header_titleContext_EnterRule_m1277553436 (Header_titleContext_t4266626001 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_titleContext_EnterRule_m1277553436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Header_titleContext_t4266626001 * >::Invoke(6 /* System.Void IYarnSpinnerParserListener::EnterHeader_title(YarnSpinnerParser/Header_titleContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Header_titleContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Header_titleContext_ExitRule_m152460735 (Header_titleContext_t4266626001 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_titleContext_ExitRule_m152460735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Header_titleContext_t4266626001 * >::Invoke(7 /* System.Void IYarnSpinnerParserListener::ExitHeader_title(YarnSpinnerParser/Header_titleContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/Header_titleContext YarnSpinnerParser/HeaderContext::header_title()
extern "C"  Header_titleContext_t4266626001 * HeaderContext_header_title_m2826858791 (HeaderContext_t3816626548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeaderContext_header_title_m2826858791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Header_titleContext_t4266626001 * L_0 = GenericVirtFuncInvoker1< Header_titleContext_t4266626001 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisHeader_titleContext_t4266626001_m529101623_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/Header_tagContext[] YarnSpinnerParser/HeaderContext::header_tag()
extern "C"  Header_tagContextU5BU5D_t3070707535* HeaderContext_header_tag_m2094513941 (HeaderContext_t3816626548 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeaderContext_header_tag_m2094513941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Header_tagContextU5BU5D_t3070707535* L_0 = GenericVirtFuncInvoker0< Header_tagContextU5BU5D_t3070707535* >::Invoke(ParserRuleContext_GetRuleContexts_TisHeader_tagContext_t1239473226_m2964111929_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/HeaderContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void HeaderContext__ctor_m3474812366 (HeaderContext_t3816626548 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeaderContext__ctor_m3474812366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/HeaderContext::get_RuleIndex()
extern "C"  int32_t HeaderContext_get_RuleIndex_m4277142013 (HeaderContext_t3816626548 * __this, const RuntimeMethod* method)
{
	{
		return 2;
	}
}
// System.Void YarnSpinnerParser/HeaderContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void HeaderContext_EnterRule_m2455243154 (HeaderContext_t3816626548 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeaderContext_EnterRule_m2455243154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< HeaderContext_t3816626548 * >::Invoke(4 /* System.Void IYarnSpinnerParserListener::EnterHeader(YarnSpinnerParser/HeaderContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/HeaderContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void HeaderContext_ExitRule_m1150922153 (HeaderContext_t3816626548 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HeaderContext_ExitRule_m1150922153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< HeaderContext_t3816626548 * >::Invoke(5 /* System.Void IYarnSpinnerParserListener::ExitHeader(YarnSpinnerParser/HeaderContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/If_clauseContext::expression()
extern "C"  ExpressionContext_t4156557213 * If_clauseContext_expression_m2641329843 (If_clauseContext_t433839448 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_clauseContext_expression_m2641329843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/StatementContext[] YarnSpinnerParser/If_clauseContext::statement()
extern "C"  StatementContextU5BU5D_t2333700405* If_clauseContext_statement_m1762487816 (If_clauseContext_t433839448 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_clauseContext_statement_m1762487816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StatementContextU5BU5D_t2333700405* L_0 = GenericVirtFuncInvoker0< StatementContextU5BU5D_t2333700405* >::Invoke(ParserRuleContext_GetRuleContexts_TisStatementContext_t1304201180_m54646415_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/If_clauseContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void If_clauseContext__ctor_m2698409454 (If_clauseContext_t433839448 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_clauseContext__ctor_m2698409454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/If_clauseContext::get_RuleIndex()
extern "C"  int32_t If_clauseContext_get_RuleIndex_m4283159241 (If_clauseContext_t433839448 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)13);
	}
}
// System.Void YarnSpinnerParser/If_clauseContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void If_clauseContext_EnterRule_m4149154000 (If_clauseContext_t433839448 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_clauseContext_EnterRule_m4149154000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< If_clauseContext_t433839448 * >::Invoke(26 /* System.Void IYarnSpinnerParserListener::EnterIf_clause(YarnSpinnerParser/If_clauseContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/If_clauseContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void If_clauseContext_ExitRule_m2887565148 (If_clauseContext_t433839448 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_clauseContext_ExitRule_m2887565148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< If_clauseContext_t433839448 * >::Invoke(27 /* System.Void IYarnSpinnerParserListener::ExitIf_clause(YarnSpinnerParser/If_clauseContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/If_clauseContext YarnSpinnerParser/If_statementContext::if_clause()
extern "C"  If_clauseContext_t433839448 * If_statementContext_if_clause_m3256646843 (If_statementContext_t134624494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_statementContext_if_clause_m3256646843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		If_clauseContext_t433839448 * L_0 = GenericVirtFuncInvoker1< If_clauseContext_t433839448 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisIf_clauseContext_t433839448_m951746136_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/Else_if_clauseContext[] YarnSpinnerParser/If_statementContext::else_if_clause()
extern "C"  Else_if_clauseContextU5BU5D_t1394249892* If_statementContext_else_if_clause_m665586007 (If_statementContext_t134624494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_statementContext_else_if_clause_m665586007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Else_if_clauseContextU5BU5D_t1394249892* L_0 = GenericVirtFuncInvoker0< Else_if_clauseContextU5BU5D_t1394249892* >::Invoke(ParserRuleContext_GetRuleContexts_TisElse_if_clauseContext_t1663705049_m1165319463_RuntimeMethod_var, __this);
		return L_0;
	}
}
// YarnSpinnerParser/Else_clauseContext YarnSpinnerParser/If_statementContext::else_clause()
extern "C"  Else_clauseContext_t117630170 * If_statementContext_else_clause_m555957786 (If_statementContext_t134624494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_statementContext_else_clause_m555957786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Else_clauseContext_t117630170 * L_0 = GenericVirtFuncInvoker1< Else_clauseContext_t117630170 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisElse_clauseContext_t117630170_m1873697170_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/If_statementContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void If_statementContext__ctor_m2886940069 (If_statementContext_t134624494 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_statementContext__ctor_m2886940069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/If_statementContext::get_RuleIndex()
extern "C"  int32_t If_statementContext_get_RuleIndex_m395742453 (If_statementContext_t134624494 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)12);
	}
}
// System.Void YarnSpinnerParser/If_statementContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void If_statementContext_EnterRule_m4169181973 (If_statementContext_t134624494 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_statementContext_EnterRule_m4169181973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< If_statementContext_t134624494 * >::Invoke(24 /* System.Void IYarnSpinnerParserListener::EnterIf_statement(YarnSpinnerParser/If_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/If_statementContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void If_statementContext_ExitRule_m444965441 (If_statementContext_t134624494 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (If_statementContext_ExitRule_m444965441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< If_statementContext_t134624494 * >::Invoke(25 /* System.Void IYarnSpinnerParserListener::ExitIf_statement(YarnSpinnerParser/If_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/TextContext YarnSpinnerParser/Line_statementContext::text()
extern "C"  TextContext_t1415966466 * Line_statementContext_text_m454825187 (Line_statementContext_t2655749263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_statementContext_text_m454825187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextContext_t1415966466 * L_0 = GenericVirtFuncInvoker1< TextContext_t1415966466 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisTextContext_t1415966466_m2820525319_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/Hashtag_blockContext YarnSpinnerParser/Line_statementContext::hashtag_block()
extern "C"  Hashtag_blockContext_t2033704137 * Line_statementContext_hashtag_block_m2422966150 (Line_statementContext_t2655749263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_statementContext_hashtag_block_m2422966150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtag_blockContext_t2033704137 * L_0 = GenericVirtFuncInvoker1< Hashtag_blockContext_t2033704137 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisHashtag_blockContext_t2033704137_m4259321631_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Line_statementContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Line_statementContext__ctor_m2157480886 (Line_statementContext_t2655749263 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_statementContext__ctor_m2157480886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Line_statementContext::get_RuleIndex()
extern "C"  int32_t Line_statementContext_get_RuleIndex_m142270426 (Line_statementContext_t2655749263 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)22);
	}
}
// System.Void YarnSpinnerParser/Line_statementContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Line_statementContext_EnterRule_m161399120 (Line_statementContext_t2655749263 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_statementContext_EnterRule_m161399120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Line_statementContext_t2655749263 * >::Invoke(44 /* System.Void IYarnSpinnerParserListener::EnterLine_statement(YarnSpinnerParser/Line_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Line_statementContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Line_statementContext_ExitRule_m3467791895 (Line_statementContext_t2655749263 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Line_statementContext_ExitRule_m3467791895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Line_statementContext_t2655749263 * >::Invoke(45 /* System.Void IYarnSpinnerParserListener::ExitLine_statement(YarnSpinnerParser/Line_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/HeaderContext YarnSpinnerParser/NodeContext::header()
extern "C"  HeaderContext_t3816626548 * NodeContext_header_m2786942468 (NodeContext_t3984547532 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext_header_m2786942468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HeaderContext_t3816626548 * L_0 = GenericVirtFuncInvoker1< HeaderContext_t3816626548 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisHeaderContext_t3816626548_m2804549645_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/NodeContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void NodeContext__ctor_m3531824270 (NodeContext_t3984547532 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext__ctor_m3531824270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/NodeContext::get_RuleIndex()
extern "C"  int32_t NodeContext_get_RuleIndex_m731626071 (NodeContext_t3984547532 * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
// System.Void YarnSpinnerParser/NodeContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void NodeContext_EnterRule_m3763690823 (NodeContext_t3984547532 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext_EnterRule_m3763690823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< NodeContext_t3984547532 * >::Invoke(2 /* System.Void IYarnSpinnerParserListener::EnterNode(YarnSpinnerParser/NodeContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/NodeContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void NodeContext_ExitRule_m3508493148 (NodeContext_t3984547532 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext_ExitRule_m3508493148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< NodeContext_t3984547532 * >::Invoke(3 /* System.Void IYarnSpinnerParserListener::ExitNode(YarnSpinnerParser/NodeContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/Option_statementContext::OPTION_TEXT()
extern "C"  RuntimeObject* Option_statementContext_OPTION_TEXT_m1489204508 (Option_statementContext_t2631346611 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)73), 0);
		return L_0;
	}
}
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/Option_statementContext::OPTION_LINK()
extern "C"  RuntimeObject* Option_statementContext_OPTION_LINK_m3636489410 (Option_statementContext_t2631346611 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)75), 0);
		return L_0;
	}
}
// YarnSpinnerParser/Hashtag_blockContext YarnSpinnerParser/Option_statementContext::hashtag_block()
extern "C"  Hashtag_blockContext_t2033704137 * Option_statementContext_hashtag_block_m3118739170 (Option_statementContext_t2631346611 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Option_statementContext_hashtag_block_m3118739170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtag_blockContext_t2033704137 * L_0 = GenericVirtFuncInvoker1< Hashtag_blockContext_t2033704137 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisHashtag_blockContext_t2033704137_m4259321631_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Option_statementContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Option_statementContext__ctor_m1633042326 (Option_statementContext_t2631346611 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Option_statementContext__ctor_m1633042326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Option_statementContext::get_RuleIndex()
extern "C"  int32_t Option_statementContext_get_RuleIndex_m1882143229 (Option_statementContext_t2631346611 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)17);
	}
}
// System.Void YarnSpinnerParser/Option_statementContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Option_statementContext_EnterRule_m1671536086 (Option_statementContext_t2631346611 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Option_statementContext_EnterRule_m1671536086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Option_statementContext_t2631346611 * >::Invoke(34 /* System.Void IYarnSpinnerParserListener::EnterOption_statement(YarnSpinnerParser/Option_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Option_statementContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Option_statementContext_ExitRule_m1847831250 (Option_statementContext_t2631346611 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Option_statementContext_ExitRule_m1847831250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Option_statementContext_t2631346611 * >::Invoke(35 /* System.Void IYarnSpinnerParserListener::ExitOption_statement(YarnSpinnerParser/Option_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/VariableContext YarnSpinnerParser/Set_statementContext::variable()
extern "C"  VariableContext_t1517118608 * Set_statementContext_variable_m4056607759 (Set_statementContext_t46281311 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Set_statementContext_variable_m4056607759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VariableContext_t1517118608 * L_0 = GenericVirtFuncInvoker1< VariableContext_t1517118608 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisVariableContext_t1517118608_m280824563_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/Set_statementContext::expression()
extern "C"  ExpressionContext_t4156557213 * Set_statementContext_expression_m3747437255 (Set_statementContext_t46281311 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Set_statementContext_expression_m3747437255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Set_statementContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Set_statementContext__ctor_m3289035558 (Set_statementContext_t46281311 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Set_statementContext__ctor_m3289035558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Set_statementContext::get_RuleIndex()
extern "C"  int32_t Set_statementContext_get_RuleIndex_m3018559334 (Set_statementContext_t46281311 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)16);
	}
}
// System.Void YarnSpinnerParser/Set_statementContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Set_statementContext_EnterRule_m288350734 (Set_statementContext_t46281311 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Set_statementContext_EnterRule_m288350734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Set_statementContext_t46281311 * >::Invoke(32 /* System.Void IYarnSpinnerParserListener::EnterSet_statement(YarnSpinnerParser/Set_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Set_statementContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Set_statementContext_ExitRule_m2665500380 (Set_statementContext_t46281311 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Set_statementContext_ExitRule_m2665500380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Set_statementContext_t46281311 * >::Invoke(33 /* System.Void IYarnSpinnerParserListener::ExitSet_statement(YarnSpinnerParser/Set_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ExpressionContext YarnSpinnerParser/Shortcut_conditionalContext::expression()
extern "C"  ExpressionContext_t4156557213 * Shortcut_conditionalContext_expression_m2919789251 (Shortcut_conditionalContext_t2827451331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_conditionalContext_expression_m2919789251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionContext_t4156557213 * L_0 = GenericVirtFuncInvoker1< ExpressionContext_t4156557213 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisExpressionContext_t4156557213_m2745976847_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Shortcut_conditionalContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Shortcut_conditionalContext__ctor_m3571164168 (Shortcut_conditionalContext_t2827451331 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_conditionalContext__ctor_m3571164168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Shortcut_conditionalContext::get_RuleIndex()
extern "C"  int32_t Shortcut_conditionalContext_get_RuleIndex_m3047929794 (Shortcut_conditionalContext_t2827451331 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)10);
	}
}
// System.Void YarnSpinnerParser/Shortcut_conditionalContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Shortcut_conditionalContext_EnterRule_m1845762492 (Shortcut_conditionalContext_t2827451331 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_conditionalContext_EnterRule_m1845762492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Shortcut_conditionalContext_t2827451331 * >::Invoke(20 /* System.Void IYarnSpinnerParserListener::EnterShortcut_conditional(YarnSpinnerParser/Shortcut_conditionalContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Shortcut_conditionalContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Shortcut_conditionalContext_ExitRule_m3306691526 (Shortcut_conditionalContext_t2827451331 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_conditionalContext_ExitRule_m3306691526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Shortcut_conditionalContext_t2827451331 * >::Invoke(21 /* System.Void IYarnSpinnerParserListener::ExitShortcut_conditional(YarnSpinnerParser/Shortcut_conditionalContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/ShortcutContext[] YarnSpinnerParser/Shortcut_statementContext::shortcut()
extern "C"  ShortcutContextU5BU5D_t3884824668* Shortcut_statementContext_shortcut_m826112993 (Shortcut_statementContext_t3521849716 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_statementContext_shortcut_m826112993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShortcutContextU5BU5D_t3884824668* L_0 = GenericVirtFuncInvoker0< ShortcutContextU5BU5D_t3884824668* >::Invoke(ParserRuleContext_GetRuleContexts_TisShortcutContext_t2133948545_m1435303066_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Shortcut_statementContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Shortcut_statementContext__ctor_m88600948 (Shortcut_statementContext_t3521849716 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_statementContext__ctor_m88600948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Shortcut_statementContext::get_RuleIndex()
extern "C"  int32_t Shortcut_statementContext_get_RuleIndex_m1820192674 (Shortcut_statementContext_t3521849716 * __this, const RuntimeMethod* method)
{
	{
		return 8;
	}
}
// System.Void YarnSpinnerParser/Shortcut_statementContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Shortcut_statementContext_EnterRule_m2129831940 (Shortcut_statementContext_t3521849716 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_statementContext_EnterRule_m2129831940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Shortcut_statementContext_t3521849716 * >::Invoke(16 /* System.Void IYarnSpinnerParserListener::EnterShortcut_statement(YarnSpinnerParser/Shortcut_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Shortcut_statementContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Shortcut_statementContext_ExitRule_m1213680592 (Shortcut_statementContext_t3521849716 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_statementContext_ExitRule_m1213680592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Shortcut_statementContext_t3521849716 * >::Invoke(17 /* System.Void IYarnSpinnerParserListener::ExitShortcut_statement(YarnSpinnerParser/Shortcut_statementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/Shortcut_textContext::SHORTCUT_TEXT()
extern "C"  RuntimeObject* Shortcut_textContext_SHORTCUT_TEXT_m1944307629 (Shortcut_textContext_t3731605062 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)32), 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/Shortcut_textContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void Shortcut_textContext__ctor_m1429027767 (Shortcut_textContext_t3731605062 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_textContext__ctor_m1429027767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/Shortcut_textContext::get_RuleIndex()
extern "C"  int32_t Shortcut_textContext_get_RuleIndex_m386211704 (Shortcut_textContext_t3731605062 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)11);
	}
}
// System.Void YarnSpinnerParser/Shortcut_textContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Shortcut_textContext_EnterRule_m3440204565 (Shortcut_textContext_t3731605062 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_textContext_EnterRule_m3440204565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Shortcut_textContext_t3731605062 * >::Invoke(22 /* System.Void IYarnSpinnerParserListener::EnterShortcut_text(YarnSpinnerParser/Shortcut_textContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/Shortcut_textContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void Shortcut_textContext_ExitRule_m73466431 (Shortcut_textContext_t3731605062 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shortcut_textContext_ExitRule_m73466431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< Shortcut_textContext_t3731605062 * >::Invoke(23 /* System.Void IYarnSpinnerParserListener::ExitShortcut_text(YarnSpinnerParser/Shortcut_textContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/Shortcut_textContext YarnSpinnerParser/ShortcutContext::shortcut_text()
extern "C"  Shortcut_textContext_t3731605062 * ShortcutContext_shortcut_text_m4081885024 (ShortcutContext_t2133948545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutContext_shortcut_text_m4081885024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Shortcut_textContext_t3731605062 * L_0 = GenericVirtFuncInvoker1< Shortcut_textContext_t3731605062 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisShortcut_textContext_t3731605062_m1323180438_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/Shortcut_conditionalContext YarnSpinnerParser/ShortcutContext::shortcut_conditional()
extern "C"  Shortcut_conditionalContext_t2827451331 * ShortcutContext_shortcut_conditional_m3811735627 (ShortcutContext_t2133948545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutContext_shortcut_conditional_m3811735627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Shortcut_conditionalContext_t2827451331 * L_0 = GenericVirtFuncInvoker1< Shortcut_conditionalContext_t2827451331 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisShortcut_conditionalContext_t2827451331_m3834314468_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/Hashtag_blockContext YarnSpinnerParser/ShortcutContext::hashtag_block()
extern "C"  Hashtag_blockContext_t2033704137 * ShortcutContext_hashtag_block_m266794148 (ShortcutContext_t2133948545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutContext_hashtag_block_m266794148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtag_blockContext_t2033704137 * L_0 = GenericVirtFuncInvoker1< Hashtag_blockContext_t2033704137 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisHashtag_blockContext_t2033704137_m4259321631_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// YarnSpinnerParser/StatementContext[] YarnSpinnerParser/ShortcutContext::statement()
extern "C"  StatementContextU5BU5D_t2333700405* ShortcutContext_statement_m4266704225 (ShortcutContext_t2133948545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutContext_statement_m4266704225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StatementContextU5BU5D_t2333700405* L_0 = GenericVirtFuncInvoker0< StatementContextU5BU5D_t2333700405* >::Invoke(ParserRuleContext_GetRuleContexts_TisStatementContext_t1304201180_m54646415_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ShortcutContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void ShortcutContext__ctor_m1502265774 (ShortcutContext_t2133948545 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutContext__ctor_m1502265774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/ShortcutContext::get_RuleIndex()
extern "C"  int32_t ShortcutContext_get_RuleIndex_m3062083976 (ShortcutContext_t2133948545 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)9);
	}
}
// System.Void YarnSpinnerParser/ShortcutContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ShortcutContext_EnterRule_m1420850264 (ShortcutContext_t2133948545 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutContext_EnterRule_m1420850264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ShortcutContext_t2133948545 * >::Invoke(18 /* System.Void IYarnSpinnerParserListener::EnterShortcut(YarnSpinnerParser/ShortcutContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ShortcutContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ShortcutContext_ExitRule_m3120995295 (ShortcutContext_t2133948545 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShortcutContext_ExitRule_m3120995295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ShortcutContext_t2133948545 * >::Invoke(19 /* System.Void IYarnSpinnerParserListener::ExitShortcut(YarnSpinnerParser/ShortcutContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/StatementContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void StatementContext__ctor_m2135736363 (StatementContext_t1304201180 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StatementContext__ctor_m2135736363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/StatementContext::get_RuleIndex()
extern "C"  int32_t StatementContext_get_RuleIndex_m3780167851 (StatementContext_t1304201180 * __this, const RuntimeMethod* method)
{
	{
		return 7;
	}
}
// System.Void YarnSpinnerParser/StatementContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void StatementContext_EnterRule_m1369059041 (StatementContext_t1304201180 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StatementContext_EnterRule_m1369059041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< StatementContext_t1304201180 * >::Invoke(14 /* System.Void IYarnSpinnerParserListener::EnterStatement(YarnSpinnerParser/StatementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/StatementContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void StatementContext_ExitRule_m2287789926 (StatementContext_t1304201180 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StatementContext_ExitRule_m2287789926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< StatementContext_t1304201180 * >::Invoke(15 /* System.Void IYarnSpinnerParserListener::ExitStatement(YarnSpinnerParser/StatementContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/TextContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void TextContext__ctor_m3952225769 (TextContext_t1415966466 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextContext__ctor_m3952225769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/TextContext::get_RuleIndex()
extern "C"  int32_t TextContext_get_RuleIndex_m1964766658 (TextContext_t1415966466 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)21);
	}
}
// System.Void YarnSpinnerParser/TextContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void TextContext_EnterRule_m3097745813 (TextContext_t1415966466 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextContext_EnterRule_m3097745813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< TextContext_t1415966466 * >::Invoke(42 /* System.Void IYarnSpinnerParserListener::EnterText(YarnSpinnerParser/TextContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/TextContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void TextContext_ExitRule_m1626104217 (TextContext_t1415966466 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextContext_ExitRule_m1626104217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< TextContext_t1415966466 * >::Invoke(43 /* System.Void IYarnSpinnerParserListener::ExitText(YarnSpinnerParser/TextContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/ValueContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void ValueContext__ctor_m2858615264 (ValueContext_t985627136 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueContext__ctor_m2858615264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/ValueContext::get_RuleIndex()
extern "C"  int32_t ValueContext_get_RuleIndex_m2934104239 (ValueContext_t985627136 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)26);
	}
}
// System.Void YarnSpinnerParser/ValueContext::.ctor()
extern "C"  void ValueContext__ctor_m1119228882 (ValueContext_t985627136 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueContext__ctor_m1119228882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m1984361021(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void YarnSpinnerParser/ValueContext::CopyFrom(YarnSpinnerParser/ValueContext)
extern "C"  void ValueContext_CopyFrom_m2008124232 (ValueContext_t985627136 * __this, ValueContext_t985627136 * ___context0, const RuntimeMethod* method)
{
	{
		ValueContext_t985627136 * L_0 = ___context0;
		ParserRuleContext_CopyFrom_m3597367641(__this, L_0, /*hidden argument*/NULL);
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
// System.Void YarnSpinnerParser/ValueFalseContext::.ctor(YarnSpinnerParser/ValueContext)
extern "C"  void ValueFalseContext__ctor_m2604526113 (ValueFalseContext_t1433625895 * __this, ValueContext_t985627136 * ___context0, const RuntimeMethod* method)
{
	{
		ValueContext__ctor_m1119228882(__this, /*hidden argument*/NULL);
		ValueContext_t985627136 * L_0 = ___context0;
		VirtActionInvoker1< ValueContext_t985627136 * >::Invoke(36 /* System.Void YarnSpinnerParser/ValueContext::CopyFrom(YarnSpinnerParser/ValueContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ValueFalseContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueFalseContext_EnterRule_m1990784620 (ValueFalseContext_t1433625895 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueFalseContext_EnterRule_m1990784620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueFalseContext_t1433625895 * >::Invoke(76 /* System.Void IYarnSpinnerParserListener::EnterValueFalse(YarnSpinnerParser/ValueFalseContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ValueFalseContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueFalseContext_ExitRule_m1097642558 (ValueFalseContext_t1433625895 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueFalseContext_ExitRule_m1097642558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueFalseContext_t1433625895 * >::Invoke(77 /* System.Void IYarnSpinnerParserListener::ExitValueFalse(YarnSpinnerParser/ValueFalseContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/FunctionContext YarnSpinnerParser/ValueFuncContext::function()
extern "C"  FunctionContext_t3439243301 * ValueFuncContext_function_m126636041 (ValueFuncContext_t1993483790 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueFuncContext_function_m126636041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FunctionContext_t3439243301 * L_0 = GenericVirtFuncInvoker1< FunctionContext_t3439243301 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisFunctionContext_t3439243301_m2784921659_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ValueFuncContext::.ctor(YarnSpinnerParser/ValueContext)
extern "C"  void ValueFuncContext__ctor_m1814351425 (ValueFuncContext_t1993483790 * __this, ValueContext_t985627136 * ___context0, const RuntimeMethod* method)
{
	{
		ValueContext__ctor_m1119228882(__this, /*hidden argument*/NULL);
		ValueContext_t985627136 * L_0 = ___context0;
		VirtActionInvoker1< ValueContext_t985627136 * >::Invoke(36 /* System.Void YarnSpinnerParser/ValueContext::CopyFrom(YarnSpinnerParser/ValueContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ValueFuncContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueFuncContext_EnterRule_m2392368472 (ValueFuncContext_t1993483790 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueFuncContext_EnterRule_m2392368472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueFuncContext_t1993483790 * >::Invoke(82 /* System.Void IYarnSpinnerParserListener::EnterValueFunc(YarnSpinnerParser/ValueFuncContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ValueFuncContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueFuncContext_ExitRule_m2011154754 (ValueFuncContext_t1993483790 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueFuncContext_ExitRule_m2011154754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueFuncContext_t1993483790 * >::Invoke(83 /* System.Void IYarnSpinnerParserListener::ExitValueFunc(YarnSpinnerParser/ValueFuncContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/ValueNullContext::.ctor(YarnSpinnerParser/ValueContext)
extern "C"  void ValueNullContext__ctor_m1037821880 (ValueNullContext_t1482382033 * __this, ValueContext_t985627136 * ___context0, const RuntimeMethod* method)
{
	{
		ValueContext__ctor_m1119228882(__this, /*hidden argument*/NULL);
		ValueContext_t985627136 * L_0 = ___context0;
		VirtActionInvoker1< ValueContext_t985627136 * >::Invoke(36 /* System.Void YarnSpinnerParser/ValueContext::CopyFrom(YarnSpinnerParser/ValueContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ValueNullContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueNullContext_EnterRule_m213841568 (ValueNullContext_t1482382033 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueNullContext_EnterRule_m213841568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueNullContext_t1482382033 * >::Invoke(84 /* System.Void IYarnSpinnerParserListener::EnterValueNull(YarnSpinnerParser/ValueNullContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ValueNullContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueNullContext_ExitRule_m2657122087 (ValueNullContext_t1482382033 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueNullContext_ExitRule_m2657122087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueNullContext_t1482382033 * >::Invoke(85 /* System.Void IYarnSpinnerParserListener::ExitValueNull(YarnSpinnerParser/ValueNullContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/ValueNumberContext::BODY_NUMBER()
extern "C"  RuntimeObject* ValueNumberContext_BODY_NUMBER_m1915851684 (ValueNumberContext_t2539936067 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)68), 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ValueNumberContext::.ctor(YarnSpinnerParser/ValueContext)
extern "C"  void ValueNumberContext__ctor_m2781161682 (ValueNumberContext_t2539936067 * __this, ValueContext_t985627136 * ___context0, const RuntimeMethod* method)
{
	{
		ValueContext__ctor_m1119228882(__this, /*hidden argument*/NULL);
		ValueContext_t985627136 * L_0 = ___context0;
		VirtActionInvoker1< ValueContext_t985627136 * >::Invoke(36 /* System.Void YarnSpinnerParser/ValueContext::CopyFrom(YarnSpinnerParser/ValueContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ValueNumberContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueNumberContext_EnterRule_m3708648421 (ValueNumberContext_t2539936067 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueNumberContext_EnterRule_m3708648421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueNumberContext_t2539936067 * >::Invoke(72 /* System.Void IYarnSpinnerParserListener::EnterValueNumber(YarnSpinnerParser/ValueNumberContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ValueNumberContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueNumberContext_ExitRule_m2390804805 (ValueNumberContext_t2539936067 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueNumberContext_ExitRule_m2390804805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueNumberContext_t2539936067 * >::Invoke(73 /* System.Void IYarnSpinnerParserListener::ExitValueNumber(YarnSpinnerParser/ValueNumberContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/ValueStringContext::COMMAND_STRING()
extern "C"  RuntimeObject* ValueStringContext_COMMAND_STRING_m470456913 (ValueStringContext_t470402646 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)35), 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ValueStringContext::.ctor(YarnSpinnerParser/ValueContext)
extern "C"  void ValueStringContext__ctor_m2277326946 (ValueStringContext_t470402646 * __this, ValueContext_t985627136 * ___context0, const RuntimeMethod* method)
{
	{
		ValueContext__ctor_m1119228882(__this, /*hidden argument*/NULL);
		ValueContext_t985627136 * L_0 = ___context0;
		VirtActionInvoker1< ValueContext_t985627136 * >::Invoke(36 /* System.Void YarnSpinnerParser/ValueContext::CopyFrom(YarnSpinnerParser/ValueContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ValueStringContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueStringContext_EnterRule_m2068836677 (ValueStringContext_t470402646 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueStringContext_EnterRule_m2068836677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueStringContext_t470402646 * >::Invoke(80 /* System.Void IYarnSpinnerParserListener::EnterValueString(YarnSpinnerParser/ValueStringContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ValueStringContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueStringContext_ExitRule_m3873861089 (ValueStringContext_t470402646 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueStringContext_ExitRule_m3873861089_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueStringContext_t470402646 * >::Invoke(81 /* System.Void IYarnSpinnerParserListener::ExitValueString(YarnSpinnerParser/ValueStringContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParser/ValueTrueContext::.ctor(YarnSpinnerParser/ValueContext)
extern "C"  void ValueTrueContext__ctor_m3645004526 (ValueTrueContext_t465383134 * __this, ValueContext_t985627136 * ___context0, const RuntimeMethod* method)
{
	{
		ValueContext__ctor_m1119228882(__this, /*hidden argument*/NULL);
		ValueContext_t985627136 * L_0 = ___context0;
		VirtActionInvoker1< ValueContext_t985627136 * >::Invoke(36 /* System.Void YarnSpinnerParser/ValueContext::CopyFrom(YarnSpinnerParser/ValueContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ValueTrueContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueTrueContext_EnterRule_m3425367458 (ValueTrueContext_t465383134 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTrueContext_EnterRule_m3425367458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueTrueContext_t465383134 * >::Invoke(74 /* System.Void IYarnSpinnerParserListener::EnterValueTrue(YarnSpinnerParser/ValueTrueContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ValueTrueContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueTrueContext_ExitRule_m1880660287 (ValueTrueContext_t465383134 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueTrueContext_ExitRule_m1880660287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueTrueContext_t465383134 * >::Invoke(75 /* System.Void IYarnSpinnerParserListener::ExitValueTrue(YarnSpinnerParser/ValueTrueContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// YarnSpinnerParser/VariableContext YarnSpinnerParser/ValueVarContext::variable()
extern "C"  VariableContext_t1517118608 * ValueVarContext_variable_m4282458120 (ValueVarContext_t3081726169 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueVarContext_variable_m4282458120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VariableContext_t1517118608 * L_0 = GenericVirtFuncInvoker1< VariableContext_t1517118608 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisVariableContext_t1517118608_m280824563_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/ValueVarContext::.ctor(YarnSpinnerParser/ValueContext)
extern "C"  void ValueVarContext__ctor_m392030447 (ValueVarContext_t3081726169 * __this, ValueContext_t985627136 * ___context0, const RuntimeMethod* method)
{
	{
		ValueContext__ctor_m1119228882(__this, /*hidden argument*/NULL);
		ValueContext_t985627136 * L_0 = ___context0;
		VirtActionInvoker1< ValueContext_t985627136 * >::Invoke(36 /* System.Void YarnSpinnerParser/ValueContext::CopyFrom(YarnSpinnerParser/ValueContext) */, __this, L_0);
		return;
	}
}
// System.Void YarnSpinnerParser/ValueVarContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueVarContext_EnterRule_m1487739489 (ValueVarContext_t3081726169 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueVarContext_EnterRule_m1487739489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueVarContext_t3081726169 * >::Invoke(78 /* System.Void IYarnSpinnerParserListener::EnterValueVar(YarnSpinnerParser/ValueVarContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/ValueVarContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void ValueVarContext_ExitRule_m430884149 (ValueVarContext_t3081726169 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueVarContext_ExitRule_m430884149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< ValueVarContext_t3081726169 * >::Invoke(79 /* System.Void IYarnSpinnerParserListener::ExitValueVar(YarnSpinnerParser/ValueVarContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode YarnSpinnerParser/VariableContext::VAR_ID()
extern "C"  RuntimeObject* VariableContext_VAR_ID_m218851744 (VariableContext_t1517118608 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(29 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)67), 0);
		return L_0;
	}
}
// System.Void YarnSpinnerParser/VariableContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
extern "C"  void VariableContext__ctor_m695169527 (VariableContext_t1517118608 * __this, ParserRuleContext_t3215563317 * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableContext__ctor_m695169527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_t3215563317 * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_t3215563317_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_m3865993304(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 YarnSpinnerParser/VariableContext::get_RuleIndex()
extern "C"  int32_t VariableContext_get_RuleIndex_m1505780671 (VariableContext_t1517118608 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)27);
	}
}
// System.Void YarnSpinnerParser/VariableContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void VariableContext_EnterRule_m526211239 (VariableContext_t1517118608 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableContext_EnterRule_m526211239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< VariableContext_t1517118608 * >::Invoke(86 /* System.Void IYarnSpinnerParserListener::EnterVariable(YarnSpinnerParser/VariableContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void YarnSpinnerParser/VariableContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
extern "C"  void VariableContext_ExitRule_m2944078848 (VariableContext_t1517118608 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VariableContext_ExitRule_m2944078848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		InterfaceActionInvoker1< VariableContext_t1517118608 * >::Invoke(87 /* System.Void IYarnSpinnerParserListener::ExitVariable(YarnSpinnerParser/VariableContext) */, IYarnSpinnerParserListener_t4245476079_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void YarnSpinnerParserBaseListener::EnterDialogue(YarnSpinnerParser/DialogueContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterDialogue_m2006886838 (YarnSpinnerParserBaseListener_t2715304878 * __this, DialogueContext_t950888852 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitDialogue(YarnSpinnerParser/DialogueContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitDialogue_m449161397 (YarnSpinnerParserBaseListener_t2715304878 * __this, DialogueContext_t950888852 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterNode(YarnSpinnerParser/NodeContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterNode_m729275639 (YarnSpinnerParserBaseListener_t2715304878 * __this, NodeContext_t3984547532 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitNode(YarnSpinnerParser/NodeContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitNode_m111681928 (YarnSpinnerParserBaseListener_t2715304878 * __this, NodeContext_t3984547532 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterHeader(YarnSpinnerParser/HeaderContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterHeader_m742570447 (YarnSpinnerParserBaseListener_t2715304878 * __this, HeaderContext_t3816626548 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitHeader(YarnSpinnerParser/HeaderContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitHeader_m2950031183 (YarnSpinnerParserBaseListener_t2715304878 * __this, HeaderContext_t3816626548 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterHeader_title(YarnSpinnerParser/Header_titleContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterHeader_title_m1013270793 (YarnSpinnerParserBaseListener_t2715304878 * __this, Header_titleContext_t4266626001 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitHeader_title(YarnSpinnerParser/Header_titleContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitHeader_title_m2006686884 (YarnSpinnerParserBaseListener_t2715304878 * __this, Header_titleContext_t4266626001 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterHeader_tag(YarnSpinnerParser/Header_tagContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterHeader_tag_m3234433619 (YarnSpinnerParserBaseListener_t2715304878 * __this, Header_tagContext_t1239473226 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitHeader_tag(YarnSpinnerParser/Header_tagContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitHeader_tag_m756765662 (YarnSpinnerParserBaseListener_t2715304878 * __this, Header_tagContext_t1239473226 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterHeader_line(YarnSpinnerParser/Header_lineContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterHeader_line_m1019718160 (YarnSpinnerParserBaseListener_t2715304878 * __this, Header_lineContext_t832134280 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitHeader_line(YarnSpinnerParser/Header_lineContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitHeader_line_m2241483758 (YarnSpinnerParserBaseListener_t2715304878 * __this, Header_lineContext_t832134280 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterBody(YarnSpinnerParser/BodyContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterBody_m633336481 (YarnSpinnerParserBaseListener_t2715304878 * __this, BodyContext_t1127179312 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitBody(YarnSpinnerParser/BodyContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitBody_m1769984183 (YarnSpinnerParserBaseListener_t2715304878 * __this, BodyContext_t1127179312 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterStatement(YarnSpinnerParser/StatementContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterStatement_m4211939365 (YarnSpinnerParserBaseListener_t2715304878 * __this, StatementContext_t1304201180 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitStatement(YarnSpinnerParser/StatementContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitStatement_m939406148 (YarnSpinnerParserBaseListener_t2715304878 * __this, StatementContext_t1304201180 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterShortcut_statement(YarnSpinnerParser/Shortcut_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterShortcut_statement_m2795396617 (YarnSpinnerParserBaseListener_t2715304878 * __this, Shortcut_statementContext_t3521849716 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitShortcut_statement(YarnSpinnerParser/Shortcut_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitShortcut_statement_m2753863346 (YarnSpinnerParserBaseListener_t2715304878 * __this, Shortcut_statementContext_t3521849716 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterShortcut(YarnSpinnerParser/ShortcutContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterShortcut_m2392732486 (YarnSpinnerParserBaseListener_t2715304878 * __this, ShortcutContext_t2133948545 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitShortcut(YarnSpinnerParser/ShortcutContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitShortcut_m3936518841 (YarnSpinnerParserBaseListener_t2715304878 * __this, ShortcutContext_t2133948545 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterShortcut_conditional(YarnSpinnerParser/Shortcut_conditionalContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterShortcut_conditional_m2011649122 (YarnSpinnerParserBaseListener_t2715304878 * __this, Shortcut_conditionalContext_t2827451331 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitShortcut_conditional(YarnSpinnerParser/Shortcut_conditionalContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitShortcut_conditional_m3136565683 (YarnSpinnerParserBaseListener_t2715304878 * __this, Shortcut_conditionalContext_t2827451331 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterShortcut_text(YarnSpinnerParser/Shortcut_textContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterShortcut_text_m1326861001 (YarnSpinnerParserBaseListener_t2715304878 * __this, Shortcut_textContext_t3731605062 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitShortcut_text(YarnSpinnerParser/Shortcut_textContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitShortcut_text_m3994178175 (YarnSpinnerParserBaseListener_t2715304878 * __this, Shortcut_textContext_t3731605062 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterIf_statement(YarnSpinnerParser/If_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterIf_statement_m2077970707 (YarnSpinnerParserBaseListener_t2715304878 * __this, If_statementContext_t134624494 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitIf_statement(YarnSpinnerParser/If_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitIf_statement_m3733181175 (YarnSpinnerParserBaseListener_t2715304878 * __this, If_statementContext_t134624494 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterIf_clause(YarnSpinnerParser/If_clauseContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterIf_clause_m1244596332 (YarnSpinnerParserBaseListener_t2715304878 * __this, If_clauseContext_t433839448 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitIf_clause(YarnSpinnerParser/If_clauseContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitIf_clause_m2154861896 (YarnSpinnerParserBaseListener_t2715304878 * __this, If_clauseContext_t433839448 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterElse_if_clause(YarnSpinnerParser/Else_if_clauseContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterElse_if_clause_m1983981778 (YarnSpinnerParserBaseListener_t2715304878 * __this, Else_if_clauseContext_t1663705049 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitElse_if_clause(YarnSpinnerParser/Else_if_clauseContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitElse_if_clause_m4294578366 (YarnSpinnerParserBaseListener_t2715304878 * __this, Else_if_clauseContext_t1663705049 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterElse_clause(YarnSpinnerParser/Else_clauseContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterElse_clause_m2006530848 (YarnSpinnerParserBaseListener_t2715304878 * __this, Else_clauseContext_t117630170 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitElse_clause(YarnSpinnerParser/Else_clauseContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitElse_clause_m3270136223 (YarnSpinnerParserBaseListener_t2715304878 * __this, Else_clauseContext_t117630170 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterSet_statement(YarnSpinnerParser/Set_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterSet_statement_m3374216536 (YarnSpinnerParserBaseListener_t2715304878 * __this, Set_statementContext_t46281311 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitSet_statement(YarnSpinnerParser/Set_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitSet_statement_m966408303 (YarnSpinnerParserBaseListener_t2715304878 * __this, Set_statementContext_t46281311 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterOption_statement(YarnSpinnerParser/Option_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterOption_statement_m3910371336 (YarnSpinnerParserBaseListener_t2715304878 * __this, Option_statementContext_t2631346611 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitOption_statement(YarnSpinnerParser/Option_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitOption_statement_m553210617 (YarnSpinnerParserBaseListener_t2715304878 * __this, Option_statementContext_t2631346611 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterFunction(YarnSpinnerParser/FunctionContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterFunction_m3702538154 (YarnSpinnerParserBaseListener_t2715304878 * __this, FunctionContext_t3439243301 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitFunction(YarnSpinnerParser/FunctionContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitFunction_m3985422130 (YarnSpinnerParserBaseListener_t2715304878 * __this, FunctionContext_t3439243301 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterFunction_statement(YarnSpinnerParser/Function_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterFunction_statement_m4113198301 (YarnSpinnerParserBaseListener_t2715304878 * __this, Function_statementContext_t1512458714 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitFunction_statement(YarnSpinnerParser/Function_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitFunction_statement_m737726901 (YarnSpinnerParserBaseListener_t2715304878 * __this, Function_statementContext_t1512458714 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterAction_statement(YarnSpinnerParser/Action_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterAction_statement_m3587850262 (YarnSpinnerParserBaseListener_t2715304878 * __this, Action_statementContext_t336721119 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitAction_statement(YarnSpinnerParser/Action_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitAction_statement_m2895185115 (YarnSpinnerParserBaseListener_t2715304878 * __this, Action_statementContext_t336721119 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterText(YarnSpinnerParser/TextContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterText_m1899827332 (YarnSpinnerParserBaseListener_t2715304878 * __this, TextContext_t1415966466 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitText(YarnSpinnerParser/TextContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitText_m3247563907 (YarnSpinnerParserBaseListener_t2715304878 * __this, TextContext_t1415966466 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterLine_statement(YarnSpinnerParser/Line_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterLine_statement_m3193809846 (YarnSpinnerParserBaseListener_t2715304878 * __this, Line_statementContext_t2655749263 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitLine_statement(YarnSpinnerParser/Line_statementContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitLine_statement_m2374489984 (YarnSpinnerParserBaseListener_t2715304878 * __this, Line_statementContext_t2655749263 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterHashtag_block(YarnSpinnerParser/Hashtag_blockContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterHashtag_block_m3899281517 (YarnSpinnerParserBaseListener_t2715304878 * __this, Hashtag_blockContext_t2033704137 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitHashtag_block(YarnSpinnerParser/Hashtag_blockContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitHashtag_block_m3348698092 (YarnSpinnerParserBaseListener_t2715304878 * __this, Hashtag_blockContext_t2033704137 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterHashtag(YarnSpinnerParser/HashtagContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterHashtag_m303728762 (YarnSpinnerParserBaseListener_t2715304878 * __this, HashtagContext_t624613153 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitHashtag(YarnSpinnerParser/HashtagContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitHashtag_m3674456720 (YarnSpinnerParserBaseListener_t2715304878 * __this, HashtagContext_t624613153 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpParens(YarnSpinnerParser/ExpParensContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpParens_m3510432340 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpParensContext_t668106348 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpParens(YarnSpinnerParser/ExpParensContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpParens_m174526023 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpParensContext_t668106348 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpMultDivMod(YarnSpinnerParser/ExpMultDivModContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpMultDivMod_m3829563992 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpMultDivModContext_t1610360120 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpMultDivMod(YarnSpinnerParser/ExpMultDivModContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpMultDivMod_m3351139787 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpMultDivModContext_t1610360120 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpMultDivModEquals(YarnSpinnerParser/ExpMultDivModEqualsContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpMultDivModEquals_m2257173597 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpMultDivModEqualsContext_t506470414 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpMultDivModEquals(YarnSpinnerParser/ExpMultDivModEqualsContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpMultDivModEquals_m3871740244 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpMultDivModEqualsContext_t506470414 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpComparison(YarnSpinnerParser/ExpComparisonContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpComparison_m3472730401 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpComparisonContext_t2005925874 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpComparison(YarnSpinnerParser/ExpComparisonContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpComparison_m659431348 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpComparisonContext_t2005925874 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpNegative(YarnSpinnerParser/ExpNegativeContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpNegative_m2452429931 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpNegativeContext_t944999273 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpNegative(YarnSpinnerParser/ExpNegativeContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpNegative_m91803826 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpNegativeContext_t944999273 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpAndOrXor(YarnSpinnerParser/ExpAndOrXorContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpAndOrXor_m1013277433 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpAndOrXorContext_t3486759600 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpAndOrXor(YarnSpinnerParser/ExpAndOrXorContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpAndOrXor_m1589197282 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpAndOrXorContext_t3486759600 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpPlusMinusEquals(YarnSpinnerParser/ExpPlusMinusEqualsContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpPlusMinusEquals_m1884970064 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpPlusMinusEqualsContext_t826317233 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpPlusMinusEquals(YarnSpinnerParser/ExpPlusMinusEqualsContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpPlusMinusEquals_m692957237 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpPlusMinusEqualsContext_t826317233 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpAddSub(YarnSpinnerParser/ExpAddSubContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpAddSub_m3167659941 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpAddSubContext_t3291599059 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpAddSub(YarnSpinnerParser/ExpAddSubContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpAddSub_m960200759 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpAddSubContext_t3291599059 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpNot(YarnSpinnerParser/ExpNotContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpNot_m1176386070 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpNotContext_t2787672394 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpNot(YarnSpinnerParser/ExpNotContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpNot_m1015444841 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpNotContext_t2787672394 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpValue(YarnSpinnerParser/ExpValueContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpValue_m1808650401 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpValueContext_t2880146557 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpValue(YarnSpinnerParser/ExpValueContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpValue_m529640442 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpValueContext_t2880146557 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterExpEquality(YarnSpinnerParser/ExpEqualityContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterExpEquality_m2034966763 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpEqualityContext_t3120361692 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitExpEquality(YarnSpinnerParser/ExpEqualityContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitExpEquality_m90239444 (YarnSpinnerParserBaseListener_t2715304878 * __this, ExpEqualityContext_t3120361692 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterValueNumber(YarnSpinnerParser/ValueNumberContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterValueNumber_m592941442 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueNumberContext_t2539936067 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitValueNumber(YarnSpinnerParser/ValueNumberContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitValueNumber_m1113921761 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueNumberContext_t2539936067 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterValueTrue(YarnSpinnerParser/ValueTrueContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterValueTrue_m2700635388 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueTrueContext_t465383134 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitValueTrue(YarnSpinnerParser/ValueTrueContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitValueTrue_m2043312061 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueTrueContext_t465383134 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterValueFalse(YarnSpinnerParser/ValueFalseContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterValueFalse_m4266308491 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueFalseContext_t1433625895 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitValueFalse(YarnSpinnerParser/ValueFalseContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitValueFalse_m1365108537 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueFalseContext_t1433625895 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterValueVar(YarnSpinnerParser/ValueVarContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterValueVar_m1950688792 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueVarContext_t3081726169 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitValueVar(YarnSpinnerParser/ValueVarContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitValueVar_m3371665013 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueVarContext_t3081726169 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterValueString(YarnSpinnerParser/ValueStringContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterValueString_m1205631748 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueStringContext_t470402646 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitValueString(YarnSpinnerParser/ValueStringContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitValueString_m1670647026 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueStringContext_t470402646 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterValueFunc(YarnSpinnerParser/ValueFuncContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterValueFunc_m1512790689 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueFuncContext_t1993483790 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitValueFunc(YarnSpinnerParser/ValueFuncContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitValueFunc_m3089096738 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueFuncContext_t1993483790 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterValueNull(YarnSpinnerParser/ValueNullContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterValueNull_m3761178214 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueNullContext_t1482382033 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitValueNull(YarnSpinnerParser/ValueNullContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitValueNull_m1185299612 (YarnSpinnerParserBaseListener_t2715304878 * __this, ValueNullContext_t1482382033 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterVariable(YarnSpinnerParser/VariableContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterVariable_m3306010508 (YarnSpinnerParserBaseListener_t2715304878 * __this, VariableContext_t1517118608 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitVariable(YarnSpinnerParser/VariableContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitVariable_m668604463 (YarnSpinnerParserBaseListener_t2715304878 * __this, VariableContext_t1517118608 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::EnterEveryRule(Antlr4.Runtime.ParserRuleContext)
extern "C"  void YarnSpinnerParserBaseListener_EnterEveryRule_m1943323472 (YarnSpinnerParserBaseListener_t2715304878 * __this, ParserRuleContext_t3215563317 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::ExitEveryRule(Antlr4.Runtime.ParserRuleContext)
extern "C"  void YarnSpinnerParserBaseListener_ExitEveryRule_m2787641661 (YarnSpinnerParserBaseListener_t2715304878 * __this, ParserRuleContext_t3215563317 * ___context0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::VisitTerminal(Antlr4.Runtime.Tree.ITerminalNode)
extern "C"  void YarnSpinnerParserBaseListener_VisitTerminal_m2572922624 (YarnSpinnerParserBaseListener_t2715304878 * __this, RuntimeObject* ___node0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::VisitErrorNode(Antlr4.Runtime.Tree.IErrorNode)
extern "C"  void YarnSpinnerParserBaseListener_VisitErrorNode_m841740081 (YarnSpinnerParserBaseListener_t2715304878 * __this, RuntimeObject* ___node0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void YarnSpinnerParserBaseListener::.ctor()
extern "C"  void YarnSpinnerParserBaseListener__ctor_m2583507964 (YarnSpinnerParserBaseListener_t2715304878 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
