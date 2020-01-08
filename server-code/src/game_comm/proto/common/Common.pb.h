// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/Common.proto

#ifndef PROTOBUF_common_2fCommon_2eproto__INCLUDED
#define PROTOBUF_common_2fCommon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_common_2fCommon_2eproto();
void protobuf_InitDefaults_common_2fCommon_2eproto();
void protobuf_AssignDesc_common_2fCommon_2eproto();
void protobuf_ShutdownFile_common_2fCommon_2eproto();


enum ACTOR_ATTRIB {
  ATTRIB_NONE = 0,
  ATTRIB_HP_MAX = 1,
  ATTRIB_MP_MAX = 2,
  ATTRIB_FP_MAX = 3,
  ATTRIB_NP_MAX = 4,
  ATTRIB_MOVESPD = 5,
  ATTRIB_MIN_ATK = 6,
  ATTRIB_MAX_ATK = 7,
  ATTRIB_MIN_DEF = 8,
  ATTRIB_MAX_DEF = 9,
  ATTRIB_MIN_MATK = 10,
  ATTRIB_MAX_MATK = 11,
  ATTRIB_MIN_MDEF = 12,
  ATTRIB_MAX_MDEF = 13,
  ATTRIB_HIT = 14,
  ATTRIB_DODGE = 15,
  ATTRIB_DAMAGE_ADJ = 16,
  ATTRIB_DAMAGE_REFLECT_RATE = 17,
  ATTRIB_DAMAGE_REFLECT_ADJ = 18,
  ATTRIB_EXP_ADJ = 19,
  ATTRIB_MAX = 20,
  ACTOR_ATTRIB_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ACTOR_ATTRIB_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ACTOR_ATTRIB_IsValid(int value);
const ACTOR_ATTRIB ACTOR_ATTRIB_MIN = ATTRIB_NONE;
const ACTOR_ATTRIB ACTOR_ATTRIB_MAX = ATTRIB_MAX;
const int ACTOR_ATTRIB_ARRAYSIZE = ACTOR_ATTRIB_MAX + 1;

const ::google::protobuf::EnumDescriptor* ACTOR_ATTRIB_descriptor();
inline const ::std::string& ACTOR_ATTRIB_Name(ACTOR_ATTRIB value) {
  return ::google::protobuf::internal::NameOfEnum(
    ACTOR_ATTRIB_descriptor(), value);
}
inline bool ACTOR_ATTRIB_Parse(
    const ::std::string& name, ACTOR_ATTRIB* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ACTOR_ATTRIB>(
    ACTOR_ATTRIB_descriptor(), name, value);
}
enum ACTOR_PROPERTY {
  PROP_NONE = 0,
  PROP_EXP = 1,
  PROP_LEVEL = 2,
  PROP_HP = 3,
  PROP_MP = 4,
  PROP_FP = 5,
  PROP_NP = 6,
  PROP_MONEY = 10,
  PROP_MONEYBIND = 11,
  PROP_GOLD = 12,
  PROP_GOLDBIND = 13,
  PROP_PKVAL = 14,
  PROP_HONOR = 15,
  PROP_CAMP = 16,
  PROP_ACHIPOINT = 17,
  PROP_VIPLEV = 18,
  PROP_HP_MAX = 50,
  PROP_WEAPON_CHANGE = 51,
  PROP_ARMOR_CHANGE = 52,
  PROP_MOUNT_CHANGE = 53,
  ACTOR_PROPERTY_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ACTOR_PROPERTY_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ACTOR_PROPERTY_IsValid(int value);
const ACTOR_PROPERTY ACTOR_PROPERTY_MIN = PROP_NONE;
const ACTOR_PROPERTY ACTOR_PROPERTY_MAX = PROP_MOUNT_CHANGE;
const int ACTOR_PROPERTY_ARRAYSIZE = ACTOR_PROPERTY_MAX + 1;

const ::google::protobuf::EnumDescriptor* ACTOR_PROPERTY_descriptor();
inline const ::std::string& ACTOR_PROPERTY_Name(ACTOR_PROPERTY value) {
  return ::google::protobuf::internal::NameOfEnum(
    ACTOR_PROPERTY_descriptor(), value);
}
inline bool ACTOR_PROPERTY_Parse(
    const ::std::string& name, ACTOR_PROPERTY* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ACTOR_PROPERTY>(
    ACTOR_PROPERTY_descriptor(), name, value);
}
enum MONEY_TYPE {
  MT_NONE = 0,
  MT_MONEY = 1,
  MT_MONEYBIND = 2,
  MT_GOLD = 3,
  MT_GOLDBIND = 4,
  MONEY_TYPE_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MONEY_TYPE_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MONEY_TYPE_IsValid(int value);
const MONEY_TYPE MONEY_TYPE_MIN = MT_NONE;
const MONEY_TYPE MONEY_TYPE_MAX = MT_GOLDBIND;
const int MONEY_TYPE_ARRAYSIZE = MONEY_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* MONEY_TYPE_descriptor();
inline const ::std::string& MONEY_TYPE_Name(MONEY_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    MONEY_TYPE_descriptor(), value);
}
inline bool MONEY_TYPE_Parse(
    const ::std::string& name, MONEY_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MONEY_TYPE>(
    MONEY_TYPE_descriptor(), name, value);
}
enum PK_MODE {
  PKMODE_PEACE = 0,
  PKMODE_REDNAME = 1,
  PKMODE_TEAM = 2,
  PKMODE_GUILD = 3,
  PKMODE_CAMP = 4,
  PKMODE_ALL = 5,
  PK_MODE_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  PK_MODE_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool PK_MODE_IsValid(int value);
const PK_MODE PK_MODE_MIN = PKMODE_PEACE;
const PK_MODE PK_MODE_MAX = PKMODE_ALL;
const int PK_MODE_ARRAYSIZE = PK_MODE_MAX + 1;

const ::google::protobuf::EnumDescriptor* PK_MODE_descriptor();
inline const ::std::string& PK_MODE_Name(PK_MODE value) {
  return ::google::protobuf::internal::NameOfEnum(
    PK_MODE_descriptor(), value);
}
inline bool PK_MODE_Parse(
    const ::std::string& name, PK_MODE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PK_MODE>(
    PK_MODE_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ACTOR_ATTRIB> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ACTOR_ATTRIB>() {
  return ::ACTOR_ATTRIB_descriptor();
}
template <> struct is_proto_enum< ::ACTOR_PROPERTY> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ACTOR_PROPERTY>() {
  return ::ACTOR_PROPERTY_descriptor();
}
template <> struct is_proto_enum< ::MONEY_TYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MONEY_TYPE>() {
  return ::MONEY_TYPE_descriptor();
}
template <> struct is_proto_enum< ::PK_MODE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PK_MODE>() {
  return ::PK_MODE_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_common_2fCommon_2eproto__INCLUDED
