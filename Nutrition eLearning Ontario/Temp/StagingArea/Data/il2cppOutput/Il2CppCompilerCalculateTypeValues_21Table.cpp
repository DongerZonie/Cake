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


// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t1734486485;
// System.Data.DataSet
struct DataSet_t3773542243;
// System.Data.UniqueConstraint
struct UniqueConstraint_t841719017;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3489911826;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3317819609;
// System.Data.PropertyCollection
struct PropertyCollection_t3446977085;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.Data.Common.Index
struct Index_t4155063583;
// System.Data.ConstraintCollection
struct ConstraintCollection_t259828334;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3122106530;
// System.Type
struct Type_t;
// System.Data.Common.Key
struct Key_t1531728703;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Data.DataRow
struct DataRow_t3370913075;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t2526189854;
// System.Data.DataColumn
struct DataColumn_t2485786120;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Data.DataRelation
struct DataRelation_t2257224951;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t39585132;
// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t2364717775;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3495088045;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t1903229978;
// System.Data.IDbCommand
struct IDbCommand_t2192592793;
// System.Data.DataColumnCollection
struct DataColumnCollection_t479471535;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3198980347;
// System.Data.DataRowCollection
struct DataRowCollection_t3217300826;
// System.Data.DataRowBuilder
struct DataRowBuilder_t3193098686;
// System.Data.Common.RecordCache
struct RecordCache_t2814565283;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4164928659;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t1943750078;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t1758895939;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t4233335338;
// System.Data.DataTableCollection
struct DataTableCollection_t2837452619;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t1445784527;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t645599195;
// System.Data.Common.DataContainer
struct DataContainer_t2712869782;




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
#ifndef INTERNALDATACOLLECTIONBASE_T224885569_H
#define INTERNALDATACOLLECTIONBASE_T224885569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t224885569  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Data.InternalDataCollectionBase::list
	ArrayList_t2718874744 * ___list_0;
	// System.Boolean System.Data.InternalDataCollectionBase::synchronized
	bool ___synchronized_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t224885569, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_synchronized_1() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t224885569, ___synchronized_1)); }
	inline bool get_synchronized_1() const { return ___synchronized_1; }
	inline bool* get_address_of_synchronized_1() { return &___synchronized_1; }
	inline void set_synchronized_1(bool value)
	{
		___synchronized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATACOLLECTIONBASE_T224885569_H
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
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef MARSHALBYVALUECOMPONENT_T828052580_H
#define MARSHALBYVALUECOMPONENT_T828052580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t828052580  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_0;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_1;

public:
	inline static int32_t get_offset_of_mySite_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___mySite_0)); }
	inline RuntimeObject* get_mySite_0() const { return ___mySite_0; }
	inline RuntimeObject** get_address_of_mySite_0() { return &___mySite_0; }
	inline void set_mySite_0(RuntimeObject* value)
	{
		___mySite_0 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_0), value);
	}

	inline static int32_t get_offset_of_disposedEvent_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t828052580, ___disposedEvent_1)); }
	inline RuntimeObject * get_disposedEvent_1() const { return ___disposedEvent_1; }
	inline RuntimeObject ** get_address_of_disposedEvent_1() { return &___disposedEvent_1; }
	inline void set_disposedEvent_1(RuntimeObject * value)
	{
		___disposedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T828052580_H
#ifndef SQLXML_T315979651_H
#define SQLXML_T315979651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlXml
struct  SqlXml_t315979651  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlXml::notNull
	bool ___notNull_0;
	// System.String System.Data.SqlTypes.SqlXml::xmlValue
	String_t* ___xmlValue_1;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlXml_t315979651, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_xmlValue_1() { return static_cast<int32_t>(offsetof(SqlXml_t315979651, ___xmlValue_1)); }
	inline String_t* get_xmlValue_1() const { return ___xmlValue_1; }
	inline String_t** get_address_of_xmlValue_1() { return &___xmlValue_1; }
	inline void set_xmlValue_1(String_t* value)
	{
		___xmlValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___xmlValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLXML_T315979651_H
#ifndef DATAROW_T3370913075_H
#define DATAROW_T3370913075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRow
struct  DataRow_t3370913075  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t1734486485 * ____table_0;
	// System.Int32 System.Data.DataRow::_original
	int32_t ____original_1;
	// System.Int32 System.Data.DataRow::_current
	int32_t ____current_2;
	// System.Int32 System.Data.DataRow::_proposed
	int32_t ____proposed_3;
	// System.Collections.ArrayList System.Data.DataRow::_columnErrors
	ArrayList_t2718874744 * ____columnErrors_4;
	// System.String System.Data.DataRow::rowError
	String_t* ___rowError_5;
	// System.Int32 System.Data.DataRow::xmlRowID
	int32_t ___xmlRowID_6;
	// System.Boolean System.Data.DataRow::_nullConstraintViolation
	bool ____nullConstraintViolation_7;
	// System.String System.Data.DataRow::_nullConstraintMessage
	String_t* ____nullConstraintMessage_8;
	// System.Boolean System.Data.DataRow::_inChangingEvent
	bool ____inChangingEvent_9;
	// System.Int32 System.Data.DataRow::_rowId
	int32_t ____rowId_10;
	// System.Boolean System.Data.DataRow::_rowChanged
	bool ____rowChanged_11;
	// System.Boolean System.Data.DataRow::_inExpressionEvaluation
	bool ____inExpressionEvaluation_12;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____table_0)); }
	inline DataTable_t1734486485 * get__table_0() const { return ____table_0; }
	inline DataTable_t1734486485 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t1734486485 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__original_1() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____original_1)); }
	inline int32_t get__original_1() const { return ____original_1; }
	inline int32_t* get_address_of__original_1() { return &____original_1; }
	inline void set__original_1(int32_t value)
	{
		____original_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____current_2)); }
	inline int32_t get__current_2() const { return ____current_2; }
	inline int32_t* get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(int32_t value)
	{
		____current_2 = value;
	}

	inline static int32_t get_offset_of__proposed_3() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____proposed_3)); }
	inline int32_t get__proposed_3() const { return ____proposed_3; }
	inline int32_t* get_address_of__proposed_3() { return &____proposed_3; }
	inline void set__proposed_3(int32_t value)
	{
		____proposed_3 = value;
	}

	inline static int32_t get_offset_of__columnErrors_4() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____columnErrors_4)); }
	inline ArrayList_t2718874744 * get__columnErrors_4() const { return ____columnErrors_4; }
	inline ArrayList_t2718874744 ** get_address_of__columnErrors_4() { return &____columnErrors_4; }
	inline void set__columnErrors_4(ArrayList_t2718874744 * value)
	{
		____columnErrors_4 = value;
		Il2CppCodeGenWriteBarrier((&____columnErrors_4), value);
	}

	inline static int32_t get_offset_of_rowError_5() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ___rowError_5)); }
	inline String_t* get_rowError_5() const { return ___rowError_5; }
	inline String_t** get_address_of_rowError_5() { return &___rowError_5; }
	inline void set_rowError_5(String_t* value)
	{
		___rowError_5 = value;
		Il2CppCodeGenWriteBarrier((&___rowError_5), value);
	}

	inline static int32_t get_offset_of_xmlRowID_6() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ___xmlRowID_6)); }
	inline int32_t get_xmlRowID_6() const { return ___xmlRowID_6; }
	inline int32_t* get_address_of_xmlRowID_6() { return &___xmlRowID_6; }
	inline void set_xmlRowID_6(int32_t value)
	{
		___xmlRowID_6 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolation_7() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____nullConstraintViolation_7)); }
	inline bool get__nullConstraintViolation_7() const { return ____nullConstraintViolation_7; }
	inline bool* get_address_of__nullConstraintViolation_7() { return &____nullConstraintViolation_7; }
	inline void set__nullConstraintViolation_7(bool value)
	{
		____nullConstraintViolation_7 = value;
	}

	inline static int32_t get_offset_of__nullConstraintMessage_8() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____nullConstraintMessage_8)); }
	inline String_t* get__nullConstraintMessage_8() const { return ____nullConstraintMessage_8; }
	inline String_t** get_address_of__nullConstraintMessage_8() { return &____nullConstraintMessage_8; }
	inline void set__nullConstraintMessage_8(String_t* value)
	{
		____nullConstraintMessage_8 = value;
		Il2CppCodeGenWriteBarrier((&____nullConstraintMessage_8), value);
	}

	inline static int32_t get_offset_of__inChangingEvent_9() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____inChangingEvent_9)); }
	inline bool get__inChangingEvent_9() const { return ____inChangingEvent_9; }
	inline bool* get_address_of__inChangingEvent_9() { return &____inChangingEvent_9; }
	inline void set__inChangingEvent_9(bool value)
	{
		____inChangingEvent_9 = value;
	}

	inline static int32_t get_offset_of__rowId_10() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____rowId_10)); }
	inline int32_t get__rowId_10() const { return ____rowId_10; }
	inline int32_t* get_address_of__rowId_10() { return &____rowId_10; }
	inline void set__rowId_10(int32_t value)
	{
		____rowId_10 = value;
	}

	inline static int32_t get_offset_of__rowChanged_11() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____rowChanged_11)); }
	inline bool get__rowChanged_11() const { return ____rowChanged_11; }
	inline bool* get_address_of__rowChanged_11() { return &____rowChanged_11; }
	inline void set__rowChanged_11(bool value)
	{
		____rowChanged_11 = value;
	}

	inline static int32_t get_offset_of__inExpressionEvaluation_12() { return static_cast<int32_t>(offsetof(DataRow_t3370913075, ____inExpressionEvaluation_12)); }
	inline bool get__inExpressionEvaluation_12() const { return ____inExpressionEvaluation_12; }
	inline bool* get_address_of__inExpressionEvaluation_12() { return &____inExpressionEvaluation_12; }
	inline void set__inExpressionEvaluation_12(bool value)
	{
		____inExpressionEvaluation_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROW_T3370913075_H
#ifndef DATAROWBUILDER_T3193098686_H
#define DATAROWBUILDER_T3193098686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowBuilder
struct  DataRowBuilder_t3193098686  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRowBuilder::table
	DataTable_t1734486485 * ___table_0;
	// System.Int32 System.Data.DataRowBuilder::_rowId
	int32_t ____rowId_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(DataRowBuilder_t3193098686, ___table_0)); }
	inline DataTable_t1734486485 * get_table_0() const { return ___table_0; }
	inline DataTable_t1734486485 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(DataTable_t1734486485 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of__rowId_1() { return static_cast<int32_t>(offsetof(DataRowBuilder_t3193098686, ____rowId_1)); }
	inline int32_t get__rowId_1() const { return ____rowId_1; }
	inline int32_t* get_address_of__rowId_1() { return &____rowId_1; }
	inline void set__rowId_1(int32_t value)
	{
		____rowId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWBUILDER_T3193098686_H
#ifndef MERGEMANAGER_T731040201_H
#define MERGEMANAGER_T731040201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeManager
struct  MergeManager_t731040201  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEMANAGER_T731040201_H
#ifndef DATARELATION_T2257224951_H
#define DATARELATION_T2257224951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelation
struct  DataRelation_t2257224951  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t3773542243 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t841719017 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t3489911826 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t3317819609* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t3317819609* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t3446977085 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_10;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_11;

public:
	inline static int32_t get_offset_of_dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___dataSet_0)); }
	inline DataSet_t3773542243 * get_dataSet_0() const { return ___dataSet_0; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_0() { return &___dataSet_0; }
	inline void set_dataSet_0(DataSet_t3773542243 * value)
	{
		___dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_0), value);
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_parentKeyConstraint_2() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___parentKeyConstraint_2)); }
	inline UniqueConstraint_t841719017 * get_parentKeyConstraint_2() const { return ___parentKeyConstraint_2; }
	inline UniqueConstraint_t841719017 ** get_address_of_parentKeyConstraint_2() { return &___parentKeyConstraint_2; }
	inline void set_parentKeyConstraint_2(UniqueConstraint_t841719017 * value)
	{
		___parentKeyConstraint_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentKeyConstraint_2), value);
	}

	inline static int32_t get_offset_of_childKeyConstraint_3() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___childKeyConstraint_3)); }
	inline ForeignKeyConstraint_t3489911826 * get_childKeyConstraint_3() const { return ___childKeyConstraint_3; }
	inline ForeignKeyConstraint_t3489911826 ** get_address_of_childKeyConstraint_3() { return &___childKeyConstraint_3; }
	inline void set_childKeyConstraint_3(ForeignKeyConstraint_t3489911826 * value)
	{
		___childKeyConstraint_3 = value;
		Il2CppCodeGenWriteBarrier((&___childKeyConstraint_3), value);
	}

	inline static int32_t get_offset_of_parentColumns_4() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___parentColumns_4)); }
	inline DataColumnU5BU5D_t3317819609* get_parentColumns_4() const { return ___parentColumns_4; }
	inline DataColumnU5BU5D_t3317819609** get_address_of_parentColumns_4() { return &___parentColumns_4; }
	inline void set_parentColumns_4(DataColumnU5BU5D_t3317819609* value)
	{
		___parentColumns_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentColumns_4), value);
	}

	inline static int32_t get_offset_of_childColumns_5() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___childColumns_5)); }
	inline DataColumnU5BU5D_t3317819609* get_childColumns_5() const { return ___childColumns_5; }
	inline DataColumnU5BU5D_t3317819609** get_address_of_childColumns_5() { return &___childColumns_5; }
	inline void set_childColumns_5(DataColumnU5BU5D_t3317819609* value)
	{
		___childColumns_5 = value;
		Il2CppCodeGenWriteBarrier((&___childColumns_5), value);
	}

	inline static int32_t get_offset_of_nested_6() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___nested_6)); }
	inline bool get_nested_6() const { return ___nested_6; }
	inline bool* get_address_of_nested_6() { return &___nested_6; }
	inline void set_nested_6(bool value)
	{
		___nested_6 = value;
	}

	inline static int32_t get_offset_of_createConstraints_7() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___createConstraints_7)); }
	inline bool get_createConstraints_7() const { return ___createConstraints_7; }
	inline bool* get_address_of_createConstraints_7() { return &___createConstraints_7; }
	inline void set_createConstraints_7(bool value)
	{
		___createConstraints_7 = value;
	}

	inline static int32_t get_offset_of_initFinished_8() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___initFinished_8)); }
	inline bool get_initFinished_8() const { return ___initFinished_8; }
	inline bool* get_address_of_initFinished_8() { return &___initFinished_8; }
	inline void set_initFinished_8(bool value)
	{
		___initFinished_8 = value;
	}

	inline static int32_t get_offset_of_extendedProperties_9() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ___extendedProperties_9)); }
	inline PropertyCollection_t3446977085 * get_extendedProperties_9() const { return ___extendedProperties_9; }
	inline PropertyCollection_t3446977085 ** get_address_of_extendedProperties_9() { return &___extendedProperties_9; }
	inline void set_extendedProperties_9(PropertyCollection_t3446977085 * value)
	{
		___extendedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___extendedProperties_9), value);
	}

	inline static int32_t get_offset_of__parentTableNameSpace_10() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ____parentTableNameSpace_10)); }
	inline String_t* get__parentTableNameSpace_10() const { return ____parentTableNameSpace_10; }
	inline String_t** get_address_of__parentTableNameSpace_10() { return &____parentTableNameSpace_10; }
	inline void set__parentTableNameSpace_10(String_t* value)
	{
		____parentTableNameSpace_10 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableNameSpace_10), value);
	}

	inline static int32_t get_offset_of__childTableNameSpace_11() { return static_cast<int32_t>(offsetof(DataRelation_t2257224951, ____childTableNameSpace_11)); }
	inline String_t* get__childTableNameSpace_11() const { return ____childTableNameSpace_11; }
	inline String_t** get_address_of__childTableNameSpace_11() { return &____childTableNameSpace_11; }
	inline void set__childTableNameSpace_11(String_t* value)
	{
		____childTableNameSpace_11 = value;
		Il2CppCodeGenWriteBarrier((&____childTableNameSpace_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATION_T2257224951_H
#ifndef CONSTRAINT_T2778807214_H
#define CONSTRAINT_T2778807214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t2778807214  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t1108123056 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t3446977085 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t4155063583 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t259828334 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t3773542243 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ___events_1)); }
	inline EventHandlerList_t1108123056 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t1108123056 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t1108123056 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier((&___events_1), value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier((&____constraintName_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ____properties_3)); }
	inline PropertyCollection_t3446977085 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t3446977085 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t3446977085 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ____index_4)); }
	inline Index_t4155063583 * get__index_4() const { return ____index_4; }
	inline Index_t4155063583 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t4155063583 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier((&____index_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ____constraintCollection_5)); }
	inline ConstraintCollection_t259828334 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t259828334 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t259828334 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ___dataSet_6)); }
	inline DataSet_t3773542243 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t3773542243 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_6), value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t2778807214, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t2778807214_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	RuntimeObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t2778807214_StaticFields, ___beforeConstraintNameChange_0)); }
	inline RuntimeObject * get_beforeConstraintNameChange_0() const { return ___beforeConstraintNameChange_0; }
	inline RuntimeObject ** get_address_of_beforeConstraintNameChange_0() { return &___beforeConstraintNameChange_0; }
	inline void set_beforeConstraintNameChange_0(RuntimeObject * value)
	{
		___beforeConstraintNameChange_0 = value;
		Il2CppCodeGenWriteBarrier((&___beforeConstraintNameChange_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINT_T2778807214_H
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
#ifndef DOUBLET_T4016057215_H
#define DOUBLET_T4016057215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Doublet
struct  Doublet_t4016057215  : public RuntimeObject
{
public:
	// System.Int32 System.Data.Doublet::count
	int32_t ___count_0;
	// System.Collections.ArrayList System.Data.Doublet::columnNames
	ArrayList_t2718874744 * ___columnNames_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Doublet_t4016057215, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_columnNames_1() { return static_cast<int32_t>(offsetof(Doublet_t4016057215, ___columnNames_1)); }
	inline ArrayList_t2718874744 * get_columnNames_1() const { return ___columnNames_1; }
	inline ArrayList_t2718874744 ** get_address_of_columnNames_1() { return &___columnNames_1; }
	inline void set_columnNames_1(ArrayList_t2718874744 * value)
	{
		___columnNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___columnNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLET_T4016057215_H
#ifndef RECORDCACHE_T2814565283_H
#define RECORDCACHE_T2814565283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.RecordCache
struct  RecordCache_t2814565283  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Data.Common.RecordCache::_records
	Stack_t2329662280 * ____records_0;
	// System.Int32 System.Data.Common.RecordCache::_nextFreeIndex
	int32_t ____nextFreeIndex_1;
	// System.Int32 System.Data.Common.RecordCache::_currentCapacity
	int32_t ____currentCapacity_2;
	// System.Data.DataTable System.Data.Common.RecordCache::_table
	DataTable_t1734486485 * ____table_3;
	// System.Data.DataRow[] System.Data.Common.RecordCache::_rowsToRecords
	DataRowU5BU5D_t3122106530* ____rowsToRecords_4;

public:
	inline static int32_t get_offset_of__records_0() { return static_cast<int32_t>(offsetof(RecordCache_t2814565283, ____records_0)); }
	inline Stack_t2329662280 * get__records_0() const { return ____records_0; }
	inline Stack_t2329662280 ** get_address_of__records_0() { return &____records_0; }
	inline void set__records_0(Stack_t2329662280 * value)
	{
		____records_0 = value;
		Il2CppCodeGenWriteBarrier((&____records_0), value);
	}

	inline static int32_t get_offset_of__nextFreeIndex_1() { return static_cast<int32_t>(offsetof(RecordCache_t2814565283, ____nextFreeIndex_1)); }
	inline int32_t get__nextFreeIndex_1() const { return ____nextFreeIndex_1; }
	inline int32_t* get_address_of__nextFreeIndex_1() { return &____nextFreeIndex_1; }
	inline void set__nextFreeIndex_1(int32_t value)
	{
		____nextFreeIndex_1 = value;
	}

	inline static int32_t get_offset_of__currentCapacity_2() { return static_cast<int32_t>(offsetof(RecordCache_t2814565283, ____currentCapacity_2)); }
	inline int32_t get__currentCapacity_2() const { return ____currentCapacity_2; }
	inline int32_t* get_address_of__currentCapacity_2() { return &____currentCapacity_2; }
	inline void set__currentCapacity_2(int32_t value)
	{
		____currentCapacity_2 = value;
	}

	inline static int32_t get_offset_of__table_3() { return static_cast<int32_t>(offsetof(RecordCache_t2814565283, ____table_3)); }
	inline DataTable_t1734486485 * get__table_3() const { return ____table_3; }
	inline DataTable_t1734486485 ** get_address_of__table_3() { return &____table_3; }
	inline void set__table_3(DataTable_t1734486485 * value)
	{
		____table_3 = value;
		Il2CppCodeGenWriteBarrier((&____table_3), value);
	}

	inline static int32_t get_offset_of__rowsToRecords_4() { return static_cast<int32_t>(offsetof(RecordCache_t2814565283, ____rowsToRecords_4)); }
	inline DataRowU5BU5D_t3122106530* get__rowsToRecords_4() const { return ____rowsToRecords_4; }
	inline DataRowU5BU5D_t3122106530** get_address_of__rowsToRecords_4() { return &____rowsToRecords_4; }
	inline void set__rowsToRecords_4(DataRowU5BU5D_t3122106530* value)
	{
		____rowsToRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____rowsToRecords_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDCACHE_T2814565283_H
#ifndef DBTYPES_T3951852654_H
#define DBTYPES_T3951852654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbTypes
struct  DbTypes_t3951852654  : public RuntimeObject
{
public:

public:
};

struct DbTypes_t3951852654_StaticFields
{
public:
	// System.Type System.Data.Common.DbTypes::TypeOfBoolean
	Type_t * ___TypeOfBoolean_0;
	// System.Type System.Data.Common.DbTypes::TypeOfSByte
	Type_t * ___TypeOfSByte_1;
	// System.Type System.Data.Common.DbTypes::TypeOfChar
	Type_t * ___TypeOfChar_2;
	// System.Type System.Data.Common.DbTypes::TypeOfInt16
	Type_t * ___TypeOfInt16_3;
	// System.Type System.Data.Common.DbTypes::TypeOfInt32
	Type_t * ___TypeOfInt32_4;
	// System.Type System.Data.Common.DbTypes::TypeOfInt64
	Type_t * ___TypeOfInt64_5;
	// System.Type System.Data.Common.DbTypes::TypeOfByte
	Type_t * ___TypeOfByte_6;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt16
	Type_t * ___TypeOfUInt16_7;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt32
	Type_t * ___TypeOfUInt32_8;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt64
	Type_t * ___TypeOfUInt64_9;
	// System.Type System.Data.Common.DbTypes::TypeOfDouble
	Type_t * ___TypeOfDouble_10;
	// System.Type System.Data.Common.DbTypes::TypeOfSingle
	Type_t * ___TypeOfSingle_11;
	// System.Type System.Data.Common.DbTypes::TypeOfDecimal
	Type_t * ___TypeOfDecimal_12;
	// System.Type System.Data.Common.DbTypes::TypeOfString
	Type_t * ___TypeOfString_13;
	// System.Type System.Data.Common.DbTypes::TypeOfDateTime
	Type_t * ___TypeOfDateTime_14;
	// System.Type System.Data.Common.DbTypes::TypeOfObject
	Type_t * ___TypeOfObject_15;
	// System.Type System.Data.Common.DbTypes::TypeOfGuid
	Type_t * ___TypeOfGuid_16;
	// System.Type System.Data.Common.DbTypes::TypeOfType
	Type_t * ___TypeOfType_17;
	// System.Type System.Data.Common.DbTypes::TypeOfByteArray
	Type_t * ___TypeOfByteArray_18;
	// System.Type System.Data.Common.DbTypes::TypeOfFloat
	Type_t * ___TypeOfFloat_19;
	// System.Type System.Data.Common.DbTypes::TypeOfTimespan
	Type_t * ___TypeOfTimespan_20;

public:
	inline static int32_t get_offset_of_TypeOfBoolean_0() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfBoolean_0)); }
	inline Type_t * get_TypeOfBoolean_0() const { return ___TypeOfBoolean_0; }
	inline Type_t ** get_address_of_TypeOfBoolean_0() { return &___TypeOfBoolean_0; }
	inline void set_TypeOfBoolean_0(Type_t * value)
	{
		___TypeOfBoolean_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfBoolean_0), value);
	}

	inline static int32_t get_offset_of_TypeOfSByte_1() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfSByte_1)); }
	inline Type_t * get_TypeOfSByte_1() const { return ___TypeOfSByte_1; }
	inline Type_t ** get_address_of_TypeOfSByte_1() { return &___TypeOfSByte_1; }
	inline void set_TypeOfSByte_1(Type_t * value)
	{
		___TypeOfSByte_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSByte_1), value);
	}

	inline static int32_t get_offset_of_TypeOfChar_2() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfChar_2)); }
	inline Type_t * get_TypeOfChar_2() const { return ___TypeOfChar_2; }
	inline Type_t ** get_address_of_TypeOfChar_2() { return &___TypeOfChar_2; }
	inline void set_TypeOfChar_2(Type_t * value)
	{
		___TypeOfChar_2 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfChar_2), value);
	}

	inline static int32_t get_offset_of_TypeOfInt16_3() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfInt16_3)); }
	inline Type_t * get_TypeOfInt16_3() const { return ___TypeOfInt16_3; }
	inline Type_t ** get_address_of_TypeOfInt16_3() { return &___TypeOfInt16_3; }
	inline void set_TypeOfInt16_3(Type_t * value)
	{
		___TypeOfInt16_3 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt16_3), value);
	}

	inline static int32_t get_offset_of_TypeOfInt32_4() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfInt32_4)); }
	inline Type_t * get_TypeOfInt32_4() const { return ___TypeOfInt32_4; }
	inline Type_t ** get_address_of_TypeOfInt32_4() { return &___TypeOfInt32_4; }
	inline void set_TypeOfInt32_4(Type_t * value)
	{
		___TypeOfInt32_4 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt32_4), value);
	}

	inline static int32_t get_offset_of_TypeOfInt64_5() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfInt64_5)); }
	inline Type_t * get_TypeOfInt64_5() const { return ___TypeOfInt64_5; }
	inline Type_t ** get_address_of_TypeOfInt64_5() { return &___TypeOfInt64_5; }
	inline void set_TypeOfInt64_5(Type_t * value)
	{
		___TypeOfInt64_5 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt64_5), value);
	}

	inline static int32_t get_offset_of_TypeOfByte_6() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfByte_6)); }
	inline Type_t * get_TypeOfByte_6() const { return ___TypeOfByte_6; }
	inline Type_t ** get_address_of_TypeOfByte_6() { return &___TypeOfByte_6; }
	inline void set_TypeOfByte_6(Type_t * value)
	{
		___TypeOfByte_6 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByte_6), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt16_7() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfUInt16_7)); }
	inline Type_t * get_TypeOfUInt16_7() const { return ___TypeOfUInt16_7; }
	inline Type_t ** get_address_of_TypeOfUInt16_7() { return &___TypeOfUInt16_7; }
	inline void set_TypeOfUInt16_7(Type_t * value)
	{
		___TypeOfUInt16_7 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt16_7), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt32_8() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfUInt32_8)); }
	inline Type_t * get_TypeOfUInt32_8() const { return ___TypeOfUInt32_8; }
	inline Type_t ** get_address_of_TypeOfUInt32_8() { return &___TypeOfUInt32_8; }
	inline void set_TypeOfUInt32_8(Type_t * value)
	{
		___TypeOfUInt32_8 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt32_8), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt64_9() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfUInt64_9)); }
	inline Type_t * get_TypeOfUInt64_9() const { return ___TypeOfUInt64_9; }
	inline Type_t ** get_address_of_TypeOfUInt64_9() { return &___TypeOfUInt64_9; }
	inline void set_TypeOfUInt64_9(Type_t * value)
	{
		___TypeOfUInt64_9 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt64_9), value);
	}

	inline static int32_t get_offset_of_TypeOfDouble_10() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfDouble_10)); }
	inline Type_t * get_TypeOfDouble_10() const { return ___TypeOfDouble_10; }
	inline Type_t ** get_address_of_TypeOfDouble_10() { return &___TypeOfDouble_10; }
	inline void set_TypeOfDouble_10(Type_t * value)
	{
		___TypeOfDouble_10 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDouble_10), value);
	}

	inline static int32_t get_offset_of_TypeOfSingle_11() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfSingle_11)); }
	inline Type_t * get_TypeOfSingle_11() const { return ___TypeOfSingle_11; }
	inline Type_t ** get_address_of_TypeOfSingle_11() { return &___TypeOfSingle_11; }
	inline void set_TypeOfSingle_11(Type_t * value)
	{
		___TypeOfSingle_11 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSingle_11), value);
	}

	inline static int32_t get_offset_of_TypeOfDecimal_12() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfDecimal_12)); }
	inline Type_t * get_TypeOfDecimal_12() const { return ___TypeOfDecimal_12; }
	inline Type_t ** get_address_of_TypeOfDecimal_12() { return &___TypeOfDecimal_12; }
	inline void set_TypeOfDecimal_12(Type_t * value)
	{
		___TypeOfDecimal_12 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDecimal_12), value);
	}

	inline static int32_t get_offset_of_TypeOfString_13() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfString_13)); }
	inline Type_t * get_TypeOfString_13() const { return ___TypeOfString_13; }
	inline Type_t ** get_address_of_TypeOfString_13() { return &___TypeOfString_13; }
	inline void set_TypeOfString_13(Type_t * value)
	{
		___TypeOfString_13 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfString_13), value);
	}

	inline static int32_t get_offset_of_TypeOfDateTime_14() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfDateTime_14)); }
	inline Type_t * get_TypeOfDateTime_14() const { return ___TypeOfDateTime_14; }
	inline Type_t ** get_address_of_TypeOfDateTime_14() { return &___TypeOfDateTime_14; }
	inline void set_TypeOfDateTime_14(Type_t * value)
	{
		___TypeOfDateTime_14 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDateTime_14), value);
	}

	inline static int32_t get_offset_of_TypeOfObject_15() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfObject_15)); }
	inline Type_t * get_TypeOfObject_15() const { return ___TypeOfObject_15; }
	inline Type_t ** get_address_of_TypeOfObject_15() { return &___TypeOfObject_15; }
	inline void set_TypeOfObject_15(Type_t * value)
	{
		___TypeOfObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfObject_15), value);
	}

	inline static int32_t get_offset_of_TypeOfGuid_16() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfGuid_16)); }
	inline Type_t * get_TypeOfGuid_16() const { return ___TypeOfGuid_16; }
	inline Type_t ** get_address_of_TypeOfGuid_16() { return &___TypeOfGuid_16; }
	inline void set_TypeOfGuid_16(Type_t * value)
	{
		___TypeOfGuid_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfGuid_16), value);
	}

	inline static int32_t get_offset_of_TypeOfType_17() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfType_17)); }
	inline Type_t * get_TypeOfType_17() const { return ___TypeOfType_17; }
	inline Type_t ** get_address_of_TypeOfType_17() { return &___TypeOfType_17; }
	inline void set_TypeOfType_17(Type_t * value)
	{
		___TypeOfType_17 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfType_17), value);
	}

	inline static int32_t get_offset_of_TypeOfByteArray_18() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfByteArray_18)); }
	inline Type_t * get_TypeOfByteArray_18() const { return ___TypeOfByteArray_18; }
	inline Type_t ** get_address_of_TypeOfByteArray_18() { return &___TypeOfByteArray_18; }
	inline void set_TypeOfByteArray_18(Type_t * value)
	{
		___TypeOfByteArray_18 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByteArray_18), value);
	}

	inline static int32_t get_offset_of_TypeOfFloat_19() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfFloat_19)); }
	inline Type_t * get_TypeOfFloat_19() const { return ___TypeOfFloat_19; }
	inline Type_t ** get_address_of_TypeOfFloat_19() { return &___TypeOfFloat_19; }
	inline void set_TypeOfFloat_19(Type_t * value)
	{
		___TypeOfFloat_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfFloat_19), value);
	}

	inline static int32_t get_offset_of_TypeOfTimespan_20() { return static_cast<int32_t>(offsetof(DbTypes_t3951852654_StaticFields, ___TypeOfTimespan_20)); }
	inline Type_t * get_TypeOfTimespan_20() const { return ___TypeOfTimespan_20; }
	inline Type_t ** get_address_of_TypeOfTimespan_20() { return &___TypeOfTimespan_20; }
	inline void set_TypeOfTimespan_20(Type_t * value)
	{
		___TypeOfTimespan_20 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfTimespan_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBTYPES_T3951852654_H
#ifndef DBPROVIDERFACTORY_T3108676059_H
#define DBPROVIDERFACTORY_T3108676059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderFactory
struct  DbProviderFactory_t3108676059  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPROVIDERFACTORY_T3108676059_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
#ifndef INDEX_T4155063583_H
#define INDEX_T4155063583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Index
struct  Index_t4155063583  : public RuntimeObject
{
public:
	// System.Int32[] System.Data.Common.Index::_array
	Int32U5BU5D_t385246372* ____array_1;
	// System.Int32 System.Data.Common.Index::_size
	int32_t ____size_2;
	// System.Data.Common.Key System.Data.Common.Index::_key
	Key_t1531728703 * ____key_3;
	// System.Int32 System.Data.Common.Index::_refCount
	int32_t ____refCount_4;
	// System.Boolean System.Data.Common.Index::know_have_duplicates
	bool ___know_have_duplicates_5;
	// System.Boolean System.Data.Common.Index::know_no_duplicates
	bool ___know_no_duplicates_6;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Index_t4155063583, ____array_1)); }
	inline Int32U5BU5D_t385246372* get__array_1() const { return ____array_1; }
	inline Int32U5BU5D_t385246372** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(Int32U5BU5D_t385246372* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier((&____array_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Index_t4155063583, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__key_3() { return static_cast<int32_t>(offsetof(Index_t4155063583, ____key_3)); }
	inline Key_t1531728703 * get__key_3() const { return ____key_3; }
	inline Key_t1531728703 ** get_address_of__key_3() { return &____key_3; }
	inline void set__key_3(Key_t1531728703 * value)
	{
		____key_3 = value;
		Il2CppCodeGenWriteBarrier((&____key_3), value);
	}

	inline static int32_t get_offset_of__refCount_4() { return static_cast<int32_t>(offsetof(Index_t4155063583, ____refCount_4)); }
	inline int32_t get__refCount_4() const { return ____refCount_4; }
	inline int32_t* get_address_of__refCount_4() { return &____refCount_4; }
	inline void set__refCount_4(int32_t value)
	{
		____refCount_4 = value;
	}

	inline static int32_t get_offset_of_know_have_duplicates_5() { return static_cast<int32_t>(offsetof(Index_t4155063583, ___know_have_duplicates_5)); }
	inline bool get_know_have_duplicates_5() const { return ___know_have_duplicates_5; }
	inline bool* get_address_of_know_have_duplicates_5() { return &___know_have_duplicates_5; }
	inline void set_know_have_duplicates_5(bool value)
	{
		___know_have_duplicates_5 = value;
	}

	inline static int32_t get_offset_of_know_no_duplicates_6() { return static_cast<int32_t>(offsetof(Index_t4155063583, ___know_no_duplicates_6)); }
	inline bool get_know_no_duplicates_6() const { return ___know_no_duplicates_6; }
	inline bool* get_address_of_know_no_duplicates_6() { return &___know_no_duplicates_6; }
	inline void set_know_no_duplicates_6(bool value)
	{
		___know_no_duplicates_6 = value;
	}
};

struct Index_t4155063583_StaticFields
{
public:
	// System.Int32[] System.Data.Common.Index::empty
	Int32U5BU5D_t385246372* ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(Index_t4155063583_StaticFields, ___empty_0)); }
	inline Int32U5BU5D_t385246372* get_empty_0() const { return ___empty_0; }
	inline Int32U5BU5D_t385246372** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(Int32U5BU5D_t385246372* value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEX_T4155063583_H
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
#ifndef COMPONENT_T3620823400_H
#define COMPONENT_T3620823400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3620823400  : public MarshalByRefObject_t2760389100
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1108123056 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___event_handlers_1)); }
	inline EventHandlerList_t1108123056 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1108123056 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1108123056 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3620823400_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DATATABLENEWROWEVENTARGS_T4095718124_H
