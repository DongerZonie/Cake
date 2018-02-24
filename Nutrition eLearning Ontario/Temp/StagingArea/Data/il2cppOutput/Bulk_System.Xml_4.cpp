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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Xml.XmlTextWriter
struct XmlTextWriter_t2114213153;
// System.IO.Stream
struct Stream_t1273022909;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.IO.StreamWriter
struct StreamWriter_t1266378904;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Xml.XmlWriter
struct XmlWriter_t127905479;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.String
struct String_t;
// System.Xml.XmlTextWriter/XmlNodeInfo
struct XmlNodeInfo_t4030693883;
// System.Text.UTF8Encoding
struct UTF8Encoding_t3956466879;
// System.Xml.NameTable
struct NameTable_t3178203267;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t418790500;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Exception
struct Exception_t;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.IO.StringWriter
struct StringWriter_t802263757;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Xml.XmlException
struct XmlException_t1761730631;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t817895037;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Uri
struct Uri_t100236324;
// System.Type
struct Type_t;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Net.WebRequest
struct WebRequest_t1939381076;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t131741354;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.Xml.XmlCharacterData
struct XmlCharacterData_t1167807131;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t3314986516;
// System.Xml.XmlReader
struct XmlReader_t3121518892;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t139615908;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1082692789;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t2116608150;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t382374428;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1809665003;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2186285234;
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
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3530625384;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2877834729;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2890546907;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// System.Net.ICredentials
struct ICredentials_t725721261;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_t491982174;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t431163322;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4070033136;
// System.Net.IWebProxy
struct IWebProxy_t688979836;

extern RuntimeClass* XmlTextWriter_t2114213153_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamWriter_t1266378904_il2cpp_TypeInfo_var;
extern const uint32_t XmlTextWriter__ctor_m614698628_MetadataUsageId;
extern RuntimeClass* XmlNodeInfoU5BU5D_t431163322_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_t2329662280_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3450517376;
extern String_t* _stringLiteral1980498921;
extern const uint32_t XmlTextWriter__ctor_m1850551870_MetadataUsageId;
extern RuntimeClass* UTF8Encoding_t3956466879_il2cpp_TypeInfo_var;
extern const uint32_t XmlTextWriter__cctor_m1817862492_MetadataUsageId;
extern RuntimeClass* NameTable_t3178203267_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNamespaceManager_t418790500_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D43_6_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D44_7_FieldInfo_var;
extern const uint32_t XmlTextWriter_Initialize_m3279439671_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral654685373;
extern const uint32_t XmlTextWriter_LookupPrefix_m1332716567_MetadataUsageId;
extern String_t* _stringLiteral1924938561;
extern String_t* _stringLiteral553656983;
extern String_t* _stringLiteral950831942;
extern String_t* _stringLiteral3073726249;
extern String_t* _stringLiteral3906513894;
extern String_t* _stringLiteral2960723134;
extern String_t* _stringLiteral4119301762;
extern String_t* _stringLiteral3454777282;
extern String_t* _stringLiteral3451697041;
extern const uint32_t XmlTextWriter_WriteStartDocumentCore_m3985718073_MetadataUsageId;
extern RuntimeClass* XmlChar_t3816087079_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral2588054203;
extern String_t* _stringLiteral3664297627;
extern String_t* _stringLiteral4026494280;
extern String_t* _stringLiteral2551850054;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3452614643;
extern const uint32_t XmlTextWriter_WriteDocType_m3875009899_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeInfo_t4030693883_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral885171343;
extern String_t* _stringLiteral3884394238;
extern String_t* _stringLiteral4155493995;
extern String_t* _stringLiteral1065548103;
extern String_t* _stringLiteral2984480440;
extern String_t* _stringLiteral3156561689;
extern String_t* _stringLiteral3452614548;
extern const uint32_t XmlTextWriter_WriteStartElement_m362096410_MetadataUsageId;
extern String_t* _stringLiteral3073361429;
extern String_t* _stringLiteral2787691749;
extern const uint32_t XmlTextWriter_CloseStartElementCore_m1099456942_MetadataUsageId;
extern String_t* _stringLiteral3333968179;
extern String_t* _stringLiteral3986749280;
extern String_t* _stringLiteral1910861284;
extern String_t* _stringLiteral3450582932;
extern const uint32_t XmlTextWriter_WriteEndElementCore_m4151593863_MetadataUsageId;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4158462482;
extern String_t* _stringLiteral2829469855;
extern String_t* _stringLiteral3929236445;
extern String_t* _stringLiteral2909972470;
extern String_t* _stringLiteral3406152438;
extern const uint32_t XmlTextWriter_WriteStartAttribute_m796971626_MetadataUsageId;
extern const uint32_t XmlTextWriter_DetermineAttributePrefix_m2990155447_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* StringUtil_t564231417_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3967258293;
extern const uint32_t XmlTextWriter_MockupPrefix_m1608841972_MetadataUsageId;
extern RuntimeClass* XmlException_t1761730631_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2392909825_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m282647386_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var;
extern String_t* _stringLiteral1135920161;
extern String_t* _stringLiteral1168662249;
extern String_t* _stringLiteral2919775337;
extern String_t* _stringLiteral2409271576;
extern String_t* _stringLiteral1613539661;
extern String_t* _stringLiteral1948332219;
extern String_t* _stringLiteral3137061838;
extern String_t* _stringLiteral162476857;
extern const uint32_t XmlTextWriter_WriteEndAttribute_m380495009_MetadataUsageId;
extern String_t* _stringLiteral3987835854;
extern String_t* _stringLiteral4015390292;
extern String_t* _stringLiteral3450713987;
extern String_t* _stringLiteral4102181145;
extern String_t* _stringLiteral3796264707;
extern String_t* _stringLiteral792871693;
extern String_t* _stringLiteral1910992359;
extern const uint32_t XmlTextWriter_WriteComment_m3551275356_MetadataUsageId;
extern String_t* _stringLiteral690829814;
extern String_t* _stringLiteral4143504235;
extern String_t* _stringLiteral3127550563;
extern String_t* _stringLiteral3451631508;
extern const uint32_t XmlTextWriter_WriteProcessingInstruction_m1814082884_MetadataUsageId;
extern String_t* _stringLiteral247049230;
extern String_t* _stringLiteral1557367511;
extern const uint32_t XmlTextWriter_WriteWhitespace_m1664061271_MetadataUsageId;
extern String_t* _stringLiteral2359536473;
extern String_t* _stringLiteral1918332503;
extern String_t* _stringLiteral2919660641;
extern String_t* _stringLiteral191191352;
extern const uint32_t XmlTextWriter_WriteCData_m644505252_MetadataUsageId;
extern String_t* _stringLiteral3987835886;
extern const uint32_t XmlTextWriter_WriteString_m406191177_MetadataUsageId;
extern String_t* _stringLiteral4206759088;
extern String_t* _stringLiteral4078869393;
extern const uint32_t XmlTextWriter_WriteEntityRef_m586114214_MetadataUsageId;
extern String_t* _stringLiteral2412661638;
extern String_t* _stringLiteral1680511121;
extern String_t* _stringLiteral2951695234;
extern String_t* _stringLiteral2799480295;
extern String_t* _stringLiteral2384487702;
extern String_t* _stringLiteral3452614550;
extern const uint32_t XmlTextWriter_WriteQualifiedName_m4062577663_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEscapedString_m3514294598_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteCheckedString_m2937191976_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3560330814;
extern String_t* _stringLiteral4162292604;
extern String_t* _stringLiteral3452614648;
extern const uint32_t XmlTextWriter_WriteCheckedBuffer_m275259173_MetadataUsageId;
extern String_t* _stringLiteral272773273;
extern String_t* _stringLiteral2319061079;
extern String_t* _stringLiteral2319061068;
extern String_t* _stringLiteral3509435951;
extern String_t* _stringLiteral1159970975;
extern String_t* _stringLiteral1415199655;
extern String_t* _stringLiteral4136188839;
extern const uint32_t XmlTextWriter_WriteEscapedBuffer_m903990798_MetadataUsageId;
extern const uint32_t XmlTextWriter_ArgumentError_m3627124320_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const uint32_t XmlTextWriter_InvalidOperation_m988191293_MetadataUsageId;
extern RuntimeClass* WriteState_t3983380671_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral592849640;
extern const uint32_t XmlTextWriter_StateError_m571999665_MetadataUsageId;
extern const uint32_t StringUtil__cctor_m1463895374_MetadataUsageId;
extern const uint32_t StringUtil_IndexOf_m1748403443_MetadataUsageId;
extern const uint32_t StringUtil_Format_m4156193709_MetadataUsageId;
extern const RuntimeType* Stream_t1273022909_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FileStream_t4292183065_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequest_t1939381076_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral109070372;
extern String_t* _stringLiteral3264822601;
extern String_t* _stringLiteral1705633010;
extern String_t* _stringLiteral1629333464;
extern const uint32_t XmlUrlResolver_GetEntity_m2245402732_MetadataUsageId;
extern String_t* _stringLiteral3403826294;
extern String_t* _stringLiteral271658412;
extern String_t* _stringLiteral3452614546;
extern String_t* _stringLiteral2671228134;
extern String_t* _stringLiteral3452614525;
extern String_t* _stringLiteral4237312075;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3074512661;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3834027548;
extern String_t* _stringLiteral3452614523;
extern const uint32_t XmlUrlResolver_UnescapeRelativeUriBody_m2976662118_MetadataUsageId;
extern String_t* _stringLiteral1653520728;
extern const uint32_t XmlWhitespace_get_LocalName_m4124641324_MetadataUsageId;
extern const uint32_t XmlWhitespace_get_Name_m3062444240_MetadataUsageId;
extern String_t* _stringLiteral3922471879;
extern const uint32_t XmlWhitespace_set_Value_m1380309567_MetadataUsageId;
extern RuntimeClass* XmlWhitespace_t131741354_il2cpp_TypeInfo_var;
extern const uint32_t XmlWhitespace_CloneNode_m2585972626_MetadataUsageId;
extern RuntimeClass* XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var;
extern const uint32_t XmlWriter_get_Settings_m164933578_MetadataUsageId;
extern const uint32_t XmlWriter_WriteAttributeString_m3906092358_MetadataUsageId;
extern RuntimeClass* XmlConvert_t1981561327_il2cpp_TypeInfo_var;
extern const uint32_t XmlWriter_WriteQualifiedNameInternal_m2017981185_MetadataUsageId;
extern RuntimeClass* XmlNodeType_t1672767151_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3984887517;
extern String_t* _stringLiteral3261774195;
extern String_t* _stringLiteral1152083996;
extern String_t* _stringLiteral3442940761;
extern const uint32_t XmlWriter_WriteNode_m263666930_MetadataUsageId;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern const uint32_t XmlWriterSettings_Reset_m4105849431_MetadataUsageId;

struct XmlNodeInfoU5BU5D_t431163322;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;


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
#ifndef XMLNODE_T3767805227_H
#define XMLNODE_T3767805227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t3767805227  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3767805227 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t1082692789 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___ownerDocument_1)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___parentNode_2)); }
	inline XmlNode_t3767805227 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t3767805227 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___childNodes_3)); }
	inline XmlNodeListChildren_t1082692789 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t1082692789 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t1082692789 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t3767805227_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t139615908 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map44_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t139615908 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t139615908 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t139615908 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map44_4() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___U3CU3Ef__switchU24map44_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map44_4() const { return ___U3CU3Ef__switchU24map44_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map44_4() { return &___U3CU3Ef__switchU24map44_4; }
	inline void set_U3CU3Ef__switchU24map44_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map44_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map44_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T3767805227_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_30)); }
	inline UriParser_t3890150400 * get_parser_30() const { return ___parser_30; }
	inline UriParser_t3890150400 ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_t3890150400 * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_31() const { return ___U3CU3Ef__switchU24map12_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_31() { return &___U3CU3Ef__switchU24map12_31; }
	inline void set_U3CU3Ef__switchU24map12_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_32() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_32() const { return ___U3CU3Ef__switchU24map13_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_32() { return &___U3CU3Ef__switchU24map13_32; }
	inline void set_U3CU3Ef__switchU24map13_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_33() const { return ___U3CU3Ef__switchU24map14_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_33() { return &___U3CU3Ef__switchU24map14_33; }
	inline void set_U3CU3Ef__switchU24map14_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_34() const { return ___U3CU3Ef__switchU24map15_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_34() { return &___U3CU3Ef__switchU24map15_34; }
	inline void set_U3CU3Ef__switchU24map15_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_35() const { return ___U3CU3Ef__switchU24map16_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_35() { return &___U3CU3Ef__switchU24map16_35; }
	inline void set_U3CU3Ef__switchU24map16_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef XMLNAMESPACEMANAGER_T418790500_H
#define XMLNAMESPACEMANAGER_T418790500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t418790500  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t2116608150* ___decls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_1;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t382374428* ___scopes_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_3;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_4;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_5;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t71772148 * ___nameTable_6;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_7;

public:
	inline static int32_t get_offset_of_decls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___decls_0)); }
	inline NsDeclU5BU5D_t2116608150* get_decls_0() const { return ___decls_0; }
	inline NsDeclU5BU5D_t2116608150** get_address_of_decls_0() { return &___decls_0; }
	inline void set_decls_0(NsDeclU5BU5D_t2116608150* value)
	{
		___decls_0 = value;
		Il2CppCodeGenWriteBarrier((&___decls_0), value);
	}

	inline static int32_t get_offset_of_declPos_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___declPos_1)); }
	inline int32_t get_declPos_1() const { return ___declPos_1; }
	inline int32_t* get_address_of_declPos_1() { return &___declPos_1; }
	inline void set_declPos_1(int32_t value)
	{
		___declPos_1 = value;
	}

	inline static int32_t get_offset_of_scopes_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopes_2)); }
	inline NsScopeU5BU5D_t382374428* get_scopes_2() const { return ___scopes_2; }
	inline NsScopeU5BU5D_t382374428** get_address_of_scopes_2() { return &___scopes_2; }
	inline void set_scopes_2(NsScopeU5BU5D_t382374428* value)
	{
		___scopes_2 = value;
		Il2CppCodeGenWriteBarrier((&___scopes_2), value);
	}

	inline static int32_t get_offset_of_scopePos_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopePos_3)); }
	inline int32_t get_scopePos_3() const { return ___scopePos_3; }
	inline int32_t* get_address_of_scopePos_3() { return &___scopePos_3; }
	inline void set_scopePos_3(int32_t value)
	{
		___scopePos_3 = value;
	}

	inline static int32_t get_offset_of_defaultNamespace_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___defaultNamespace_4)); }
	inline String_t* get_defaultNamespace_4() const { return ___defaultNamespace_4; }
	inline String_t** get_address_of_defaultNamespace_4() { return &___defaultNamespace_4; }
	inline void set_defaultNamespace_4(String_t* value)
	{
		___defaultNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNamespace_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_nameTable_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nameTable_6)); }
	inline XmlNameTable_t71772148 * get_nameTable_6() const { return ___nameTable_6; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_6() { return &___nameTable_6; }
	inline void set_nameTable_6(XmlNameTable_t71772148 * value)
	{
		___nameTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_6), value);
	}

	inline static int32_t get_offset_of_internalAtomizedNames_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___internalAtomizedNames_7)); }
	inline bool get_internalAtomizedNames_7() const { return ___internalAtomizedNames_7; }
	inline bool* get_address_of_internalAtomizedNames_7() { return &___internalAtomizedNames_7; }
	inline void set_internalAtomizedNames_7(bool value)
	{
		___internalAtomizedNames_7 = value;
	}
};

struct XmlNamespaceManager_t418790500_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map28_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_8() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500_StaticFields, ___U3CU3Ef__switchU24map28_8)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map28_8() const { return ___U3CU3Ef__switchU24map28_8; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map28_8() { return &___U3CU3Ef__switchU24map28_8; }
	inline void set_U3CU3Ef__switchU24map28_8(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map28_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEMANAGER_T418790500_H
#ifndef XMLNAMETABLE_T71772148_H
#define XMLNAMETABLE_T71772148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNameTable
struct  XmlNameTable_t71772148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMETABLE_T71772148_H
#ifndef XMLWRITER_T127905479_H
#define XMLWRITER_T127905479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t127905479  : public RuntimeObject
{
public:
	// System.Xml.XmlWriterSettings System.Xml.XmlWriter::settings
	XmlWriterSettings_t3314986516 * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(XmlWriter_t127905479, ___settings_0)); }
	inline XmlWriterSettings_t3314986516 * get_settings_0() const { return ___settings_0; }
	inline XmlWriterSettings_t3314986516 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(XmlWriterSettings_t3314986516 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___settings_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_T127905479_H
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
#ifndef XMLREADER_T3121518892_H
#define XMLREADER_T3121518892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t3121518892  : public RuntimeObject
{
public:
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t1809665003 * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t2186285234 * ___settings_2;

public:
	inline static int32_t get_offset_of_readStringBuffer_0() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___readStringBuffer_0)); }
	inline StringBuilder_t * get_readStringBuffer_0() const { return ___readStringBuffer_0; }
	inline StringBuilder_t ** get_address_of_readStringBuffer_0() { return &___readStringBuffer_0; }
	inline void set_readStringBuffer_0(StringBuilder_t * value)
	{
		___readStringBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___readStringBuffer_0), value);
	}

	inline static int32_t get_offset_of_binary_1() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___binary_1)); }
	inline XmlReaderBinarySupport_t1809665003 * get_binary_1() const { return ___binary_1; }
	inline XmlReaderBinarySupport_t1809665003 ** get_address_of_binary_1() { return &___binary_1; }
	inline void set_binary_1(XmlReaderBinarySupport_t1809665003 * value)
	{
		___binary_1 = value;
		Il2CppCodeGenWriteBarrier((&___binary_1), value);
	}

	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___settings_2)); }
	inline XmlReaderSettings_t2186285234 * get_settings_2() const { return ___settings_2; }
	inline XmlReaderSettings_t2186285234 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(XmlReaderSettings_t2186285234 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier((&___settings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_T3121518892_H
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
#ifndef DICTIONARY_2_T2736202052_H
#define DICTIONARY_2_T2736202052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t2736202052  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2736202052_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3530625384 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3530625384 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3530625384 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3530625384 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2736202052_H
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
#ifndef STRINGUTIL_T564231417_H
#define STRINGUTIL_T564231417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/StringUtil
struct  StringUtil_t564231417  : public RuntimeObject
{
public:

public:
};

struct StringUtil_t564231417_StaticFields
{
public:
	// System.Globalization.CultureInfo System.Xml.XmlTextWriter/StringUtil::cul
	CultureInfo_t4157843068 * ___cul_0;
	// System.Globalization.CompareInfo System.Xml.XmlTextWriter/StringUtil::cmp
	CompareInfo_t1092934962 * ___cmp_1;

public:
	inline static int32_t get_offset_of_cul_0() { return static_cast<int32_t>(offsetof(StringUtil_t564231417_StaticFields, ___cul_0)); }
	inline CultureInfo_t4157843068 * get_cul_0() const { return ___cul_0; }
	inline CultureInfo_t4157843068 ** get_address_of_cul_0() { return &___cul_0; }
	inline void set_cul_0(CultureInfo_t4157843068 * value)
	{
		___cul_0 = value;
		Il2CppCodeGenWriteBarrier((&___cul_0), value);
	}

	inline static int32_t get_offset_of_cmp_1() { return static_cast<int32_t>(offsetof(StringUtil_t564231417_StaticFields, ___cmp_1)); }
	inline CompareInfo_t1092934962 * get_cmp_1() const { return ___cmp_1; }
	inline CompareInfo_t1092934962 ** get_address_of_cmp_1() { return &___cmp_1; }
	inline void set_cmp_1(CompareInfo_t1092934962 * value)
	{
		___cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&___cmp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGUTIL_T564231417_H
#ifndef XMLRESOLVER_T626023767_H
#define XMLRESOLVER_T626023767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_t626023767  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_T626023767_H
#ifndef COMPAREINFO_T1092934962_H
#define COMPAREINFO_T1092934962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t1092934962  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_3;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_4;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t2877834729 * ___collator_5;

public:
	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___culture_1)); }
	inline int32_t get_culture_1() const { return ___culture_1; }
	inline int32_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(int32_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_icu_name_2() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___icu_name_2)); }
	inline String_t* get_icu_name_2() const { return ___icu_name_2; }
	inline String_t** get_address_of_icu_name_2() { return &___icu_name_2; }
	inline void set_icu_name_2(String_t* value)
	{
		___icu_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_2), value);
	}

	inline static int32_t get_offset_of_win32LCID_3() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___win32LCID_3)); }
	inline int32_t get_win32LCID_3() const { return ___win32LCID_3; }
	inline int32_t* get_address_of_win32LCID_3() { return &___win32LCID_3; }
	inline void set_win32LCID_3(int32_t value)
	{
		___win32LCID_3 = value;
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_collator_5() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962, ___collator_5)); }
	inline SimpleCollator_t2877834729 * get_collator_5() const { return ___collator_5; }
	inline SimpleCollator_t2877834729 ** get_address_of_collator_5() { return &___collator_5; }
	inline void set_collator_5(SimpleCollator_t2877834729 * value)
	{
		___collator_5 = value;
		Il2CppCodeGenWriteBarrier((&___collator_5), value);
	}
};