#define DATATABLENEWROWEVENTARGS_T4095718124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableNewRowEventArgs
struct  DataTableNewRowEventArgs_t4095718124  : public EventArgs_t3591816995
{
public:
	// System.Data.DataRow System.Data.DataTableNewRowEventArgs::_row
	DataRow_t3370913075 * ____row_1;

public:
	inline static int32_t get_offset_of__row_1() { return static_cast<int32_t>(offsetof(DataTableNewRowEventArgs_t4095718124, ____row_1)); }
	inline DataRow_t3370913075 * get__row_1() const { return ____row_1; }
	inline DataRow_t3370913075 ** get_address_of__row_1() { return &____row_1; }
	inline void set__row_1(DataRow_t3370913075 * value)
	{
		____row_1 = value;
		Il2CppCodeGenWriteBarrier((&____row_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLENEWROWEVENTARGS_T4095718124_H
#ifndef CONSTRAINTCOLLECTION_T259828334_H
#define CONSTRAINTCOLLECTION_T259828334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t259828334  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t1734486485 * ___table_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t259828334, ___table_2)); }
	inline DataTable_t1734486485 * get_table_2() const { return ___table_2; }
	inline DataTable_t1734486485 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t1734486485 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t259828334, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCOLLECTION_T259828334_H
#ifndef DATACOLUMNCHANGEEVENTARGS_T353716546_H
#define DATACOLUMNCHANGEEVENTARGS_T353716546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t353716546  : public EventArgs_t3591816995
{
public:
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t2485786120 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t3370913075 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	RuntimeObject * ____proposedValue_3;

public:
	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t353716546, ____column_1)); }
	inline DataColumn_t2485786120 * get__column_1() const { return ____column_1; }
	inline DataColumn_t2485786120 ** get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(DataColumn_t2485786120 * value)
	{
		____column_1 = value;
		Il2CppCodeGenWriteBarrier((&____column_1), value);
	}

	inline static int32_t get_offset_of__row_2() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t353716546, ____row_2)); }
	inline DataRow_t3370913075 * get__row_2() const { return ____row_2; }
	inline DataRow_t3370913075 ** get_address_of__row_2() { return &____row_2; }
	inline void set__row_2(DataRow_t3370913075 * value)
	{
		____row_2 = value;
		Il2CppCodeGenWriteBarrier((&____row_2), value);
	}

	inline static int32_t get_offset_of__proposedValue_3() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t353716546, ____proposedValue_3)); }
	inline RuntimeObject * get__proposedValue_3() const { return ____proposedValue_3; }
	inline RuntimeObject ** get_address_of__proposedValue_3() { return &____proposedValue_3; }
	inline void set__proposedValue_3(RuntimeObject * value)
	{
		____proposedValue_3 = value;
		Il2CppCodeGenWriteBarrier((&____proposedValue_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCHANGEEVENTARGS_T353716546_H
#ifndef PROPERTYCOLLECTION_T3446977085_H
#define PROPERTYCOLLECTION_T3446977085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.PropertyCollection
struct  PropertyCollection_t3446977085  : public Hashtable_t1853889766
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCOLLECTION_T3446977085_H
#ifndef DATAROWCOLLECTION_T3217300826_H
#define DATAROWCOLLECTION_T3217300826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t3217300826  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t1734486485 * ___table_2;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t3217300826, ___table_2)); }
	inline DataTable_t1734486485 * get_table_2() const { return ___table_2; }
	inline DataTable_t1734486485 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t1734486485 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCOLLECTION_T3217300826_H
#ifndef DATATABLECOLLECTION_T2837452619_H
#define DATATABLECOLLECTION_T2837452619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableCollection
struct  DataTableCollection_t2837452619  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t3773542243 * ___dataSet_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanged_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanging_4;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t2837452619, ___dataSet_2)); }
	inline DataSet_t3773542243 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t3773542243 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t2837452619, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}

	inline static int32_t get_offset_of_CollectionChanging_4() { return static_cast<int32_t>(offsetof(DataTableCollection_t2837452619, ___CollectionChanging_4)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanging_4() const { return ___CollectionChanging_4; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanging_4() { return &___CollectionChanging_4; }
	inline void set_CollectionChanging_4(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanging_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanging_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLECOLLECTION_T2837452619_H
#ifndef MERGEFAILEDEVENTARGS_T717811570_H
#define MERGEFAILEDEVENTARGS_T717811570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeFailedEventArgs
struct  MergeFailedEventArgs_t717811570  : public EventArgs_t3591816995
{
public:
	// System.Data.DataTable System.Data.MergeFailedEventArgs::data_table
	DataTable_t1734486485 * ___data_table_1;
	// System.String System.Data.MergeFailedEventArgs::conflict
	String_t* ___conflict_2;

public:
	inline static int32_t get_offset_of_data_table_1() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t717811570, ___data_table_1)); }
	inline DataTable_t1734486485 * get_data_table_1() const { return ___data_table_1; }
	inline DataTable_t1734486485 ** get_address_of_data_table_1() { return &___data_table_1; }
	inline void set_data_table_1(DataTable_t1734486485 * value)
	{
		___data_table_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_table_1), value);
	}

	inline static int32_t get_offset_of_conflict_2() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t717811570, ___conflict_2)); }
	inline String_t* get_conflict_2() const { return ___conflict_2; }
	inline String_t** get_address_of_conflict_2() { return &___conflict_2; }
	inline void set_conflict_2(String_t* value)
	{
		___conflict_2 = value;
		Il2CppCodeGenWriteBarrier((&___conflict_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEFAILEDEVENTARGS_T717811570_H
#ifndef DATACOLUMNCOLLECTION_T479471535_H
#define DATACOLUMNCOLLECTION_T479471535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t479471535  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t1853889766 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t1853889766 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t2718874744 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t1734486485 * ___parentTable_6;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanged_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionMetaDataChanged_10;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___columnNameCount_2)); }
	inline Hashtable_t1853889766 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t1853889766 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t1853889766 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnNameCount_2), value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___columnFromName_3)); }
	inline Hashtable_t1853889766 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t1853889766 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t1853889766 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnFromName_3), value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___autoIncrement_4)); }
	inline ArrayList_t2718874744 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t2718874744 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t2718874744 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier((&___autoIncrement_4), value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___parentTable_6)); }
	inline DataTable_t1734486485 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t1734486485 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t1734486485 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___parentTable_6), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___CollectionChanged_9)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanged_9() const { return ___CollectionChanged_9; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanged_9() { return &___CollectionChanged_9; }
	inline void set_CollectionChanged_9(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_9), value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535, ___CollectionMetaDataChanged_10)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionMetaDataChanged_10() const { return ___CollectionMetaDataChanged_10; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionMetaDataChanged_10() { return &___CollectionMetaDataChanged_10; }
	inline void set_CollectionMetaDataChanged_10(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionMetaDataChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionMetaDataChanged_10), value);
	}
};