struct CompareInfo_t1092934962_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t1853889766 * ___collators_6;
	// System.Object System.Globalization.CompareInfo::monitor
	RuntimeObject * ___monitor_7;

public:
	inline static int32_t get_offset_of_useManagedCollation_0() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___useManagedCollation_0)); }
	inline bool get_useManagedCollation_0() const { return ___useManagedCollation_0; }
	inline bool* get_address_of_useManagedCollation_0() { return &___useManagedCollation_0; }
	inline void set_useManagedCollation_0(bool value)
	{
		___useManagedCollation_0 = value;
	}

	inline static int32_t get_offset_of_collators_6() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___collators_6)); }
	inline Hashtable_t1853889766 * get_collators_6() const { return ___collators_6; }
	inline Hashtable_t1853889766 ** get_address_of_collators_6() { return &___collators_6; }
	inline void set_collators_6(Hashtable_t1853889766 * value)
	{
		___collators_6 = value;
		Il2CppCodeGenWriteBarrier((&___collators_6), value);
	}

	inline static int32_t get_offset_of_monitor_7() { return static_cast<int32_t>(offsetof(CompareInfo_t1092934962_StaticFields, ___monitor_7)); }
	inline RuntimeObject * get_monitor_7() const { return ___monitor_7; }
	inline RuntimeObject ** get_address_of_monitor_7() { return &___monitor_7; }
	inline void set_monitor_7(RuntimeObject * value)
	{
		___monitor_7 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T1092934962_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
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
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
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
#ifndef STACK_T2329662280_H
#define STACK_T2329662280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2329662280  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t2843939325* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___contents_0)); }
	inline ObjectU5BU5D_t2843939325* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t2843939325* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ___modCount_4)); }
	inline int32_t get_modCount_4() const { return ___modCount_4; }
	inline int32_t* get_address_of_modCount_4() { return &___modCount_4; }
	inline void set_modCount_4(int32_t value)
	{
		___modCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2329662280_H
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
#ifndef XMLLINKEDNODE_T1437094927_H
#define XMLLINKEDNODE_T1437094927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t1437094927  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t1437094927 * ___nextSibling_5;

public:
	inline static int32_t get_offset_of_nextSibling_5() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t1437094927, ___nextSibling_5)); }
	inline XmlLinkedNode_t1437094927 * get_nextSibling_5() const { return ___nextSibling_5; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_nextSibling_5() { return &___nextSibling_5; }
	inline void set_nextSibling_5(XmlLinkedNode_t1437094927 * value)
	{
		___nextSibling_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T1437094927_H
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
#ifndef XMLDOCUMENT_T2837193595_H
#define XMLDOCUMENT_T2837193595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t2837193595  : public XmlNode_t3767805227
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t71772148 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t254178875 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t626023767 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1853889766 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t2890546907 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_15;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_16;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_17;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanged_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanging_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserted_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserting_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoved_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoving_23;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameTable_8)); }
	inline XmlNameTable_t71772148 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t71772148 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_9), value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___implementation_10)); }
	inline XmlImplementation_t254178875 * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t254178875 ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t254178875 * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_10), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___resolver_12)); }
	inline XmlResolver_t626023767 * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_t626023767 * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_12), value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___idTable_13)); }
	inline Hashtable_t1853889766 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_t1853889766 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_t1853889766 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_13), value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameCache_14)); }
	inline XmlNameEntryCache_t2890546907 * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t2890546907 ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t2890546907 * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_14), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_15), value);
	}

	inline static int32_t get_offset_of_schemaInfo_16() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemaInfo_16)); }
	inline RuntimeObject* get_schemaInfo_16() const { return ___schemaInfo_16; }
	inline RuntimeObject** get_address_of_schemaInfo_16() { return &___schemaInfo_16; }
	inline void set_schemaInfo_16(RuntimeObject* value)
	{
		___schemaInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_16), value);
	}

	inline static int32_t get_offset_of_loadMode_17() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___loadMode_17)); }
	inline bool get_loadMode_17() const { return ___loadMode_17; }
	inline bool* get_address_of_loadMode_17() { return &___loadMode_17; }
	inline void set_loadMode_17(bool value)
	{
		___loadMode_17 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_18() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanged_18)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanged_18() const { return ___NodeChanged_18; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanged_18() { return &___NodeChanged_18; }
	inline void set_NodeChanged_18(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanged_18 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_18), value);
	}

	inline static int32_t get_offset_of_NodeChanging_19() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanging_19)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanging_19() const { return ___NodeChanging_19; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanging_19() { return &___NodeChanging_19; }
	inline void set_NodeChanging_19(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanging_19 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_19), value);
	}

	inline static int32_t get_offset_of_NodeInserted_20() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserted_20)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserted_20() const { return ___NodeInserted_20; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserted_20() { return &___NodeInserted_20; }
	inline void set_NodeInserted_20(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserted_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_20), value);
	}

	inline static int32_t get_offset_of_NodeInserting_21() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserting_21)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserting_21() const { return ___NodeInserting_21; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserting_21() { return &___NodeInserting_21; }
	inline void set_NodeInserting_21(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserting_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_21), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_22() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoved_22)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoved_22() const { return ___NodeRemoved_22; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoved_22() { return &___NodeRemoved_22; }
	inline void set_NodeRemoved_22(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoved_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_22), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_23() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoving_23)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoving_23() const { return ___NodeRemoving_23; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoving_23() { return &___NodeRemoving_23; }
	inline void set_NodeRemoving_23(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoving_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_23), value);
	}
};

struct XmlDocument_t2837193595_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3940880105* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_t3940880105* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_t3940880105* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T2837193595_H
#ifndef U24ARRAYTYPEU248_T3244137464_H
#define U24ARRAYTYPEU248_T3244137464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3244137464 
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
		uint8_t U24ArrayTypeU248_t3244137464__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3244137464_H
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
#ifndef U24ARRAYTYPEU24256_T1929481985_H
#define U24ARRAYTYPEU24256_T1929481985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1929481985 
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
		uint8_t U24ArrayTypeU24256_t1929481985__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1929481985_H
#ifndef XMLURLRESOLVER_T817895037_H
#define XMLURLRESOLVER_T817895037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_t817895037  : public XmlResolver_t626023767
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::credential
	RuntimeObject* ___credential_0;

public:
	inline static int32_t get_offset_of_credential_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037, ___credential_0)); }
	inline RuntimeObject* get_credential_0() const { return ___credential_0; }
	inline RuntimeObject** get_address_of_credential_0() { return &___credential_0; }
	inline void set_credential_0(RuntimeObject* value)
	{
		___credential_0 = value;
		Il2CppCodeGenWriteBarrier((&___credential_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLURLRESOLVER_T817895037_H
#ifndef U24ARRAYTYPEU241280_T4290130235_H
#define U24ARRAYTYPEU241280_T4290130235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1280
struct  U24ArrayTypeU241280_t4290130235 
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
		uint8_t U24ArrayTypeU241280_t4290130235__padding[1280];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241280_T4290130235_H
#ifndef WEBRESPONSE_T229922639_H
#define WEBRESPONSE_T229922639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t229922639  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T229922639_H
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
#ifndef U24ARRAYTYPEU2412_T2490092599_H
#define U24ARRAYTYPEU2412_T2490092599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2490092599 
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
		uint8_t U24ArrayTypeU2412_t2490092599__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2490092599_H
#ifndef NAMETABLE_T3178203267_H
#define NAMETABLE_T3178203267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NameTable
struct  NameTable_t3178203267  : public XmlNameTable_t71772148
{
public:
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_0;
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::buckets
	EntryU5BU5D_t491982174* ___buckets_1;
	// System.Int32 System.Xml.NameTable::size
	int32_t ___size_2;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_buckets_1() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___buckets_1)); }
	inline EntryU5BU5D_t491982174* get_buckets_1() const { return ___buckets_1; }
	inline EntryU5BU5D_t491982174** get_address_of_buckets_1() { return &___buckets_1; }
	inline void set_buckets_1(EntryU5BU5D_t491982174* value)
	{
		___buckets_1 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_1), value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(NameTable_t3178203267, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMETABLE_T3178203267_H
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
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
#ifndef STREAMWRITER_T1266378904_H
#define STREAMWRITER_T1266378904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t1266378904  : public TextWriter_t3478189236
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t1523322056 * ___internalEncoding_3;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t1273022909 * ___internalStream_4;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_5;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t4116647657* ___byte_buf_6;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_7;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3528271667* ___decode_buf_8;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_9;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_10;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_11;

public:
	inline static int32_t get_offset_of_internalEncoding_3() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalEncoding_3)); }
	inline Encoding_t1523322056 * get_internalEncoding_3() const { return ___internalEncoding_3; }
	inline Encoding_t1523322056 ** get_address_of_internalEncoding_3() { return &___internalEncoding_3; }
	inline void set_internalEncoding_3(Encoding_t1523322056 * value)
	{
		___internalEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_3), value);
	}

	inline static int32_t get_offset_of_internalStream_4() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___internalStream_4)); }
	inline Stream_t1273022909 * get_internalStream_4() const { return ___internalStream_4; }
	inline Stream_t1273022909 ** get_address_of_internalStream_4() { return &___internalStream_4; }
	inline void set_internalStream_4(Stream_t1273022909 * value)
	{
		___internalStream_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_4), value);
	}

	inline static int32_t get_offset_of_iflush_5() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___iflush_5)); }
	inline bool get_iflush_5() const { return ___iflush_5; }
	inline bool* get_address_of_iflush_5() { return &___iflush_5; }
	inline void set_iflush_5(bool value)
	{
		___iflush_5 = value;
	}

	inline static int32_t get_offset_of_byte_buf_6() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_buf_6)); }
	inline ByteU5BU5D_t4116647657* get_byte_buf_6() const { return ___byte_buf_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_byte_buf_6() { return &___byte_buf_6; }
	inline void set_byte_buf_6(ByteU5BU5D_t4116647657* value)
	{
		___byte_buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_6), value);
	}

	inline static int32_t get_offset_of_byte_pos_7() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___byte_pos_7)); }
	inline int32_t get_byte_pos_7() const { return ___byte_pos_7; }
	inline int32_t* get_address_of_byte_pos_7() { return &___byte_pos_7; }
	inline void set_byte_pos_7(int32_t value)
	{
		___byte_pos_7 = value;
	}

	inline static int32_t get_offset_of_decode_buf_8() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_buf_8)); }
	inline CharU5BU5D_t3528271667* get_decode_buf_8() const { return ___decode_buf_8; }
	inline CharU5BU5D_t3528271667** get_address_of_decode_buf_8() { return &___decode_buf_8; }
	inline void set_decode_buf_8(CharU5BU5D_t3528271667* value)
	{
		___decode_buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_8), value);
	}

	inline static int32_t get_offset_of_decode_pos_9() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___decode_pos_9)); }
	inline int32_t get_decode_pos_9() const { return ___decode_pos_9; }
	inline int32_t* get_address_of_decode_pos_9() { return &___decode_pos_9; }
	inline void set_decode_pos_9(int32_t value)
	{
		___decode_pos_9 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_10() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___DisposedAlready_10)); }
	inline bool get_DisposedAlready_10() const { return ___DisposedAlready_10; }
	inline bool* get_address_of_DisposedAlready_10() { return &___DisposedAlready_10; }
	inline void set_DisposedAlready_10(bool value)
	{
		___DisposedAlready_10 = value;
	}

	inline static int32_t get_offset_of_preamble_done_11() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904, ___preamble_done_11)); }
	inline bool get_preamble_done_11() const { return ___preamble_done_11; }
	inline bool* get_address_of_preamble_done_11() { return &___preamble_done_11; }
	inline void set_preamble_done_11(bool value)
	{
		___preamble_done_11 = value;
	}
};

struct StreamWriter_t1266378904_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t1266378904 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamWriter_t1266378904_StaticFields, ___Null_12)); }
	inline StreamWriter_t1266378904 * get_Null_12() const { return ___Null_12; }
	inline StreamWriter_t1266378904 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamWriter_t1266378904 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T1266378904_H
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
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
#ifndef AUTHENTICATIONLEVEL_T1236753641_H
#define AUTHENTICATIONLEVEL_T1236753641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1236753641 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1236753641, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T1236753641_H
#ifndef XMLEXCEPTION_T1761730631_H
#define XMLEXCEPTION_T1761730631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlException
struct  XmlException_t1761730631  : public SystemException_t176217640
{
public:
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_11;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_12;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_13;
	// System.String System.Xml.XmlException::res
	String_t* ___res_14;
	// System.String[] System.Xml.XmlException::messages
	StringU5BU5D_t1281789340* ___messages_15;

public:
	inline static int32_t get_offset_of_lineNumber_11() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___lineNumber_11)); }
	inline int32_t get_lineNumber_11() const { return ___lineNumber_11; }
	inline int32_t* get_address_of_lineNumber_11() { return &___lineNumber_11; }
	inline void set_lineNumber_11(int32_t value)
	{
		___lineNumber_11 = value;
	}

	inline static int32_t get_offset_of_linePosition_12() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___linePosition_12)); }
	inline int32_t get_linePosition_12() const { return ___linePosition_12; }
	inline int32_t* get_address_of_linePosition_12() { return &___linePosition_12; }
	inline void set_linePosition_12(int32_t value)
	{
		___linePosition_12 = value;
	}

	inline static int32_t get_offset_of_sourceUri_13() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___sourceUri_13)); }
	inline String_t* get_sourceUri_13() const { return ___sourceUri_13; }
	inline String_t** get_address_of_sourceUri_13() { return &___sourceUri_13; }
	inline void set_sourceUri_13(String_t* value)
	{
		___sourceUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_13), value);
	}

	inline static int32_t get_offset_of_res_14() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___res_14)); }
	inline String_t* get_res_14() const { return ___res_14; }
	inline String_t** get_address_of_res_14() { return &___res_14; }
	inline void set_res_14(String_t* value)
	{
		___res_14 = value;
		Il2CppCodeGenWriteBarrier((&___res_14), value);
	}

	inline static int32_t get_offset_of_messages_15() { return static_cast<int32_t>(offsetof(XmlException_t1761730631, ___messages_15)); }
	inline StringU5BU5D_t1281789340* get_messages_15() const { return ___messages_15; }
	inline StringU5BU5D_t1281789340** get_address_of_messages_15() { return &___messages_15; }
	inline void set_messages_15(StringU5BU5D_t1281789340* value)
	{
		___messages_15 = value;
		Il2CppCodeGenWriteBarrier((&___messages_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLEXCEPTION_T1761730631_H
#ifndef XMLCHARACTERDATA_T1167807131_H
#define XMLCHARACTERDATA_T1167807131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharacterData
struct  XmlCharacterData_t1167807131  : public XmlLinkedNode_t1437094927
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_6;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(XmlCharacterData_t1167807131, ___data_6)); }
	inline String_t* get_data_6() const { return ___data_6; }
	inline String_t** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(String_t* value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((&___data_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCHARACTERDATA_T1167807131_H
#ifndef XMLOUTPUTMETHOD_T2185361861_H
#define XMLOUTPUTMETHOD_T2185361861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlOutputMethod
struct  XmlOutputMethod_t2185361861 
{
public:
	// System.Int32 System.Xml.XmlOutputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlOutputMethod_t2185361861, ___value___1)); }
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
#endif // XMLOUTPUTMETHOD_T2185361861_H
#ifndef NEWLINEHANDLING_T850339274_H
#define NEWLINEHANDLING_T850339274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NewLineHandling
struct  NewLineHandling_t850339274 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewLineHandling_t850339274, ___value___1)); }
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
#endif // NEWLINEHANDLING_T850339274_H
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
#ifndef CONFORMANCELEVEL_T3899847875_H
#define CONFORMANCELEVEL_T3899847875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_t3899847875 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConformanceLevel_t3899847875, ___value___1)); }
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
#endif // CONFORMANCELEVEL_T3899847875_H
#ifndef READSTATE_T944984020_H
#define READSTATE_T944984020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadState
struct  ReadState_t944984020 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReadState_t944984020, ___value___1)); }
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
#endif // READSTATE_T944984020_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D23_0;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D24_1;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D26_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24256_t1929481985  ___U24U24fieldU2D27_3;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-28
	U24ArrayTypeU24256_t1929481985  ___U24U24fieldU2D28_4;
	// <PrivateImplementationDetails>/$ArrayType$1280 <PrivateImplementationDetails>::$$field-29
	U24ArrayTypeU241280_t4290130235  ___U24U24fieldU2D29_5;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU2412_t2490092599  ___U24U24fieldU2D43_6;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU2412_t2490092599  ___U24U24fieldU2D44_7;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D23_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D23_0)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D23_0() const { return ___U24U24fieldU2D23_0; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D23_0() { return &___U24U24fieldU2D23_0; }
	inline void set_U24U24fieldU2D23_0(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D23_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D24_1)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D24_1() const { return ___U24U24fieldU2D24_1; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D24_1() { return &___U24U24fieldU2D24_1; }
	inline void set_U24U24fieldU2D24_1(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D24_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D26_2)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D26_2() const { return ___U24U24fieldU2D26_2; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D26_2() { return &___U24U24fieldU2D26_2; }
	inline void set_U24U24fieldU2D26_2(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D26_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D27_3)); }
	inline U24ArrayTypeU24256_t1929481985  get_U24U24fieldU2D27_3() const { return ___U24U24fieldU2D27_3; }
	inline U24ArrayTypeU24256_t1929481985 * get_address_of_U24U24fieldU2D27_3() { return &___U24U24fieldU2D27_3; }
	inline void set_U24U24fieldU2D27_3(U24ArrayTypeU24256_t1929481985  value)
	{
		___U24U24fieldU2D27_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D28_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D28_4)); }
	inline U24ArrayTypeU24256_t1929481985  get_U24U24fieldU2D28_4() const { return ___U24U24fieldU2D28_4; }
	inline U24ArrayTypeU24256_t1929481985 * get_address_of_U24U24fieldU2D28_4() { return &___U24U24fieldU2D28_4; }
	inline void set_U24U24fieldU2D28_4(U24ArrayTypeU24256_t1929481985  value)
	{
		___U24U24fieldU2D28_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D29_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D29_5)); }
	inline U24ArrayTypeU241280_t4290130235  get_U24U24fieldU2D29_5() const { return ___U24U24fieldU2D29_5; }
	inline U24ArrayTypeU241280_t4290130235 * get_address_of_U24U24fieldU2D29_5() { return &___U24U24fieldU2D29_5; }
	inline void set_U24U24fieldU2D29_5(U24ArrayTypeU241280_t4290130235  value)
	{
		___U24U24fieldU2D29_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D43_6)); }
	inline U24ArrayTypeU2412_t2490092599  get_U24U24fieldU2D43_6() const { return ___U24U24fieldU2D43_6; }
	inline U24ArrayTypeU2412_t2490092599 * get_address_of_U24U24fieldU2D43_6() { return &___U24U24fieldU2D43_6; }
	inline void set_U24U24fieldU2D43_6(U24ArrayTypeU2412_t2490092599  value)
	{
		___U24U24fieldU2D43_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24U24fieldU2D44_7)); }
	inline U24ArrayTypeU2412_t2490092599  get_U24U24fieldU2D44_7() const { return ___U24U24fieldU2D44_7; }
	inline U24ArrayTypeU2412_t2490092599 * get_address_of_U24U24fieldU2D44_7() { return &___U24U24fieldU2D44_7; }
	inline void set_U24U24fieldU2D44_7(U24ArrayTypeU2412_t2490092599  value)
	{
		___U24U24fieldU2D44_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
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
#ifndef FORMATTING_T1232942836_H
#define FORMATTING_T1232942836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Formatting
struct  Formatting_t1232942836 
{
public:
	// System.Int32 System.Xml.Formatting::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Formatting_t1232942836, ___value___1)); }
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
#endif // FORMATTING_T1232942836_H
#ifndef XMLDECLSTATE_T1683299469_H
#define XMLDECLSTATE_T1683299469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlDeclState
struct  XmlDeclState_t1683299469 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/XmlDeclState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDeclState_t1683299469, ___value___1)); }
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
#endif // XMLDECLSTATE_T1683299469_H
#ifndef XMLNODETYPE_T1672767151_H
#define XMLNODETYPE_T1672767151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_t1672767151 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeType_t1672767151, ___value___1)); }
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
#endif // XMLNODETYPE_T1672767151_H
#ifndef WRITESTATE_T3983380671_H
#define WRITESTATE_T3983380671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.WriteState
struct  WriteState_t3983380671 
{
public:
	// System.Int32 System.Xml.WriteState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WriteState_t3983380671, ___value___1)); }
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
#endif // WRITESTATE_T3983380671_H
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
#ifndef XMLTOKENIZEDTYPE_T3348692225_H
#define XMLTOKENIZEDTYPE_T3348692225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTokenizedType
struct  XmlTokenizedType_t3348692225 
{
public:
	// System.Int32 System.Xml.XmlTokenizedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlTokenizedType_t3348692225, ___value___1)); }
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
#endif // XMLTOKENIZEDTYPE_T3348692225_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef FILESHARE_T3553318550_H
#define FILESHARE_T3553318550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t3553318550 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileShare_t3553318550, ___value___1)); }
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
#endif // FILESHARE_T3553318550_H
#ifndef XMLSPACE_T3324193251_H
#define XMLSPACE_T3324193251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSpace
struct  XmlSpace_t3324193251 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSpace_t3324193251, ___value___1)); }
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
#endif // XMLSPACE_T3324193251_H
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
#ifndef FILEMODE_T1183438340_H
#define FILEMODE_T1183438340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t1183438340 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t1183438340, ___value___1)); }
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
#endif // FILEMODE_T1183438340_H
#ifndef NAMESPACEHANDLING_T4087553436_H
#define NAMESPACEHANDLING_T4087553436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NamespaceHandling
struct  NamespaceHandling_t4087553436 
{
public:
	// System.Int32 System.Xml.NamespaceHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NamespaceHandling_t4087553436, ___value___1)); }
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
#endif // NAMESPACEHANDLING_T4087553436_H
#ifndef XMLTEXTWRITER_T2114213153_H
#define XMLTEXTWRITER_T2114213153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter
struct  XmlTextWriter_t2114213153  : public XmlWriter_t127905479
{
public:
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_t1273022909 * ___base_stream_4;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t3478189236 * ___source_5;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t3478189236 * ___writer_6;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t802263757 * ___preserver_7;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name_8;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns_9;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment_10;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream_11;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding_12;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_13;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state_14;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity_15;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling_16;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity_17;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state_18;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state_19;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t418790500 * ___nsmanager_20;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count_21;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_t431163322* ___elements_22;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t2329662280 * ___new_local_namespaces_23;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t2718874744 * ___explicit_nsdecls_24;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling_25;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent_26;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count_27;
	// System.Char System.Xml.XmlTextWriter::indent_char
	Il2CppChar ___indent_char_28;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string_29;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline_30;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes_31;
	// System.Char System.Xml.XmlTextWriter::quote_char
	Il2CppChar ___quote_char_32;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2_33;

public:
	inline static int32_t get_offset_of_base_stream_4() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___base_stream_4)); }
	inline Stream_t1273022909 * get_base_stream_4() const { return ___base_stream_4; }
	inline Stream_t1273022909 ** get_address_of_base_stream_4() { return &___base_stream_4; }
	inline void set_base_stream_4(Stream_t1273022909 * value)
	{
		___base_stream_4 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_4), value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___source_5)); }
	inline TextWriter_t3478189236 * get_source_5() const { return ___source_5; }
	inline TextWriter_t3478189236 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(TextWriter_t3478189236 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier((&___source_5), value);
	}

	inline static int32_t get_offset_of_writer_6() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___writer_6)); }
	inline TextWriter_t3478189236 * get_writer_6() const { return ___writer_6; }
	inline TextWriter_t3478189236 ** get_address_of_writer_6() { return &___writer_6; }
	inline void set_writer_6(TextWriter_t3478189236 * value)
	{
		___writer_6 = value;
		Il2CppCodeGenWriteBarrier((&___writer_6), value);
	}

	inline static int32_t get_offset_of_preserver_7() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___preserver_7)); }
	inline StringWriter_t802263757 * get_preserver_7() const { return ___preserver_7; }
	inline StringWriter_t802263757 ** get_address_of_preserver_7() { return &___preserver_7; }
	inline void set_preserver_7(StringWriter_t802263757 * value)
	{
		___preserver_7 = value;
		Il2CppCodeGenWriteBarrier((&___preserver_7), value);
	}

	inline static int32_t get_offset_of_preserved_name_8() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___preserved_name_8)); }
	inline String_t* get_preserved_name_8() const { return ___preserved_name_8; }
	inline String_t** get_address_of_preserved_name_8() { return &___preserved_name_8; }
	inline void set_preserved_name_8(String_t* value)
	{
		___preserved_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___preserved_name_8), value);
	}

	inline static int32_t get_offset_of_is_preserved_xmlns_9() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___is_preserved_xmlns_9)); }
	inline bool get_is_preserved_xmlns_9() const { return ___is_preserved_xmlns_9; }
	inline bool* get_address_of_is_preserved_xmlns_9() { return &___is_preserved_xmlns_9; }
	inline void set_is_preserved_xmlns_9(bool value)
	{
		___is_preserved_xmlns_9 = value;
	}

	inline static int32_t get_offset_of_allow_doc_fragment_10() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___allow_doc_fragment_10)); }
	inline bool get_allow_doc_fragment_10() const { return ___allow_doc_fragment_10; }
	inline bool* get_address_of_allow_doc_fragment_10() { return &___allow_doc_fragment_10; }
	inline void set_allow_doc_fragment_10(bool value)
	{
		___allow_doc_fragment_10 = value;
	}

	inline static int32_t get_offset_of_close_output_stream_11() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___close_output_stream_11)); }
	inline bool get_close_output_stream_11() const { return ___close_output_stream_11; }
	inline bool* get_address_of_close_output_stream_11() { return &___close_output_stream_11; }
	inline void set_close_output_stream_11(bool value)
	{
		___close_output_stream_11 = value;
	}

	inline static int32_t get_offset_of_ignore_encoding_12() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___ignore_encoding_12)); }
	inline bool get_ignore_encoding_12() const { return ___ignore_encoding_12; }
	inline bool* get_address_of_ignore_encoding_12() { return &___ignore_encoding_12; }
	inline void set_ignore_encoding_12(bool value)
	{
		___ignore_encoding_12 = value;
	}

	inline static int32_t get_offset_of_namespaces_13() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___namespaces_13)); }
	inline bool get_namespaces_13() const { return ___namespaces_13; }
	inline bool* get_address_of_namespaces_13() { return &___namespaces_13; }
	inline void set_namespaces_13(bool value)
	{
		___namespaces_13 = value;
	}

	inline static int32_t get_offset_of_xmldecl_state_14() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___xmldecl_state_14)); }
	inline int32_t get_xmldecl_state_14() const { return ___xmldecl_state_14; }
	inline int32_t* get_address_of_xmldecl_state_14() { return &___xmldecl_state_14; }
	inline void set_xmldecl_state_14(int32_t value)
	{
		___xmldecl_state_14 = value;
	}

	inline static int32_t get_offset_of_check_character_validity_15() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___check_character_validity_15)); }
	inline bool get_check_character_validity_15() const { return ___check_character_validity_15; }
	inline bool* get_address_of_check_character_validity_15() { return &___check_character_validity_15; }
	inline void set_check_character_validity_15(bool value)
	{
		___check_character_validity_15 = value;
	}

	inline static int32_t get_offset_of_newline_handling_16() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___newline_handling_16)); }
	inline int32_t get_newline_handling_16() const { return ___newline_handling_16; }
	inline int32_t* get_address_of_newline_handling_16() { return &___newline_handling_16; }
	inline void set_newline_handling_16(int32_t value)
	{
		___newline_handling_16 = value;
	}

	inline static int32_t get_offset_of_is_document_entity_17() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___is_document_entity_17)); }
	inline bool get_is_document_entity_17() const { return ___is_document_entity_17; }
	inline bool* get_address_of_is_document_entity_17() { return &___is_document_entity_17; }
	inline void set_is_document_entity_17(bool value)
	{
		___is_document_entity_17 = value;
	}

	inline static int32_t get_offset_of_state_18() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___state_18)); }
	inline int32_t get_state_18() const { return ___state_18; }
	inline int32_t* get_address_of_state_18() { return &___state_18; }
	inline void set_state_18(int32_t value)
	{
		___state_18 = value;
	}

	inline static int32_t get_offset_of_node_state_19() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___node_state_19)); }
	inline int32_t get_node_state_19() const { return ___node_state_19; }
	inline int32_t* get_address_of_node_state_19() { return &___node_state_19; }
	inline void set_node_state_19(int32_t value)
	{
		___node_state_19 = value;
	}

	inline static int32_t get_offset_of_nsmanager_20() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___nsmanager_20)); }
	inline XmlNamespaceManager_t418790500 * get_nsmanager_20() const { return ___nsmanager_20; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsmanager_20() { return &___nsmanager_20; }
	inline void set_nsmanager_20(XmlNamespaceManager_t418790500 * value)
	{
		___nsmanager_20 = value;
		Il2CppCodeGenWriteBarrier((&___nsmanager_20), value);
	}

	inline static int32_t get_offset_of_open_count_21() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___open_count_21)); }
	inline int32_t get_open_count_21() const { return ___open_count_21; }
	inline int32_t* get_address_of_open_count_21() { return &___open_count_21; }
	inline void set_open_count_21(int32_t value)
	{
		___open_count_21 = value;
	}

	inline static int32_t get_offset_of_elements_22() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___elements_22)); }
	inline XmlNodeInfoU5BU5D_t431163322* get_elements_22() const { return ___elements_22; }
	inline XmlNodeInfoU5BU5D_t431163322** get_address_of_elements_22() { return &___elements_22; }
	inline void set_elements_22(XmlNodeInfoU5BU5D_t431163322* value)
	{
		___elements_22 = value;
		Il2CppCodeGenWriteBarrier((&___elements_22), value);
	}

	inline static int32_t get_offset_of_new_local_namespaces_23() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___new_local_namespaces_23)); }
	inline Stack_t2329662280 * get_new_local_namespaces_23() const { return ___new_local_namespaces_23; }
	inline Stack_t2329662280 ** get_address_of_new_local_namespaces_23() { return &___new_local_namespaces_23; }
	inline void set_new_local_namespaces_23(Stack_t2329662280 * value)
	{
		___new_local_namespaces_23 = value;
		Il2CppCodeGenWriteBarrier((&___new_local_namespaces_23), value);
	}

	inline static int32_t get_offset_of_explicit_nsdecls_24() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___explicit_nsdecls_24)); }
	inline ArrayList_t2718874744 * get_explicit_nsdecls_24() const { return ___explicit_nsdecls_24; }
	inline ArrayList_t2718874744 ** get_address_of_explicit_nsdecls_24() { return &___explicit_nsdecls_24; }
	inline void set_explicit_nsdecls_24(ArrayList_t2718874744 * value)
	{
		___explicit_nsdecls_24 = value;
		Il2CppCodeGenWriteBarrier((&___explicit_nsdecls_24), value);
	}

	inline static int32_t get_offset_of_namespace_handling_25() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___namespace_handling_25)); }
	inline int32_t get_namespace_handling_25() const { return ___namespace_handling_25; }
	inline int32_t* get_address_of_namespace_handling_25() { return &___namespace_handling_25; }
	inline void set_namespace_handling_25(int32_t value)
	{
		___namespace_handling_25 = value;
	}

	inline static int32_t get_offset_of_indent_26() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_26)); }
	inline bool get_indent_26() const { return ___indent_26; }
	inline bool* get_address_of_indent_26() { return &___indent_26; }
	inline void set_indent_26(bool value)
	{
		___indent_26 = value;
	}

	inline static int32_t get_offset_of_indent_count_27() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_count_27)); }
	inline int32_t get_indent_count_27() const { return ___indent_count_27; }
	inline int32_t* get_address_of_indent_count_27() { return &___indent_count_27; }
	inline void set_indent_count_27(int32_t value)
	{
		___indent_count_27 = value;
	}

	inline static int32_t get_offset_of_indent_char_28() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_char_28)); }
	inline Il2CppChar get_indent_char_28() const { return ___indent_char_28; }
	inline Il2CppChar* get_address_of_indent_char_28() { return &___indent_char_28; }
	inline void set_indent_char_28(Il2CppChar value)
	{
		___indent_char_28 = value;
	}

	inline static int32_t get_offset_of_indent_string_29() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_string_29)); }
	inline String_t* get_indent_string_29() const { return ___indent_string_29; }
	inline String_t** get_address_of_indent_string_29() { return &___indent_string_29; }
	inline void set_indent_string_29(String_t* value)
	{
		___indent_string_29 = value;
		Il2CppCodeGenWriteBarrier((&___indent_string_29), value);
	}

	inline static int32_t get_offset_of_newline_30() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___newline_30)); }
	inline String_t* get_newline_30() const { return ___newline_30; }
	inline String_t** get_address_of_newline_30() { return &___newline_30; }
	inline void set_newline_30(String_t* value)
	{
		___newline_30 = value;
		Il2CppCodeGenWriteBarrier((&___newline_30), value);
	}

	inline static int32_t get_offset_of_indent_attributes_31() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___indent_attributes_31)); }
	inline bool get_indent_attributes_31() const { return ___indent_attributes_31; }
	inline bool* get_address_of_indent_attributes_31() { return &___indent_attributes_31; }
	inline void set_indent_attributes_31(bool value)
	{
		___indent_attributes_31 = value;
	}

	inline static int32_t get_offset_of_quote_char_32() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___quote_char_32)); }
	inline Il2CppChar get_quote_char_32() const { return ___quote_char_32; }
	inline Il2CppChar* get_address_of_quote_char_32() { return &___quote_char_32; }
	inline void set_quote_char_32(Il2CppChar value)
	{
		___quote_char_32 = value;
	}

	inline static int32_t get_offset_of_v2_33() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153, ___v2_33)); }
	inline bool get_v2_33() const { return ___v2_33; }
	inline bool* get_address_of_v2_33() { return &___v2_33; }
	inline void set_v2_33(bool value)
	{
		___v2_33 = value;
	}
};