struct DataColumnCollection_t479471535_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_7;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t1281789340* ___TenColumns_8;

public:
	inline static int32_t get_offset_of_ColumnPrefix_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535_StaticFields, ___ColumnPrefix_7)); }
	inline String_t* get_ColumnPrefix_7() const { return ___ColumnPrefix_7; }
	inline String_t** get_address_of_ColumnPrefix_7() { return &___ColumnPrefix_7; }
	inline void set_ColumnPrefix_7(String_t* value)
	{
		___ColumnPrefix_7 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnPrefix_7), value);
	}

	inline static int32_t get_offset_of_TenColumns_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t479471535_StaticFields, ___TenColumns_8)); }
	inline StringU5BU5D_t1281789340* get_TenColumns_8() const { return ___TenColumns_8; }
	inline StringU5BU5D_t1281789340** get_address_of_TenColumns_8() { return &___TenColumns_8; }
	inline void set_TenColumns_8(StringU5BU5D_t1281789340* value)
	{
		___TenColumns_8 = value;
		Il2CppCodeGenWriteBarrier((&___TenColumns_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCOLLECTION_T479471535_H
#ifndef DBPARAMETERCOLLECTION_T2951779354_H
#define DBPARAMETERCOLLECTION_T2951779354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t2951779354  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETERCOLLECTION_T2951779354_H
#ifndef DATARELATIONCOLLECTION_T3198980347_H
#define DATARELATIONCOLLECTION_T3198980347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t3198980347  : public InternalDataCollectionBase_t224885569
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t2257224951 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t2526189854 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3198980347, ___inTransition_2)); }
	inline DataRelation_t2257224951 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t2257224951 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t2257224951 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier((&___inTransition_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3198980347, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t3198980347, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t2526189854 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t2526189854 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t2526189854 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONCOLLECTION_T3198980347_H
#ifndef DBPARAMETER_T3789779732_H
#define DBPARAMETER_T3789779732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameter
struct  DbParameter_t3789779732  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETER_T3789779732_H
#ifndef SQLINT32_T2197555111_H
#define SQLINT32_T2197555111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt32
struct  SqlInt32_t2197555111 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlInt32::value
	int32_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt32::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt32_t2197555111, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt32_t2197555111, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt32_t2197555111_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t2197555111  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t2197555111  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t2197555111  ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t2197555111  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt32_t2197555111_StaticFields, ___MaxValue_2)); }
	inline SqlInt32_t2197555111  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt32_t2197555111 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt32_t2197555111  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt32_t2197555111_StaticFields, ___MinValue_3)); }
	inline SqlInt32_t2197555111  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt32_t2197555111 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt32_t2197555111  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt32_t2197555111_StaticFields, ___Null_4)); }
	inline SqlInt32_t2197555111  get_Null_4() const { return ___Null_4; }
	inline SqlInt32_t2197555111 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt32_t2197555111  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt32_t2197555111_StaticFields, ___Zero_5)); }
	inline SqlInt32_t2197555111  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt32_t2197555111 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt32_t2197555111  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t2197555111_marshaled_pinvoke
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t2197555111_marshaled_com
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT32_T2197555111_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef SQLDOUBLE_T1075477787_H
#define SQLDOUBLE_T1075477787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDouble
struct  SqlDouble_t1075477787 
{
public:
	// System.Double System.Data.SqlTypes.SqlDouble::value
	double ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDouble::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDouble_t1075477787, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDouble_t1075477787, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDouble_t1075477787_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t1075477787  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t1075477787  ___MinValue_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t1075477787  ___Null_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t1075477787  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDouble_t1075477787_StaticFields, ___MaxValue_2)); }
	inline SqlDouble_t1075477787  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDouble_t1075477787 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDouble_t1075477787  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDouble_t1075477787_StaticFields, ___MinValue_3)); }
	inline SqlDouble_t1075477787  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDouble_t1075477787 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDouble_t1075477787  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDouble_t1075477787_StaticFields, ___Null_4)); }
	inline SqlDouble_t1075477787  get_Null_4() const { return ___Null_4; }
	inline SqlDouble_t1075477787 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDouble_t1075477787  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlDouble_t1075477787_StaticFields, ___Zero_5)); }
	inline SqlDouble_t1075477787  get_Zero_5() const { return ___Zero_5; }
	inline SqlDouble_t1075477787 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlDouble_t1075477787  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t1075477787_marshaled_pinvoke
{
	double ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t1075477787_marshaled_com
{
	double ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDOUBLE_T1075477787_H
#ifndef SQLINT64_T3771533229_H
#define SQLINT64_T3771533229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt64
struct  SqlInt64_t3771533229 
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt64::value
	int64_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt64::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt64_t3771533229, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt64_t3771533229, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt64_t3771533229_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_t3771533229  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_t3771533229  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_t3771533229  ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_t3771533229  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt64_t3771533229_StaticFields, ___MaxValue_2)); }
	inline SqlInt64_t3771533229  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt64_t3771533229 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt64_t3771533229  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt64_t3771533229_StaticFields, ___MinValue_3)); }
	inline SqlInt64_t3771533229  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt64_t3771533229 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt64_t3771533229  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt64_t3771533229_StaticFields, ___Null_4)); }
	inline SqlInt64_t3771533229  get_Null_4() const { return ___Null_4; }
	inline SqlInt64_t3771533229 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt64_t3771533229  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt64_t3771533229_StaticFields, ___Zero_5)); }
	inline SqlInt64_t3771533229  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt64_t3771533229 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt64_t3771533229  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t3771533229_marshaled_pinvoke
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t3771533229_marshaled_com
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT64_T3771533229_H
#ifndef SQLDECIMAL_T1096635589_H
#define SQLDECIMAL_T1096635589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDecimal
struct  SqlDecimal_t1096635589 
{
public:
	// System.Int32[] System.Data.SqlTypes.SqlDecimal::value
	Int32U5BU5D_t385246372* ___value_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::precision
	uint8_t ___precision_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::scale
	uint8_t ___scale_2;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::positive
	bool ___positive_3;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::notNull
	bool ___notNull_4;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589, ___value_0)); }
	inline Int32U5BU5D_t385246372* get_value_0() const { return ___value_0; }
	inline Int32U5BU5D_t385246372** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Int32U5BU5D_t385246372* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_precision_1() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589, ___precision_1)); }
	inline uint8_t get_precision_1() const { return ___precision_1; }
	inline uint8_t* get_address_of_precision_1() { return &___precision_1; }
	inline void set_precision_1(uint8_t value)
	{
		___precision_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589, ___scale_2)); }
	inline uint8_t get_scale_2() const { return ___scale_2; }
	inline uint8_t* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(uint8_t value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_positive_3() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589, ___positive_3)); }
	inline bool get_positive_3() const { return ___positive_3; }
	inline bool* get_address_of_positive_3() { return &___positive_3; }
	inline void set_positive_3(bool value)
	{
		___positive_3 = value;
	}

	inline static int32_t get_offset_of_notNull_4() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589, ___notNull_4)); }
	inline bool get_notNull_4() const { return ___notNull_4; }
	inline bool* get_address_of_notNull_4() { return &___notNull_4; }
	inline void set_notNull_4(bool value)
	{
		___notNull_4 = value;
	}
};

struct SqlDecimal_t1096635589_StaticFields
{
public:
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::constantsDecadeInt32Factors
	UInt32U5BU5D_t2770800703* ___constantsDecadeInt32Factors_5;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_6;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_7;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t1096635589  ___MaxValue_8;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t1096635589  ___MinValue_9;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t1096635589  ___Null_10;

public:
	inline static int32_t get_offset_of_constantsDecadeInt32Factors_5() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589_StaticFields, ___constantsDecadeInt32Factors_5)); }
	inline UInt32U5BU5D_t2770800703* get_constantsDecadeInt32Factors_5() const { return ___constantsDecadeInt32Factors_5; }
	inline UInt32U5BU5D_t2770800703** get_address_of_constantsDecadeInt32Factors_5() { return &___constantsDecadeInt32Factors_5; }
	inline void set_constantsDecadeInt32Factors_5(UInt32U5BU5D_t2770800703* value)
	{
		___constantsDecadeInt32Factors_5 = value;
		Il2CppCodeGenWriteBarrier((&___constantsDecadeInt32Factors_5), value);
	}

	inline static int32_t get_offset_of_MaxPrecision_6() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589_StaticFields, ___MaxPrecision_6)); }
	inline uint8_t get_MaxPrecision_6() const { return ___MaxPrecision_6; }
	inline uint8_t* get_address_of_MaxPrecision_6() { return &___MaxPrecision_6; }
	inline void set_MaxPrecision_6(uint8_t value)
	{
		___MaxPrecision_6 = value;
	}

	inline static int32_t get_offset_of_MaxScale_7() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589_StaticFields, ___MaxScale_7)); }
	inline uint8_t get_MaxScale_7() const { return ___MaxScale_7; }
	inline uint8_t* get_address_of_MaxScale_7() { return &___MaxScale_7; }
	inline void set_MaxScale_7(uint8_t value)
	{
		___MaxScale_7 = value;
	}

	inline static int32_t get_offset_of_MaxValue_8() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589_StaticFields, ___MaxValue_8)); }
	inline SqlDecimal_t1096635589  get_MaxValue_8() const { return ___MaxValue_8; }
	inline SqlDecimal_t1096635589 * get_address_of_MaxValue_8() { return &___MaxValue_8; }
	inline void set_MaxValue_8(SqlDecimal_t1096635589  value)
	{
		___MaxValue_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589_StaticFields, ___MinValue_9)); }
	inline SqlDecimal_t1096635589  get_MinValue_9() const { return ___MinValue_9; }
	inline SqlDecimal_t1096635589 * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(SqlDecimal_t1096635589  value)
	{
		___MinValue_9 = value;
	}

	inline static int32_t get_offset_of_Null_10() { return static_cast<int32_t>(offsetof(SqlDecimal_t1096635589_StaticFields, ___Null_10)); }
	inline SqlDecimal_t1096635589  get_Null_10() const { return ___Null_10; }
	inline SqlDecimal_t1096635589 * get_address_of_Null_10() { return &___Null_10; }
	inline void set_Null_10(SqlDecimal_t1096635589  value)
	{
		___Null_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t1096635589_marshaled_pinvoke
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t1096635589_marshaled_com
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
#endif // SQLDECIMAL_T1096635589_H
#ifndef SQLBYTE_T2260568341_H
#define SQLBYTE_T2260568341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlByte
struct  SqlByte_t2260568341 
{
public:
	// System.Byte System.Data.SqlTypes.SqlByte::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlByte::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlByte_t2260568341, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlByte_t2260568341, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlByte_t2260568341_StaticFields
{
public:
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MaxValue
	SqlByte_t2260568341  ___MaxValue_2;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MinValue
	SqlByte_t2260568341  ___MinValue_3;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Null
	SqlByte_t2260568341  ___Null_4;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Zero
	SqlByte_t2260568341  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlByte_t2260568341_StaticFields, ___MaxValue_2)); }
	inline SqlByte_t2260568341  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlByte_t2260568341 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlByte_t2260568341  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlByte_t2260568341_StaticFields, ___MinValue_3)); }
	inline SqlByte_t2260568341  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlByte_t2260568341 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlByte_t2260568341  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlByte_t2260568341_StaticFields, ___Null_4)); }
	inline SqlByte_t2260568341  get_Null_4() const { return ___Null_4; }
	inline SqlByte_t2260568341 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlByte_t2260568341  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlByte_t2260568341_StaticFields, ___Zero_5)); }
	inline SqlByte_t2260568341  get_Zero_5() const { return ___Zero_5; }
	inline SqlByte_t2260568341 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlByte_t2260568341  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t2260568341_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t2260568341_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBYTE_T2260568341_H
#ifndef DESCRIPTIONATTRIBUTE_T874390736_H
#define DESCRIPTIONATTRIBUTE_T874390736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t874390736  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t874390736_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t874390736 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t874390736_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t874390736 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t874390736 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t874390736 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T874390736_H
#ifndef SQLINT16_T1815218091_H
#define SQLINT16_T1815218091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt16
struct  SqlInt16_t1815218091 
{
public:
	// System.Int16 System.Data.SqlTypes.SqlInt16::value
	int16_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt16::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt16_t1815218091, ___value_0)); }
	inline int16_t get_value_0() const { return ___value_0; }
	inline int16_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int16_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt16_t1815218091, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt16_t1815218091_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_t1815218091  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_t1815218091  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_t1815218091  ___Null_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_t1815218091  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt16_t1815218091_StaticFields, ___MaxValue_2)); }
	inline SqlInt16_t1815218091  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt16_t1815218091 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt16_t1815218091  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt16_t1815218091_StaticFields, ___MinValue_3)); }
	inline SqlInt16_t1815218091  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt16_t1815218091 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt16_t1815218091  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt16_t1815218091_StaticFields, ___Null_4)); }
	inline SqlInt16_t1815218091  get_Null_4() const { return ___Null_4; }
	inline SqlInt16_t1815218091 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt16_t1815218091  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt16_t1815218091_StaticFields, ___Zero_5)); }
	inline SqlInt16_t1815218091  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt16_t1815218091 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt16_t1815218091  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t1815218091_marshaled_pinvoke
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t1815218091_marshaled_com
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT16_T1815218091_H
#ifndef SQLBOOLEAN_T2781748253_H
#define SQLBOOLEAN_T2781748253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBoolean
struct  SqlBoolean_t2781748253 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBoolean::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_t2781748253, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBoolean_t2781748253, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBoolean_t2781748253_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_t2781748253  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_t2781748253  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_t2781748253  ___One_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_t2781748253  ___True_5;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_t2781748253  ___Zero_6;

public:
	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_t2781748253_StaticFields, ___False_2)); }
	inline SqlBoolean_t2781748253  get_False_2() const { return ___False_2; }
	inline SqlBoolean_t2781748253 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_t2781748253  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_t2781748253_StaticFields, ___Null_3)); }
	inline SqlBoolean_t2781748253  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_t2781748253 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_t2781748253  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(SqlBoolean_t2781748253_StaticFields, ___One_4)); }
	inline SqlBoolean_t2781748253  get_One_4() const { return ___One_4; }
	inline SqlBoolean_t2781748253 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(SqlBoolean_t2781748253  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_True_5() { return static_cast<int32_t>(offsetof(SqlBoolean_t2781748253_StaticFields, ___True_5)); }
	inline SqlBoolean_t2781748253  get_True_5() const { return ___True_5; }
	inline SqlBoolean_t2781748253 * get_address_of_True_5() { return &___True_5; }
	inline void set_True_5(SqlBoolean_t2781748253  value)
	{
		___True_5 = value;
	}

	inline static int32_t get_offset_of_Zero_6() { return static_cast<int32_t>(offsetof(SqlBoolean_t2781748253_StaticFields, ___Zero_6)); }
	inline SqlBoolean_t2781748253  get_Zero_6() const { return ___Zero_6; }
	inline SqlBoolean_t2781748253 * get_address_of_Zero_6() { return &___Zero_6; }
	inline void set_Zero_6(SqlBoolean_t2781748253  value)
	{
		___Zero_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t2781748253_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t2781748253_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBOOLEAN_T2781748253_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_6;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_7;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_8;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_9;

public:
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_4)); }
	inline Decimal_t2948259380  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t2948259380 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t2948259380  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef SQLBINARY_T4132310562_H