struct XmlTextWriter_t2114213153_StaticFields
{
public:
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t1523322056 * ___unmarked_utf8encoding_1;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t3528271667* ___escaped_text_chars_2;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t3528271667* ___escaped_attr_chars_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map53
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map53_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map54
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map54_35;

public:
	inline static int32_t get_offset_of_unmarked_utf8encoding_1() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___unmarked_utf8encoding_1)); }
	inline Encoding_t1523322056 * get_unmarked_utf8encoding_1() const { return ___unmarked_utf8encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unmarked_utf8encoding_1() { return &___unmarked_utf8encoding_1; }
	inline void set_unmarked_utf8encoding_1(Encoding_t1523322056 * value)
	{
		___unmarked_utf8encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unmarked_utf8encoding_1), value);
	}

	inline static int32_t get_offset_of_escaped_text_chars_2() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___escaped_text_chars_2)); }
	inline CharU5BU5D_t3528271667* get_escaped_text_chars_2() const { return ___escaped_text_chars_2; }
	inline CharU5BU5D_t3528271667** get_address_of_escaped_text_chars_2() { return &___escaped_text_chars_2; }
	inline void set_escaped_text_chars_2(CharU5BU5D_t3528271667* value)
	{
		___escaped_text_chars_2 = value;
		Il2CppCodeGenWriteBarrier((&___escaped_text_chars_2), value);
	}

	inline static int32_t get_offset_of_escaped_attr_chars_3() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___escaped_attr_chars_3)); }
	inline CharU5BU5D_t3528271667* get_escaped_attr_chars_3() const { return ___escaped_attr_chars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_escaped_attr_chars_3() { return &___escaped_attr_chars_3; }
	inline void set_escaped_attr_chars_3(CharU5BU5D_t3528271667* value)
	{
		___escaped_attr_chars_3 = value;
		Il2CppCodeGenWriteBarrier((&___escaped_attr_chars_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map53_34() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___U3CU3Ef__switchU24map53_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map53_34() const { return ___U3CU3Ef__switchU24map53_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map53_34() { return &___U3CU3Ef__switchU24map53_34; }
	inline void set_U3CU3Ef__switchU24map53_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map53_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map53_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map54_35() { return static_cast<int32_t>(offsetof(XmlTextWriter_t2114213153_StaticFields, ___U3CU3Ef__switchU24map54_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map54_35() const { return ___U3CU3Ef__switchU24map54_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map54_35() { return &___U3CU3Ef__switchU24map54_35; }
	inline void set_U3CU3Ef__switchU24map54_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map54_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map54_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTWRITER_T2114213153_H
#ifndef XMLWHITESPACE_T131741354_H
#define XMLWHITESPACE_T131741354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWhitespace
struct  XmlWhitespace_t131741354  : public XmlCharacterData_t1167807131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWHITESPACE_T131741354_H
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
#ifndef XMLWRITERSETTINGS_T3314986516_H
#define XMLWRITERSETTINGS_T3314986516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriterSettings
struct  XmlWriterSettings_t3314986516  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput_1;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformance
	int32_t ___conformance_2;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_t1523322056 * ___encoding_3;
	// System.Boolean System.Xml.XmlWriterSettings::indent
	bool ___indent_4;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars_5;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars_6;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes_7;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling_8;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDeclaration
	bool ___omitXmlDeclaration_9;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod_10;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_closeOutput_1() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___closeOutput_1)); }
	inline bool get_closeOutput_1() const { return ___closeOutput_1; }
	inline bool* get_address_of_closeOutput_1() { return &___closeOutput_1; }
	inline void set_closeOutput_1(bool value)
	{
		___closeOutput_1 = value;
	}

	inline static int32_t get_offset_of_conformance_2() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___conformance_2)); }
	inline int32_t get_conformance_2() const { return ___conformance_2; }
	inline int32_t* get_address_of_conformance_2() { return &___conformance_2; }
	inline void set_conformance_2(int32_t value)
	{
		___conformance_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___encoding_3)); }
	inline Encoding_t1523322056 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t1523322056 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_3), value);
	}

	inline static int32_t get_offset_of_indent_4() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___indent_4)); }
	inline bool get_indent_4() const { return ___indent_4; }
	inline bool* get_address_of_indent_4() { return &___indent_4; }
	inline void set_indent_4(bool value)
	{
		___indent_4 = value;
	}

	inline static int32_t get_offset_of_indentChars_5() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___indentChars_5)); }
	inline String_t* get_indentChars_5() const { return ___indentChars_5; }
	inline String_t** get_address_of_indentChars_5() { return &___indentChars_5; }
	inline void set_indentChars_5(String_t* value)
	{
		___indentChars_5 = value;
		Il2CppCodeGenWriteBarrier((&___indentChars_5), value);
	}

	inline static int32_t get_offset_of_newLineChars_6() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineChars_6)); }
	inline String_t* get_newLineChars_6() const { return ___newLineChars_6; }
	inline String_t** get_address_of_newLineChars_6() { return &___newLineChars_6; }
	inline void set_newLineChars_6(String_t* value)
	{
		___newLineChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___newLineChars_6), value);
	}

	inline static int32_t get_offset_of_newLineOnAttributes_7() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineOnAttributes_7)); }
	inline bool get_newLineOnAttributes_7() const { return ___newLineOnAttributes_7; }
	inline bool* get_address_of_newLineOnAttributes_7() { return &___newLineOnAttributes_7; }
	inline void set_newLineOnAttributes_7(bool value)
	{
		___newLineOnAttributes_7 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_8() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___newLineHandling_8)); }
	inline int32_t get_newLineHandling_8() const { return ___newLineHandling_8; }
	inline int32_t* get_address_of_newLineHandling_8() { return &___newLineHandling_8; }
	inline void set_newLineHandling_8(int32_t value)
	{
		___newLineHandling_8 = value;
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_9() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___omitXmlDeclaration_9)); }
	inline bool get_omitXmlDeclaration_9() const { return ___omitXmlDeclaration_9; }
	inline bool* get_address_of_omitXmlDeclaration_9() { return &___omitXmlDeclaration_9; }
	inline void set_omitXmlDeclaration_9(bool value)
	{
		___omitXmlDeclaration_9 = value;
	}

	inline static int32_t get_offset_of_outputMethod_10() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t3314986516, ___outputMethod_10)); }
	inline int32_t get_outputMethod_10() const { return ___outputMethod_10; }
	inline int32_t* get_address_of_outputMethod_10() { return &___outputMethod_10; }
	inline void set_outputMethod_10(int32_t value)
	{
		___outputMethod_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERSETTINGS_T3314986516_H
#ifndef WEBREQUEST_T1939381076_H
#define WEBREQUEST_T1939381076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t1939381076  : public MarshalByRefObject_t2760389100
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t1939381076_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t4070033136 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t4070033136 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t4070033136 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t4070033136 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t1939381076_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T1939381076_H
#ifndef XMLNODEINFO_T4030693883_H
#define XMLNODEINFO_T4030693883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlNodeInfo
struct  XmlNodeInfo_t4030693883  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::Prefix
	String_t* ___Prefix_0;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::LocalName
	String_t* ___LocalName_1;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::NS
	String_t* ___NS_2;
	// System.Boolean System.Xml.XmlTextWriter/XmlNodeInfo::HasSimple
	bool ___HasSimple_3;
	// System.Boolean System.Xml.XmlTextWriter/XmlNodeInfo::HasElements
	bool ___HasElements_4;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::XmlLang
	String_t* ___XmlLang_5;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter/XmlNodeInfo::XmlSpace
	int32_t ___XmlSpace_6;

public:
	inline static int32_t get_offset_of_Prefix_0() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___Prefix_0)); }
	inline String_t* get_Prefix_0() const { return ___Prefix_0; }
	inline String_t** get_address_of_Prefix_0() { return &___Prefix_0; }
	inline void set_Prefix_0(String_t* value)
	{
		___Prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prefix_0), value);
	}

	inline static int32_t get_offset_of_LocalName_1() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___LocalName_1)); }
	inline String_t* get_LocalName_1() const { return ___LocalName_1; }
	inline String_t** get_address_of_LocalName_1() { return &___LocalName_1; }
	inline void set_LocalName_1(String_t* value)
	{
		___LocalName_1 = value;
		Il2CppCodeGenWriteBarrier((&___LocalName_1), value);
	}

	inline static int32_t get_offset_of_NS_2() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___NS_2)); }
	inline String_t* get_NS_2() const { return ___NS_2; }
	inline String_t** get_address_of_NS_2() { return &___NS_2; }
	inline void set_NS_2(String_t* value)
	{
		___NS_2 = value;
		Il2CppCodeGenWriteBarrier((&___NS_2), value);
	}

	inline static int32_t get_offset_of_HasSimple_3() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___HasSimple_3)); }
	inline bool get_HasSimple_3() const { return ___HasSimple_3; }
	inline bool* get_address_of_HasSimple_3() { return &___HasSimple_3; }
	inline void set_HasSimple_3(bool value)
	{
		___HasSimple_3 = value;
	}

	inline static int32_t get_offset_of_HasElements_4() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___HasElements_4)); }
	inline bool get_HasElements_4() const { return ___HasElements_4; }
	inline bool* get_address_of_HasElements_4() { return &___HasElements_4; }
	inline void set_HasElements_4(bool value)
	{
		___HasElements_4 = value;
	}

	inline static int32_t get_offset_of_XmlLang_5() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___XmlLang_5)); }
	inline String_t* get_XmlLang_5() const { return ___XmlLang_5; }
	inline String_t** get_address_of_XmlLang_5() { return &___XmlLang_5; }
	inline void set_XmlLang_5(String_t* value)
	{
		___XmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((&___XmlLang_5), value);
	}

	inline static int32_t get_offset_of_XmlSpace_6() { return static_cast<int32_t>(offsetof(XmlNodeInfo_t4030693883, ___XmlSpace_6)); }
	inline int32_t get_XmlSpace_6() const { return ___XmlSpace_6; }
	inline int32_t* get_address_of_XmlSpace_6() { return &___XmlSpace_6; }
	inline void set_XmlSpace_6(int32_t value)
	{
		___XmlSpace_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODEINFO_T4030693883_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
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
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_t431163322  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XmlNodeInfo_t4030693883 * m_Items[1];

public:
	inline XmlNodeInfo_t4030693883 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlNodeInfo_t4030693883 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlNodeInfo_t4030693883 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline XmlNodeInfo_t4030693883 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlNodeInfo_t4030693883 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlNodeInfo_t4030693883 * value)
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m182537451_gshared (Dictionary_2_t3384741 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m1279427033_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3959998165_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void StreamWriter__ctor_m2310301218 (StreamWriter_t1266378904 * __this, Stream_t1273022909 * p0, Encoding_t1523322056 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void XmlTextWriter__ctor_m1850551870 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C"  void XmlTextWriter_Initialize_m3279439671 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor()
extern "C"  void Stack__ctor_m2907601956 (Stack_t2329662280 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2782267819 (XmlWriter_t127905479 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UTF8Encoding__ctor_m1391509536 (UTF8Encoding_t3956466879 * __this, bool p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.NameTable::.ctor()
extern "C"  void NameTable__ctor_m874080766 (NameTable_t3178203267 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlNamespaceManager__ctor_m3238790559 (XmlNamespaceManager_t418790500 * __this, XmlNameTable_t71772148 * ___nameTable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C"  Exception_t * XmlTextWriter_ArgumentError_m3627124320 (XmlTextWriter_t2114213153 * __this, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixExclusive_m4193555037 (XmlNamespaceManager_t418790500 * __this, String_t* ___uri0, bool ___atomizedName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_WriteStartDocumentCore_m3985718073 (XmlTextWriter_t2114213153 * __this, bool ___outputStd0, bool ___standalone1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C"  Exception_t * XmlTextWriter_StateError_m571999665 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C"  Exception_t * XmlTextWriter_InvalidOperation_m988191293 (XmlTextWriter_t2114213153 * __this, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsName(System.String)
extern "C"  bool XmlChar_IsName_m846619221 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C"  void XmlTextWriter_OutputAutoStartDocument_m96032915 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C"  void XmlTextWriter_WriteIndent_m534435357 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m2828740952 (XmlNamespaceManager_t418790500 * __this, String_t* ___prefix0, bool ___atomizedNames1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C"  void XmlTextWriter_CloseStartElement_m3029087518 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
extern "C"  void XmlNodeInfo__ctor_m1232608472 (XmlNodeInfo_t4030693883 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C"  void XmlTextWriter_CloseStartElementCore_m1099456942 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedString_m3514294598 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, bool ___isAttribute1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C"  void XmlTextWriter_WriteEndElementCore_m4151593863 (XmlTextWriter_t2114213153 * __this, bool ___full0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C"  void XmlTextWriter_WriteIndentEndElement_m1797366262 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C"  String_t* XmlTextWriter_DetermineAttributePrefix_m2990155447 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C"  void XmlTextWriter_WriteIndentAttribute_m3288075110 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m1244548890 (StringWriter_t802263757 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C"  void StringBuilder_set_Length_m1410065908 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlTextWriter_MockupPrefix_m1608841972 (XmlTextWriter_t2114213153 * __this, String_t* ___ns0, bool ___skipLookup1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern "C"  String_t* StringUtil_Format_m4156193709 (RuntimeObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C"  void XmlException__ctor_m3751204500 (XmlException_t1761730631 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2392909825(__this, p0, method) ((  void (*) (Dictionary_2_t2736202052 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m182537451_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
#define Dictionary_2_Add_m282647386(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2736202052 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m1279427033_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1013208020(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2736202052 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3959998165_gshared)(__this, p0, p1, method)
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern "C"  int32_t StringUtil_IndexOf_m1748403443 (RuntimeObject * __this /* static, unused */, String_t* ___src0, String_t* ___target1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateTopLevel_m3589898271 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, bool ___allowAttribute1, bool ___dontCheckXmlDecl2, bool ___isCharacter3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfNonWhitespace(System.String)
extern "C"  int32_t XmlChar_IndexOfNonWhitespace_m2684163220 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateContent_m1491671115 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, bool ___allowAttribute1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C"  void XmlTextWriter_WriteCheckedString_m2937191976 (XmlTextWriter_t2114213153 * __this, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsNCName(System.String)
extern "C"  bool XmlChar_IsNCName_m2365231717 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C"  bool XmlTextWriter_WriteIndentCore_m729468996 (XmlTextWriter_t2114213153 * __this, int32_t ___nestFix0, bool ___attribute1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C"  void XmlTextWriter_CheckMixedContentState_m804091766 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C"  int32_t String_IndexOfAny_m4159774896 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C"  void XmlTextWriter_WriteCheckedBuffer_m275259173 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___idx1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedBuffer_m903990798 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___index1, int32_t ___length2, bool ___isAttribute3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.String,System.Boolean)
extern "C"  int32_t XmlChar_IndexOfInvalid_m478649474 (RuntimeObject * __this /* static, unused */, String_t* ___s0, bool ___allowSurrogate1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Int32_ToString_m2507389746 (int32_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t XmlChar_IndexOfInvalid_m211553919 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t3528271667* ___s0, int32_t ___start1, int32_t ___length2, bool ___allowSurrogate3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m1881875187 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m2276492248 (XmlResolver_t626023767 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C"  bool Uri_get_IsAbsoluteUri_m3666899587 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C"  String_t* Uri_get_Scheme_m2109479391 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C"  String_t* Uri_get_AbsolutePath_m590948575 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_LocalPath()
extern "C"  String_t* Uri_get_LocalPath_m2837234216 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m2976662118 (XmlUrlResolver_t817895037 * __this, String_t* ___src0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  void FileStream__ctor_m2889718780 (FileStream_t4292183065 * __this, String_t* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C"  WebRequest_t1939381076 * WebRequest_Create_m2603246108 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t100236324 * XmlResolver_ResolveUri_m3051172150 (XmlResolver_t626023767 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCharacterData::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlCharacterData__ctor_m3935345337 (XmlCharacterData_t1167807131 * __this, String_t* ___data0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C"  bool XmlChar_IsWhitespace_m2421104119 (RuntimeObject * __this /* static, unused */, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C"  XmlNode_t3767805227 * XmlNode_get_ParentNode_m3304904414 (XmlNode_t3767805227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlWhitespace__ctor_m949230574 (XmlWhitespace_t131741354 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C"  void XmlWriterSettings__ctor_m2465852079 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m2341773285 (XmlWriter_t127905479 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C"  void XmlWriter_WriteStartElement_m3748634885 (XmlWriter_t127905479 * __this, String_t* ___localName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteQualifiedNameInternal(System.String,System.String)
extern "C"  void XmlWriter_WriteQualifiedNameInternal_m2017981185 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::get_ConformanceLevel()
extern "C"  int32_t XmlWriterSettings_get_ConformanceLevel_m2619815559 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C"  String_t* XmlConvert_VerifyNCName_m3085528481 (RuntimeObject * __this /* static, unused */, String_t* ___ncname0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m3614493714 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriterSettings::Reset()
extern "C"  void XmlWriterSettings_Reset_m4105849431 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m3211016485 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void XmlTextWriter__ctor_m614698628 (XmlTextWriter_t2114213153 * __this, Stream_t1273022909 * ___stream0, Encoding_t1523322056 * ___encoding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__ctor_m614698628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t1273022909 * G_B2_0 = NULL;
	XmlTextWriter_t2114213153 * G_B2_1 = NULL;
	Stream_t1273022909 * G_B1_0 = NULL;
	XmlTextWriter_t2114213153 * G_B1_1 = NULL;
	Encoding_t1523322056 * G_B3_0 = NULL;
	Stream_t1273022909 * G_B3_1 = NULL;
	XmlTextWriter_t2114213153 * G_B3_2 = NULL;
	{
		Stream_t1273022909 * L_0 = ___stream0;
		Encoding_t1523322056 * L_1 = ___encoding1;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_2 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_unmarked_utf8encoding_1();
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0013;
	}

IL_0012:
	{
		Encoding_t1523322056 * L_3 = ___encoding1;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0013:
	{
		StreamWriter_t1266378904 * L_4 = (StreamWriter_t1266378904 *)il2cpp_codegen_object_new(StreamWriter_t1266378904_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m2310301218(L_4, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		XmlTextWriter__ctor_m1850551870(G_B3_2, L_4, /*hidden argument*/NULL);
		Encoding_t1523322056 * L_5 = ___encoding1;
		__this->set_ignore_encoding_12((bool)((((RuntimeObject*)(Encoding_t1523322056 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0));
		TextWriter_t3478189236 * L_6 = __this->get_writer_6();
		XmlTextWriter_Initialize_m3279439671(__this, L_6, /*hidden argument*/NULL);
		__this->set_allow_doc_fragment_10((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void XmlTextWriter__ctor_m1850551870 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__ctor_m1850551870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_close_output_stream_11((bool)1);
		__this->set_namespaces_13((bool)1);
		__this->set_newline_handling_16(2);
		__this->set_elements_22(((XmlNodeInfoU5BU5D_t431163322*)SZArrayNew(XmlNodeInfoU5BU5D_t431163322_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10))));
		Stack_t2329662280 * L_0 = (Stack_t2329662280 *)il2cpp_codegen_object_new(Stack_t2329662280_il2cpp_TypeInfo_var);
		Stack__ctor_m2907601956(L_0, /*hidden argument*/NULL);
		__this->set_new_local_namespaces_23(L_0);
		ArrayList_t2718874744 * L_1 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_1, /*hidden argument*/NULL);
		__this->set_explicit_nsdecls_24(L_1);
		__this->set_indent_count_27(2);
		__this->set_indent_char_28(((int32_t)32));
		__this->set_indent_string_29(_stringLiteral3450517376);
		__this->set_quote_char_32(((int32_t)34));
		XmlWriter__ctor_m2782267819(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_2 = ___writer0;
		if (L_2)
		{
			goto IL_0071;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0071:
	{
		TextWriter_t3478189236 * L_4 = ___writer0;
		Encoding_t1523322056 * L_5 = VirtFuncInvoker0< Encoding_t1523322056 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_4);
		__this->set_ignore_encoding_12((bool)((((RuntimeObject*)(Encoding_t1523322056 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0));
		TextWriter_t3478189236 * L_6 = ___writer0;
		XmlTextWriter_Initialize_m3279439671(__this, L_6, /*hidden argument*/NULL);
		__this->set_allow_doc_fragment_10((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C"  void XmlTextWriter__cctor_m1817862492 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__cctor_m1817862492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t3956466879 * L_0 = (UTF8Encoding_t3956466879 *)il2cpp_codegen_object_new(UTF8Encoding_t3956466879_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m1391509536(L_0, (bool)0, (bool)0, /*hidden argument*/NULL);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_unmarked_utf8encoding_1(L_0);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C"  void XmlTextWriter_Initialize_m3279439671 (XmlTextWriter_t2114213153 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_Initialize_m3279439671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNameTable_t71772148 * V_0 = NULL;
	CharU5BU5D_t3528271667* G_B7_0 = NULL;
	{
		TextWriter_t3478189236 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		NameTable_t3178203267 * L_2 = (NameTable_t3178203267 *)il2cpp_codegen_object_new(NameTable_t3178203267_il2cpp_TypeInfo_var);
		NameTable__ctor_m874080766(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		TextWriter_t3478189236 * L_3 = ___writer0;
		__this->set_writer_6(L_3);
		TextWriter_t3478189236 * L_4 = ___writer0;
		if (!((StreamWriter_t1266378904 *)IsInstClass((RuntimeObject*)L_4, StreamWriter_t1266378904_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		TextWriter_t3478189236 * L_5 = ___writer0;
		Stream_t1273022909 * L_6 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(21 /* System.IO.Stream System.IO.StreamWriter::get_BaseStream() */, ((StreamWriter_t1266378904 *)CastclassClass((RuntimeObject*)L_5, StreamWriter_t1266378904_il2cpp_TypeInfo_var)));
		__this->set_base_stream_4(L_6);
	}

IL_003a:
	{
		TextWriter_t3478189236 * L_7 = ___writer0;
		__this->set_source_5(L_7);
		XmlNameTable_t71772148 * L_8 = V_0;
		XmlNamespaceManager_t418790500 * L_9 = (XmlNamespaceManager_t418790500 *)il2cpp_codegen_object_new(XmlNamespaceManager_t418790500_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_m3238790559(L_9, L_8, /*hidden argument*/NULL);
		__this->set_nsmanager_20(L_9);
		TextWriter_t3478189236 * L_10 = ___writer0;
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.IO.TextWriter::get_NewLine() */, L_10);
		__this->set_newline_30(L_11);
		int32_t L_12 = __this->get_newline_handling_16();
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t3528271667* L_13 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)5));
		RuntimeFieldHandle_t1871169219  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D43_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		G_B7_0 = L_13;
		goto IL_0090;
	}

IL_007b:
	{
		CharU5BU5D_t3528271667* L_15 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)3));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)38));
		CharU5BU5D_t3528271667* L_16 = L_15;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)60));
		CharU5BU5D_t3528271667* L_17 = L_16;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)((int32_t)62));
		G_B7_0 = L_17;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_escaped_text_chars_2(G_B7_0);
		CharU5BU5D_t3528271667* L_18 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)6));
		RuntimeFieldHandle_t1871169219  L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24U24fieldU2D44_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, L_19, /*hidden argument*/NULL);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_escaped_attr_chars_3(L_18);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C"  void XmlTextWriter_set_Formatting_m1913060046 (XmlTextWriter_t2114213153 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_indent_26((bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0));
		return;
	}
}
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C"  String_t* XmlTextWriter_get_XmlLang_m234129010 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_open_count_21();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_t431163322* L_1 = __this->get_elements_22();
		int32_t L_2 = __this->get_open_count_21();
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5 = L_4->get_XmlLang_5();
		G_B3_0 = L_5;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C"  int32_t XmlTextWriter_get_XmlSpace_m3846401545 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_open_count_21();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_t431163322* L_1 = __this->get_elements_22();
		int32_t L_2 = __this->get_open_count_21();
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = L_4->get_XmlSpace_6();
		G_B3_0 = ((int32_t)(L_5));
	}

IL_0025:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Xml.WriteState System.Xml.XmlTextWriter::get_WriteState()
extern "C"  int32_t XmlTextWriter_get_WriteState_m1424486110 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_state_18();
		return L_0;
	}
}
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern "C"  String_t* XmlTextWriter_LookupPrefix_m1332716567 (XmlTextWriter_t2114213153 * __this, String_t* ___namespaceUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_LookupPrefix_m1332716567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___namespaceUri0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = ___namespaceUri0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0016:
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral654685373, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0022:
	{
		String_t* L_5 = ___namespaceUri0;
		XmlNamespaceManager_t418790500 * L_6 = __this->get_nsmanager_20();
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_9;
	}

IL_003e:
	{
		XmlNamespaceManager_t418790500 * L_10 = __this->get_nsmanager_20();
		String_t* L_11 = ___namespaceUri0;
		String_t* L_12 = XmlNamespaceManager_LookupPrefixExclusive_m4193555037(L_10, L_11, (bool)0, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void System.Xml.XmlTextWriter::Close()
extern "C"  void XmlTextWriter_Close_m3579947138 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_state_18();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->get_state_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_001e;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_001e:
	{
		goto IL_0029;
	}

IL_0023:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlTextWriter::WriteEndElement() */, __this);
	}

IL_0029:
	{
		int32_t L_2 = __this->get_open_count_21();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0035:
	{
		bool L_3 = __this->get_close_output_stream_11();
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		TextWriter_t3478189236 * L_4 = __this->get_writer_6();
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextWriter::Close() */, L_4);
		goto IL_005b;
	}

IL_0050:
	{
		TextWriter_t3478189236 * L_5 = __this->get_writer_6();
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_5);
	}

IL_005b:
	{
		__this->set_state_18(5);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Flush()
extern "C"  void XmlTextWriter_Flush_m1654237314 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t3478189236 * L_0 = __this->get_writer_6();
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_0);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocument()
extern "C"  void XmlTextWriter_WriteStartDocument_m530805327 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteStartDocumentCore_m3985718073(__this, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set_is_document_entity_17((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_WriteStartDocumentCore_m3985718073 (XmlTextWriter_t2114213153 * __this, bool ___outputStd0, bool ___standalone1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartDocumentCore_m3985718073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextWriter_t3478189236 * G_B11_0 = NULL;
	TextWriter_t3478189236 * G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	TextWriter_t3478189236 * G_B12_1 = NULL;
	{
		int32_t L_0 = __this->get_state_18();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral1924938561, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		int32_t L_2 = __this->get_xmldecl_state_14();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0044;
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		Exception_t * L_4 = XmlTextWriter_InvalidOperation_m988191293(__this, _stringLiteral553656983, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0044:
	{
		__this->set_state_18(1);
		TextWriter_t3478189236 * L_5 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral950831942);
		TextWriter_t3478189236 * L_6 = __this->get_writer_6();
		Il2CppChar L_7 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, L_7);
		TextWriter_t3478189236 * L_8 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral3073726249);
		TextWriter_t3478189236 * L_9 = __this->get_writer_6();
		Il2CppChar L_10 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, L_10);
		bool L_11 = __this->get_ignore_encoding_12();
		if (L_11)
		{
			goto IL_00e5;
		}
	}
	{
		TextWriter_t3478189236 * L_12 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral3906513894);
		TextWriter_t3478189236 * L_13 = __this->get_writer_6();
		Il2CppChar L_14 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t3478189236 * L_15 = __this->get_writer_6();
		TextWriter_t3478189236 * L_16 = __this->get_writer_6();
		Encoding_t1523322056 * L_17 = VirtFuncInvoker0< Encoding_t1523322056 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_16);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Text.Encoding::get_WebName() */, L_17);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_18);
		TextWriter_t3478189236 * L_19 = __this->get_writer_6();
		Il2CppChar L_20 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, L_20);
	}

IL_00e5:
	{
		bool L_21 = ___outputStd0;
		if (!L_21)
		{
			goto IL_013d;
		}
	}
	{
		TextWriter_t3478189236 * L_22 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, _stringLiteral2960723134);
		TextWriter_t3478189236 * L_23 = __this->get_writer_6();
		Il2CppChar L_24 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_23, L_24);
		TextWriter_t3478189236 * L_25 = __this->get_writer_6();
		bool L_26 = ___standalone1;
		G_B10_0 = L_25;
		if (!L_26)
		{
			G_B11_0 = L_25;
			goto IL_0122;
		}
	}
	{
		G_B12_0 = _stringLiteral4119301762;
		G_B12_1 = G_B10_0;
		goto IL_0127;
	}

IL_0122:
	{
		G_B12_0 = _stringLiteral3454777282;
		G_B12_1 = G_B11_0;
	}

IL_0127:
	{
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B12_1, G_B12_0);
		TextWriter_t3478189236 * L_27 = __this->get_writer_6();
		Il2CppChar L_28 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, L_28);
	}

IL_013d:
	{
		TextWriter_t3478189236 * L_29 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_29, _stringLiteral3451697041);
		__this->set_xmldecl_state_14(1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteDocType_m3875009899 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, String_t* ___pubid1, String_t* ___sysid2, String_t* ___subset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteDocType_m3875009899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m846619221(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0029:
	{
		int32_t L_5 = __this->get_node_state_19();
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		Exception_t * L_6 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral2588054203, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0040:
	{
		__this->set_node_state_19(((int32_t)10));
		int32_t L_7 = __this->get_xmldecl_state_14();
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m96032915(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		XmlTextWriter_WriteIndent_m534435357(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_8 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral3664297627);
		TextWriter_t3478189236 * L_9 = __this->get_writer_6();
		String_t* L_10 = ___name0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
		String_t* L_11 = ___pubid1;
		if (!L_11)
		{
			goto IL_0106;
		}
	}
	{
		TextWriter_t3478189236 * L_12 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral4026494280);
		TextWriter_t3478189236 * L_13 = __this->get_writer_6();
		Il2CppChar L_14 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t3478189236 * L_15 = __this->get_writer_6();
		String_t* L_16 = ___pubid1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t3478189236 * L_17 = __this->get_writer_6();
		Il2CppChar L_18 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, L_18);
		TextWriter_t3478189236 * L_19 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, ((int32_t)32));
		TextWriter_t3478189236 * L_20 = __this->get_writer_6();
		Il2CppChar L_21 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_20, L_21);
		String_t* L_22 = ___sysid2;
		if (!L_22)
		{
			goto IL_00f0;
		}
	}
	{
		TextWriter_t3478189236 * L_23 = __this->get_writer_6();
		String_t* L_24 = ___sysid2;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_24);
	}

IL_00f0:
	{
		TextWriter_t3478189236 * L_25 = __this->get_writer_6();
		Il2CppChar L_26 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_25, L_26);
		goto IL_014a;
	}

IL_0106:
	{
		String_t* L_27 = ___sysid2;
		if (!L_27)
		{
			goto IL_014a;
		}
	}
	{
		TextWriter_t3478189236 * L_28 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, _stringLiteral2551850054);
		TextWriter_t3478189236 * L_29 = __this->get_writer_6();
		Il2CppChar L_30 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_29, L_30);
		TextWriter_t3478189236 * L_31 = __this->get_writer_6();
		String_t* L_32 = ___sysid2;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_31, L_32);
		TextWriter_t3478189236 * L_33 = __this->get_writer_6();
		Il2CppChar L_34 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_33, L_34);
	}

IL_014a:
	{
		String_t* L_35 = ___subset3;
		if (!L_35)
		{
			goto IL_017e;
		}
	}
	{
		TextWriter_t3478189236 * L_36 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, _stringLiteral3452614645);
		TextWriter_t3478189236 * L_37 = __this->get_writer_6();
		String_t* L_38 = ___subset3;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, L_38);
		TextWriter_t3478189236 * L_39 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_39, _stringLiteral3452614643);
	}

IL_017e:
	{
		TextWriter_t3478189236 * L_40 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)62));
		__this->set_state_18(1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteStartElement_m362096410 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartElement_m362096410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XmlNodeInfoU5BU5D_t431163322* V_1 = NULL;
	XmlNodeInfo_t4030693883 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = __this->get_state_18();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_state_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t * L_2 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral885171343, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0024:
	{
		__this->set_node_state_19(1);
		String_t* L_3 = ___prefix0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		String_t* L_4 = ___prefix0;
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_5;
	}

IL_003d:
	{
		bool L_6 = __this->get_namespaces_13();
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_7 = ___namespaceUri2;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_8 = ___namespaceUri2;
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		Exception_t * L_10 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral3884394238, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_0066:
	{
		bool L_11 = __this->get_namespaces_13();
		if (L_11)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_12 = ___prefix0;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		Exception_t * L_14 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4155493995, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_0089:
	{
		String_t* L_15 = ___prefix0;
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_17 = ___namespaceUri2;
		if (L_17)
		{
			goto IL_00c7;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_18 = __this->get_nsmanager_20();
		String_t* L_19 = ___prefix0;
		String_t* L_20 = XmlNamespaceManager_LookupNamespace_m2828740952(L_18, L_19, (bool)0, /*hidden argument*/NULL);
		___namespaceUri2 = L_20;
		String_t* L_21 = ___namespaceUri2;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_22 = ___namespaceUri2;
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00c7;
		}
	}

IL_00bb:
	{
		Exception_t * L_24 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral1065548103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24);
	}

IL_00c7:
	{
		bool L_25 = __this->get_namespaces_13();
		if (!L_25)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_26 = ___prefix0;
		if (!L_26)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_27 = ___prefix0;
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)3))))
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_29 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_29, _stringLiteral2984480440, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_31 = ___prefix0;
		Il2CppChar L_32 = String_get_Chars_m2986988803(L_31, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)120))))
		{
			goto IL_0110;
		}
	}
	{
		String_t* L_33 = ___prefix0;
		Il2CppChar L_34 = String_get_Chars_m2986988803(L_33, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0153;
		}
	}