#define SQLBINARY_T4132310562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBinary
struct  SqlBinary_t4132310562 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::value
	ByteU5BU5D_t4116647657* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBinary::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t4132310562, ___value_0)); }
	inline ByteU5BU5D_t4116647657* get_value_0() const { return ___value_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ByteU5BU5D_t4116647657* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBinary_t4132310562, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBinary_t4132310562_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t4132310562  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlBinary_t4132310562_StaticFields, ___Null_2)); }
	inline SqlBinary_t4132310562  get_Null_2() const { return ___Null_2; }
	inline SqlBinary_t4132310562 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlBinary_t4132310562  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t4132310562_marshaled_pinvoke
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t4132310562_marshaled_com
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBINARY_T4132310562_H
#ifndef SQLSINGLE_T3751283737_H
#define SQLSINGLE_T3751283737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlSingle
struct  SqlSingle_t3751283737 
{
public:
	// System.Single System.Data.SqlTypes.SqlSingle::value
	float ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlSingle::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlSingle_t3751283737, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlSingle_t3751283737, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlSingle_t3751283737_StaticFields
{
public:
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_t3751283737  ___MaxValue_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_t3751283737  ___MinValue_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_t3751283737  ___Null_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_t3751283737  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlSingle_t3751283737_StaticFields, ___MaxValue_2)); }
	inline SqlSingle_t3751283737  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlSingle_t3751283737 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlSingle_t3751283737  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlSingle_t3751283737_StaticFields, ___MinValue_3)); }
	inline SqlSingle_t3751283737  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlSingle_t3751283737 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlSingle_t3751283737  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlSingle_t3751283737_StaticFields, ___Null_4)); }
	inline SqlSingle_t3751283737  get_Null_4() const { return ___Null_4; }
	inline SqlSingle_t3751283737 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlSingle_t3751283737  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlSingle_t3751283737_StaticFields, ___Zero_5)); }
	inline SqlSingle_t3751283737  get_Zero_5() const { return ___Zero_5; }
	inline SqlSingle_t3751283737 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlSingle_t3751283737  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t3751283737_marshaled_pinvoke
{
	float ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t3751283737_marshaled_com
{
	float ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLSINGLE_T3751283737_H
#ifndef CATEGORYATTRIBUTE_T39585132_H
#define CATEGORYATTRIBUTE_T39585132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t39585132  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t39585132_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t39585132 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___def_2)); }
	inline CategoryAttribute_t39585132 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t39585132 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t39585132 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier((&___def_2), value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t39585132_StaticFields, ___lockobj_3)); }
	inline RuntimeObject * get_lockobj_3() const { return ___lockobj_3; }
	inline RuntimeObject ** get_address_of_lockobj_3() { return &___lockobj_3; }
	inline void set_lockobj_3(RuntimeObject * value)
	{
		___lockobj_3 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T39585132_H
#ifndef EXPANDABLEOBJECTCONVERTER_T420832579_H
#define EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t420832579  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T420832579_H
#ifndef MAPPINGTYPE_T4061812973_H
#define MAPPINGTYPE_T4061812973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MappingType
struct  MappingType_t4061812973 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t4061812973, ___value___1)); }
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
#endif // MAPPINGTYPE_T4061812973_H
#ifndef MISSINGSCHEMAACTION_T2848901085_H
#define MISSINGSCHEMAACTION_T2848901085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingSchemaAction
struct  MissingSchemaAction_t2848901085 
{
public:
	// System.Int32 System.Data.MissingSchemaAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MissingSchemaAction_t2848901085, ___value___1)); }
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
#endif // MISSINGSCHEMAACTION_T2848901085_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef DATAADAPTER_T2689867586_H
#define DATAADAPTER_T2689867586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t2689867586  : public Component_t3620823400
{
public:
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t2364717775 * ___tableMappings_4;

public:
	inline static int32_t get_offset_of_tableMappings_4() { return static_cast<int32_t>(offsetof(DataAdapter_t2689867586, ___tableMappings_4)); }
	inline DataTableMappingCollection_t2364717775 * get_tableMappings_4() const { return ___tableMappings_4; }
	inline DataTableMappingCollection_t2364717775 ** get_address_of_tableMappings_4() { return &___tableMappings_4; }
	inline void set_tableMappings_4(DataTableMappingCollection_t2364717775 * value)
	{
		___tableMappings_4 = value;
		Il2CppCodeGenWriteBarrier((&___tableMappings_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAADAPTER_T2689867586_H
#ifndef PARAMETERDIRECTION_T533932466_H
#define PARAMETERDIRECTION_T533932466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ParameterDirection
struct  ParameterDirection_t533932466 
{
public:
	// System.Int32 System.Data.ParameterDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterDirection_t533932466, ___value___1)); }
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
#endif // PARAMETERDIRECTION_T533932466_H
#ifndef SCHEMASERIALIZATIONMODE_T2521597533_H
#define SCHEMASERIALIZATIONMODE_T2521597533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SchemaSerializationMode
struct  SchemaSerializationMode_t2521597533 
{
public:
	// System.Int32 System.Data.SchemaSerializationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SchemaSerializationMode_t2521597533, ___value___1)); }
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
#endif // SCHEMASERIALIZATIONMODE_T2521597533_H
#ifndef SERIALIZATIONFORMAT_T3115973676_H
#define SERIALIZATIONFORMAT_T3115973676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SerializationFormat
struct  SerializationFormat_t3115973676 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SerializationFormat_t3115973676, ___value___1)); }
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
#endif // SERIALIZATIONFORMAT_T3115973676_H
#ifndef GENERATEMETHODSTYPE_T961208507_H
#define GENERATEMETHODSTYPE_T961208507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.GenerateMethodsType
struct  GenerateMethodsType_t961208507 
{
public:
	// System.Int32 System.Data.GenerateMethodsType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GenerateMethodsType_t961208507, ___value___1)); }
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
#endif // GENERATEMETHODSTYPE_T961208507_H
#ifndef RULE_T2627824861_H
#define RULE_T2627824861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Rule
struct  Rule_t2627824861 
{
public:
	// System.Int32 System.Data.Rule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Rule_t2627824861, ___value___1)); }
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
#endif // RULE_T2627824861_H
#ifndef RELATIONSHIPCONVERTER_T3945959161_H
#define RELATIONSHIPCONVERTER_T3945959161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RelationshipConverter
struct  RelationshipConverter_t3945959161  : public ExpandableObjectConverter_t420832579
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIONSHIPCONVERTER_T3945959161_H
#ifndef DBCOMMAND_T187824494_H
#define DBCOMMAND_T187824494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommand
struct  DbCommand_t187824494  : public Component_t3620823400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMAND_T187824494_H
#ifndef RESDESCRIPTIONATTRIBUTE_T3598628915_H
#define RESDESCRIPTIONATTRIBUTE_T3598628915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ResDescriptionAttribute
struct  ResDescriptionAttribute_t3598628915  : public DescriptionAttribute_t874390736
{
public:
	// System.String System.Data.ResDescriptionAttribute::description
	String_t* ___description_2;

public:
	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(ResDescriptionAttribute_t3598628915, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDESCRIPTIONATTRIBUTE_T3598628915_H
#ifndef SQLTYPEEXCEPTION_T2591521188_H
#define SQLTYPEEXCEPTION_T2591521188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTypeException
struct  SqlTypeException_t2591521188  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTYPEEXCEPTION_T2591521188_H
#ifndef STORAGESTATE_T1073348566_H
#define STORAGESTATE_T1073348566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.StorageState
struct  StorageState_t1073348566 
{
public:
	// System.Int32 System.Data.SqlTypes.StorageState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageState_t1073348566, ___value___1)); }
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
#endif // STORAGESTATE_T1073348566_H
#ifndef DATAROWACTION_T1860448470_H
#define DATAROWACTION_T1860448470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowAction
struct  DataRowAction_t1860448470 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowAction_t1860448470, ___value___1)); }
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
#endif // DATAROWACTION_T1860448470_H
#ifndef CONSTRAINTCONVERTER_T2402564707_H
#define CONSTRAINTCONVERTER_T2402564707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintConverter
struct  ConstraintConverter_t2402564707  : public ExpandableObjectConverter_t420832579
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCONVERTER_T2402564707_H
#ifndef DATAROWVERSION_T3777956179_H
#define DATAROWVERSION_T3777956179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowVersion
struct  DataRowVersion_t3777956179 
{
public:
	// System.Int32 System.Data.DataRowVersion::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowVersion_t3777956179, ___value___1)); }
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
#endif // DATAROWVERSION_T3777956179_H
#ifndef DATAROWSTATE_T3360857979_H
#define DATAROWSTATE_T3360857979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowState
struct  DataRowState_t3360857979 
{
public:
	// System.Int32 System.Data.DataRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowState_t3360857979, ___value___1)); }
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
#endif // DATAROWSTATE_T3360857979_H
#ifndef DATATABLERELATIONCOLLECTION_T578333039_H
#define DATATABLERELATIONCOLLECTION_T578333039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t578333039  : public DataRelationCollection_t3198980347
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t1734486485 * ___dataTable_5;

public:
	inline static int32_t get_offset_of_dataTable_5() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t578333039, ___dataTable_5)); }
	inline DataTable_t1734486485 * get_dataTable_5() const { return ___dataTable_5; }
	inline DataTable_t1734486485 ** get_address_of_dataTable_5() { return &___dataTable_5; }
	inline void set_dataTable_5(DataTable_t1734486485 * value)
	{
		___dataTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLERELATIONCOLLECTION_T578333039_H
#ifndef COLUMNTYPECONVERTER_T146894428_H
#define COLUMNTYPECONVERTER_T146894428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ColumnTypeConverter
struct  ColumnTypeConverter_t146894428  : public ExpandableObjectConverter_t420832579
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNTYPECONVERTER_T146894428_H
#ifndef COMMANDTYPE_T755427385_H
#define COMMANDTYPE_T755427385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandType
struct  CommandType_t755427385 
{
public:
	// System.Int32 System.Data.CommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandType_t755427385, ___value___1)); }
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
#endif // COMMANDTYPE_T755427385_H
#ifndef DATACATEGORYATTRIBUTE_T150699394_H
#define DATACATEGORYATTRIBUTE_T150699394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataCategoryAttribute
struct  DataCategoryAttribute_t150699394  : public CategoryAttribute_t39585132
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACATEGORYATTRIBUTE_T150699394_H
#ifndef DATASETRELATIONCOLLECTION_T60486336_H
#define DATASETRELATIONCOLLECTION_T60486336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t60486336  : public DataRelationCollection_t3198980347
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t3773542243 * ___dataSet_5;

public:
	inline static int32_t get_offset_of_dataSet_5() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t60486336, ___dataSet_5)); }
	inline DataSet_t3773542243 * get_dataSet_5() const { return ___dataSet_5; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_5() { return &___dataSet_5; }
	inline void set_dataSet_5(DataSet_t3773542243 * value)
	{
		___dataSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETRELATIONCOLLECTION_T60486336_H
#ifndef DATAEXCEPTION_T1067854026_H
#define DATAEXCEPTION_T1067854026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataException
struct  DataException_t1067854026  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAEXCEPTION_T1067854026_H
#ifndef ACCEPTREJECTRULE_T2136770941_H
#define ACCEPTREJECTRULE_T2136770941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.AcceptRejectRule
struct  AcceptRejectRule_t2136770941 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t2136770941, ___value___1)); }
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
#endif // ACCEPTREJECTRULE_T2136770941_H
#ifndef SQLGUID_T1775442377_H
#define SQLGUID_T1775442377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlGuid
struct  SqlGuid_t1775442377 
{
public:
	// System.Guid System.Data.SqlTypes.SqlGuid::value
	Guid_t  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlGuid::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlGuid_t1775442377, ___value_0)); }
	inline Guid_t  get_value_0() const { return ___value_0; }
	inline Guid_t * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Guid_t  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlGuid_t1775442377, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlGuid_t1775442377_StaticFields
{
public:
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t1775442377  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlGuid_t1775442377_StaticFields, ___Null_2)); }
	inline SqlGuid_t1775442377  get_Null_2() const { return ___Null_2; }
	inline SqlGuid_t1775442377 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlGuid_t1775442377  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t1775442377_marshaled_pinvoke
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t1775442377_marshaled_com
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLGUID_T1775442377_H
#ifndef DATAVIEWROWSTATE_T622870493_H
#define DATAVIEWROWSTATE_T622870493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataViewRowState
struct  DataViewRowState_t622870493 
{
public:
	// System.Int32 System.Data.DataViewRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataViewRowState_t622870493, ___value___1)); }
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
#endif // DATAVIEWROWSTATE_T622870493_H
#ifndef DEFAULTVALUETYPECONVERTER_T2586767677_H
#define DEFAULTVALUETYPECONVERTER_T2586767677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DefaultValueTypeConverter
struct  DefaultValueTypeConverter_t2586767677  : public ExpandableObjectConverter_t420832579
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUETYPECONVERTER_T2586767677_H
#ifndef DBCONNECTION_T1716984062_H
#define DBCONNECTION_T1716984062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection
struct  DbConnection_t1716984062  : public Component_t3620823400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCONNECTION_T1716984062_H
#ifndef SQLCOMPAREOPTIONS_T96852136_H
#define SQLCOMPAREOPTIONS_T96852136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlCompareOptions
struct  SqlCompareOptions_t96852136 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlCompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SqlCompareOptions_t96852136, ___value___1)); }
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
#endif // SQLCOMPAREOPTIONS_T96852136_H
#ifndef DATASETDATETIME_T3321856641_H
#define DATASETDATETIME_T3321856641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSetDateTime
struct  DataSetDateTime_t3321856641 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSetDateTime_t3321856641, ___value___1)); }
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
#endif // DATASETDATETIME_T3321856641_H
#ifndef SQLMONEY_T3362852048_H
#define SQLMONEY_T3362852048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t3362852048 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t2948259380  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t3362852048, ___value_0)); }
	inline Decimal_t2948259380  get_value_0() const { return ___value_0; }
	inline Decimal_t2948259380 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t2948259380  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t3362852048, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t3362852048_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t3362852048  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t3362852048  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t3362852048  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t3362852048  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t435877138 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t3362852048_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t3362852048  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t3362852048 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t3362852048  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t3362852048_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t3362852048  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t3362852048 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t3362852048  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t3362852048_StaticFields, ___Null_4)); }
	inline SqlMoney_t3362852048  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t3362852048 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t3362852048  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t3362852048_StaticFields, ___Zero_5)); }
	inline SqlMoney_t3362852048  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t3362852048 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t3362852048  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t3362852048_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t435877138 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t435877138 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t435877138 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier((&___MoneyFormat_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3362852048_marshaled_pinvoke
{
	Decimal_t2948259380  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3362852048_marshaled_com
{
	Decimal_t2948259380  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLMONEY_T3362852048_H
#ifndef KEY_T1531728703_H
#define KEY_T1531728703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Key
struct  Key_t1531728703  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.Common.Key::_table
	DataTable_t1734486485 * ____table_0;
	// System.Data.DataColumn[] System.Data.Common.Key::_columns
	DataColumnU5BU5D_t3317819609* ____columns_1;
	// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::_sortDirection
	ListSortDirectionU5BU5D_t3495088045* ____sortDirection_2;
	// System.Data.DataViewRowState System.Data.Common.Key::_rowStateFilter
	int32_t ____rowStateFilter_3;
	// Mono.Data.SqlExpressions.IExpression System.Data.Common.Key::_filter
	RuntimeObject* ____filter_4;
	// System.Data.DataRow System.Data.Common.Key::_tmpRow
	DataRow_t3370913075 * ____tmpRow_5;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(Key_t1531728703, ____table_0)); }
	inline DataTable_t1734486485 * get__table_0() const { return ____table_0; }
	inline DataTable_t1734486485 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t1734486485 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(Key_t1531728703, ____columns_1)); }
	inline DataColumnU5BU5D_t3317819609* get__columns_1() const { return ____columns_1; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnU5BU5D_t3317819609* value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((&____columns_1), value);
	}

	inline static int32_t get_offset_of__sortDirection_2() { return static_cast<int32_t>(offsetof(Key_t1531728703, ____sortDirection_2)); }
	inline ListSortDirectionU5BU5D_t3495088045* get__sortDirection_2() const { return ____sortDirection_2; }
	inline ListSortDirectionU5BU5D_t3495088045** get_address_of__sortDirection_2() { return &____sortDirection_2; }
	inline void set__sortDirection_2(ListSortDirectionU5BU5D_t3495088045* value)
	{
		____sortDirection_2 = value;
		Il2CppCodeGenWriteBarrier((&____sortDirection_2), value);
	}

	inline static int32_t get_offset_of__rowStateFilter_3() { return static_cast<int32_t>(offsetof(Key_t1531728703, ____rowStateFilter_3)); }
	inline int32_t get__rowStateFilter_3() const { return ____rowStateFilter_3; }
	inline int32_t* get_address_of__rowStateFilter_3() { return &____rowStateFilter_3; }
	inline void set__rowStateFilter_3(int32_t value)
	{
		____rowStateFilter_3 = value;
	}

	inline static int32_t get_offset_of__filter_4() { return static_cast<int32_t>(offsetof(Key_t1531728703, ____filter_4)); }
	inline RuntimeObject* get__filter_4() const { return ____filter_4; }
	inline RuntimeObject** get_address_of__filter_4() { return &____filter_4; }
	inline void set__filter_4(RuntimeObject* value)
	{
		____filter_4 = value;
		Il2CppCodeGenWriteBarrier((&____filter_4), value);
	}

	inline static int32_t get_offset_of__tmpRow_5() { return static_cast<int32_t>(offsetof(Key_t1531728703, ____tmpRow_5)); }
	inline DataRow_t3370913075 * get__tmpRow_5() const { return ____tmpRow_5; }
	inline DataRow_t3370913075 ** get_address_of__tmpRow_5() { return &____tmpRow_5; }
	inline void set__tmpRow_5(DataRow_t3370913075 * value)
	{
		____tmpRow_5 = value;
		Il2CppCodeGenWriteBarrier((&____tmpRow_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T1531728703_H
#ifndef SQLTRUNCATEEXCEPTION_T878363452_H
#define SQLTRUNCATEEXCEPTION_T878363452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTruncateException
struct  SqlTruncateException_t878363452  : public SqlTypeException_t2591521188
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTRUNCATEEXCEPTION_T878363452_H
#ifndef DBDATAADAPTER_T1706016184_H
#define DBDATAADAPTER_T1706016184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t1706016184  : public DataAdapter_t2689867586
{
public:
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_selectCommand
	RuntimeObject* ____selectCommand_5;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_updateCommand
	RuntimeObject* ____updateCommand_6;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_deleteCommand
	RuntimeObject* ____deleteCommand_7;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_insertCommand
	RuntimeObject* ____insertCommand_8;

public:
	inline static int32_t get_offset_of__selectCommand_5() { return static_cast<int32_t>(offsetof(DbDataAdapter_t1706016184, ____selectCommand_5)); }
	inline RuntimeObject* get__selectCommand_5() const { return ____selectCommand_5; }
	inline RuntimeObject** get_address_of__selectCommand_5() { return &____selectCommand_5; }
	inline void set__selectCommand_5(RuntimeObject* value)
	{
		____selectCommand_5 = value;
		Il2CppCodeGenWriteBarrier((&____selectCommand_5), value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbDataAdapter_t1706016184, ____updateCommand_6)); }
	inline RuntimeObject* get__updateCommand_6() const { return ____updateCommand_6; }
	inline RuntimeObject** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(RuntimeObject* value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier((&____updateCommand_6), value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbDataAdapter_t1706016184, ____deleteCommand_7)); }
	inline RuntimeObject* get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline RuntimeObject** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(RuntimeObject* value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier((&____deleteCommand_7), value);
	}

	inline static int32_t get_offset_of__insertCommand_8() { return static_cast<int32_t>(offsetof(DbDataAdapter_t1706016184, ____insertCommand_8)); }
	inline RuntimeObject* get__insertCommand_8() const { return ____insertCommand_8; }
	inline RuntimeObject** get_address_of__insertCommand_8() { return &____insertCommand_8; }
	inline void set__insertCommand_8(RuntimeObject* value)
	{
		____insertCommand_8 = value;
		Il2CppCodeGenWriteBarrier((&____insertCommand_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBDATAADAPTER_T1706016184_H
#ifndef SQLBYTES_T3426683087_H
#define SQLBYTES_T3426683087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBytes
struct  SqlBytes_t3426683087  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlBytes::notNull
	bool ___notNull_0;
	// System.Byte[] System.Data.SqlTypes.SqlBytes::buffer
	ByteU5BU5D_t4116647657* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlBytes::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlBytes_t3426683087, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlBytes_t3426683087, ___buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlBytes_t3426683087, ___storage_2)); }
	inline int32_t get_storage_2() const { return ___storage_2; }
	inline int32_t* get_address_of_storage_2() { return &___storage_2; }
	inline void set_storage_2(int32_t value)
	{
		___storage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLBYTES_T3426683087_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef SQLNULLVALUEEXCEPTION_T3009575780_H
#define SQLNULLVALUEEXCEPTION_T3009575780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlNullValueException
struct  SqlNullValueException_t3009575780  : public SqlTypeException_t2591521188
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLNULLVALUEEXCEPTION_T3009575780_H
#ifndef SQLCHARS_T711193749_H
#define SQLCHARS_T711193749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlChars
struct  SqlChars_t711193749  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlChars::notNull
	bool ___notNull_0;
	// System.Char[] System.Data.SqlTypes.SqlChars::buffer
	CharU5BU5D_t3528271667* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlChars::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlChars_t711193749, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlChars_t711193749, ___buffer_1)); }
	inline CharU5BU5D_t3528271667* get_buffer_1() const { return ___buffer_1; }
	inline CharU5BU5D_t3528271667** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(CharU5BU5D_t3528271667* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlChars_t711193749, ___storage_2)); }
	inline int32_t get_storage_2() const { return ___storage_2; }
	inline int32_t* get_address_of_storage_2() { return &___storage_2; }
	inline void set_storage_2(int32_t value)
	{
		___storage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLCHARS_T711193749_H
#ifndef SQLSTRING_T3442887463_H
#define SQLSTRING_T3442887463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlString
struct  SqlString_t3442887463 
{
public:
	// System.String System.Data.SqlTypes.SqlString::value
	String_t* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlString::notNull
	bool ___notNull_1;
	// System.Int32 System.Data.SqlTypes.SqlString::lcid
	int32_t ___lcid_2;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::compareOptions
	int32_t ___compareOptions_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlString_t3442887463, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlString_t3442887463, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(SqlString_t3442887463, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_compareOptions_3() { return static_cast<int32_t>(offsetof(SqlString_t3442887463, ___compareOptions_3)); }
	inline int32_t get_compareOptions_3() const { return ___compareOptions_3; }
	inline int32_t* get_address_of_compareOptions_3() { return &___compareOptions_3; }
	inline void set_compareOptions_3(int32_t value)
	{
		___compareOptions_3 = value;
	}
};

struct SqlString_t3442887463_StaticFields
{
public:
	// System.Int32 System.Data.SqlTypes.SqlString::BinarySort
	int32_t ___BinarySort_4;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreCase
	int32_t ___IgnoreCase_5;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreKanaType
	int32_t ___IgnoreKanaType_6;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreNonSpace
	int32_t ___IgnoreNonSpace_7;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreWidth
	int32_t ___IgnoreWidth_8;
	// System.Data.SqlTypes.SqlString System.Data.SqlTypes.SqlString::Null
	SqlString_t3442887463  ___Null_9;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlString::DecimalFormat
	NumberFormatInfo_t435877138 * ___DecimalFormat_10;

public:
	inline static int32_t get_offset_of_BinarySort_4() { return static_cast<int32_t>(offsetof(SqlString_t3442887463_StaticFields, ___BinarySort_4)); }
	inline int32_t get_BinarySort_4() const { return ___BinarySort_4; }
	inline int32_t* get_address_of_BinarySort_4() { return &___BinarySort_4; }
	inline void set_BinarySort_4(int32_t value)
	{
		___BinarySort_4 = value;
	}

	inline static int32_t get_offset_of_IgnoreCase_5() { return static_cast<int32_t>(offsetof(SqlString_t3442887463_StaticFields, ___IgnoreCase_5)); }
	inline int32_t get_IgnoreCase_5() const { return ___IgnoreCase_5; }
	inline int32_t* get_address_of_IgnoreCase_5() { return &___IgnoreCase_5; }
	inline void set_IgnoreCase_5(int32_t value)
	{
		___IgnoreCase_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreKanaType_6() { return static_cast<int32_t>(offsetof(SqlString_t3442887463_StaticFields, ___IgnoreKanaType_6)); }
	inline int32_t get_IgnoreKanaType_6() const { return ___IgnoreKanaType_6; }
	inline int32_t* get_address_of_IgnoreKanaType_6() { return &___IgnoreKanaType_6; }
	inline void set_IgnoreKanaType_6(int32_t value)
	{
		___IgnoreKanaType_6 = value;
	}

	inline static int32_t get_offset_of_IgnoreNonSpace_7() { return static_cast<int32_t>(offsetof(SqlString_t3442887463_StaticFields, ___IgnoreNonSpace_7)); }
	inline int32_t get_IgnoreNonSpace_7() const { return ___IgnoreNonSpace_7; }
	inline int32_t* get_address_of_IgnoreNonSpace_7() { return &___IgnoreNonSpace_7; }
	inline void set_IgnoreNonSpace_7(int32_t value)
	{
		___IgnoreNonSpace_7 = value;
	}

	inline static int32_t get_offset_of_IgnoreWidth_8() { return static_cast<int32_t>(offsetof(SqlString_t3442887463_StaticFields, ___IgnoreWidth_8)); }
	inline int32_t get_IgnoreWidth_8() const { return ___IgnoreWidth_8; }
	inline int32_t* get_address_of_IgnoreWidth_8() { return &___IgnoreWidth_8; }
	inline void set_IgnoreWidth_8(int32_t value)
	{
		___IgnoreWidth_8 = value;
	}

	inline static int32_t get_offset_of_Null_9() { return static_cast<int32_t>(offsetof(SqlString_t3442887463_StaticFields, ___Null_9)); }
	inline SqlString_t3442887463  get_Null_9() const { return ___Null_9; }
	inline SqlString_t3442887463 * get_address_of_Null_9() { return &___Null_9; }
	inline void set_Null_9(SqlString_t3442887463  value)
	{
		___Null_9 = value;
	}

	inline static int32_t get_offset_of_DecimalFormat_10() { return static_cast<int32_t>(offsetof(SqlString_t3442887463_StaticFields, ___DecimalFormat_10)); }
	inline NumberFormatInfo_t435877138 * get_DecimalFormat_10() const { return ___DecimalFormat_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_DecimalFormat_10() { return &___DecimalFormat_10; }
	inline void set_DecimalFormat_10(NumberFormatInfo_t435877138 * value)
	{
		___DecimalFormat_10 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalFormat_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t3442887463_marshaled_pinvoke
{
	char* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t3442887463_marshaled_com
{
	Il2CppChar* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
#endif // SQLSTRING_T3442887463_H
#ifndef DATATABLE_T1734486485_H
#define DATATABLE_T1734486485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_t1734486485  : public MarshalByValueComponent_t828052580
{
public:
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t3773542243 * ___dataSet_2;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_3;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t479471535 * ____columnCollection_4;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t259828334 * ____constraintCollection_5;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_6;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t3446977085 * ____extendedProperties_7;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t4157843068 * ____locale_8;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_9;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t3198980347 * ____childRelations_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t3198980347 * ____parentRelations_12;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_13;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t841719017 * ____primaryKeyConstraint_14;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t3217300826 * ____rows_15;
	// System.ComponentModel.ISite System.Data.DataTable::_site
	RuntimeObject* ____site_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.Boolean System.Data.DataTable::_duringDataLoad
	bool ____duringDataLoad_18;
	// System.Boolean System.Data.DataTable::_nullConstraintViolationDuringDataLoad
	bool ____nullConstraintViolationDuringDataLoad_19;
	// System.Boolean System.Data.DataTable::enforceConstraints
	bool ___enforceConstraints_20;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t3193098686 * ____rowBuilder_21;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t2718874744 * ____indexes_22;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t2814565283 * ____recordCache_23;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_24;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_25;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_26;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t4164928659 * ____propertyDescriptorsCache_27;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t3317819609* ____latestPrimaryKeyCols_30;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t3122106530* ___empty_rows_31;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_32;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_33;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t1943750078 * ___ColumnChanged_34;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t1943750078 * ___ColumnChanging_35;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t1758895939 * ___RowChanged_36;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t1758895939 * ___RowChanging_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t1758895939 * ___RowDeleted_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t1758895939 * ___RowDeleting_39;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t4233335338 * ___TableNewRow_40;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___dataSet_2)); }
	inline DataSet_t3773542243 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t3773542243 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t3773542243 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_2), value);
	}

	inline static int32_t get_offset_of__caseSensitive_3() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____caseSensitive_3)); }
	inline bool get__caseSensitive_3() const { return ____caseSensitive_3; }
	inline bool* get_address_of__caseSensitive_3() { return &____caseSensitive_3; }
	inline void set__caseSensitive_3(bool value)
	{
		____caseSensitive_3 = value;
	}

	inline static int32_t get_offset_of__columnCollection_4() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____columnCollection_4)); }
	inline DataColumnCollection_t479471535 * get__columnCollection_4() const { return ____columnCollection_4; }
	inline DataColumnCollection_t479471535 ** get_address_of__columnCollection_4() { return &____columnCollection_4; }
	inline void set__columnCollection_4(DataColumnCollection_t479471535 * value)
	{
		____columnCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&____columnCollection_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____constraintCollection_5)); }
	inline ConstraintCollection_t259828334 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t259828334 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t259828334 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of__displayExpression_6() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____displayExpression_6)); }
	inline String_t* get__displayExpression_6() const { return ____displayExpression_6; }
	inline String_t** get_address_of__displayExpression_6() { return &____displayExpression_6; }
	inline void set__displayExpression_6(String_t* value)
	{
		____displayExpression_6 = value;
		Il2CppCodeGenWriteBarrier((&____displayExpression_6), value);
	}

	inline static int32_t get_offset_of__extendedProperties_7() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____extendedProperties_7)); }
	inline PropertyCollection_t3446977085 * get__extendedProperties_7() const { return ____extendedProperties_7; }
	inline PropertyCollection_t3446977085 ** get_address_of__extendedProperties_7() { return &____extendedProperties_7; }
	inline void set__extendedProperties_7(PropertyCollection_t3446977085 * value)
	{
		____extendedProperties_7 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_7), value);
	}

	inline static int32_t get_offset_of__locale_8() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____locale_8)); }
	inline CultureInfo_t4157843068 * get__locale_8() const { return ____locale_8; }
	inline CultureInfo_t4157843068 ** get_address_of__locale_8() { return &____locale_8; }
	inline void set__locale_8(CultureInfo_t4157843068 * value)
	{
		____locale_8 = value;
		Il2CppCodeGenWriteBarrier((&____locale_8), value);
	}

	inline static int32_t get_offset_of__minimumCapacity_9() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____minimumCapacity_9)); }
	inline int32_t get__minimumCapacity_9() const { return ____minimumCapacity_9; }
	inline int32_t* get_address_of__minimumCapacity_9() { return &____minimumCapacity_9; }
	inline void set__minimumCapacity_9(int32_t value)
	{
		____minimumCapacity_9 = value;
	}

	inline static int32_t get_offset_of__nameSpace_10() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____nameSpace_10)); }
	inline String_t* get__nameSpace_10() const { return ____nameSpace_10; }
	inline String_t** get_address_of__nameSpace_10() { return &____nameSpace_10; }
	inline void set__nameSpace_10(String_t* value)
	{
		____nameSpace_10 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_10), value);
	}

	inline static int32_t get_offset_of__childRelations_11() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____childRelations_11)); }
	inline DataRelationCollection_t3198980347 * get__childRelations_11() const { return ____childRelations_11; }
	inline DataRelationCollection_t3198980347 ** get_address_of__childRelations_11() { return &____childRelations_11; }
	inline void set__childRelations_11(DataRelationCollection_t3198980347 * value)
	{
		____childRelations_11 = value;
		Il2CppCodeGenWriteBarrier((&____childRelations_11), value);
	}

	inline static int32_t get_offset_of__parentRelations_12() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____parentRelations_12)); }
	inline DataRelationCollection_t3198980347 * get__parentRelations_12() const { return ____parentRelations_12; }
	inline DataRelationCollection_t3198980347 ** get_address_of__parentRelations_12() { return &____parentRelations_12; }
	inline void set__parentRelations_12(DataRelationCollection_t3198980347 * value)
	{
		____parentRelations_12 = value;
		Il2CppCodeGenWriteBarrier((&____parentRelations_12), value);
	}

	inline static int32_t get_offset_of__prefix_13() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____prefix_13)); }
	inline String_t* get__prefix_13() const { return ____prefix_13; }
	inline String_t** get_address_of__prefix_13() { return &____prefix_13; }
	inline void set__prefix_13(String_t* value)
	{
		____prefix_13 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_13), value);
	}

	inline static int32_t get_offset_of__primaryKeyConstraint_14() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____primaryKeyConstraint_14)); }
	inline UniqueConstraint_t841719017 * get__primaryKeyConstraint_14() const { return ____primaryKeyConstraint_14; }
	inline UniqueConstraint_t841719017 ** get_address_of__primaryKeyConstraint_14() { return &____primaryKeyConstraint_14; }
	inline void set__primaryKeyConstraint_14(UniqueConstraint_t841719017 * value)
	{
		____primaryKeyConstraint_14 = value;
		Il2CppCodeGenWriteBarrier((&____primaryKeyConstraint_14), value);
	}

	inline static int32_t get_offset_of__rows_15() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____rows_15)); }
	inline DataRowCollection_t3217300826 * get__rows_15() const { return ____rows_15; }
	inline DataRowCollection_t3217300826 ** get_address_of__rows_15() { return &____rows_15; }
	inline void set__rows_15(DataRowCollection_t3217300826 * value)
	{
		____rows_15 = value;
		Il2CppCodeGenWriteBarrier((&____rows_15), value);
	}

	inline static int32_t get_offset_of__site_16() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____site_16)); }
	inline RuntimeObject* get__site_16() const { return ____site_16; }
	inline RuntimeObject** get_address_of__site_16() { return &____site_16; }
	inline void set__site_16(RuntimeObject* value)
	{
		____site_16 = value;
		Il2CppCodeGenWriteBarrier((&____site_16), value);
	}

	inline static int32_t get_offset_of__tableName_17() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____tableName_17)); }
	inline String_t* get__tableName_17() const { return ____tableName_17; }
	inline String_t** get_address_of__tableName_17() { return &____tableName_17; }
	inline void set__tableName_17(String_t* value)
	{
		____tableName_17 = value;
		Il2CppCodeGenWriteBarrier((&____tableName_17), value);
	}

	inline static int32_t get_offset_of__duringDataLoad_18() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____duringDataLoad_18)); }
	inline bool get__duringDataLoad_18() const { return ____duringDataLoad_18; }
	inline bool* get_address_of__duringDataLoad_18() { return &____duringDataLoad_18; }
	inline void set__duringDataLoad_18(bool value)
	{
		____duringDataLoad_18 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolationDuringDataLoad_19() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____nullConstraintViolationDuringDataLoad_19)); }
	inline bool get__nullConstraintViolationDuringDataLoad_19() const { return ____nullConstraintViolationDuringDataLoad_19; }
	inline bool* get_address_of__nullConstraintViolationDuringDataLoad_19() { return &____nullConstraintViolationDuringDataLoad_19; }
	inline void set__nullConstraintViolationDuringDataLoad_19(bool value)
	{
		____nullConstraintViolationDuringDataLoad_19 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_20() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___enforceConstraints_20)); }
	inline bool get_enforceConstraints_20() const { return ___enforceConstraints_20; }
	inline bool* get_address_of_enforceConstraints_20() { return &___enforceConstraints_20; }
	inline void set_enforceConstraints_20(bool value)
	{
		___enforceConstraints_20 = value;
	}

	inline static int32_t get_offset_of__rowBuilder_21() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____rowBuilder_21)); }
	inline DataRowBuilder_t3193098686 * get__rowBuilder_21() const { return ____rowBuilder_21; }
	inline DataRowBuilder_t3193098686 ** get_address_of__rowBuilder_21() { return &____rowBuilder_21; }
	inline void set__rowBuilder_21(DataRowBuilder_t3193098686 * value)
	{
		____rowBuilder_21 = value;
		Il2CppCodeGenWriteBarrier((&____rowBuilder_21), value);
	}

	inline static int32_t get_offset_of__indexes_22() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____indexes_22)); }
	inline ArrayList_t2718874744 * get__indexes_22() const { return ____indexes_22; }
	inline ArrayList_t2718874744 ** get_address_of__indexes_22() { return &____indexes_22; }
	inline void set__indexes_22(ArrayList_t2718874744 * value)
	{
		____indexes_22 = value;
		Il2CppCodeGenWriteBarrier((&____indexes_22), value);
	}

	inline static int32_t get_offset_of__recordCache_23() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____recordCache_23)); }
	inline RecordCache_t2814565283 * get__recordCache_23() const { return ____recordCache_23; }
	inline RecordCache_t2814565283 ** get_address_of__recordCache_23() { return &____recordCache_23; }
	inline void set__recordCache_23(RecordCache_t2814565283 * value)
	{
		____recordCache_23 = value;
		Il2CppCodeGenWriteBarrier((&____recordCache_23), value);
	}

	inline static int32_t get_offset_of__defaultValuesRowIndex_24() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____defaultValuesRowIndex_24)); }
	inline int32_t get__defaultValuesRowIndex_24() const { return ____defaultValuesRowIndex_24; }
	inline int32_t* get_address_of__defaultValuesRowIndex_24() { return &____defaultValuesRowIndex_24; }
	inline void set__defaultValuesRowIndex_24(int32_t value)
	{
		____defaultValuesRowIndex_24 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_25() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___fInitInProgress_25)); }
	inline bool get_fInitInProgress_25() const { return ___fInitInProgress_25; }
	inline bool* get_address_of_fInitInProgress_25() { return &___fInitInProgress_25; }
	inline void set_fInitInProgress_25(bool value)
	{
		___fInitInProgress_25 = value;
	}

	inline static int32_t get_offset_of__virginCaseSensitive_26() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____virginCaseSensitive_26)); }
	inline bool get__virginCaseSensitive_26() const { return ____virginCaseSensitive_26; }
	inline bool* get_address_of__virginCaseSensitive_26() { return &____virginCaseSensitive_26; }
	inline void set__virginCaseSensitive_26(bool value)
	{
		____virginCaseSensitive_26 = value;
	}

	inline static int32_t get_offset_of__propertyDescriptorsCache_27() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____propertyDescriptorsCache_27)); }
	inline PropertyDescriptorCollection_t4164928659 * get__propertyDescriptorsCache_27() const { return ____propertyDescriptorsCache_27; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__propertyDescriptorsCache_27() { return &____propertyDescriptorsCache_27; }
	inline void set__propertyDescriptorsCache_27(PropertyDescriptorCollection_t4164928659 * value)
	{
		____propertyDescriptorsCache_27 = value;
		Il2CppCodeGenWriteBarrier((&____propertyDescriptorsCache_27), value);
	}

	inline static int32_t get_offset_of__latestPrimaryKeyCols_30() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ____latestPrimaryKeyCols_30)); }
	inline DataColumnU5BU5D_t3317819609* get__latestPrimaryKeyCols_30() const { return ____latestPrimaryKeyCols_30; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__latestPrimaryKeyCols_30() { return &____latestPrimaryKeyCols_30; }
	inline void set__latestPrimaryKeyCols_30(DataColumnU5BU5D_t3317819609* value)
	{
		____latestPrimaryKeyCols_30 = value;
		Il2CppCodeGenWriteBarrier((&____latestPrimaryKeyCols_30), value);
	}

	inline static int32_t get_offset_of_empty_rows_31() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___empty_rows_31)); }
	inline DataRowU5BU5D_t3122106530* get_empty_rows_31() const { return ___empty_rows_31; }
	inline DataRowU5BU5D_t3122106530** get_address_of_empty_rows_31() { return &___empty_rows_31; }
	inline void set_empty_rows_31(DataRowU5BU5D_t3122106530* value)
	{
		___empty_rows_31 = value;
		Il2CppCodeGenWriteBarrier((&___empty_rows_31), value);
	}

	inline static int32_t get_offset_of_tableInitialized_32() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___tableInitialized_32)); }
	inline bool get_tableInitialized_32() const { return ___tableInitialized_32; }
	inline bool* get_address_of_tableInitialized_32() { return &___tableInitialized_32; }
	inline void set_tableInitialized_32(bool value)
	{
		___tableInitialized_32 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_33() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___remotingFormat_33)); }
	inline int32_t get_remotingFormat_33() const { return ___remotingFormat_33; }
	inline int32_t* get_address_of_remotingFormat_33() { return &___remotingFormat_33; }
	inline void set_remotingFormat_33(int32_t value)
	{
		___remotingFormat_33 = value;
	}

	inline static int32_t get_offset_of_ColumnChanged_34() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___ColumnChanged_34)); }
	inline DataColumnChangeEventHandler_t1943750078 * get_ColumnChanged_34() const { return ___ColumnChanged_34; }
	inline DataColumnChangeEventHandler_t1943750078 ** get_address_of_ColumnChanged_34() { return &___ColumnChanged_34; }
	inline void set_ColumnChanged_34(DataColumnChangeEventHandler_t1943750078 * value)
	{
		___ColumnChanged_34 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanged_34), value);
	}

	inline static int32_t get_offset_of_ColumnChanging_35() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___ColumnChanging_35)); }
	inline DataColumnChangeEventHandler_t1943750078 * get_ColumnChanging_35() const { return ___ColumnChanging_35; }
	inline DataColumnChangeEventHandler_t1943750078 ** get_address_of_ColumnChanging_35() { return &___ColumnChanging_35; }
	inline void set_ColumnChanging_35(DataColumnChangeEventHandler_t1943750078 * value)
	{
		___ColumnChanging_35 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanging_35), value);
	}

	inline static int32_t get_offset_of_RowChanged_36() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___RowChanged_36)); }
	inline DataRowChangeEventHandler_t1758895939 * get_RowChanged_36() const { return ___RowChanged_36; }
	inline DataRowChangeEventHandler_t1758895939 ** get_address_of_RowChanged_36() { return &___RowChanged_36; }
	inline void set_RowChanged_36(DataRowChangeEventHandler_t1758895939 * value)
	{
		___RowChanged_36 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanged_36), value);
	}

	inline static int32_t get_offset_of_RowChanging_37() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___RowChanging_37)); }
	inline DataRowChangeEventHandler_t1758895939 * get_RowChanging_37() const { return ___RowChanging_37; }
	inline DataRowChangeEventHandler_t1758895939 ** get_address_of_RowChanging_37() { return &___RowChanging_37; }
	inline void set_RowChanging_37(DataRowChangeEventHandler_t1758895939 * value)
	{
		___RowChanging_37 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanging_37), value);
	}

	inline static int32_t get_offset_of_RowDeleted_38() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___RowDeleted_38)); }
	inline DataRowChangeEventHandler_t1758895939 * get_RowDeleted_38() const { return ___RowDeleted_38; }
	inline DataRowChangeEventHandler_t1758895939 ** get_address_of_RowDeleted_38() { return &___RowDeleted_38; }
	inline void set_RowDeleted_38(DataRowChangeEventHandler_t1758895939 * value)
	{
		___RowDeleted_38 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleted_38), value);
	}

	inline static int32_t get_offset_of_RowDeleting_39() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___RowDeleting_39)); }
	inline DataRowChangeEventHandler_t1758895939 * get_RowDeleting_39() const { return ___RowDeleting_39; }
	inline DataRowChangeEventHandler_t1758895939 ** get_address_of_RowDeleting_39() { return &___RowDeleting_39; }
	inline void set_RowDeleting_39(DataRowChangeEventHandler_t1758895939 * value)
	{
		___RowDeleting_39 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleting_39), value);
	}

	inline static int32_t get_offset_of_TableNewRow_40() { return static_cast<int32_t>(offsetof(DataTable_t1734486485, ___TableNewRow_40)); }
	inline DataTableNewRowEventHandler_t4233335338 * get_TableNewRow_40() const { return ___TableNewRow_40; }
	inline DataTableNewRowEventHandler_t4233335338 ** get_address_of_TableNewRow_40() { return &___TableNewRow_40; }
	inline void set_TableNewRow_40(DataTableNewRowEventHandler_t4233335338 * value)
	{
		___TableNewRow_40 = value;
		Il2CppCodeGenWriteBarrier((&___TableNewRow_40), value);
	}
};

struct DataTable_t1734486485_StaticFields
{
public:
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t3317819609* ____emptyColumnArray_28;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t3657309853 * ___SortRegex_29;

public:
	inline static int32_t get_offset_of__emptyColumnArray_28() { return static_cast<int32_t>(offsetof(DataTable_t1734486485_StaticFields, ____emptyColumnArray_28)); }
	inline DataColumnU5BU5D_t3317819609* get__emptyColumnArray_28() const { return ____emptyColumnArray_28; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__emptyColumnArray_28() { return &____emptyColumnArray_28; }
	inline void set__emptyColumnArray_28(DataColumnU5BU5D_t3317819609* value)
	{
		____emptyColumnArray_28 = value;
		Il2CppCodeGenWriteBarrier((&____emptyColumnArray_28), value);
	}

	inline static int32_t get_offset_of_SortRegex_29() { return static_cast<int32_t>(offsetof(DataTable_t1734486485_StaticFields, ___SortRegex_29)); }
	inline Regex_t3657309853 * get_SortRegex_29() const { return ___SortRegex_29; }
	inline Regex_t3657309853 ** get_address_of_SortRegex_29() { return &___SortRegex_29; }
	inline void set_SortRegex_29(Regex_t3657309853 * value)
	{
		___SortRegex_29 = value;
		Il2CppCodeGenWriteBarrier((&___SortRegex_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLE_T1734486485_H
#ifndef INVALIDEXPRESSIONEXCEPTION_T3851462665_H
#define INVALIDEXPRESSIONEXCEPTION_T3851462665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InvalidExpressionException
struct  InvalidExpressionException_t3851462665  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDEXPRESSIONEXCEPTION_T3851462665_H
#ifndef DATASET_T3773542243_H
#define DATASET_T3773542243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSet
struct  DataSet_t3773542243  : public MarshalByValueComponent_t828052580
{
public:
	// System.String System.Data.DataSet::dataSetName
	String_t* ___dataSetName_2;
	// System.String System.Data.DataSet::_namespace
	String_t* ____namespace_3;
	// System.String System.Data.DataSet::prefix
	String_t* ___prefix_4;
	// System.Boolean System.Data.DataSet::caseSensitive
	bool ___caseSensitive_5;
	// System.Boolean System.Data.DataSet::enforceConstraints
	bool ___enforceConstraints_6;
	// System.Data.DataTableCollection System.Data.DataSet::tableCollection
	DataTableCollection_t2837452619 * ___tableCollection_7;
	// System.Data.DataRelationCollection System.Data.DataSet::relationCollection
	DataRelationCollection_t3198980347 * ___relationCollection_8;
	// System.Data.PropertyCollection System.Data.DataSet::properties
	PropertyCollection_t3446977085 * ___properties_9;
	// System.Globalization.CultureInfo System.Data.DataSet::locale
	CultureInfo_t4157843068 * ___locale_10;
	// System.Data.TableAdapterSchemaInfo System.Data.DataSet::tableAdapterSchemaInfo
	TableAdapterSchemaInfo_t1445784527 * ___tableAdapterSchemaInfo_11;
	// System.Boolean System.Data.DataSet::dataSetInitialized
	bool ___dataSetInitialized_12;
	// System.Data.SerializationFormat System.Data.DataSet::remotingFormat
	int32_t ___remotingFormat_13;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t645599195 * ___MergeFailed_14;

public:
	inline static int32_t get_offset_of_dataSetName_2() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___dataSetName_2)); }
	inline String_t* get_dataSetName_2() const { return ___dataSetName_2; }
	inline String_t** get_address_of_dataSetName_2() { return &___dataSetName_2; }
	inline void set_dataSetName_2(String_t* value)
	{
		___dataSetName_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetName_2), value);
	}