IL_0110:
	{
		String_t* L_35 = ___prefix0;
		Il2CppChar L_36 = String_get_Chars_m2986988803(L_35, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)109))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_37 = ___prefix0;
		Il2CppChar L_38 = String_get_Chars_m2986988803(L_37, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0153;
		}
	}

IL_012c:
	{
		String_t* L_39 = ___prefix0;
		Il2CppChar L_40 = String_get_Chars_m2986988803(L_39, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)108))))
		{
			goto IL_0148;
		}
	}
	{
		String_t* L_41 = ___prefix0;
		Il2CppChar L_42 = String_get_Chars_m2986988803(L_41, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_0153;
		}
	}

IL_0148:
	{
		ArgumentException_t132251570 * L_43 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_43, _stringLiteral3156561689, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43);
	}

IL_0153:
	{
		int32_t L_44 = __this->get_xmldecl_state_14();
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m96032915(__this, /*hidden argument*/NULL);
	}

IL_0165:
	{
		int32_t L_45 = __this->get_state_18();
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_0177;
		}
	}
	{
		XmlTextWriter_CloseStartElement_m3029087518(__this, /*hidden argument*/NULL);
	}

IL_0177:
	{
		int32_t L_46 = __this->get_open_count_21();
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_47 = __this->get_elements_22();
		int32_t L_48 = __this->get_open_count_21();
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		L_50->set_HasElements_4((bool)1);
	}

IL_0198:
	{
		XmlNamespaceManager_t418790500 * L_51 = __this->get_nsmanager_20();
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_51);
		bool L_52 = __this->get_namespaces_13();
		if (!L_52)
		{
			goto IL_01e7;
		}
	}
	{
		String_t* L_53 = ___namespaceUri2;
		if (!L_53)
		{
			goto IL_01e7;
		}
	}
	{
		bool L_54 = V_0;
		if (!L_54)
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_55 = ___namespaceUri2;
		int32_t L_56 = String_get_Length_m3847582255(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_57 = ___namespaceUri2;
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_57);
		___prefix0 = L_58;
	}

IL_01cf:
	{
		String_t* L_59 = ___prefix0;
		if (!L_59)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_60 = ___namespaceUri2;
		int32_t L_61 = String_get_Length_m3847582255(L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_01e7;
		}
	}

IL_01e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_62;
	}

IL_01e7:
	{
		XmlTextWriter_WriteIndent_m534435357(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_63 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_63, _stringLiteral3452614548);
		String_t* L_64 = ___prefix0;
		int32_t L_65 = String_get_Length_m3847582255(L_64, /*hidden argument*/NULL);
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_0222;
		}
	}
	{
		TextWriter_t3478189236 * L_66 = __this->get_writer_6();
		String_t* L_67 = ___prefix0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_66, L_67);
		TextWriter_t3478189236 * L_68 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_68, ((int32_t)58));
	}

IL_0222:
	{
		TextWriter_t3478189236 * L_69 = __this->get_writer_6();
		String_t* L_70 = ___localName1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_69, L_70);
		XmlNodeInfoU5BU5D_t431163322* L_71 = __this->get_elements_22();
		int32_t L_72 = __this->get_open_count_21();
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_71)->max_length))))) == ((uint32_t)L_72))))
		{
			goto IL_0268;
		}
	}
	{
		int32_t L_73 = __this->get_open_count_21();
		V_1 = ((XmlNodeInfoU5BU5D_t431163322*)SZArrayNew(XmlNodeInfoU5BU5D_t431163322_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_73<<(int32_t)1))));
		XmlNodeInfoU5BU5D_t431163322* L_74 = __this->get_elements_22();
		XmlNodeInfoU5BU5D_t431163322* L_75 = V_1;
		int32_t L_76 = __this->get_open_count_21();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_74, (RuntimeArray *)(RuntimeArray *)L_75, L_76, /*hidden argument*/NULL);
		XmlNodeInfoU5BU5D_t431163322* L_77 = V_1;
		__this->set_elements_22(L_77);
	}

IL_0268:
	{
		XmlNodeInfoU5BU5D_t431163322* L_78 = __this->get_elements_22();
		int32_t L_79 = __this->get_open_count_21();
		int32_t L_80 = L_79;
		XmlNodeInfo_t4030693883 * L_81 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		if (L_81)
		{
			goto IL_028c;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_82 = __this->get_elements_22();
		int32_t L_83 = __this->get_open_count_21();
		XmlNodeInfo_t4030693883 * L_84 = (XmlNodeInfo_t4030693883 *)il2cpp_codegen_object_new(XmlNodeInfo_t4030693883_il2cpp_TypeInfo_var);
		XmlNodeInfo__ctor_m1232608472(L_84, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_82, L_84);
		(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83), (XmlNodeInfo_t4030693883 *)L_84);
	}

IL_028c:
	{
		XmlNodeInfoU5BU5D_t431163322* L_85 = __this->get_elements_22();
		int32_t L_86 = __this->get_open_count_21();
		int32_t L_87 = L_86;
		XmlNodeInfo_t4030693883 * L_88 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		V_2 = L_88;
		XmlNodeInfo_t4030693883 * L_89 = V_2;
		String_t* L_90 = ___prefix0;
		L_89->set_Prefix_0(L_90);
		XmlNodeInfo_t4030693883 * L_91 = V_2;
		String_t* L_92 = ___localName1;
		L_91->set_LocalName_1(L_92);
		XmlNodeInfo_t4030693883 * L_93 = V_2;
		String_t* L_94 = ___namespaceUri2;
		L_93->set_NS_2(L_94);
		XmlNodeInfo_t4030693883 * L_95 = V_2;
		L_95->set_HasSimple_3((bool)0);
		XmlNodeInfo_t4030693883 * L_96 = V_2;
		L_96->set_HasElements_4((bool)0);
		XmlNodeInfo_t4030693883 * L_97 = V_2;
		String_t* L_98 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlTextWriter::get_XmlLang() */, __this);
		L_97->set_XmlLang_5(L_98);
		XmlNodeInfo_t4030693883 * L_99 = V_2;
		int32_t L_100 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace() */, __this);
		L_99->set_XmlSpace_6(L_100);
		int32_t L_101 = __this->get_open_count_21();
		__this->set_open_count_21(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1)));
		bool L_102 = __this->get_namespaces_13();
		if (!L_102)
		{
			goto IL_0327;
		}
	}
	{
		String_t* L_103 = ___namespaceUri2;
		if (!L_103)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_104 = __this->get_nsmanager_20();
		String_t* L_105 = ___prefix0;
		String_t* L_106 = XmlNamespaceManager_LookupNamespace_m2828740952(L_104, L_105, (bool)0, /*hidden argument*/NULL);
		V_3 = L_106;
		String_t* L_107 = V_3;
		String_t* L_108 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_109 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_107, L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_110 = __this->get_nsmanager_20();
		String_t* L_111 = ___prefix0;
		String_t* L_112 = ___namespaceUri2;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_110, L_111, L_112);
		Stack_t2329662280 * L_113 = __this->get_new_local_namespaces_23();
		String_t* L_114 = ___prefix0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_113, L_114);
	}

IL_0327:
	{
		__this->set_state_18(2);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C"  void XmlTextWriter_CloseStartElement_m3029087518 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_CloseStartElementCore_m1099456942(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_state_18();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		TextWriter_t3478189236 * L_1 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)62));
	}

IL_001f:
	{
		__this->set_state_18(4);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C"  void XmlTextWriter_CloseStartElementCore_m1099456942 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_CloseStartElementCore_m1099456942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		int32_t L_0 = __this->get_state_18();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		Stack_t2329662280 * L_1 = __this->get_new_local_namespaces_23();
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		ArrayList_t2718874744 * L_3 = __this->get_explicit_nsdecls_24();
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ArrayList_t2718874744 * L_5 = __this->get_explicit_nsdecls_24();
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_5);
	}

IL_003e:
	{
		return;
	}

IL_003f:
	{
		ArrayList_t2718874744 * L_6 = __this->get_explicit_nsdecls_24();
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_0 = L_7;
		goto IL_00ba;
	}

IL_0050:
	{
		Stack_t2329662280 * L_8 = __this->get_new_local_namespaces_23();
		RuntimeObject * L_9 = VirtFuncInvoker0< RuntimeObject * >::Invoke(19 /* System.Object System.Collections.Stack::Pop() */, L_8);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_0091;
	}

IL_006a:
	{
		ArrayList_t2718874744 * L_10 = __this->get_explicit_nsdecls_24();
		int32_t L_11 = V_3;
		RuntimeObject * L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_00a2;
	}

IL_008d:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_16 = V_3;
		ArrayList_t2718874744 * L_17 = __this->get_explicit_nsdecls_24();
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_006a;
		}
	}

IL_00a2:
	{
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00ba;
	}

IL_00ad:
	{
		ArrayList_t2718874744 * L_20 = __this->get_explicit_nsdecls_24();
		String_t* L_21 = V_1;
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00ba:
	{
		Stack_t2329662280 * L_22 = __this->get_new_local_namespaces_23();
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_22);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_24 = V_0;
		V_4 = L_24;
		goto IL_0180;
	}

IL_00d3:
	{
		ArrayList_t2718874744 * L_25 = __this->get_explicit_nsdecls_24();
		int32_t L_26 = V_4;
		RuntimeObject * L_27 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_25, L_26);
		V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_27, String_t_il2cpp_TypeInfo_var));
		XmlNamespaceManager_t418790500 * L_28 = __this->get_nsmanager_20();
		String_t* L_29 = V_5;
		String_t* L_30 = XmlNamespaceManager_LookupNamespace_m2828740952(L_28, L_29, (bool)0, /*hidden argument*/NULL);
		V_6 = L_30;
		String_t* L_31 = V_6;
		if (L_31)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_017a;
	}

IL_0103:
	{
		String_t* L_32 = V_5;
		int32_t L_33 = String_get_Length_m3847582255(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		TextWriter_t3478189236 * L_34 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral3073361429);
		TextWriter_t3478189236 * L_35 = __this->get_writer_6();
		String_t* L_36 = V_5;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_35, L_36);
		goto IL_0142;
	}

IL_0132:
	{
		TextWriter_t3478189236 * L_37 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, _stringLiteral2787691749);
	}

IL_0142:
	{
		TextWriter_t3478189236 * L_38 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_38, ((int32_t)61));
		TextWriter_t3478189236 * L_39 = __this->get_writer_6();
		Il2CppChar L_40 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_39, L_40);
		String_t* L_41 = V_6;
		XmlTextWriter_WriteEscapedString_m3514294598(__this, L_41, (bool)1, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_42 = __this->get_writer_6();
		Il2CppChar L_43 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_42, L_43);
	}

IL_017a:
	{
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0180:
	{
		int32_t L_45 = V_4;
		ArrayList_t2718874744 * L_46 = __this->get_explicit_nsdecls_24();
		int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00d3;
		}
	}
	{
		ArrayList_t2718874744 * L_48 = __this->get_explicit_nsdecls_24();
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_48);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C"  void XmlTextWriter_WriteEndElement_m4081619786 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteEndElementCore_m4151593863(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C"  void XmlTextWriter_WriteFullEndElement_m164880516 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteEndElementCore_m4151593863(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C"  void XmlTextWriter_WriteEndElementCore_m4151593863 (XmlTextWriter_t2114213153 * __this, bool ___full0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEndElementCore_m4151593863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeInfo_t4030693883 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_state_18();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_state_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t * L_2 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral3333968179, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0024:
	{
		int32_t L_3 = __this->get_open_count_21();
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_InvalidOperation_m988191293(__this, _stringLiteral3986749280, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_003b:
	{
		XmlTextWriter_CloseStartElementCore_m1099456942(__this, /*hidden argument*/NULL);
		XmlNamespaceManager_t418790500 * L_5 = __this->get_nsmanager_20();
		VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_5);
		int32_t L_6 = __this->get_state_18();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		bool L_7 = ___full0;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		TextWriter_t3478189236 * L_8 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)62));
		goto IL_0081;
	}

IL_0071:
	{
		TextWriter_t3478189236 * L_9 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, _stringLiteral1910861284);
	}

IL_0081:
	{
		bool L_10 = ___full0;
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_11 = __this->get_state_18();
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0099;
		}
	}

IL_0093:
	{
		XmlTextWriter_WriteIndentEndElement_m1797366262(__this, /*hidden argument*/NULL);
	}

IL_0099:
	{
		XmlNodeInfoU5BU5D_t431163322* L_12 = __this->get_elements_22();
		int32_t L_13 = __this->get_open_count_21();
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_1 = L_14;
		__this->set_open_count_21(L_14);
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		XmlNodeInfo_t4030693883 * L_17 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		bool L_18 = ___full0;
		if (L_18)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_19 = __this->get_state_18();
		if ((!(((uint32_t)L_19) == ((uint32_t)4))))
		{
			goto IL_0121;
		}
	}

IL_00c4:
	{
		TextWriter_t3478189236 * L_20 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_20, _stringLiteral3450582932);
		XmlNodeInfo_t4030693883 * L_21 = V_0;
		String_t* L_22 = L_21->get_Prefix_0();
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		TextWriter_t3478189236 * L_24 = __this->get_writer_6();
		XmlNodeInfo_t4030693883 * L_25 = V_0;
		String_t* L_26 = L_25->get_Prefix_0();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_24, L_26);
		TextWriter_t3478189236 * L_27 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, ((int32_t)58));
	}

IL_0103:
	{
		TextWriter_t3478189236 * L_28 = __this->get_writer_6();
		XmlNodeInfo_t4030693883 * L_29 = V_0;
		String_t* L_30 = L_29->get_LocalName_1();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, L_30);
		TextWriter_t3478189236 * L_31 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_31, ((int32_t)62));
	}

IL_0121:
	{
		__this->set_state_18(4);
		int32_t L_32 = __this->get_open_count_21();
		if (L_32)
		{
			goto IL_013b;
		}
	}
	{
		__this->set_node_state_19(((int32_t)15));
	}

IL_013b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteStartAttribute_m796971626 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartAttribute_m796971626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	XmlTextWriter_t2114213153 * G_B52_0 = NULL;
	XmlTextWriter_t2114213153 * G_B51_0 = NULL;
	String_t* G_B53_0 = NULL;
	XmlTextWriter_t2114213153 * G_B53_1 = NULL;
	{
		int32_t L_0 = __this->get_state_18();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		int32_t L_1 = __this->get_state_18();
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->get_state_18();
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Exception_t * L_3 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral4158462482, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0035:
	{
		String_t* L_4 = ___prefix0;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_5;
	}

IL_0042:
	{
		V_0 = (bool)0;
		String_t* L_6 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral2829469855, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (bool)1;
		String_t* L_8 = ___prefix0;
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_10 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_10, _stringLiteral3929236445, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		___prefix0 = _stringLiteral3929236445;
	}

IL_0078:
	{
		goto IL_00ad;
	}

IL_007d:
	{
		String_t* L_12 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral3929236445, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00ab;
		}
	}
	{
		String_t* L_14 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, _stringLiteral3929236445, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_16 = ___prefix0;
		int32_t L_17 = String_get_Length_m3847582255(L_16, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 0;
	}

IL_00a9:
	{
		G_B18_0 = G_B16_0;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B18_0 = 1;
	}

IL_00ac:
	{
		V_0 = (bool)G_B18_0;
	}

IL_00ad:
	{
		bool L_18 = __this->get_namespaces_13();
		if (!L_18)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_19 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m920492651(NULL /*static, unused*/, L_19, _stringLiteral2909972470, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d4;
		}
	}
	{
		___namespaceUri2 = _stringLiteral2984480440;
		goto IL_00f3;
	}

IL_00d4:
	{
		String_t* L_21 = ___namespaceUri2;
		if (L_21)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_22 = V_0;
		if (!L_22)
		{
			goto IL_00ec;
		}
	}
	{
		___namespaceUri2 = _stringLiteral2829469855;
		goto IL_00f3;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___namespaceUri2 = L_23;
	}

IL_00f3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		String_t* L_25 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_25, _stringLiteral2829469855, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3406152438, _stringLiteral2829469855, /*hidden argument*/NULL);
		Exception_t * L_28 = XmlTextWriter_ArgumentError_m3627124320(__this, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28);
	}

IL_011f:
	{
		String_t* L_29 = ___prefix0;
		int32_t L_30 = String_get_Length_m3847582255(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_31 = ___namespaceUri2;
		int32_t L_32 = String_get_Length_m3847582255(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0162;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_33 = __this->get_nsmanager_20();
		String_t* L_34 = ___prefix0;
		String_t* L_35 = XmlNamespaceManager_LookupNamespace_m2828740952(L_33, L_34, (bool)0, /*hidden argument*/NULL);
		___namespaceUri2 = L_35;
		String_t* L_36 = ___namespaceUri2;
		if (!L_36)
		{
			goto IL_0156;
		}
	}
	{
		String_t* L_37 = ___namespaceUri2;
		int32_t L_38 = String_get_Length_m3847582255(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0162;
		}
	}

IL_0156:
	{
		Exception_t * L_39 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral1065548103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39);
	}

IL_0162:
	{
		bool L_40 = V_0;
		if (L_40)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_41 = ___namespaceUri2;
		int32_t L_42 = String_get_Length_m3847582255(L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_43 = ___prefix0;
		String_t* L_44 = ___localName1;
		String_t* L_45 = ___namespaceUri2;
		String_t* L_46 = XmlTextWriter_DetermineAttributePrefix_m2990155447(__this, L_43, L_44, L_45, /*hidden argument*/NULL);
		___prefix0 = L_46;
	}

IL_017f:
	{
		bool L_47 = __this->get_indent_attributes_31();
		if (!L_47)
		{
			goto IL_0195;
		}
	}
	{
		XmlTextWriter_WriteIndentAttribute_m3288075110(__this, /*hidden argument*/NULL);
		goto IL_01ad;
	}

IL_0195:
	{
		int32_t L_48 = __this->get_state_18();
		if (!L_48)
		{
			goto IL_01ad;
		}
	}
	{
		TextWriter_t3478189236 * L_49 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_49, ((int32_t)32));
	}

IL_01ad:
	{
		String_t* L_50 = ___prefix0;
		int32_t L_51 = String_get_Length_m3847582255(L_50, /*hidden argument*/NULL);
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_01d2;
		}
	}
	{
		TextWriter_t3478189236 * L_52 = __this->get_writer_6();
		String_t* L_53 = ___prefix0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_52, L_53);
		TextWriter_t3478189236 * L_54 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_54, ((int32_t)58));
	}

IL_01d2:
	{
		TextWriter_t3478189236 * L_55 = __this->get_writer_6();
		String_t* L_56 = ___localName1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_55, L_56);
		TextWriter_t3478189236 * L_57 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_57, ((int32_t)61));
		TextWriter_t3478189236 * L_58 = __this->get_writer_6();
		Il2CppChar L_59 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_58, L_59);
		bool L_60 = V_0;
		if (L_60)
		{
			goto IL_0212;
		}
	}
	{
		String_t* L_61 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_62 = String_op_Equality_m920492651(NULL /*static, unused*/, L_61, _stringLiteral2909972470, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_028b;
		}
	}

IL_0212:
	{
		StringWriter_t802263757 * L_63 = __this->get_preserver_7();
		if (L_63)
		{
			goto IL_022d;
		}
	}
	{
		StringWriter_t802263757 * L_64 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1244548890(L_64, /*hidden argument*/NULL);
		__this->set_preserver_7(L_64);
		goto IL_023e;
	}

IL_022d:
	{
		StringWriter_t802263757 * L_65 = __this->get_preserver_7();
		StringBuilder_t * L_66 = VirtFuncInvoker0< StringBuilder_t * >::Invoke(20 /* System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder() */, L_65);
		StringBuilder_set_Length_m1410065908(L_66, 0, /*hidden argument*/NULL);
	}

IL_023e:
	{
		StringWriter_t802263757 * L_67 = __this->get_preserver_7();
		__this->set_writer_6(L_67);
		bool L_68 = V_0;
		if (L_68)
		{
			goto IL_0263;
		}
	}
	{
		__this->set_is_preserved_xmlns_9((bool)0);
		String_t* L_69 = ___localName1;
		__this->set_preserved_name_8(L_69);
		goto IL_028b;
	}

IL_0263:
	{
		__this->set_is_preserved_xmlns_9((bool)1);
		String_t* L_70 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_71 = String_op_Equality_m920492651(NULL /*static, unused*/, L_70, _stringLiteral3929236445, /*hidden argument*/NULL);
		G_B51_0 = __this;
		if (!L_71)
		{
			G_B52_0 = __this;
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B53_0 = L_72;
		G_B53_1 = G_B51_0;
		goto IL_0286;
	}

IL_0285:
	{
		String_t* L_73 = ___localName1;
		G_B53_0 = L_73;
		G_B53_1 = G_B52_0;
	}

IL_0286:
	{
		G_B53_1->set_preserved_name_8(G_B53_0);
	}

IL_028b:
	{
		__this->set_state_18(3);
		return;
	}
}
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C"  String_t* XmlTextWriter_DetermineAttributePrefix_m2990155447 (XmlTextWriter_t2114213153 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_DetermineAttributePrefix_m2990155447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___prefix0;
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = ___ns2;
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_2);
		___prefix0 = L_3;
		String_t* L_4 = ___prefix0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = ___prefix0;
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = ___prefix0;
		return L_7;
	}

IL_002a:
	{
		V_0 = (bool)1;
		goto IL_009a;
	}

IL_0031:
	{
		XmlNamespaceManager_t418790500 * L_8 = __this->get_nsmanager_20();
		XmlNameTable_t71772148 * L_9 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(7 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_8);
		String_t* L_10 = ___prefix0;
		String_t* L_11 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_9, L_10);
		___prefix0 = L_11;
		XmlNamespaceManager_t418790500 * L_12 = __this->get_nsmanager_20();
		String_t* L_13 = ___prefix0;
		String_t* L_14 = XmlNamespaceManager_LookupNamespace_m2828740952(L_12, L_13, (bool)1, /*hidden argument*/NULL);
		V_1 = L_14;
		String_t* L_15 = V_1;
		String_t* L_16 = ___ns2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m920492651(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_18 = ___prefix0;
		return L_18;
	}

IL_0060:
	{
		String_t* L_19 = V_1;
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_20 = __this->get_nsmanager_20();
		String_t* L_21 = ___prefix0;
		String_t* L_22 = V_1;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_20, L_21, L_22);
		XmlNamespaceManager_t418790500 * L_23 = __this->get_nsmanager_20();
		String_t* L_24 = ___prefix0;
		String_t* L_25 = XmlNamespaceManager_LookupNamespace_m2828740952(L_23, L_24, (bool)1, /*hidden argument*/NULL);
		String_t* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		V_0 = (bool)1;
		XmlNamespaceManager_t418790500 * L_28 = __this->get_nsmanager_20();
		String_t* L_29 = ___prefix0;
		String_t* L_30 = V_1;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_28, L_29, L_30);
	}

IL_009a:
	{
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_32 = ___ns2;
		String_t* L_33 = XmlTextWriter_MockupPrefix_m1608841972(__this, L_32, (bool)1, /*hidden argument*/NULL);
		___prefix0 = L_33;
	}

IL_00aa:
	{
		Stack_t2329662280 * L_34 = __this->get_new_local_namespaces_23();
		String_t* L_35 = ___prefix0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_34, L_35);
		XmlNamespaceManager_t418790500 * L_36 = __this->get_nsmanager_20();
		String_t* L_37 = ___prefix0;
		String_t* L_38 = ___ns2;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_36, L_37, L_38);
		String_t* L_39 = ___prefix0;
		return L_39;
	}
}
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlTextWriter_MockupPrefix_m1608841972 (XmlTextWriter_t2114213153 * __this, String_t* ___ns0, bool ___skipLookup1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_MockupPrefix_m1608841972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___skipLookup1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_1 = ___ns0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_1);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = V_0;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0028:
	{
		V_1 = 1;
		goto IL_00b2;
	}

IL_002f:
	{
		ObjectU5BU5D_t2843939325* L_7 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		int32_t L_8 = __this->get_open_count_21();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		String_t* L_15 = StringUtil_Format_m4156193709(NULL /*static, unused*/, _stringLiteral3967258293, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		Stack_t2329662280 * L_16 = __this->get_new_local_namespaces_23();
		String_t* L_17 = V_0;
		bool L_18 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(15 /* System.Boolean System.Collections.Stack::Contains(System.Object) */, L_16, L_17);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00ae;
	}

IL_006d:
	{
		XmlNamespaceManager_t418790500 * L_19 = __this->get_nsmanager_20();
		XmlNamespaceManager_t418790500 * L_20 = __this->get_nsmanager_20();
		XmlNameTable_t71772148 * L_21 = VirtFuncInvoker0< XmlNameTable_t71772148 * >::Invoke(7 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_20);
		String_t* L_22 = V_0;
		String_t* L_23 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_21, L_22);
		String_t* L_24 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_19, L_23);
		if (!L_24)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00ae;
	}