	inline static int32_t get_offset_of__namespace_3() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ____namespace_3)); }
	inline String_t* get__namespace_3() const { return ____namespace_3; }
	inline String_t** get_address_of__namespace_3() { return &____namespace_3; }
	inline void set__namespace_3(String_t* value)
	{
		____namespace_3 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_3), value);
	}

	inline static int32_t get_offset_of_prefix_4() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___prefix_4)); }
	inline String_t* get_prefix_4() const { return ___prefix_4; }
	inline String_t** get_address_of_prefix_4() { return &___prefix_4; }
	inline void set_prefix_4(String_t* value)
	{
		___prefix_4 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_4), value);
	}

	inline static int32_t get_offset_of_caseSensitive_5() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___caseSensitive_5)); }
	inline bool get_caseSensitive_5() const { return ___caseSensitive_5; }
	inline bool* get_address_of_caseSensitive_5() { return &___caseSensitive_5; }
	inline void set_caseSensitive_5(bool value)
	{
		___caseSensitive_5 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_6() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___enforceConstraints_6)); }
	inline bool get_enforceConstraints_6() const { return ___enforceConstraints_6; }
	inline bool* get_address_of_enforceConstraints_6() { return &___enforceConstraints_6; }
	inline void set_enforceConstraints_6(bool value)
	{
		___enforceConstraints_6 = value;
	}

	inline static int32_t get_offset_of_tableCollection_7() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___tableCollection_7)); }
	inline DataTableCollection_t2837452619 * get_tableCollection_7() const { return ___tableCollection_7; }
	inline DataTableCollection_t2837452619 ** get_address_of_tableCollection_7() { return &___tableCollection_7; }
	inline void set_tableCollection_7(DataTableCollection_t2837452619 * value)
	{
		___tableCollection_7 = value;
		Il2CppCodeGenWriteBarrier((&___tableCollection_7), value);
	}

	inline static int32_t get_offset_of_relationCollection_8() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___relationCollection_8)); }
	inline DataRelationCollection_t3198980347 * get_relationCollection_8() const { return ___relationCollection_8; }
	inline DataRelationCollection_t3198980347 ** get_address_of_relationCollection_8() { return &___relationCollection_8; }
	inline void set_relationCollection_8(DataRelationCollection_t3198980347 * value)
	{
		___relationCollection_8 = value;
		Il2CppCodeGenWriteBarrier((&___relationCollection_8), value);
	}

	inline static int32_t get_offset_of_properties_9() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___properties_9)); }
	inline PropertyCollection_t3446977085 * get_properties_9() const { return ___properties_9; }
	inline PropertyCollection_t3446977085 ** get_address_of_properties_9() { return &___properties_9; }
	inline void set_properties_9(PropertyCollection_t3446977085 * value)
	{
		___properties_9 = value;
		Il2CppCodeGenWriteBarrier((&___properties_9), value);
	}

	inline static int32_t get_offset_of_locale_10() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___locale_10)); }
	inline CultureInfo_t4157843068 * get_locale_10() const { return ___locale_10; }
	inline CultureInfo_t4157843068 ** get_address_of_locale_10() { return &___locale_10; }
	inline void set_locale_10(CultureInfo_t4157843068 * value)
	{
		___locale_10 = value;
		Il2CppCodeGenWriteBarrier((&___locale_10), value);
	}

	inline static int32_t get_offset_of_tableAdapterSchemaInfo_11() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___tableAdapterSchemaInfo_11)); }
	inline TableAdapterSchemaInfo_t1445784527 * get_tableAdapterSchemaInfo_11() const { return ___tableAdapterSchemaInfo_11; }
	inline TableAdapterSchemaInfo_t1445784527 ** get_address_of_tableAdapterSchemaInfo_11() { return &___tableAdapterSchemaInfo_11; }
	inline void set_tableAdapterSchemaInfo_11(TableAdapterSchemaInfo_t1445784527 * value)
	{
		___tableAdapterSchemaInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___tableAdapterSchemaInfo_11), value);
	}

	inline static int32_t get_offset_of_dataSetInitialized_12() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___dataSetInitialized_12)); }
	inline bool get_dataSetInitialized_12() const { return ___dataSetInitialized_12; }
	inline bool* get_address_of_dataSetInitialized_12() { return &___dataSetInitialized_12; }
	inline void set_dataSetInitialized_12(bool value)
	{
		___dataSetInitialized_12 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_13() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___remotingFormat_13)); }
	inline int32_t get_remotingFormat_13() const { return ___remotingFormat_13; }
	inline int32_t* get_address_of_remotingFormat_13() { return &___remotingFormat_13; }
	inline void set_remotingFormat_13(int32_t value)
	{
		___remotingFormat_13 = value;
	}

	inline static int32_t get_offset_of_MergeFailed_14() { return static_cast<int32_t>(offsetof(DataSet_t3773542243, ___MergeFailed_14)); }
	inline MergeFailedEventHandler_t645599195 * get_MergeFailed_14() const { return ___MergeFailed_14; }
	inline MergeFailedEventHandler_t645599195 ** get_address_of_MergeFailed_14() { return &___MergeFailed_14; }
	inline void set_MergeFailed_14(MergeFailedEventHandler_t645599195 * value)
	{
		___MergeFailed_14 = value;
		Il2CppCodeGenWriteBarrier((&___MergeFailed_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3773542243_H
#ifndef MISSINGPRIMARYKEYEXCEPTION_T3979394676_H
#define MISSINGPRIMARYKEYEXCEPTION_T3979394676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingPrimaryKeyException
struct  MissingPrimaryKeyException_t3979394676  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGPRIMARYKEYEXCEPTION_T3979394676_H
#ifndef FOREIGNKEYCONSTRAINT_T3489911826_H
#define FOREIGNKEYCONSTRAINT_T3489911826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ForeignKeyConstraint
struct  ForeignKeyConstraint_t3489911826  : public Constraint_t2778807214
{
public:
	// System.Data.UniqueConstraint System.Data.ForeignKeyConstraint::_parentUniqueConstraint
	UniqueConstraint_t841719017 * ____parentUniqueConstraint_8;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_parentColumns
	DataColumnU5BU5D_t3317819609* ____parentColumns_9;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_childColumns
	DataColumnU5BU5D_t3317819609* ____childColumns_10;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_deleteRule
	int32_t ____deleteRule_11;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_updateRule
	int32_t ____updateRule_12;
	// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::_acceptRejectRule
	int32_t ____acceptRejectRule_13;

public:
	inline static int32_t get_offset_of__parentUniqueConstraint_8() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____parentUniqueConstraint_8)); }
	inline UniqueConstraint_t841719017 * get__parentUniqueConstraint_8() const { return ____parentUniqueConstraint_8; }
	inline UniqueConstraint_t841719017 ** get_address_of__parentUniqueConstraint_8() { return &____parentUniqueConstraint_8; }
	inline void set__parentUniqueConstraint_8(UniqueConstraint_t841719017 * value)
	{
		____parentUniqueConstraint_8 = value;
		Il2CppCodeGenWriteBarrier((&____parentUniqueConstraint_8), value);
	}

	inline static int32_t get_offset_of__parentColumns_9() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____parentColumns_9)); }
	inline DataColumnU5BU5D_t3317819609* get__parentColumns_9() const { return ____parentColumns_9; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__parentColumns_9() { return &____parentColumns_9; }
	inline void set__parentColumns_9(DataColumnU5BU5D_t3317819609* value)
	{
		____parentColumns_9 = value;
		Il2CppCodeGenWriteBarrier((&____parentColumns_9), value);
	}

	inline static int32_t get_offset_of__childColumns_10() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____childColumns_10)); }
	inline DataColumnU5BU5D_t3317819609* get__childColumns_10() const { return ____childColumns_10; }
	inline DataColumnU5BU5D_t3317819609** get_address_of__childColumns_10() { return &____childColumns_10; }
	inline void set__childColumns_10(DataColumnU5BU5D_t3317819609* value)
	{
		____childColumns_10 = value;
		Il2CppCodeGenWriteBarrier((&____childColumns_10), value);
	}

	inline static int32_t get_offset_of__deleteRule_11() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____deleteRule_11)); }
	inline int32_t get__deleteRule_11() const { return ____deleteRule_11; }
	inline int32_t* get_address_of__deleteRule_11() { return &____deleteRule_11; }
	inline void set__deleteRule_11(int32_t value)
	{
		____deleteRule_11 = value;
	}

	inline static int32_t get_offset_of__updateRule_12() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____updateRule_12)); }
	inline int32_t get__updateRule_12() const { return ____updateRule_12; }
	inline int32_t* get_address_of__updateRule_12() { return &____updateRule_12; }
	inline void set__updateRule_12(int32_t value)
	{
		____updateRule_12 = value;
	}

	inline static int32_t get_offset_of__acceptRejectRule_13() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3489911826, ____acceptRejectRule_13)); }
	inline int32_t get__acceptRejectRule_13() const { return ____acceptRejectRule_13; }
	inline int32_t* get_address_of__acceptRejectRule_13() { return &____acceptRejectRule_13; }
	inline void set__acceptRejectRule_13(int32_t value)
	{
		____acceptRejectRule_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOREIGNKEYCONSTRAINT_T3489911826_H
#ifndef DUPLICATENAMEEXCEPTION_T2008667494_H
#define DUPLICATENAMEEXCEPTION_T2008667494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DuplicateNameException
struct  DuplicateNameException_t2008667494  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUPLICATENAMEEXCEPTION_T2008667494_H
#ifndef INVALIDCONSTRAINTEXCEPTION_T3749833044_H
#define INVALIDCONSTRAINTEXCEPTION_T3749833044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InvalidConstraintException
struct  InvalidConstraintException_t3749833044  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCONSTRAINTEXCEPTION_T3749833044_H
#ifndef INROWCHANGINGEVENTEXCEPTION_T2110817382_H
#define INROWCHANGINGEVENTEXCEPTION_T2110817382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InRowChangingEventException
struct  InRowChangingEventException_t2110817382  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INROWCHANGINGEVENTEXCEPTION_T2110817382_H
#ifndef DATACOLUMN_T2485786120_H
#define DATACOLUMN_T2485786120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t2485786120  : public MarshalByValueComponent_t828052580
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t1108123056 * ____eventHandlers_2;
	// System.Boolean System.Data.DataColumn::_allowDBNull
	bool ____allowDBNull_4;
	// System.Boolean System.Data.DataColumn::_autoIncrement
	bool ____autoIncrement_5;
	// System.Int64 System.Data.DataColumn::_autoIncrementSeed
	int64_t ____autoIncrementSeed_6;
	// System.Int64 System.Data.DataColumn::_autoIncrementStep
	int64_t ____autoIncrementStep_7;
	// System.Int64 System.Data.DataColumn::_nextAutoIncrementValue
	int64_t ____nextAutoIncrementValue_8;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_9;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_10;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_11;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject * ____defaultValue_12;
	// System.String System.Data.DataColumn::_expression
	String_t* ____expression_13;
	// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::_compiledExpression
	RuntimeObject* ____compiledExpression_14;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t3446977085 * ____extendedProperties_15;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_16;
	// System.String System.Data.DataColumn::_nameSpace
	String_t* ____nameSpace_17;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_18;
	// System.String System.Data.DataColumn::_prefix
	String_t* ____prefix_19;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_20;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t1734486485 * ____table_21;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_22;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t2712869782 * ____dataContainer_23;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_24;

public:
	inline static int32_t get_offset_of__eventHandlers_2() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____eventHandlers_2)); }
	inline EventHandlerList_t1108123056 * get__eventHandlers_2() const { return ____eventHandlers_2; }
	inline EventHandlerList_t1108123056 ** get_address_of__eventHandlers_2() { return &____eventHandlers_2; }
	inline void set__eventHandlers_2(EventHandlerList_t1108123056 * value)
	{
		____eventHandlers_2 = value;
		Il2CppCodeGenWriteBarrier((&____eventHandlers_2), value);
	}

	inline static int32_t get_offset_of__allowDBNull_4() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____allowDBNull_4)); }
	inline bool get__allowDBNull_4() const { return ____allowDBNull_4; }
	inline bool* get_address_of__allowDBNull_4() { return &____allowDBNull_4; }
	inline void set__allowDBNull_4(bool value)
	{
		____allowDBNull_4 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_5() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____autoIncrement_5)); }
	inline bool get__autoIncrement_5() const { return ____autoIncrement_5; }
	inline bool* get_address_of__autoIncrement_5() { return &____autoIncrement_5; }
	inline void set__autoIncrement_5(bool value)
	{
		____autoIncrement_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_6() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____autoIncrementSeed_6)); }
	inline int64_t get__autoIncrementSeed_6() const { return ____autoIncrementSeed_6; }
	inline int64_t* get_address_of__autoIncrementSeed_6() { return &____autoIncrementSeed_6; }
	inline void set__autoIncrementSeed_6(int64_t value)
	{
		____autoIncrementSeed_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_7() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____autoIncrementStep_7)); }
	inline int64_t get__autoIncrementStep_7() const { return ____autoIncrementStep_7; }
	inline int64_t* get_address_of__autoIncrementStep_7() { return &____autoIncrementStep_7; }
	inline void set__autoIncrementStep_7(int64_t value)
	{
		____autoIncrementStep_7 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_8() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____nextAutoIncrementValue_8)); }
	inline int64_t get__nextAutoIncrementValue_8() const { return ____nextAutoIncrementValue_8; }
	inline int64_t* get_address_of__nextAutoIncrementValue_8() { return &____nextAutoIncrementValue_8; }
	inline void set__nextAutoIncrementValue_8(int64_t value)
	{
		____nextAutoIncrementValue_8 = value;
	}

	inline static int32_t get_offset_of__caption_9() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____caption_9)); }
	inline String_t* get__caption_9() const { return ____caption_9; }
	inline String_t** get_address_of__caption_9() { return &____caption_9; }
	inline void set__caption_9(String_t* value)
	{
		____caption_9 = value;
		Il2CppCodeGenWriteBarrier((&____caption_9), value);
	}

	inline static int32_t get_offset_of__columnMapping_10() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____columnMapping_10)); }
	inline int32_t get__columnMapping_10() const { return ____columnMapping_10; }
	inline int32_t* get_address_of__columnMapping_10() { return &____columnMapping_10; }
	inline void set__columnMapping_10(int32_t value)
	{
		____columnMapping_10 = value;
	}

	inline static int32_t get_offset_of__columnName_11() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____columnName_11)); }
	inline String_t* get__columnName_11() const { return ____columnName_11; }
	inline String_t** get_address_of__columnName_11() { return &____columnName_11; }
	inline void set__columnName_11(String_t* value)
	{
		____columnName_11 = value;
		Il2CppCodeGenWriteBarrier((&____columnName_11), value);
	}

	inline static int32_t get_offset_of__defaultValue_12() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____defaultValue_12)); }
	inline RuntimeObject * get__defaultValue_12() const { return ____defaultValue_12; }
	inline RuntimeObject ** get_address_of__defaultValue_12() { return &____defaultValue_12; }
	inline void set__defaultValue_12(RuntimeObject * value)
	{
		____defaultValue_12 = value;
		Il2CppCodeGenWriteBarrier((&____defaultValue_12), value);
	}

	inline static int32_t get_offset_of__expression_13() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____expression_13)); }
	inline String_t* get__expression_13() const { return ____expression_13; }
	inline String_t** get_address_of__expression_13() { return &____expression_13; }
	inline void set__expression_13(String_t* value)
	{
		____expression_13 = value;
		Il2CppCodeGenWriteBarrier((&____expression_13), value);
	}

	inline static int32_t get_offset_of__compiledExpression_14() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____compiledExpression_14)); }
	inline RuntimeObject* get__compiledExpression_14() const { return ____compiledExpression_14; }
	inline RuntimeObject** get_address_of__compiledExpression_14() { return &____compiledExpression_14; }
	inline void set__compiledExpression_14(RuntimeObject* value)
	{
		____compiledExpression_14 = value;
		Il2CppCodeGenWriteBarrier((&____compiledExpression_14), value);
	}

	inline static int32_t get_offset_of__extendedProperties_15() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____extendedProperties_15)); }
	inline PropertyCollection_t3446977085 * get__extendedProperties_15() const { return ____extendedProperties_15; }
	inline PropertyCollection_t3446977085 ** get_address_of__extendedProperties_15() { return &____extendedProperties_15; }
	inline void set__extendedProperties_15(PropertyCollection_t3446977085 * value)
	{
		____extendedProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_15), value);
	}

	inline static int32_t get_offset_of__maxLength_16() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____maxLength_16)); }
	inline int32_t get__maxLength_16() const { return ____maxLength_16; }
	inline int32_t* get_address_of__maxLength_16() { return &____maxLength_16; }
	inline void set__maxLength_16(int32_t value)
	{
		____maxLength_16 = value;
	}

	inline static int32_t get_offset_of__nameSpace_17() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____nameSpace_17)); }
	inline String_t* get__nameSpace_17() const { return ____nameSpace_17; }
	inline String_t** get_address_of__nameSpace_17() { return &____nameSpace_17; }
	inline void set__nameSpace_17(String_t* value)
	{
		____nameSpace_17 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_17), value);
	}

	inline static int32_t get_offset_of__ordinal_18() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____ordinal_18)); }
	inline int32_t get__ordinal_18() const { return ____ordinal_18; }
	inline int32_t* get_address_of__ordinal_18() { return &____ordinal_18; }
	inline void set__ordinal_18(int32_t value)
	{
		____ordinal_18 = value;
	}

	inline static int32_t get_offset_of__prefix_19() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____prefix_19)); }
	inline String_t* get__prefix_19() const { return ____prefix_19; }
	inline String_t** get_address_of__prefix_19() { return &____prefix_19; }
	inline void set__prefix_19(String_t* value)
	{
		____prefix_19 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_19), value);
	}

	inline static int32_t get_offset_of__readOnly_20() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____readOnly_20)); }
	inline bool get__readOnly_20() const { return ____readOnly_20; }
	inline bool* get_address_of__readOnly_20() { return &____readOnly_20; }
	inline void set__readOnly_20(bool value)
	{
		____readOnly_20 = value;
	}

	inline static int32_t get_offset_of__table_21() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____table_21)); }
	inline DataTable_t1734486485 * get__table_21() const { return ____table_21; }
	inline DataTable_t1734486485 ** get_address_of__table_21() { return &____table_21; }
	inline void set__table_21(DataTable_t1734486485 * value)
	{
		____table_21 = value;
		Il2CppCodeGenWriteBarrier((&____table_21), value);
	}

	inline static int32_t get_offset_of__unique_22() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____unique_22)); }
	inline bool get__unique_22() const { return ____unique_22; }
	inline bool* get_address_of__unique_22() { return &____unique_22; }
	inline void set__unique_22(bool value)
	{
		____unique_22 = value;
	}

	inline static int32_t get_offset_of__dataContainer_23() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____dataContainer_23)); }
	inline DataContainer_t2712869782 * get__dataContainer_23() const { return ____dataContainer_23; }
	inline DataContainer_t2712869782 ** get_address_of__dataContainer_23() { return &____dataContainer_23; }
	inline void set__dataContainer_23(DataContainer_t2712869782 * value)
	{
		____dataContainer_23 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_23), value);
	}

	inline static int32_t get_offset_of__datetimeMode_24() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120, ____datetimeMode_24)); }
	inline int32_t get__datetimeMode_24() const { return ____datetimeMode_24; }
	inline int32_t* get_address_of__datetimeMode_24() { return &____datetimeMode_24; }
	inline void set__datetimeMode_24(int32_t value)
	{
		____datetimeMode_24 = value;
	}
};