IL_0093:
	{
		XmlNamespaceManager_t418790500 * L_25 = __this->get_nsmanager_20();
		String_t* L_26 = V_0;
		String_t* L_27 = ___ns0;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_25, L_26, L_27);
		Stack_t2329662280 * L_28 = __this->get_new_local_namespaces_23();
		String_t* L_29 = V_0;
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_28, L_29);
		String_t* L_30 = V_0;
		return L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b2:
	{
		goto IL_002f;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C"  void XmlTextWriter_WriteEndAttribute_m380495009 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEndAttribute_m380495009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t2736202052 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->get_state_18();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_StateError_m571999665(__this, _stringLiteral1135920161, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0018:
	{
		TextWriter_t3478189236 * L_2 = __this->get_writer_6();
		StringWriter_t802263757 * L_3 = __this->get_preserver_7();
		if ((!(((RuntimeObject*)(TextWriter_t3478189236 *)L_2) == ((RuntimeObject*)(StringWriter_t802263757 *)L_3))))
		{
			goto IL_02e2;
		}
	}
	{
		TextWriter_t3478189236 * L_4 = __this->get_source_5();
		__this->set_writer_6(L_4);
		StringWriter_t802263757 * L_5 = __this->get_preserver_7();
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_5);
		V_0 = L_6;
		bool L_7 = __this->get_is_preserved_xmlns_9();
		if (!L_7)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_8 = __this->get_preserved_name_8();
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_10 = V_0;
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		Exception_t * L_12 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral1168662249, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0074:
	{
		XmlNamespaceManager_t418790500 * L_13 = __this->get_nsmanager_20();
		String_t* L_14 = __this->get_preserved_name_8();
		String_t* L_15 = XmlNamespaceManager_LookupNamespace_m2828740952(L_13, L_14, (bool)0, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = __this->get_namespace_handling_25();
		if (!((int32_t)((int32_t)L_16&(int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_17 = V_1;
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}

IL_00a0:
	{
		ArrayList_t2718874744 * L_20 = __this->get_explicit_nsdecls_24();
		String_t* L_21 = __this->get_preserved_name_8();
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00b2:
	{
		int32_t L_22 = __this->get_open_count_21();
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_018c;
		}
	}
	{
		bool L_23 = __this->get_v2_33();
		if (!L_23)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_24 = __this->get_elements_22();
		int32_t L_25 = __this->get_open_count_21();
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		String_t* L_28 = L_27->get_Prefix_0();
		String_t* L_29 = __this->get_preserved_name_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Equality_m920492651(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_31 = __this->get_elements_22();
		int32_t L_32 = __this->get_open_count_21();
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		String_t* L_35 = L_34->get_NS_2();
		String_t* L_36 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_38 = __this->get_preserved_name_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2919775337, L_38, /*hidden argument*/NULL);
		XmlException_t1761730631 * L_40 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40);
	}

IL_0122:
	{
		XmlNodeInfoU5BU5D_t431163322* L_41 = __this->get_elements_22();
		int32_t L_42 = __this->get_open_count_21();
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		String_t* L_45 = L_44->get_NS_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_47 = String_op_Equality_m920492651(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_016e;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_48 = __this->get_elements_22();
		int32_t L_49 = __this->get_open_count_21();
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		String_t* L_52 = L_51->get_Prefix_0();
		String_t* L_53 = __this->get_preserved_name_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_54 = String_op_Equality_m920492651(NULL /*static, unused*/, L_52, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_018c;
	}

IL_016e:
	{
		String_t* L_55 = V_1;
		String_t* L_56 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_57 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_55, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_018c;
		}
	}
	{
		XmlNamespaceManager_t418790500 * L_58 = __this->get_nsmanager_20();
		String_t* L_59 = __this->get_preserved_name_8();
		String_t* L_60 = V_0;
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_58, L_59, L_60);
	}

IL_018c:
	{
		goto IL_02d6;
	}

IL_0191:
	{
		String_t* L_61 = __this->get_preserved_name_8();
		V_2 = L_61;
		String_t* L_62 = V_2;
		if (!L_62)
		{
			goto IL_02d6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_63 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map54_35();
		if (L_63)
		{
			goto IL_01cd;
		}
	}
	{
		Dictionary_2_t2736202052 * L_64 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_64, 2, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_3 = L_64;
		Dictionary_2_t2736202052 * L_65 = V_3;
		Dictionary_2_Add_m282647386(L_65, _stringLiteral2409271576, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_66 = V_3;
		Dictionary_2_Add_m282647386(L_66, _stringLiteral1613539661, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_67 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map54_35(L_67);
	}

IL_01cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_68 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map54_35();
		String_t* L_69 = V_2;
		bool L_70 = Dictionary_2_TryGetValue_m1013208020(L_68, L_69, (&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_70)
		{
			goto IL_02d6;
		}
	}
	{
		int32_t L_71 = V_4;
		if (!L_71)
		{
			goto IL_01f3;
		}
	}
	{
		int32_t L_72 = V_4;
		if ((((int32_t)L_72) == ((int32_t)1)))
		{
			goto IL_0219;
		}
	}
	{
		goto IL_02d6;
	}

IL_01f3:
	{
		int32_t L_73 = __this->get_open_count_21();
		if ((((int32_t)L_73) <= ((int32_t)0)))
		{
			goto IL_0214;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_74 = __this->get_elements_22();
		int32_t L_75 = __this->get_open_count_21();
		int32_t L_76 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		String_t* L_78 = V_0;
		L_77->set_XmlLang_5(L_78);
	}

IL_0214:
	{
		goto IL_02d6;
	}

IL_0219:
	{
		String_t* L_79 = V_0;
		V_5 = L_79;
		String_t* L_80 = V_5;
		if (!L_80)
		{
			goto IL_02c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_81 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map53_34();
		if (L_81)
		{
			goto IL_0252;
		}
	}
	{
		Dictionary_2_t2736202052 * L_82 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_82, 2, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_3 = L_82;
		Dictionary_2_t2736202052 * L_83 = V_3;
		Dictionary_2_Add_m282647386(L_83, _stringLiteral1948332219, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_84 = V_3;
		Dictionary_2_Add_m282647386(L_84, _stringLiteral3137061838, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_85 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map53_34(L_85);
	}

IL_0252:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		Dictionary_2_t2736202052 * L_86 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map53_34();
		String_t* L_87 = V_5;
		bool L_88 = Dictionary_2_TryGetValue_m1013208020(L_86, L_87, (&V_6), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_88)
		{
			goto IL_02c5;
		}
	}
	{
		int32_t L_89 = V_6;
		if (!L_89)
		{
			goto IL_0279;
		}
	}
	{
		int32_t L_90 = V_6;
		if ((((int32_t)L_90) == ((int32_t)1)))
		{
			goto IL_029f;
		}
	}
	{
		goto IL_02c5;
	}

IL_0279:
	{
		int32_t L_91 = __this->get_open_count_21();
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_029a;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_92 = __this->get_elements_22();
		int32_t L_93 = __this->get_open_count_21();
		int32_t L_94 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_95 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		L_95->set_XmlSpace_6(1);
	}

IL_029a:
	{
		goto IL_02d1;
	}

IL_029f:
	{
		int32_t L_96 = __this->get_open_count_21();
		if ((((int32_t)L_96) <= ((int32_t)0)))
		{
			goto IL_02c0;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_97 = __this->get_elements_22();
		int32_t L_98 = __this->get_open_count_21();
		int32_t L_99 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		L_100->set_XmlSpace_6(2);
	}

IL_02c0:
	{
		goto IL_02d1;
	}

IL_02c5:
	{
		Exception_t * L_101 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral162476857, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101);
	}

IL_02d1:
	{
		goto IL_02d6;
	}

IL_02d6:
	{
		TextWriter_t3478189236 * L_102 = __this->get_writer_6();
		String_t* L_103 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_102, L_103);
	}

IL_02e2:
	{
		TextWriter_t3478189236 * L_104 = __this->get_writer_6();
		Il2CppChar L_105 = __this->get_quote_char_32();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_104, L_105);
		__this->set_state_18(2);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C"  void XmlTextWriter_WriteComment_m3551275356 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteComment_m3551275356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral3987835854, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text0;
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = ___text0;
		String_t* L_5 = ___text0;
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		Il2CppChar L_7 = String_get_Chars_m2986988803(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_003f;
		}
	}
	{
		Exception_t * L_8 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4015390292, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_003f:
	{
		String_t* L_9 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		int32_t L_10 = StringUtil_IndexOf_m1748403443(NULL /*static, unused*/, L_9, _stringLiteral3450713987, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		Exception_t * L_11 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4102181145, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_005c:
	{
		int32_t L_12 = __this->get_state_18();
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_13 = __this->get_state_18();
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}

IL_0074:
	{
		XmlTextWriter_CloseStartElement_m3029087518(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
		XmlTextWriter_WriteIndent_m534435357(__this, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_m3589898271(__this, _stringLiteral3796264707, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_14 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_14, _stringLiteral792871693);
		TextWriter_t3478189236 * L_15 = __this->get_writer_6();
		String_t* L_16 = ___text0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t3478189236 * L_17 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_17, _stringLiteral1910992359);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C"  void XmlTextWriter_WriteProcessingInstruction_m1814082884 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteProcessingInstruction_m1814082884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text1;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Exception_t * L_3 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral3987835854, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0024:
	{
		XmlTextWriter_WriteIndent_m534435357(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_5 = XmlChar_IsName_m846619221(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		Exception_t * L_6 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral690829814, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0041:
	{
		String_t* L_7 = ___text1;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		int32_t L_8 = StringUtil_IndexOf_m1748403443(NULL /*static, unused*/, L_7, _stringLiteral3451697041, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Exception_t * L_9 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4143504235, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_005e:
	{
		String_t* L_10 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral2909972470, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_m3589898271(__this, _stringLiteral3127550563, (bool)0, L_11, (bool)0, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_12 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral3451631508);
		TextWriter_t3478189236 * L_13 = __this->get_writer_6();
		String_t* L_14 = ___name0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		TextWriter_t3478189236 * L_15 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_15, ((int32_t)32));
		TextWriter_t3478189236 * L_16 = __this->get_writer_6();
		String_t* L_17 = ___text1;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, L_17);
		TextWriter_t3478189236 * L_18 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteral3451697041);
		int32_t L_19 = __this->get_state_18();
		if (L_19)
		{
			goto IL_00cd;
		}
	}
	{
		__this->set_state_18(1);
	}

IL_00cd:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C"  void XmlTextWriter_WriteWhitespace_m1664061271 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteWhitespace_m1664061271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral3987835854, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___text0;
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		int32_t L_5 = XmlChar_IndexOfNonWhitespace_m2684163220(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		Exception_t * L_6 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral247049230, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0035:
	{
		XmlTextWriter_ShiftStateTopLevel_m3589898271(__this, _stringLiteral1557367511, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_7 = __this->get_writer_6();
		String_t* L_8 = ___text0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C"  void XmlTextWriter_WriteCData_m644505252 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCData_m644505252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___text0 = L_1;
	}

IL_000d:
	{
		XmlTextWriter_ShiftStateContent_m1491671115(__this, _stringLiteral2359536473, (bool)0, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		int32_t L_3 = StringUtil_IndexOf_m1748403443(NULL /*static, unused*/, L_2, _stringLiteral1918332503, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral2919660641, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0036:
	{
		TextWriter_t3478189236 * L_5 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral191191352);
		String_t* L_6 = ___text0;
		XmlTextWriter_WriteCheckedString_m2937191976(__this, L_6, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_7 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteral1918332503);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C"  void XmlTextWriter_WriteString_m406191177 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteString_m406191177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___text0;
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = __this->get_v2_33();
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		XmlTextWriter_ShiftStateContent_m1491671115(__this, _stringLiteral3987835886, (bool)1, /*hidden argument*/NULL);
		String_t* L_4 = ___text0;
		int32_t L_5 = __this->get_state_18();
		XmlTextWriter_WriteEscapedString_m3514294598(__this, L_4, (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C"  void XmlTextWriter_WriteEntityRef_m586114214 (XmlTextWriter_t2114213153 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEntityRef_m586114214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_m846619221(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral4206759088, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0029:
	{
		XmlTextWriter_ShiftStateContent_m1491671115(__this, _stringLiteral4078869393, (bool)1, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_5 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)38));
		TextWriter_t3478189236 * L_6 = __this->get_writer_6();
		String_t* L_7 = ___name0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_7);
		TextWriter_t3478189236 * L_8 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)59));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteQualifiedName(System.String,System.String)
extern "C"  void XmlTextWriter_WriteQualifiedName_m4062577663 (XmlTextWriter_t2114213153 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteQualifiedName_m4062577663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B11_0 = NULL;
	{
		String_t* L_0 = ___localName0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral2412661638, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		String_t* L_2 = ___ns1;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___ns1 = L_3;
	}

IL_001f:
	{
		String_t* L_4 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral2829469855, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		Exception_t * L_6 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral1680511121, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_003b:
	{
		String_t* L_7 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_8 = XmlChar_IsNCName_m2365231717(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		Exception_t * L_9 = XmlTextWriter_ArgumentError_m3627124320(__this, _stringLiteral2951695234, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0052:
	{
		XmlTextWriter_ShiftStateContent_m1491671115(__this, _stringLiteral2799480295, (bool)1, /*hidden argument*/NULL);
		String_t* L_10 = ___ns1;
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_12 = ___ns1;
		String_t* L_13 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_12);
		G_B11_0 = L_13;
		goto IL_007b;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B11_0 = L_14;
	}

IL_007b:
	{
		V_0 = G_B11_0;
		String_t* L_15 = V_0;
		if (L_15)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_16 = __this->get_state_18();
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_009c;
		}
	}
	{
		String_t* L_17 = ___ns1;
		String_t* L_18 = XmlTextWriter_MockupPrefix_m1608841972(__this, L_17, (bool)0, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_00ae;
	}

IL_009c:
	{
		String_t* L_19 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2384487702, L_19, /*hidden argument*/NULL);
		Exception_t * L_21 = XmlTextWriter_ArgumentError_m3627124320(__this, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21);
	}

IL_00ae:
	{
		String_t* L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_24 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00da;
		}
	}
	{
		TextWriter_t3478189236 * L_25 = __this->get_writer_6();
		String_t* L_26 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_25, L_26);
		TextWriter_t3478189236 * L_27 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_27, _stringLiteral3452614550);
	}

IL_00da:
	{
		TextWriter_t3478189236 * L_28 = __this->get_writer_6();
		String_t* L_29 = ___localName0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, L_29);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C"  void XmlTextWriter_WriteIndent_m534435357 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteIndentCore_m729468996(__this, 0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C"  void XmlTextWriter_WriteIndentEndElement_m1797366262 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteIndentCore_m729468996(__this, (-1), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C"  void XmlTextWriter_WriteIndentAttribute_m3288075110 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = XmlTextWriter_WriteIndentCore_m729468996(__this, 0, (bool)1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		TextWriter_t3478189236 * L_1 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)32));
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C"  bool XmlTextWriter_WriteIndentCore_m729468996 (XmlTextWriter_t2114213153 * __this, int32_t ___nestFix0, bool ___attribute1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_indent_26();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		int32_t L_1 = __this->get_open_count_21();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0039;
	}

IL_001b:
	{
		bool L_2 = ___attribute1;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_3 = __this->get_elements_22();
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		XmlNodeInfo_t4030693883 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7 = L_6->get_HasSimple_3();
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_10 = __this->get_state_18();
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t3478189236 * L_11 = __this->get_writer_6();
		String_t* L_12 = __this->get_newline_30();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_12);
	}

IL_005c:
	{
		V_1 = 0;
		goto IL_0078;
	}

IL_0063:
	{
		TextWriter_t3478189236 * L_13 = __this->get_writer_6();
		String_t* L_14 = __this->get_indent_string_29();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_open_count_21();
		int32_t L_18 = ___nestFix0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)))))
		{
			goto IL_0063;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C"  void XmlTextWriter_OutputAutoStartDocument_m96032915 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_state_18();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		XmlTextWriter_WriteStartDocumentCore_m3985718073(__this, (bool)0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateTopLevel_m3589898271 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, bool ___allowAttribute1, bool ___dontCheckXmlDecl2, bool ___isCharacter3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_18();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00a1;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_008f;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured0;
		Exception_t * L_3 = XmlTextWriter_StateError_m571999665(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0036:
	{
		bool L_4 = ___isCharacter3;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_5 = __this->get_xmldecl_state_14();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		bool L_6 = ___dontCheckXmlDecl2;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m96032915(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		__this->set_state_18(1);
		goto IL_00a1;
	}

IL_0067:
	{
		bool L_7 = ___allowAttribute1;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		goto IL_00a1;
	}

IL_0072:
	{
		goto IL_002e;
	}

IL_0077:
	{
		bool L_8 = ___isCharacter3;
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		XmlTextWriter_CloseStartElement_m3029087518(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008f:
	{
		bool L_9 = ___isCharacter3;
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
	}

IL_009c:
	{
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C"  void XmlTextWriter_CheckMixedContentState_m804091766 (XmlTextWriter_t2114213153 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_open_count_21();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		XmlNodeInfoU5BU5D_t431163322* L_1 = __this->get_elements_22();
		int32_t L_2 = __this->get_open_count_21();
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_t4030693883 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		L_4->set_HasSimple_3((bool)1);
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateContent_m1491671115 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, bool ___allowAttribute1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_18();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0085;
			}
			case 3:
			{
				goto IL_0075;
			}
			case 4:
			{
				goto IL_0096;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured0;
		Exception_t * L_3 = XmlTextWriter_StateError_m571999665(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0036:
	{
		bool L_4 = __this->get_allow_doc_fragment_10();
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->get_is_document_entity_17();
		if (!L_5)
		{
			goto IL_0051;
		}
	}

IL_004c:
	{
		goto IL_002e;
	}

IL_0051:
	{
		int32_t L_6 = __this->get_xmldecl_state_14();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0063;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_m96032915(__this, /*hidden argument*/NULL);
	}

IL_0063:
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
		__this->set_state_18(4);
		goto IL_00a1;
	}

IL_0075:
	{
		bool L_7 = ___allowAttribute1;
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00a1;
	}

IL_0080:
	{
		goto IL_002e;
	}

IL_0085:
	{
		XmlTextWriter_CloseStartElement_m3029087518(__this, /*hidden argument*/NULL);
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0096:
	{
		XmlTextWriter_CheckMixedContentState_m804091766(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedString_m3514294598 (XmlTextWriter_t2114213153 * __this, String_t* ___text0, bool ___isAttribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEscapedString_m3514294598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	CharU5BU5D_t3528271667* V_2 = NULL;
	CharU5BU5D_t3528271667* G_B3_0 = NULL;
	{
		bool L_0 = ___isAttribute1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_1 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_escaped_attr_chars_3();
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var);
		CharU5BU5D_t3528271667* L_2 = ((XmlTextWriter_t2114213153_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_t2114213153_il2cpp_TypeInfo_var))->get_escaped_text_chars_2();
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		String_t* L_3 = ___text0;
		CharU5BU5D_t3528271667* L_4 = V_0;
		int32_t L_5 = String_IndexOfAny_m4159774896(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_7 = ___text0;
		CharU5BU5D_t3528271667* L_8 = String_ToCharArray_m1492846834(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		CharU5BU5D_t3528271667* L_9 = V_2;
		int32_t L_10 = V_1;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_9, 0, L_10, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_11 = V_2;
		int32_t L_12 = V_1;
		CharU5BU5D_t3528271667* L_13 = V_2;
		int32_t L_14 = V_1;
		bool L_15 = ___isAttribute1;
		XmlTextWriter_WriteEscapedBuffer_m903990798(__this, L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (int32_t)L_14)), L_15, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0048:
	{
		String_t* L_16 = ___text0;
		XmlTextWriter_WriteCheckedString_m2937191976(__this, L_16, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C"  void XmlTextWriter_WriteCheckedString_m2937191976 (XmlTextWriter_t2114213153 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCheckedString_m2937191976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t3528271667* V_1 = NULL;
	{
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		int32_t L_1 = XmlChar_IndexOfInvalid_m478649474(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_3 = ___s0;
		CharU5BU5D_t3528271667* L_4 = String_ToCharArray_m1492846834(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		TextWriter_t3478189236 * L_5 = __this->get_writer_6();
		CharU5BU5D_t3528271667* L_6 = V_1;
		int32_t L_7 = V_0;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		CharU5BU5D_t3528271667* L_8 = V_1;
		int32_t L_9 = V_0;
		CharU5BU5D_t3528271667* L_10 = V_1;
		int32_t L_11 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_8, L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), (int32_t)L_11)), /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0036:
	{
		TextWriter_t3478189236 * L_12 = __this->get_writer_6();
		String_t* L_13 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_13);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C"  void XmlTextWriter_WriteCheckedBuffer_m275259173 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___idx1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCheckedBuffer_m275259173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___idx1;
		V_0 = L_0;
		int32_t L_1 = ___idx1;
		int32_t L_2 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		goto IL_0096;
	}

IL_000b:
	{
		bool L_3 = __this->get_check_character_validity_15();
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = ___idx1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		CharU5BU5D_t3528271667* L_7 = ___text0;
		int32_t L_8 = ___idx1;
		int32_t L_9 = L_8;
		uint16_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ((int32_t)L_10);
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3560330814, L_6, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = XmlTextWriter_ArgumentError_m3627124320(__this, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_0035:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___idx1;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_t3478189236 * L_17 = __this->get_writer_6();
		CharU5BU5D_t3528271667* L_18 = ___text0;
		int32_t L_19 = V_0;
		int32_t L_20 = ___idx1;
		int32_t L_21 = V_0;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_17, L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)));
	}

IL_004c:
	{
		TextWriter_t3478189236 * L_22 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, _stringLiteral4162292604);
		TextWriter_t3478189236 * L_23 = __this->get_writer_6();
		CharU5BU5D_t3528271667* L_24 = ___text0;
		int32_t L_25 = ___idx1;
		int32_t L_26 = L_25;
		uint16_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_2 = L_27;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_28 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Int32_ToString_m2507389746((&V_2), _stringLiteral3452614648, L_28, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_29);
		TextWriter_t3478189236 * L_30 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_30, ((int32_t)59));
		int32_t L_31 = ___length2;
		int32_t L_32 = ___idx1;
		int32_t L_33 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)1))));
		int32_t L_34 = ___idx1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0096:
	{
		CharU5BU5D_t3528271667* L_35 = ___text0;
		int32_t L_36 = V_0;
		int32_t L_37 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		int32_t L_38 = XmlChar_IndexOfInvalid_m211553919(NULL /*static, unused*/, L_35, L_36, L_37, (bool)1, /*hidden argument*/NULL);
		int32_t L_39 = L_38;
		___idx1 = L_39;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_00bf;
		}
	}
	{
		TextWriter_t3478189236 * L_42 = __this->get_writer_6();
		CharU5BU5D_t3528271667* L_43 = ___text0;
		int32_t L_44 = V_0;
		int32_t L_45 = V_1;
		int32_t L_46 = V_0;
		VirtActionInvoker3< CharU5BU5D_t3528271667*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_42, L_43, L_44, ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)));
	}

IL_00bf:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedBuffer_m903990798 (XmlTextWriter_t2114213153 * __this, CharU5BU5D_t3528271667* ___text0, int32_t ___index1, int32_t ___length2, bool ___isAttribute3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEscapedBuffer_m903990798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	TextWriter_t3478189236 * G_B30_0 = NULL;
	TextWriter_t3478189236 * G_B29_0 = NULL;
	String_t* G_B31_0 = NULL;
	TextWriter_t3478189236 * G_B31_1 = NULL;
	TextWriter_t3478189236 * G_B37_0 = NULL;
	TextWriter_t3478189236 * G_B36_0 = NULL;
	String_t* G_B38_0 = NULL;
	TextWriter_t3478189236 * G_B38_1 = NULL;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_0;
		V_2 = L_3;
		goto IL_0231;
	}

IL_000d:
	{
		CharU5BU5D_t3528271667* L_4 = ___text0;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Il2CppChar L_8 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_0139;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_006a;
			}
			case 5:
			{
				goto IL_0139;
			}
		}
	}

IL_0032:
	{
		Il2CppChar L_9 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0174;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0158;
			}
		}
	}

IL_004b:
	{
		Il2CppChar L_10 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)60))))
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_022d;
	}

IL_006a:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_007c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_13 = ___text0;
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_13, L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), /*hidden argument*/NULL);
	}

IL_007c:
	{
		TextWriter_t3478189236 * L_17 = __this->get_writer_6();
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)38));
		CharU5BU5D_t3528271667* L_18 = ___text0;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		uint16_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		Il2CppChar L_22 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_011f;
			}
			case 1:
			{
				goto IL_00b0;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_00b0;
			}
			case 4:
			{
				goto IL_00cb;
			}
			case 5:
			{
				goto IL_010a;
			}
		}
	}

IL_00b0:
	{
		Il2CppChar L_23 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)60))))
		{
			case 0:
			{
				goto IL_00e0;
			}
			case 1:
			{
				goto IL_0134;
			}
			case 2:
			{
				goto IL_00f5;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_00cb:
	{
		TextWriter_t3478189236 * L_24 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_24, _stringLiteral272773273);
		goto IL_0134;
	}

IL_00e0:
	{
		TextWriter_t3478189236 * L_25 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_25, _stringLiteral2319061079);
		goto IL_0134;
	}

IL_00f5:
	{
		TextWriter_t3478189236 * L_26 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_26, _stringLiteral2319061068);
		goto IL_0134;
	}

IL_010a:
	{
		TextWriter_t3478189236 * L_27 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_27, _stringLiteral3509435951);
		goto IL_0134;
	}

IL_011f:
	{
		TextWriter_t3478189236 * L_28 = __this->get_writer_6();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, _stringLiteral1159970975);
		goto IL_0134;
	}

IL_0134:
	{
		goto IL_0229;
	}

IL_0139:
	{
		bool L_29 = ___isAttribute3;
		if (!L_29)
		{
			goto IL_0153;
		}
	}
	{
		CharU5BU5D_t3528271667* L_30 = ___text0;
		int32_t L_31 = V_2;
		int32_t L_32 = L_31;
		uint16_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Il2CppChar L_34 = __this->get_quote_char_32();
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0153;
		}
	}
	{
		goto IL_006a;
	}

IL_0153:
	{
		goto IL_022d;
	}

IL_0158:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))) >= ((int32_t)L_36)))
		{
			goto IL_016f;
		}
	}
	{
		CharU5BU5D_t3528271667* L_37 = ___text0;
		int32_t L_38 = V_2;
		int32_t L_39 = L_38;
		uint16_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_016f:
	{
		goto IL_0174;
	}

IL_0174:
	{
		int32_t L_42 = V_0;
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) >= ((int32_t)L_43)))
		{
			goto IL_0186;
		}
	}
	{
		CharU5BU5D_t3528271667* L_44 = ___text0;
		int32_t L_45 = V_0;
		int32_t L_46 = V_2;
		int32_t L_47 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_44, L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
	}

IL_0186:
	{
		bool L_48 = ___isAttribute3;
		if (!L_48)
		{
			goto IL_01b6;
		}
	}
	{
		TextWriter_t3478189236 * L_49 = __this->get_writer_6();
		CharU5BU5D_t3528271667* L_50 = ___text0;
		int32_t L_51 = V_2;
		int32_t L_52 = L_51;
		uint16_t L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		G_B29_0 = L_49;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)13)))))
		{
			G_B30_0 = L_49;
			goto IL_01a7;
		}
	}
	{
		G_B31_0 = _stringLiteral1415199655;
		G_B31_1 = G_B29_0;
		goto IL_01ac;
	}

IL_01a7:
	{
		G_B31_0 = _stringLiteral4136188839;
		G_B31_1 = G_B30_0;
	}

IL_01ac:
	{
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B31_1, G_B31_0);
		goto IL_0229;
	}

IL_01b6:
	{
		int32_t L_54 = __this->get_newline_handling_16();
		V_5 = L_54;
		int32_t L_55 = V_5;
		if (!L_55)
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) == ((int32_t)1)))
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_0211;
	}

IL_01d2:
	{
		TextWriter_t3478189236 * L_57 = __this->get_writer_6();
		CharU5BU5D_t3528271667* L_58 = ___text0;
		int32_t L_59 = V_2;
		int32_t L_60 = L_59;
		uint16_t L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		G_B36_0 = L_57;
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)13)))))
		{
			G_B37_0 = L_57;
			goto IL_01ec;
		}
	}
	{
		G_B38_0 = _stringLiteral1415199655;
		G_B38_1 = G_B36_0;
		goto IL_01f1;
	}

IL_01ec:
	{
		G_B38_0 = _stringLiteral4136188839;
		G_B38_1 = G_B37_0;
	}

IL_01f1:
	{
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B38_1, G_B38_0);
		goto IL_0224;
	}

IL_01fb:
	{
		TextWriter_t3478189236 * L_62 = __this->get_writer_6();
		String_t* L_63 = __this->get_newline_30();
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_62, L_63);
		goto IL_0224;
	}

IL_0211:
	{
		TextWriter_t3478189236 * L_64 = __this->get_writer_6();
		CharU5BU5D_t3528271667* L_65 = ___text0;
		int32_t L_66 = V_2;
		int32_t L_67 = L_66;
		uint16_t L_68 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_64, L_68);
		goto IL_0224;
	}

IL_0224:
	{
		goto IL_0229;
	}

IL_0229:
	{
		int32_t L_69 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_022d:
	{
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0231:
	{
		int32_t L_71 = V_2;
		int32_t L_72 = V_1;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_73 = V_0;
		int32_t L_74 = V_1;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_024a;
		}
	}
	{
		CharU5BU5D_t3528271667* L_75 = ___text0;
		int32_t L_76 = V_0;
		int32_t L_77 = V_1;
		int32_t L_78 = V_0;
		XmlTextWriter_WriteCheckedBuffer_m275259173(__this, L_75, L_76, ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)L_78)), /*hidden argument*/NULL);
	}

IL_024a:
	{
		return;
	}
}
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C"  Exception_t * XmlTextWriter_ArgumentError_m3627124320 (XmlTextWriter_t2114213153 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_ArgumentError_m3627124320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_state_18(6);
		String_t* L_0 = ___msg0;
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C"  Exception_t * XmlTextWriter_InvalidOperation_m988191293 (XmlTextWriter_t2114213153 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_InvalidOperation_m988191293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_state_18(6);
		String_t* L_0 = ___msg0;
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C"  Exception_t * XmlTextWriter_StateError_m571999665 (XmlTextWriter_t2114213153 * __this, String_t* ___occured0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_StateError_m571999665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___occured0;
		int32_t L_1 = __this->get_state_18();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(WriteState_t3983380671_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral592849640, L_0, L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = XmlTextWriter_InvalidOperation_m988191293(__this, L_4, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlTextWriter/StringUtil::.cctor()
extern "C"  void StringUtil__cctor_m1463895374 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil__cctor_m1463895374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->set_cul_0(L_0);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		CompareInfo_t1092934962 * L_2 = VirtFuncInvoker0< CompareInfo_t1092934962 * >::Invoke(11 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_1);
		((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->set_cmp_1(L_2);
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern "C"  int32_t StringUtil_IndexOf_m1748403443 (RuntimeObject * __this /* static, unused */, String_t* ___src0, String_t* ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_IndexOf_m1748403443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		CompareInfo_t1092934962 * L_0 = ((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->get_cmp_1();
		String_t* L_1 = ___src0;
		String_t* L_2 = ___target1;
		int32_t L_3 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(9 /* System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern "C"  String_t* StringUtil_Format_m4156193709 (RuntimeObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_Format_m4156193709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t564231417_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = ((StringUtil_t564231417_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t564231417_il2cpp_TypeInfo_var))->get_cul_0();
		String_t* L_1 = ___format0;
		ObjectU5BU5D_t2843939325* L_2 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m1881875187(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
extern "C"  void XmlNodeInfo__ctor_m1232608472 (XmlNodeInfo_t4030693883 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m1338399436 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method)
{
	{
		XmlResolver__ctor_m2276492248(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C"  RuntimeObject * XmlUrlResolver_GetEntity_m2245402732 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntity_m2245402732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebRequest_t1939381076 * V_0 = NULL;
	{
		Type_t * L_0 = ___ofObjectToReturn2;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___ofObjectToReturn2 = L_2;
	}

IL_0012:
	{
		Type_t * L_3 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (Stream_t1273022909_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		XmlException_t1761730631 * L_6 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_6, _stringLiteral109070372, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_002d:
	{
		Uri_t100236324 * L_7 = ___absoluteUri0;
		bool L_8 = Uri_get_IsAbsoluteUri_m3666899587(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_9, _stringLiteral3264822601, _stringLiteral1705633010, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0048:
	{
		Uri_t100236324 * L_10 = ___absoluteUri0;
		String_t* L_11 = Uri_get_Scheme_m2109479391(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral1629333464, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0097;
		}
	}
	{
		Uri_t100236324 * L_13 = ___absoluteUri0;
		String_t* L_14 = Uri_get_AbsolutePath_m590948575(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_16 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		ArgumentException_t132251570 * L_17 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_17, _stringLiteral3264822601, _stringLiteral1705633010, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0082:
	{
		Uri_t100236324 * L_18 = ___absoluteUri0;
		String_t* L_19 = Uri_get_LocalPath_m2837234216(L_18, /*hidden argument*/NULL);
		String_t* L_20 = XmlUrlResolver_UnescapeRelativeUriBody_m2976662118(__this, L_19, /*hidden argument*/NULL);
		FileStream_t4292183065 * L_21 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
		FileStream__ctor_m2889718780(L_21, L_20, 3, 1, 1, /*hidden argument*/NULL);
		return L_21;
	}

IL_0097:
	{
		Uri_t100236324 * L_22 = ___absoluteUri0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t1939381076_il2cpp_TypeInfo_var);
		WebRequest_t1939381076 * L_23 = WebRequest_Create_m2603246108(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		RuntimeObject* L_24 = __this->get_credential_0();
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		WebRequest_t1939381076 * L_25 = V_0;
		RuntimeObject* L_26 = __this->get_credential_0();
		VirtActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials) */, L_25, L_26);
	}

IL_00b5:
	{
		WebRequest_t1939381076 * L_27 = V_0;
		WebResponse_t229922639 * L_28 = VirtFuncInvoker0< WebResponse_t229922639 * >::Invoke(17 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_27);
		Stream_t1273022909 * L_29 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(10 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_28);
		return L_29;
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t100236324 * XmlUrlResolver_ResolveUri_m3714454862 (XmlUrlResolver_t817895037 * __this, Uri_t100236324 * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___baseUri0;
		String_t* L_1 = ___relativeUri1;
		Uri_t100236324 * L_2 = XmlResolver_ResolveUri_m3051172150(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m2976662118 (XmlUrlResolver_t817895037 * __this, String_t* ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_UnescapeRelativeUriBody_m2976662118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___src0;
		String_t* L_1 = String_Replace_m1273907647(L_0, _stringLiteral3403826294, _stringLiteral3452614548, /*hidden argument*/NULL);
		String_t* L_2 = String_Replace_m1273907647(L_1, _stringLiteral271658412, _stringLiteral3452614546, /*hidden argument*/NULL);
		String_t* L_3 = String_Replace_m1273907647(L_2, _stringLiteral2671228134, _stringLiteral3452614525, /*hidden argument*/NULL);
		String_t* L_4 = String_Replace_m1273907647(L_3, _stringLiteral4237312075, _stringLiteral3452614526, /*hidden argument*/NULL);
		String_t* L_5 = String_Replace_m1273907647(L_4, _stringLiteral3074512661, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_6 = String_Replace_m1273907647(L_5, _stringLiteral3834027548, _stringLiteral3452614523, /*hidden argument*/NULL);
		return L_6;
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
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlWhitespace__ctor_m949230574 (XmlWhitespace_t131741354 * __this, String_t* ___strData0, XmlDocument_t2837193595 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t2837193595 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3935345337(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C"  String_t* XmlWhitespace_get_LocalName_m4124641324 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_LocalName_m4124641324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1653520728;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C"  String_t* XmlWhitespace_get_Name_m3062444240 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_Name_m3062444240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1653520728;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C"  int32_t XmlWhitespace_get_NodeType_m4071479963 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C"  String_t* XmlWhitespace_get_Value_m3008068225 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(38 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern "C"  void XmlWhitespace_set_Value_m1380309567 (XmlWhitespace_t131741354 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_set_Value_m1380309567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t3816087079_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m2421104119(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3922471879, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0016:
	{
		String_t* L_3 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(39 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_3);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C"  XmlNode_t3767805227 * XmlWhitespace_get_ParentNode_m3161215339 (XmlWhitespace_t131741354 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t3767805227 * L_0 = XmlNode_get_ParentNode_m3304904414(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern "C"  XmlNode_t3767805227 * XmlWhitespace_CloneNode_m2585972626 (XmlWhitespace_t131741354 * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_CloneNode_m2585972626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(38 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t2837193595 * L_1 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(20 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlWhitespace_t131741354 * L_2 = (XmlWhitespace_t131741354 *)il2cpp_codegen_object_new(XmlWhitespace_t131741354_il2cpp_TypeInfo_var);
		XmlWhitespace__ctor_m949230574(L_2, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2782267819 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C"  void XmlWriter_System_IDisposable_Dispose_m1610106051 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings()
extern "C"  XmlWriterSettings_t3314986516 * XmlWriter_get_Settings_m164933578 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_get_Settings_m164933578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriterSettings_t3314986516 * L_0 = __this->get_settings_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlWriterSettings_t3314986516 * L_1 = (XmlWriterSettings_t3314986516 *)il2cpp_codegen_object_new(XmlWriterSettings_t3314986516_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_m2465852079(L_1, /*hidden argument*/NULL);
		__this->set_settings_0(L_1);
	}

IL_0016:
	{
		XmlWriterSettings_t3314986516 * L_2 = __this->get_settings_0();
		return L_2;
	}
}
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C"  String_t* XmlWriter_get_XmlLang_m3841313567 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C"  int32_t XmlWriter_get_XmlSpace_m866999307 (XmlWriter_t127905479 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C"  void XmlWriter_Dispose_m3961600049 (XmlWriter_t127905479 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlWriter::Close() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m3614493714 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = ___defattr1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_t3121518892 * L_1 = ___reader0;
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		XmlReader_t3121518892 * L_3 = ___reader0;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		XmlReader_t3121518892 * L_5 = ___reader0;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
		XmlReader_t3121518892 * L_7 = ___reader0;
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_4, L_6, L_8);
		goto IL_0071;
	}

IL_002f:
	{
		XmlReader_t3121518892 * L_9 = ___reader0;
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)3)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0071;
	}

IL_004f:
	{
		XmlReader_t3121518892 * L_12 = ___reader0;
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_13);
		goto IL_0071;
	}

IL_0060:
	{
		XmlReader_t3121518892 * L_14 = ___reader0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_15);
		goto IL_0071;
	}

IL_0071:
	{
		XmlReader_t3121518892 * L_16 = ___reader0;
		bool L_17 = VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_16);
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m3906092358 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteAttributeString_m3906092358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_1 = ___localName0;
		String_t* L_2 = ___value1;
		XmlWriter_WriteAttributeString_m2341773285(__this, L_0, L_1, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m2341773285 (XmlWriter_t127905479 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___ns2;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_0, L_1, L_2);
		String_t* L_3 = ___value3;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = ___value3;
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = ___value3;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_6);
	}

IL_0025:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C"  void XmlWriter_WriteElementString_m1817387795 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		XmlWriter_WriteStartElement_m3748634885(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___value1;
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___value1;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_4);
	}

IL_0020:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String)
extern "C"  void XmlWriter_WriteQualifiedName_m434158451 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		XmlWriter_WriteQualifiedNameInternal_m2017981185(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteQualifiedNameInternal(System.String,System.String)
extern "C"  void XmlWriter_WriteQualifiedNameInternal_m2017981185 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteQualifiedNameInternal_m2017981185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B12_0 = NULL;
	{
		String_t* L_0 = ___localName0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_001c:
	{
		String_t* L_5 = ___ns1;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___ns1 = L_6;
	}

IL_0029:
	{
		XmlWriterSettings_t3314986516 * L_7 = VirtFuncInvoker0< XmlWriterSettings_t3314986516 * >::Invoke(5 /* System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings() */, __this);
		int32_t L_8 = XmlWriterSettings_get_ConformanceLevel_m2619815559(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0054;
	}

IL_0048:
	{
		String_t* L_11 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1981561327_il2cpp_TypeInfo_var);
		XmlConvert_VerifyNCName_m3085528481(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_0054:
	{
		String_t* L_12 = ___ns1;
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_14 = ___ns1;
		String_t* L_15 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlWriter::LookupPrefix(System.String) */, __this, L_14);
		G_B12_0 = L_15;
		goto IL_0071;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B12_0 = L_16;
	}

IL_0071:
	{
		V_0 = G_B12_0;
		String_t* L_17 = V_0;
		if (L_17)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_18 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2384487702, L_18, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_20 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20);
	}

IL_0089:
	{
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_23 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_24 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_24);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, _stringLiteral3452614550);
		String_t* L_25 = ___localName0;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_25);
		goto IL_00be;
	}

IL_00b7:
	{
		String_t* L_26 = ___localName0;
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_26);
	}

IL_00be:
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteNode_m263666930 (XmlWriter_t127905479 * __this, XmlReader_t3121518892 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteNode_m263666930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XmlReader_t3121518892 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000c:
	{
		XmlReader_t3121518892 * L_2 = ___reader0;
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_t3121518892 * L_4 = ___reader0;
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001e:
	{
		XmlReader_t3121518892 * L_5 = ___reader0;
		bool L_6 = ___defattr1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_5, L_6);
		XmlReader_t3121518892 * L_7 = ___reader0;
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_7);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0032:
	{
		XmlReader_t3121518892 * L_9 = ___reader0;
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_01db;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_012c;
			}
			case 3:
			{
				goto IL_012d;
			}
			case 4:
			{
				goto IL_013e;
			}
			case 5:
			{
				goto IL_014f;
			}
			case 6:
			{
				goto IL_01e0;
			}
			case 7:
			{
				goto IL_0160;
			}
			case 8:
			{
				goto IL_0177;
			}
			case 9:
			{
				goto IL_01e0;
			}
			case 10:
			{
				goto IL_0188;
			}
			case 11:
			{
				goto IL_01e0;
			}
			case 12:
			{
				goto IL_01e0;
			}
			case 13:
			{
				goto IL_01ba;
			}
			case 14:
			{
				goto IL_01b5;
			}
			case 15:
			{
				goto IL_01cb;
			}
			case 16:
			{
				goto IL_01d6;
			}
			case 17:
			{
				goto IL_0160;
			}
		}
	}
	{
		goto IL_01e0;
	}

IL_008c:
	{
		XmlReader_t3121518892 * L_12 = ___reader0;
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlReader_t3121518892 * L_14 = ___reader0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		XmlReader_t3121518892 * L_16 = ___reader0;
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_13, L_15, L_17);
		XmlReader_t3121518892 * L_18 = ___reader0;
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_18);
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = 0;
		goto IL_00c9;
	}

IL_00b6:
	{
		XmlReader_t3121518892 * L_20 = ___reader0;
		int32_t L_21 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(33 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_20, L_21);
		XmlReader_t3121518892 * L_22 = ___reader0;
		bool L_23 = ___defattr1;
		XmlWriter_WriteAttribute_m3614493714(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_0;
		XmlReader_t3121518892 * L_26 = ___reader0;
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		XmlReader_t3121518892 * L_28 = ___reader0;
		VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_28);
	}

IL_00dc:
	{
		XmlReader_t3121518892 * L_29 = ___reader0;
		bool L_30 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_29);
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0127;
	}

IL_00f2:
	{
		XmlReader_t3121518892 * L_31 = ___reader0;
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		V_1 = L_32;
		XmlReader_t3121518892 * L_33 = ___reader0;
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_33);
		XmlReader_t3121518892 * L_34 = ___reader0;
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)15))))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		XmlReader_t3121518892 * L_36 = ___reader0;
		bool L_37 = ___defattr1;
		VirtActionInvoker2< XmlReader_t3121518892 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_36, L_37);
		int32_t L_38 = V_1;
		XmlReader_t3121518892 * L_39 = ___reader0;
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010d;
		}
	}

IL_0121:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0127:
	{
		goto IL_0218;
	}

IL_012c:
	{
		return;
	}

IL_012d:
	{
		XmlReader_t3121518892 * L_41 = ___reader0;
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		VirtActionInvoker1< String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_42);
		goto IL_0218;
	}

IL_013e:
	{
		XmlReader_t3121518892 * L_43 = ___reader0;
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_44);
		goto IL_0218;
	}

IL_014f:
	{
		XmlReader_t3121518892 * L_45 = ___reader0;
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_45);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_46);
		goto IL_0218;
	}

IL_0160:
	{
		XmlReader_t3121518892 * L_47 = ___reader0;
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_47);
		XmlReader_t3121518892 * L_49 = ___reader0;
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_48, L_50);
		goto IL_0218;
	}

IL_0177:
	{
		XmlReader_t3121518892 * L_51 = ___reader0;
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_51);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_52);
		goto IL_0218;
	}

IL_0188:
	{
		XmlReader_t3121518892 * L_53 = ___reader0;
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_53);
		XmlReader_t3121518892 * L_55 = ___reader0;
		String_t* L_56 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_55, _stringLiteral3984887517);
		XmlReader_t3121518892 * L_57 = ___reader0;
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_57, _stringLiteral3261774195);
		XmlReader_t3121518892 * L_59 = ___reader0;
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_54, L_56, L_58, L_60);
		goto IL_0218;
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		XmlReader_t3121518892 * L_61 = ___reader0;
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_62);
		goto IL_0218;
	}

IL_01cb:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
		goto IL_0218;
	}

IL_01d6:
	{
		goto IL_0218;
	}

IL_01db:
	{
		goto IL_0218;
	}

IL_01e0:
	{
		ObjectU5BU5D_t2843939325* L_63 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_63, _stringLiteral1152083996);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1152083996);
		ObjectU5BU5D_t2843939325* L_64 = L_63;
		XmlReader_t3121518892 * L_65 = ___reader0;
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_65);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_66);
		ObjectU5BU5D_t2843939325* L_67 = L_64;
		ArrayElementTypeCheck (L_67, _stringLiteral3442940761);
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3442940761);
		ObjectU5BU5D_t2843939325* L_68 = L_67;
		XmlReader_t3121518892 * L_69 = ___reader0;
		int32_t L_70 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_69);
		int32_t L_71 = L_70;
		RuntimeObject * L_72 = Box(XmlNodeType_t1672767151_il2cpp_TypeInfo_var, &L_71);
		ArrayElementTypeCheck (L_68, L_72);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_72);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m2971454694(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		XmlException_t1761730631 * L_74 = (XmlException_t1761730631 *)il2cpp_codegen_object_new(XmlException_t1761730631_il2cpp_TypeInfo_var);
		XmlException__ctor_m3751204500(L_74, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74);
	}

IL_0218:
	{
		XmlReader_t3121518892 * L_75 = ___reader0;
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_75);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String)
extern "C"  void XmlWriter_WriteStartAttribute_m2509241395 (XmlWriter_t127905479 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C"  void XmlWriter_WriteStartElement_m3748634885 (XmlWriter_t127905479 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, (String_t*)NULL);
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
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C"  void XmlWriterSettings__ctor_m2465852079 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlWriterSettings_Reset_m4105849431(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriterSettings::Reset()
extern "C"  void XmlWriterSettings_Reset_m4105849431 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriterSettings_Reset_m4105849431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_checkCharacters_0((bool)1);
		__this->set_closeOutput_1((bool)0);
		__this->set_conformance_2(2);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_encoding_3(L_0);
		__this->set_indent_4((bool)0);
		__this->set_indentChars_5(_stringLiteral3450517376);
		String_t* L_1 = Environment_get_NewLine_m3211016485(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_newLineChars_6(L_1);
		__this->set_newLineOnAttributes_7((bool)0);
		__this->set_newLineHandling_8(2);
		__this->set_omitXmlDeclaration_9((bool)0);
		__this->set_outputMethod_10(3);
		return;
	}
}
// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::get_ConformanceLevel()
extern "C"  int32_t XmlWriterSettings_get_ConformanceLevel_m2619815559 (XmlWriterSettings_t3314986516 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_conformance_2();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