struct DataColumn_t2485786120_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	RuntimeObject * ____propertyChangedKey_3;

public:
	inline static int32_t get_offset_of__propertyChangedKey_3() { return static_cast<int32_t>(offsetof(DataColumn_t2485786120_StaticFields, ____propertyChangedKey_3)); }
	inline RuntimeObject * get__propertyChangedKey_3() const { return ____propertyChangedKey_3; }
	inline RuntimeObject ** get_address_of__propertyChangedKey_3() { return &____propertyChangedKey_3; }
	inline void set__propertyChangedKey_3(RuntimeObject * value)
	{
		____propertyChangedKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____propertyChangedKey_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMN_T2485786120_H
#ifndef DELETEDROWINACCESSIBLEEXCEPTION_T1773344914_H
#define DELETEDROWINACCESSIBLEEXCEPTION_T1773344914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DeletedRowInaccessibleException
struct  DeletedRowInaccessibleException_t1773344914  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEDROWINACCESSIBLEEXCEPTION_T1773344914_H
#ifndef CONSTRAINTEXCEPTION_T3616410909_H
#define CONSTRAINTEXCEPTION_T3616410909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintException
struct  ConstraintException_t3616410909  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTEXCEPTION_T3616410909_H
#ifndef DBSOURCEMETHODINFO_T1328883101_H
#define DBSOURCEMETHODINFO_T1328883101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DbSourceMethodInfo
struct  DbSourceMethodInfo_t1328883101  : public RuntimeObject
{
public:
	// System.Data.GenerateMethodsType System.Data.DbSourceMethodInfo::MethodType
	int32_t ___MethodType_0;
	// System.String System.Data.DbSourceMethodInfo::Name
	String_t* ___Name_1;
	// System.String System.Data.DbSourceMethodInfo::Modifier
	String_t* ___Modifier_2;
	// System.String System.Data.DbSourceMethodInfo::QueryType
	String_t* ___QueryType_3;
	// System.String System.Data.DbSourceMethodInfo::ScalarCallRetval
	String_t* ___ScalarCallRetval_4;

public:
	inline static int32_t get_offset_of_MethodType_0() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t1328883101, ___MethodType_0)); }
	inline int32_t get_MethodType_0() const { return ___MethodType_0; }
	inline int32_t* get_address_of_MethodType_0() { return &___MethodType_0; }
	inline void set_MethodType_0(int32_t value)
	{
		___MethodType_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t1328883101, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_Modifier_2() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t1328883101, ___Modifier_2)); }
	inline String_t* get_Modifier_2() const { return ___Modifier_2; }
	inline String_t** get_address_of_Modifier_2() { return &___Modifier_2; }
	inline void set_Modifier_2(String_t* value)
	{
		___Modifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___Modifier_2), value);
	}

	inline static int32_t get_offset_of_QueryType_3() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t1328883101, ___QueryType_3)); }
	inline String_t* get_QueryType_3() const { return ___QueryType_3; }
	inline String_t** get_address_of_QueryType_3() { return &___QueryType_3; }
	inline void set_QueryType_3(String_t* value)
	{
		___QueryType_3 = value;
		Il2CppCodeGenWriteBarrier((&___QueryType_3), value);
	}

	inline static int32_t get_offset_of_ScalarCallRetval_4() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t1328883101, ___ScalarCallRetval_4)); }
	inline String_t* get_ScalarCallRetval_4() const { return ___ScalarCallRetval_4; }
	inline String_t** get_address_of_ScalarCallRetval_4() { return &___ScalarCallRetval_4; }
	inline void set_ScalarCallRetval_4(String_t* value)
	{
		___ScalarCallRetval_4 = value;
		Il2CppCodeGenWriteBarrier((&___ScalarCallRetval_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBSOURCEMETHODINFO_T1328883101_H
#ifndef DATAROWCHANGEEVENTARGS_T1619997594_H
#define DATAROWCHANGEEVENTARGS_T1619997594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t1619997594  : public EventArgs_t3591816995
{
public:
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t3370913075 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;

public:
	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t1619997594, ___row_1)); }
	inline DataRow_t3370913075 * get_row_1() const { return ___row_1; }
	inline DataRow_t3370913075 ** get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(DataRow_t3370913075 * value)
	{
		___row_1 = value;
		Il2CppCodeGenWriteBarrier((&___row_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t1619997594, ___action_2)); }
	inline int32_t get_action_2() const { return ___action_2; }
	inline int32_t* get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(int32_t value)
	{
		___action_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCHANGEEVENTARGS_T1619997594_H
#ifndef NONULLALLOWEDEXCEPTION_T3850957942_H
#define NONULLALLOWEDEXCEPTION_T3850957942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.NoNullAllowedException
struct  NoNullAllowedException_t3850957942  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONULLALLOWEDEXCEPTION_T3850957942_H
#ifndef READONLYEXCEPTION_T2986375369_H
#define READONLYEXCEPTION_T2986375369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ReadOnlyException
struct  ReadOnlyException_t2986375369  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYEXCEPTION_T2986375369_H
#ifndef ROWNOTINTABLEEXCEPTION_T2557174041_H
#define ROWNOTINTABLEEXCEPTION_T2557174041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RowNotInTableException
struct  RowNotInTableException_t2557174041  : public DataException_t1067854026
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROWNOTINTABLEEXCEPTION_T2557174041_H
#ifndef SYNTAXERROREXCEPTION_T3480149759_H
#define SYNTAXERROREXCEPTION_T3480149759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SyntaxErrorException
struct  SyntaxErrorException_t3480149759  : public InvalidExpressionException_t3851462665
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNTAXERROREXCEPTION_T3480149759_H
#ifndef SQLDATETIME_T2414066866_H
#define SQLDATETIME_T2414066866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDateTime
struct  SqlDateTime_t2414066866 
{
public:
	// System.DateTime System.Data.SqlTypes.SqlDateTime::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDateTime::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDateTime_t2414066866_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_t2414066866  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_t2414066866  ___MinValue_3;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_t2414066866  ___Null_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_7;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::zero_day
	DateTime_t3738529785  ___zero_day_8;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866_StaticFields, ___MaxValue_2)); }
	inline SqlDateTime_t2414066866  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDateTime_t2414066866 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDateTime_t2414066866  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866_StaticFields, ___MinValue_3)); }
	inline SqlDateTime_t2414066866  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDateTime_t2414066866 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDateTime_t2414066866  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866_StaticFields, ___Null_4)); }
	inline SqlDateTime_t2414066866  get_Null_4() const { return ___Null_4; }
	inline SqlDateTime_t2414066866 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDateTime_t2414066866  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerHour_5() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866_StaticFields, ___SQLTicksPerHour_5)); }
	inline int32_t get_SQLTicksPerHour_5() const { return ___SQLTicksPerHour_5; }
	inline int32_t* get_address_of_SQLTicksPerHour_5() { return &___SQLTicksPerHour_5; }
	inline void set_SQLTicksPerHour_5(int32_t value)
	{
		___SQLTicksPerHour_5 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerMinute_6() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866_StaticFields, ___SQLTicksPerMinute_6)); }
	inline int32_t get_SQLTicksPerMinute_6() const { return ___SQLTicksPerMinute_6; }
	inline int32_t* get_address_of_SQLTicksPerMinute_6() { return &___SQLTicksPerMinute_6; }
	inline void set_SQLTicksPerMinute_6(int32_t value)
	{
		___SQLTicksPerMinute_6 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerSecond_7() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866_StaticFields, ___SQLTicksPerSecond_7)); }
	inline int32_t get_SQLTicksPerSecond_7() const { return ___SQLTicksPerSecond_7; }
	inline int32_t* get_address_of_SQLTicksPerSecond_7() { return &___SQLTicksPerSecond_7; }
	inline void set_SQLTicksPerSecond_7(int32_t value)
	{
		___SQLTicksPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_zero_day_8() { return static_cast<int32_t>(offsetof(SqlDateTime_t2414066866_StaticFields, ___zero_day_8)); }
	inline DateTime_t3738529785  get_zero_day_8() const { return ___zero_day_8; }
	inline DateTime_t3738529785 * get_address_of_zero_day_8() { return &___zero_day_8; }
	inline void set_zero_day_8(DateTime_t3738529785  value)
	{
		___zero_day_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t2414066866_marshaled_pinvoke
{
	DateTime_t3738529785  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t2414066866_marshaled_com
{
	DateTime_t3738529785  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDATETIME_T2414066866_H
#ifndef EVALUATEEXCEPTION_T883456301_H
#define EVALUATEEXCEPTION_T883456301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.EvaluateException
struct  EvaluateException_t883456301  : public InvalidExpressionException_t3851462665
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVALUATEEXCEPTION_T883456301_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (DbCommand_t187824494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (DbConnection_t1716984062), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (DbDataAdapter_t1706016184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2102[4] = 
{
	DbDataAdapter_t1706016184::get_offset_of__selectCommand_5(),
	DbDataAdapter_t1706016184::get_offset_of__updateCommand_6(),
	DbDataAdapter_t1706016184::get_offset_of__deleteCommand_7(),
	DbDataAdapter_t1706016184::get_offset_of__insertCommand_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (DbParameter_t3789779732), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (DbParameterCollection_t2951779354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (DbProviderFactory_t3108676059), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (DbTypes_t3951852654), -1, sizeof(DbTypes_t3951852654_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2106[21] = 
{
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfBoolean_0(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfSByte_1(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfChar_2(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfInt16_3(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfInt32_4(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfInt64_5(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfByte_6(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfUInt16_7(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfUInt32_8(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfUInt64_9(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfDouble_10(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfSingle_11(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfDecimal_12(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfString_13(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfDateTime_14(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfObject_15(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfGuid_16(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfType_17(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfByteArray_18(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfFloat_19(),
	DbTypes_t3951852654_StaticFields::get_offset_of_TypeOfTimespan_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (Index_t4155063583), -1, sizeof(Index_t4155063583_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2107[7] = 
{
	Index_t4155063583_StaticFields::get_offset_of_empty_0(),
	Index_t4155063583::get_offset_of__array_1(),
	Index_t4155063583::get_offset_of__size_2(),
	Index_t4155063583::get_offset_of__key_3(),
	Index_t4155063583::get_offset_of__refCount_4(),
	Index_t4155063583::get_offset_of_know_have_duplicates_5(),
	Index_t4155063583::get_offset_of_know_no_duplicates_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (Key_t1531728703), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2108[6] = 
{
	Key_t1531728703::get_offset_of__table_0(),
	Key_t1531728703::get_offset_of__columns_1(),
	Key_t1531728703::get_offset_of__sortDirection_2(),
	Key_t1531728703::get_offset_of__rowStateFilter_3(),
	Key_t1531728703::get_offset_of__filter_4(),
	Key_t1531728703::get_offset_of__tmpRow_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (RecordCache_t2814565283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2109[5] = 
{
	RecordCache_t2814565283::get_offset_of__records_0(),
	RecordCache_t2814565283::get_offset_of__nextFreeIndex_1(),
	RecordCache_t2814565283::get_offset_of__currentCapacity_2(),
	RecordCache_t2814565283::get_offset_of__table_3(),
	RecordCache_t2814565283::get_offset_of__rowsToRecords_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (SqlBinary_t4132310562)+ sizeof (RuntimeObject), sizeof(SqlBinary_t4132310562_marshaled_pinvoke), sizeof(SqlBinary_t4132310562_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2111[3] = 
{
	SqlBinary_t4132310562::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t4132310562::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t4132310562_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (SqlBoolean_t2781748253)+ sizeof (RuntimeObject), sizeof(SqlBoolean_t2781748253_marshaled_pinvoke), sizeof(SqlBoolean_t2781748253_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2112[7] = 
{
	SqlBoolean_t2781748253::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t2781748253::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t2781748253_StaticFields::get_offset_of_False_2(),
	SqlBoolean_t2781748253_StaticFields::get_offset_of_Null_3(),
	SqlBoolean_t2781748253_StaticFields::get_offset_of_One_4(),
	SqlBoolean_t2781748253_StaticFields::get_offset_of_True_5(),
	SqlBoolean_t2781748253_StaticFields::get_offset_of_Zero_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (SqlByte_t2260568341)+ sizeof (RuntimeObject), sizeof(SqlByte_t2260568341_marshaled_pinvoke), sizeof(SqlByte_t2260568341_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2113[6] = 
{
	SqlByte_t2260568341::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t2260568341::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t2260568341_StaticFields::get_offset_of_MaxValue_2(),
	SqlByte_t2260568341_StaticFields::get_offset_of_MinValue_3(),
	SqlByte_t2260568341_StaticFields::get_offset_of_Null_4(),
	SqlByte_t2260568341_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (SqlBytes_t3426683087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2114[3] = 
{
	SqlBytes_t3426683087::get_offset_of_notNull_0(),
	SqlBytes_t3426683087::get_offset_of_buffer_1(),
	SqlBytes_t3426683087::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (SqlChars_t711193749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2115[3] = 
{
	SqlChars_t711193749::get_offset_of_notNull_0(),
	SqlChars_t711193749::get_offset_of_buffer_1(),
	SqlChars_t711193749::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (SqlCompareOptions_t96852136)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2116[7] = 
{
	SqlCompareOptions_t96852136::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (SqlDateTime_t2414066866)+ sizeof (RuntimeObject), -1, sizeof(SqlDateTime_t2414066866_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2117[9] = 
{
	SqlDateTime_t2414066866::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t2414066866::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t2414066866_StaticFields::get_offset_of_MaxValue_2(),
	SqlDateTime_t2414066866_StaticFields::get_offset_of_MinValue_3(),
	SqlDateTime_t2414066866_StaticFields::get_offset_of_Null_4(),
	SqlDateTime_t2414066866_StaticFields::get_offset_of_SQLTicksPerHour_5(),
	SqlDateTime_t2414066866_StaticFields::get_offset_of_SQLTicksPerMinute_6(),
	SqlDateTime_t2414066866_StaticFields::get_offset_of_SQLTicksPerSecond_7(),
	SqlDateTime_t2414066866_StaticFields::get_offset_of_zero_day_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (SqlDecimal_t1096635589)+ sizeof (RuntimeObject), sizeof(SqlDecimal_t1096635589_marshaled_pinvoke), sizeof(SqlDecimal_t1096635589_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2118[11] = 
{
	SqlDecimal_t1096635589::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1096635589::get_offset_of_precision_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1096635589::get_offset_of_scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1096635589::get_offset_of_positive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1096635589::get_offset_of_notNull_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1096635589_StaticFields::get_offset_of_constantsDecadeInt32Factors_5(),
	SqlDecimal_t1096635589_StaticFields::get_offset_of_MaxPrecision_6(),
	SqlDecimal_t1096635589_StaticFields::get_offset_of_MaxScale_7(),
	SqlDecimal_t1096635589_StaticFields::get_offset_of_MaxValue_8(),
	SqlDecimal_t1096635589_StaticFields::get_offset_of_MinValue_9(),
	SqlDecimal_t1096635589_StaticFields::get_offset_of_Null_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (SqlDouble_t1075477787)+ sizeof (RuntimeObject), sizeof(SqlDouble_t1075477787_marshaled_pinvoke), sizeof(SqlDouble_t1075477787_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2119[6] = 
{
	SqlDouble_t1075477787::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t1075477787::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t1075477787_StaticFields::get_offset_of_MaxValue_2(),
	SqlDouble_t1075477787_StaticFields::get_offset_of_MinValue_3(),
	SqlDouble_t1075477787_StaticFields::get_offset_of_Null_4(),
	SqlDouble_t1075477787_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (SqlGuid_t1775442377)+ sizeof (RuntimeObject), sizeof(SqlGuid_t1775442377_marshaled_pinvoke), sizeof(SqlGuid_t1775442377_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2120[3] = 
{
	SqlGuid_t1775442377::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t1775442377::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t1775442377_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (SqlInt16_t1815218091)+ sizeof (RuntimeObject), sizeof(SqlInt16_t1815218091_marshaled_pinvoke), sizeof(SqlInt16_t1815218091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2121[6] = 
{
	SqlInt16_t1815218091::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t1815218091::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t1815218091_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt16_t1815218091_StaticFields::get_offset_of_MinValue_3(),
	SqlInt16_t1815218091_StaticFields::get_offset_of_Null_4(),
	SqlInt16_t1815218091_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (SqlInt32_t2197555111)+ sizeof (RuntimeObject), sizeof(SqlInt32_t2197555111_marshaled_pinvoke), sizeof(SqlInt32_t2197555111_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2122[6] = 
{
	SqlInt32_t2197555111::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t2197555111::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t2197555111_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt32_t2197555111_StaticFields::get_offset_of_MinValue_3(),
	SqlInt32_t2197555111_StaticFields::get_offset_of_Null_4(),
	SqlInt32_t2197555111_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (SqlInt64_t3771533229)+ sizeof (RuntimeObject), sizeof(SqlInt64_t3771533229_marshaled_pinvoke), sizeof(SqlInt64_t3771533229_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2123[6] = 
{
	SqlInt64_t3771533229::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t3771533229::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t3771533229_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt64_t3771533229_StaticFields::get_offset_of_MinValue_3(),
	SqlInt64_t3771533229_StaticFields::get_offset_of_Null_4(),
	SqlInt64_t3771533229_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (SqlMoney_t3362852048)+ sizeof (RuntimeObject), sizeof(SqlMoney_t3362852048_marshaled_pinvoke), sizeof(SqlMoney_t3362852048_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2124[7] = 
{
	SqlMoney_t3362852048::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t3362852048::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t3362852048_StaticFields::get_offset_of_MaxValue_2(),
	SqlMoney_t3362852048_StaticFields::get_offset_of_MinValue_3(),
	SqlMoney_t3362852048_StaticFields::get_offset_of_Null_4(),
	SqlMoney_t3362852048_StaticFields::get_offset_of_Zero_5(),
	SqlMoney_t3362852048_StaticFields::get_offset_of_MoneyFormat_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (SqlNullValueException_t3009575780), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (SqlSingle_t3751283737)+ sizeof (RuntimeObject), sizeof(SqlSingle_t3751283737_marshaled_pinvoke), sizeof(SqlSingle_t3751283737_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2126[6] = 
{
	SqlSingle_t3751283737::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t3751283737::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t3751283737_StaticFields::get_offset_of_MaxValue_2(),
	SqlSingle_t3751283737_StaticFields::get_offset_of_MinValue_3(),
	SqlSingle_t3751283737_StaticFields::get_offset_of_Null_4(),
	SqlSingle_t3751283737_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (SqlString_t3442887463)+ sizeof (RuntimeObject), sizeof(SqlString_t3442887463_marshaled_pinvoke), sizeof(SqlString_t3442887463_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2127[11] = 
{
	SqlString_t3442887463::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t3442887463::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t3442887463::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t3442887463::get_offset_of_compareOptions_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t3442887463_StaticFields::get_offset_of_BinarySort_4(),
	SqlString_t3442887463_StaticFields::get_offset_of_IgnoreCase_5(),
	SqlString_t3442887463_StaticFields::get_offset_of_IgnoreKanaType_6(),
	SqlString_t3442887463_StaticFields::get_offset_of_IgnoreNonSpace_7(),
	SqlString_t3442887463_StaticFields::get_offset_of_IgnoreWidth_8(),
	SqlString_t3442887463_StaticFields::get_offset_of_Null_9(),
	SqlString_t3442887463_StaticFields::get_offset_of_DecimalFormat_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (SqlTruncateException_t878363452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (SqlTypeException_t2591521188), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (SqlXml_t315979651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2130[2] = 
{
	SqlXml_t315979651::get_offset_of_notNull_0(),
	SqlXml_t315979651::get_offset_of_xmlValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (StorageState_t1073348566)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2131[4] = 
{
	StorageState_t1073348566::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (AcceptRejectRule_t2136770941)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2132[3] = 
{
	AcceptRejectRule_t2136770941::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (ColumnTypeConverter_t146894428), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (CommandType_t755427385)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2134[4] = 
{
	CommandType_t755427385::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { sizeof (Constraint_t2778807214), -1, sizeof(Constraint_t2778807214_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2135[8] = 
{
	Constraint_t2778807214_StaticFields::get_offset_of_beforeConstraintNameChange_0(),
	Constraint_t2778807214::get_offset_of_events_1(),
	Constraint_t2778807214::get_offset_of__constraintName_2(),
	Constraint_t2778807214::get_offset_of__properties_3(),
	Constraint_t2778807214::get_offset_of__index_4(),
	Constraint_t2778807214::get_offset_of__constraintCollection_5(),
	Constraint_t2778807214::get_offset_of_dataSet_6(),
	Constraint_t2778807214::get_offset_of_initInProgress_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { sizeof (ConstraintCollection_t259828334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2136[2] = 
{
	ConstraintCollection_t259828334::get_offset_of_table_2(),
	ConstraintCollection_t259828334::get_offset_of_CollectionChanged_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { sizeof (ConstraintConverter_t2402564707), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { sizeof (ConstraintException_t3616410909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (DataCategoryAttribute_t150699394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (DataColumn_t2485786120), -1, sizeof(DataColumn_t2485786120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2140[23] = 
{
	DataColumn_t2485786120::get_offset_of__eventHandlers_2(),
	DataColumn_t2485786120_StaticFields::get_offset_of__propertyChangedKey_3(),
	DataColumn_t2485786120::get_offset_of__allowDBNull_4(),
	DataColumn_t2485786120::get_offset_of__autoIncrement_5(),
	DataColumn_t2485786120::get_offset_of__autoIncrementSeed_6(),
	DataColumn_t2485786120::get_offset_of__autoIncrementStep_7(),
	DataColumn_t2485786120::get_offset_of__nextAutoIncrementValue_8(),
	DataColumn_t2485786120::get_offset_of__caption_9(),
	DataColumn_t2485786120::get_offset_of__columnMapping_10(),
	DataColumn_t2485786120::get_offset_of__columnName_11(),
	DataColumn_t2485786120::get_offset_of__defaultValue_12(),
	DataColumn_t2485786120::get_offset_of__expression_13(),
	DataColumn_t2485786120::get_offset_of__compiledExpression_14(),
	DataColumn_t2485786120::get_offset_of__extendedProperties_15(),
	DataColumn_t2485786120::get_offset_of__maxLength_16(),
	DataColumn_t2485786120::get_offset_of__nameSpace_17(),
	DataColumn_t2485786120::get_offset_of__ordinal_18(),
	DataColumn_t2485786120::get_offset_of__prefix_19(),
	DataColumn_t2485786120::get_offset_of__readOnly_20(),
	DataColumn_t2485786120::get_offset_of__table_21(),
	DataColumn_t2485786120::get_offset_of__unique_22(),
	DataColumn_t2485786120::get_offset_of__dataContainer_23(),
	DataColumn_t2485786120::get_offset_of__datetimeMode_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { sizeof (DataColumnChangeEventArgs_t353716546), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2141[3] = 
{
	DataColumnChangeEventArgs_t353716546::get_offset_of__column_1(),
	DataColumnChangeEventArgs_t353716546::get_offset_of__row_2(),
	DataColumnChangeEventArgs_t353716546::get_offset_of__proposedValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (Doublet_t4016057215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2142[2] = 
{
	Doublet_t4016057215::get_offset_of_count_0(),
	Doublet_t4016057215::get_offset_of_columnNames_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { sizeof (DataColumnCollection_t479471535), -1, sizeof(DataColumnCollection_t479471535_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2143[9] = 
{
	DataColumnCollection_t479471535::get_offset_of_columnNameCount_2(),
	DataColumnCollection_t479471535::get_offset_of_columnFromName_3(),
	DataColumnCollection_t479471535::get_offset_of_autoIncrement_4(),
	DataColumnCollection_t479471535::get_offset_of_defaultColumnIndex_5(),
	DataColumnCollection_t479471535::get_offset_of_parentTable_6(),
	DataColumnCollection_t479471535_StaticFields::get_offset_of_ColumnPrefix_7(),
	DataColumnCollection_t479471535_StaticFields::get_offset_of_TenColumns_8(),
	DataColumnCollection_t479471535::get_offset_of_CollectionChanged_9(),
	DataColumnCollection_t479471535::get_offset_of_CollectionMetaDataChanged_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { sizeof (DataException_t1067854026), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { sizeof (DataRelation_t2257224951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2145[12] = 
{
	DataRelation_t2257224951::get_offset_of_dataSet_0(),
	DataRelation_t2257224951::get_offset_of_relationName_1(),
	DataRelation_t2257224951::get_offset_of_parentKeyConstraint_2(),
	DataRelation_t2257224951::get_offset_of_childKeyConstraint_3(),
	DataRelation_t2257224951::get_offset_of_parentColumns_4(),
	DataRelation_t2257224951::get_offset_of_childColumns_5(),
	DataRelation_t2257224951::get_offset_of_nested_6(),
	DataRelation_t2257224951::get_offset_of_createConstraints_7(),
	DataRelation_t2257224951::get_offset_of_initFinished_8(),
	DataRelation_t2257224951::get_offset_of_extendedProperties_9(),
	DataRelation_t2257224951::get_offset_of__parentTableNameSpace_10(),
	DataRelation_t2257224951::get_offset_of__childTableNameSpace_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (DataRelationCollection_t3198980347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2146[3] = 
{
	DataRelationCollection_t3198980347::get_offset_of_inTransition_2(),
	DataRelationCollection_t3198980347::get_offset_of_index_3(),
	DataRelationCollection_t3198980347::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (DataSetRelationCollection_t60486336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2147[1] = 
{
	DataSetRelationCollection_t60486336::get_offset_of_dataSet_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (DataTableRelationCollection_t578333039), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2148[1] = 
{
	DataTableRelationCollection_t578333039::get_offset_of_dataTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (DataRow_t3370913075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2149[13] = 
{
	DataRow_t3370913075::get_offset_of__table_0(),
	DataRow_t3370913075::get_offset_of__original_1(),
	DataRow_t3370913075::get_offset_of__current_2(),
	DataRow_t3370913075::get_offset_of__proposed_3(),
	DataRow_t3370913075::get_offset_of__columnErrors_4(),
	DataRow_t3370913075::get_offset_of_rowError_5(),
	DataRow_t3370913075::get_offset_of_xmlRowID_6(),
	DataRow_t3370913075::get_offset_of__nullConstraintViolation_7(),
	DataRow_t3370913075::get_offset_of__nullConstraintMessage_8(),
	DataRow_t3370913075::get_offset_of__inChangingEvent_9(),
	DataRow_t3370913075::get_offset_of__rowId_10(),
	DataRow_t3370913075::get_offset_of__rowChanged_11(),
	DataRow_t3370913075::get_offset_of__inExpressionEvaluation_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { sizeof (DataRowAction_t1860448470)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2150[9] = 
{
	DataRowAction_t1860448470::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { sizeof (DataRowBuilder_t3193098686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2151[2] = 
{
	DataRowBuilder_t3193098686::get_offset_of_table_0(),
	DataRowBuilder_t3193098686::get_offset_of__rowId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { sizeof (DataRowChangeEventArgs_t1619997594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2152[2] = 
{
	DataRowChangeEventArgs_t1619997594::get_offset_of_row_1(),
	DataRowChangeEventArgs_t1619997594::get_offset_of_action_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { sizeof (DataRowCollection_t3217300826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2153[1] = 
{
	DataRowCollection_t3217300826::get_offset_of_table_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { sizeof (DataRowState_t3360857979)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2154[6] = 
{
	DataRowState_t3360857979::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { sizeof (DataRowVersion_t3777956179)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2155[5] = 
{
	DataRowVersion_t3777956179::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { sizeof (DataSet_t3773542243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2156[13] = 
{
	DataSet_t3773542243::get_offset_of_dataSetName_2(),
	DataSet_t3773542243::get_offset_of__namespace_3(),
	DataSet_t3773542243::get_offset_of_prefix_4(),
	DataSet_t3773542243::get_offset_of_caseSensitive_5(),
	DataSet_t3773542243::get_offset_of_enforceConstraints_6(),
	DataSet_t3773542243::get_offset_of_tableCollection_7(),
	DataSet_t3773542243::get_offset_of_relationCollection_8(),
	DataSet_t3773542243::get_offset_of_properties_9(),
	DataSet_t3773542243::get_offset_of_locale_10(),
	DataSet_t3773542243::get_offset_of_tableAdapterSchemaInfo_11(),
	DataSet_t3773542243::get_offset_of_dataSetInitialized_12(),
	DataSet_t3773542243::get_offset_of_remotingFormat_13(),
	DataSet_t3773542243::get_offset_of_MergeFailed_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { sizeof (DataSetDateTime_t3321856641)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2157[5] = 
{
	DataSetDateTime_t3321856641::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { sizeof (DataTable_t1734486485), -1, sizeof(DataTable_t1734486485_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2158[39] = 
{
	DataTable_t1734486485::get_offset_of_dataSet_2(),
	DataTable_t1734486485::get_offset_of__caseSensitive_3(),
	DataTable_t1734486485::get_offset_of__columnCollection_4(),
	DataTable_t1734486485::get_offset_of__constraintCollection_5(),
	DataTable_t1734486485::get_offset_of__displayExpression_6(),
	DataTable_t1734486485::get_offset_of__extendedProperties_7(),
	DataTable_t1734486485::get_offset_of__locale_8(),
	DataTable_t1734486485::get_offset_of__minimumCapacity_9(),
	DataTable_t1734486485::get_offset_of__nameSpace_10(),
	DataTable_t1734486485::get_offset_of__childRelations_11(),
	DataTable_t1734486485::get_offset_of__parentRelations_12(),
	DataTable_t1734486485::get_offset_of__prefix_13(),
	DataTable_t1734486485::get_offset_of__primaryKeyConstraint_14(),
	DataTable_t1734486485::get_offset_of__rows_15(),
	DataTable_t1734486485::get_offset_of__site_16(),
	DataTable_t1734486485::get_offset_of__tableName_17(),
	DataTable_t1734486485::get_offset_of__duringDataLoad_18(),
	DataTable_t1734486485::get_offset_of__nullConstraintViolationDuringDataLoad_19(),
	DataTable_t1734486485::get_offset_of_enforceConstraints_20(),
	DataTable_t1734486485::get_offset_of__rowBuilder_21(),
	DataTable_t1734486485::get_offset_of__indexes_22(),
	DataTable_t1734486485::get_offset_of__recordCache_23(),
	DataTable_t1734486485::get_offset_of__defaultValuesRowIndex_24(),
	DataTable_t1734486485::get_offset_of_fInitInProgress_25(),
	DataTable_t1734486485::get_offset_of__virginCaseSensitive_26(),
	DataTable_t1734486485::get_offset_of__propertyDescriptorsCache_27(),
	DataTable_t1734486485_StaticFields::get_offset_of__emptyColumnArray_28(),
	DataTable_t1734486485_StaticFields::get_offset_of_SortRegex_29(),
	DataTable_t1734486485::get_offset_of__latestPrimaryKeyCols_30(),
	DataTable_t1734486485::get_offset_of_empty_rows_31(),
	DataTable_t1734486485::get_offset_of_tableInitialized_32(),
	DataTable_t1734486485::get_offset_of_remotingFormat_33(),
	DataTable_t1734486485::get_offset_of_ColumnChanged_34(),
	DataTable_t1734486485::get_offset_of_ColumnChanging_35(),
	DataTable_t1734486485::get_offset_of_RowChanged_36(),
	DataTable_t1734486485::get_offset_of_RowChanging_37(),
	DataTable_t1734486485::get_offset_of_RowDeleted_38(),
	DataTable_t1734486485::get_offset_of_RowDeleting_39(),
	DataTable_t1734486485::get_offset_of_TableNewRow_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { sizeof (DataTableCollection_t2837452619), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2159[3] = 
{
	DataTableCollection_t2837452619::get_offset_of_dataSet_2(),
	DataTableCollection_t2837452619::get_offset_of_CollectionChanged_3(),
	DataTableCollection_t2837452619::get_offset_of_CollectionChanging_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { sizeof (DataTableNewRowEventArgs_t4095718124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2160[1] = 
{
	DataTableNewRowEventArgs_t4095718124::get_offset_of__row_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { sizeof (DataViewRowState_t622870493)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2161[9] = 
{
	DataViewRowState_t622870493::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { sizeof (DefaultValueTypeConverter_t2586767677), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { sizeof (DeletedRowInaccessibleException_t1773344914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { sizeof (DuplicateNameException_t2008667494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { sizeof (EvaluateException_t883456301), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { sizeof (ForeignKeyConstraint_t3489911826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2166[6] = 
{
	ForeignKeyConstraint_t3489911826::get_offset_of__parentUniqueConstraint_8(),
	ForeignKeyConstraint_t3489911826::get_offset_of__parentColumns_9(),
	ForeignKeyConstraint_t3489911826::get_offset_of__childColumns_10(),
	ForeignKeyConstraint_t3489911826::get_offset_of__deleteRule_11(),
	ForeignKeyConstraint_t3489911826::get_offset_of__updateRule_12(),
	ForeignKeyConstraint_t3489911826::get_offset_of__acceptRejectRule_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { sizeof (InRowChangingEventException_t2110817382), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { sizeof (InternalDataCollectionBase_t224885569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2179[2] = 
{
	InternalDataCollectionBase_t224885569::get_offset_of_list_0(),
	InternalDataCollectionBase_t224885569::get_offset_of_synchronized_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { sizeof (InvalidConstraintException_t3749833044), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { sizeof (InvalidExpressionException_t3851462665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { sizeof (MappingType_t4061812973)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2182[5] = 
{
	MappingType_t4061812973::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { sizeof (MergeFailedEventArgs_t717811570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2183[2] = 
{
	MergeFailedEventArgs_t717811570::get_offset_of_data_table_1(),
	MergeFailedEventArgs_t717811570::get_offset_of_conflict_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { sizeof (MergeManager_t731040201), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { sizeof (MissingPrimaryKeyException_t3979394676), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { sizeof (MissingSchemaAction_t2848901085)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2186[5] = 
{
	MissingSchemaAction_t2848901085::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { sizeof (NoNullAllowedException_t3850957942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { sizeof (ParameterDirection_t533932466)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2188[5] = 
{
	ParameterDirection_t533932466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { sizeof (PropertyCollection_t3446977085), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { sizeof (ReadOnlyException_t2986375369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { sizeof (RelationshipConverter_t3945959161), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { sizeof (ResDescriptionAttribute_t3598628915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2192[1] = 
{
	ResDescriptionAttribute_t3598628915::get_offset_of_description_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { sizeof (RowNotInTableException_t2557174041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { sizeof (Rule_t2627824861)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2194[5] = 
{
	Rule_t2627824861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { sizeof (SchemaSerializationMode_t2521597533)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2195[3] = 
{
	SchemaSerializationMode_t2521597533::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { sizeof (SerializationFormat_t3115973676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2196[3] = 
{
	SerializationFormat_t3115973676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { sizeof (SyntaxErrorException_t3480149759), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { sizeof (GenerateMethodsType_t961208507)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2198[5] = 
{
	GenerateMethodsType_t961208507::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { sizeof (DbSourceMethodInfo_t1328883101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2199[5] = 
{
	DbSourceMethodInfo_t1328883101::get_offset_of_MethodType_0(),
	DbSourceMethodInfo_t1328883101::get_offset_of_Name_1(),
	DbSourceMethodInfo_t1328883101::get_offset_of_Modifier_2(),
	DbSourceMethodInfo_t1328883101::get_offset_of_QueryType_3(),
	DbSourceMethodInfo_t1328883101::get_offset_of_ScalarCallRetval_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
