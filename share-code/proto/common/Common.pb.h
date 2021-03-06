// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/Common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fCommon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2fCommon_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_common_2fCommon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fCommon_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2fCommon_2eproto;
class GuildMemberInfo;
class GuildMemberInfoDefaultTypeInternal;
extern GuildMemberInfoDefaultTypeInternal _GuildMemberInfo_default_instance_;
class TeamMemberInfo;
class TeamMemberInfoDefaultTypeInternal;
extern TeamMemberInfoDefaultTypeInternal _TeamMemberInfo_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::GuildMemberInfo* Arena::CreateMaybeMessage<::GuildMemberInfo>(Arena*);
template<> ::TeamMemberInfo* Arena::CreateMaybeMessage<::TeamMemberInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum ACTOR_ATTRIB : int {
  ATTRIB_NONE = 0,
  ATTRIB_HP_MAX = 1,
  ATTRIB_MP_MAX = 2,
  ATTRIB_FP_MAX = 3,
  ATTRIB_NP_MAX = 4,
  ATTRIB_MOVESPD = 5,
  ATTRIB_MIN_ATK = 9,
  ATTRIB_MAX_ATK = 10,
  ATTRIB_MIN_DEF = 11,
  ATTRIB_MAX_DEF = 12,
  ATTRIB_MIN_MATK = 13,
  ATTRIB_MAX_MATK = 14,
  ATTRIB_MIN_MDEF = 15,
  ATTRIB_MAX_MDEF = 16,
  ATTRIB_HIT = 17,
  ATTRIB_DODGE = 18,
  ATTRIB_DAMAGE_ADJ = 19,
  ATTRIB_DAMAGE_REFLECT_RATE = 20,
  ATTRIB_DAMAGE_REFLECT_ADJ = 21,
  ATTRIB_EXP_ADJ = 22,
  ATTRIB_MAX = 23,
  ACTOR_ATTRIB_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ACTOR_ATTRIB_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ACTOR_ATTRIB_IsValid(int value);
constexpr ACTOR_ATTRIB ACTOR_ATTRIB_MIN = ATTRIB_NONE;
constexpr ACTOR_ATTRIB ACTOR_ATTRIB_MAX = ATTRIB_MAX;
constexpr int ACTOR_ATTRIB_ARRAYSIZE = ACTOR_ATTRIB_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ACTOR_ATTRIB_descriptor();
template<typename T>
inline const std::string& ACTOR_ATTRIB_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ACTOR_ATTRIB>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ACTOR_ATTRIB_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ACTOR_ATTRIB_descriptor(), enum_t_value);
}
inline bool ACTOR_ATTRIB_Parse(
    const std::string& name, ACTOR_ATTRIB* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ACTOR_ATTRIB>(
    ACTOR_ATTRIB_descriptor(), name, value);
}
enum ACTOR_PROPERTY : int {
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
  ACTOR_PROPERTY_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ACTOR_PROPERTY_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ACTOR_PROPERTY_IsValid(int value);
constexpr ACTOR_PROPERTY ACTOR_PROPERTY_MIN = PROP_NONE;
constexpr ACTOR_PROPERTY ACTOR_PROPERTY_MAX = PROP_MOUNT_CHANGE;
constexpr int ACTOR_PROPERTY_ARRAYSIZE = ACTOR_PROPERTY_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ACTOR_PROPERTY_descriptor();
template<typename T>
inline const std::string& ACTOR_PROPERTY_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ACTOR_PROPERTY>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ACTOR_PROPERTY_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ACTOR_PROPERTY_descriptor(), enum_t_value);
}
inline bool ACTOR_PROPERTY_Parse(
    const std::string& name, ACTOR_PROPERTY* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ACTOR_PROPERTY>(
    ACTOR_PROPERTY_descriptor(), name, value);
}
enum MONEY_TYPE : int {
  MT_NONE = 0,
  MT_MONEY = 1,
  MT_MONEYBIND = 2,
  MT_GOLD = 3,
  MT_GOLDBIND = 4,
  MONEY_TYPE_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  MONEY_TYPE_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool MONEY_TYPE_IsValid(int value);
constexpr MONEY_TYPE MONEY_TYPE_MIN = MT_NONE;
constexpr MONEY_TYPE MONEY_TYPE_MAX = MT_GOLDBIND;
constexpr int MONEY_TYPE_ARRAYSIZE = MONEY_TYPE_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MONEY_TYPE_descriptor();
template<typename T>
inline const std::string& MONEY_TYPE_Name(T enum_t_value) {
  static_assert(::std::is_same<T, MONEY_TYPE>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function MONEY_TYPE_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    MONEY_TYPE_descriptor(), enum_t_value);
}
inline bool MONEY_TYPE_Parse(
    const std::string& name, MONEY_TYPE* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<MONEY_TYPE>(
    MONEY_TYPE_descriptor(), name, value);
}
enum PK_MODE : int {
  PKMODE_PEACE = 0,
  PKMODE_REDNAME = 1,
  PKMODE_TEAM = 2,
  PKMODE_GUILD = 3,
  PKMODE_CAMP = 4,
  PKMODE_ALL = 5,
  PK_MODE_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  PK_MODE_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool PK_MODE_IsValid(int value);
constexpr PK_MODE PK_MODE_MIN = PKMODE_PEACE;
constexpr PK_MODE PK_MODE_MAX = PKMODE_ALL;
constexpr int PK_MODE_ARRAYSIZE = PK_MODE_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PK_MODE_descriptor();
template<typename T>
inline const std::string& PK_MODE_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PK_MODE>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PK_MODE_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PK_MODE_descriptor(), enum_t_value);
}
inline bool PK_MODE_Parse(
    const std::string& name, PK_MODE* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PK_MODE>(
    PK_MODE_descriptor(), name, value);
}
enum TaskState : int {
  TASKSTATE_NOTACCEPT = 0,
  TASKSTATE_ACCEPTED = 1,
  TASKSTATE_GIVEUP = 2,
  TASKSTATE_FINISHED = 3,
  TaskState_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  TaskState_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool TaskState_IsValid(int value);
constexpr TaskState TaskState_MIN = TASKSTATE_NOTACCEPT;
constexpr TaskState TaskState_MAX = TASKSTATE_FINISHED;
constexpr int TaskState_ARRAYSIZE = TaskState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TaskState_descriptor();
template<typename T>
inline const std::string& TaskState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TaskState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TaskState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TaskState_descriptor(), enum_t_value);
}
inline bool TaskState_Parse(
    const std::string& name, TaskState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TaskState>(
    TaskState_descriptor(), name, value);
}
enum GuildRank : int {
  GUILD_RANK_NEWIBLE = 0,
  GUILD_RANK_MEMBER = 1,
  GUILD_RANK_ELITE = 5,
  GUILD_RANK_MINISTER = 10,
  GUILD_RANK_VICELEADER = 99,
  GUILD_RANK_LEADER = 100,
  GuildRank_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  GuildRank_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool GuildRank_IsValid(int value);
constexpr GuildRank GuildRank_MIN = GUILD_RANK_NEWIBLE;
constexpr GuildRank GuildRank_MAX = GUILD_RANK_LEADER;
constexpr int GuildRank_ARRAYSIZE = GuildRank_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GuildRank_descriptor();
template<typename T>
inline const std::string& GuildRank_Name(T enum_t_value) {
  static_assert(::std::is_same<T, GuildRank>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function GuildRank_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    GuildRank_descriptor(), enum_t_value);
}
inline bool GuildRank_Parse(
    const std::string& name, GuildRank* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<GuildRank>(
    GuildRank_descriptor(), name, value);
}
// ===================================================================

class GuildMemberInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:GuildMemberInfo) */ {
 public:
  GuildMemberInfo();
  virtual ~GuildMemberInfo();

  GuildMemberInfo(const GuildMemberInfo& from);
  GuildMemberInfo(GuildMemberInfo&& from) noexcept
    : GuildMemberInfo() {
    *this = ::std::move(from);
  }

  inline GuildMemberInfo& operator=(const GuildMemberInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline GuildMemberInfo& operator=(GuildMemberInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GuildMemberInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GuildMemberInfo* internal_default_instance() {
    return reinterpret_cast<const GuildMemberInfo*>(
               &_GuildMemberInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GuildMemberInfo& a, GuildMemberInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(GuildMemberInfo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GuildMemberInfo* New() const final {
    return CreateMaybeMessage<GuildMemberInfo>(nullptr);
  }

  GuildMemberInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GuildMemberInfo>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GuildMemberInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "GuildMemberInfo";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fCommon_2eproto);
    return ::descriptor_table_common_2fCommon_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMemberNameFieldNumber = 4,
    kMemberIdFieldNumber = 1,
    kMemberLevFieldNumber = 2,
    kMemberOnlineFieldNumber = 3,
    kMemberRankFieldNumber = 5,
    kMemberScoreFieldNumber = 6,
    kMemberLastLogoutFieldNumber = 7,
    kMemberJointimeFieldNumber = 8,
  };
  // string member_name = 4;
  void clear_member_name();
  const std::string& member_name() const;
  void set_member_name(const std::string& value);
  void set_member_name(std::string&& value);
  void set_member_name(const char* value);
  void set_member_name(const char* value, size_t size);
  std::string* mutable_member_name();
  std::string* release_member_name();
  void set_allocated_member_name(std::string* member_name);
  private:
  const std::string& _internal_member_name() const;
  void _internal_set_member_name(const std::string& value);
  std::string* _internal_mutable_member_name();
  public:

  // uint64 member_id = 1;
  void clear_member_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 member_id() const;
  void set_member_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_member_id() const;
  void _internal_set_member_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint32 member_lev = 2;
  void clear_member_lev();
  ::PROTOBUF_NAMESPACE_ID::uint32 member_lev() const;
  void set_member_lev(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_member_lev() const;
  void _internal_set_member_lev(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bool member_online = 3;
  void clear_member_online();
  bool member_online() const;
  void set_member_online(bool value);
  private:
  bool _internal_member_online() const;
  void _internal_set_member_online(bool value);
  public:

  // uint32 member_rank = 5;
  void clear_member_rank();
  ::PROTOBUF_NAMESPACE_ID::uint32 member_rank() const;
  void set_member_rank(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_member_rank() const;
  void _internal_set_member_rank(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 member_score = 6;
  void clear_member_score();
  ::PROTOBUF_NAMESPACE_ID::uint32 member_score() const;
  void set_member_score(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_member_score() const;
  void _internal_set_member_score(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 member_last_logout = 7;
  void clear_member_last_logout();
  ::PROTOBUF_NAMESPACE_ID::uint32 member_last_logout() const;
  void set_member_last_logout(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_member_last_logout() const;
  void _internal_set_member_last_logout(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 member_jointime = 8;
  void clear_member_jointime();
  ::PROTOBUF_NAMESPACE_ID::uint32 member_jointime() const;
  void set_member_jointime(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_member_jointime() const;
  void _internal_set_member_jointime(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:GuildMemberInfo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr member_name_;
  ::PROTOBUF_NAMESPACE_ID::uint64 member_id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 member_lev_;
  bool member_online_;
  ::PROTOBUF_NAMESPACE_ID::uint32 member_rank_;
  ::PROTOBUF_NAMESPACE_ID::uint32 member_score_;
  ::PROTOBUF_NAMESPACE_ID::uint32 member_last_logout_;
  ::PROTOBUF_NAMESPACE_ID::uint32 member_jointime_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fCommon_2eproto;
};
// -------------------------------------------------------------------

class TeamMemberInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TeamMemberInfo) */ {
 public:
  TeamMemberInfo();
  virtual ~TeamMemberInfo();

  TeamMemberInfo(const TeamMemberInfo& from);
  TeamMemberInfo(TeamMemberInfo&& from) noexcept
    : TeamMemberInfo() {
    *this = ::std::move(from);
  }

  inline TeamMemberInfo& operator=(const TeamMemberInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline TeamMemberInfo& operator=(TeamMemberInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TeamMemberInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TeamMemberInfo* internal_default_instance() {
    return reinterpret_cast<const TeamMemberInfo*>(
               &_TeamMemberInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TeamMemberInfo& a, TeamMemberInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(TeamMemberInfo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TeamMemberInfo* New() const final {
    return CreateMaybeMessage<TeamMemberInfo>(nullptr);
  }

  TeamMemberInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TeamMemberInfo>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TeamMemberInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TeamMemberInfo";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fCommon_2eproto);
    return ::descriptor_table_common_2fCommon_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMemberNameFieldNumber = 4,
    kMemberIdFieldNumber = 1,
    kMemberLevFieldNumber = 2,
    kMemberOnlineFieldNumber = 3,
  };
  // string member_name = 4;
  void clear_member_name();
  const std::string& member_name() const;
  void set_member_name(const std::string& value);
  void set_member_name(std::string&& value);
  void set_member_name(const char* value);
  void set_member_name(const char* value, size_t size);
  std::string* mutable_member_name();
  std::string* release_member_name();
  void set_allocated_member_name(std::string* member_name);
  private:
  const std::string& _internal_member_name() const;
  void _internal_set_member_name(const std::string& value);
  std::string* _internal_mutable_member_name();
  public:

  // uint64 member_id = 1;
  void clear_member_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 member_id() const;
  void set_member_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_member_id() const;
  void _internal_set_member_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint32 member_lev = 2;
  void clear_member_lev();
  ::PROTOBUF_NAMESPACE_ID::uint32 member_lev() const;
  void set_member_lev(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_member_lev() const;
  void _internal_set_member_lev(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bool member_online = 3;
  void clear_member_online();
  bool member_online() const;
  void set_member_online(bool value);
  private:
  bool _internal_member_online() const;
  void _internal_set_member_online(bool value);
  public:

  // @@protoc_insertion_point(class_scope:TeamMemberInfo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr member_name_;
  ::PROTOBUF_NAMESPACE_ID::uint64 member_id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 member_lev_;
  bool member_online_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fCommon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GuildMemberInfo

// uint64 member_id = 1;
inline void GuildMemberInfo::clear_member_id() {
  member_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 GuildMemberInfo::_internal_member_id() const {
  return member_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 GuildMemberInfo::member_id() const {
  // @@protoc_insertion_point(field_get:GuildMemberInfo.member_id)
  return _internal_member_id();
}
inline void GuildMemberInfo::_internal_set_member_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  member_id_ = value;
}
inline void GuildMemberInfo::set_member_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_member_id(value);
  // @@protoc_insertion_point(field_set:GuildMemberInfo.member_id)
}

// uint32 member_lev = 2;
inline void GuildMemberInfo::clear_member_lev() {
  member_lev_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::_internal_member_lev() const {
  return member_lev_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::member_lev() const {
  // @@protoc_insertion_point(field_get:GuildMemberInfo.member_lev)
  return _internal_member_lev();
}
inline void GuildMemberInfo::_internal_set_member_lev(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  member_lev_ = value;
}
inline void GuildMemberInfo::set_member_lev(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_member_lev(value);
  // @@protoc_insertion_point(field_set:GuildMemberInfo.member_lev)
}

// bool member_online = 3;
inline void GuildMemberInfo::clear_member_online() {
  member_online_ = false;
}
inline bool GuildMemberInfo::_internal_member_online() const {
  return member_online_;
}
inline bool GuildMemberInfo::member_online() const {
  // @@protoc_insertion_point(field_get:GuildMemberInfo.member_online)
  return _internal_member_online();
}
inline void GuildMemberInfo::_internal_set_member_online(bool value) {
  
  member_online_ = value;
}
inline void GuildMemberInfo::set_member_online(bool value) {
  _internal_set_member_online(value);
  // @@protoc_insertion_point(field_set:GuildMemberInfo.member_online)
}

// string member_name = 4;
inline void GuildMemberInfo::clear_member_name() {
  member_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& GuildMemberInfo::member_name() const {
  // @@protoc_insertion_point(field_get:GuildMemberInfo.member_name)
  return _internal_member_name();
}
inline void GuildMemberInfo::set_member_name(const std::string& value) {
  _internal_set_member_name(value);
  // @@protoc_insertion_point(field_set:GuildMemberInfo.member_name)
}
inline std::string* GuildMemberInfo::mutable_member_name() {
  // @@protoc_insertion_point(field_mutable:GuildMemberInfo.member_name)
  return _internal_mutable_member_name();
}
inline const std::string& GuildMemberInfo::_internal_member_name() const {
  return member_name_.GetNoArena();
}
inline void GuildMemberInfo::_internal_set_member_name(const std::string& value) {
  
  member_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void GuildMemberInfo::set_member_name(std::string&& value) {
  
  member_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:GuildMemberInfo.member_name)
}
inline void GuildMemberInfo::set_member_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  member_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GuildMemberInfo.member_name)
}
inline void GuildMemberInfo::set_member_name(const char* value, size_t size) {
  
  member_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GuildMemberInfo.member_name)
}
inline std::string* GuildMemberInfo::_internal_mutable_member_name() {
  
  return member_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* GuildMemberInfo::release_member_name() {
  // @@protoc_insertion_point(field_release:GuildMemberInfo.member_name)
  
  return member_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void GuildMemberInfo::set_allocated_member_name(std::string* member_name) {
  if (member_name != nullptr) {
    
  } else {
    
  }
  member_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), member_name);
  // @@protoc_insertion_point(field_set_allocated:GuildMemberInfo.member_name)
}

// uint32 member_rank = 5;
inline void GuildMemberInfo::clear_member_rank() {
  member_rank_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::_internal_member_rank() const {
  return member_rank_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::member_rank() const {
  // @@protoc_insertion_point(field_get:GuildMemberInfo.member_rank)
  return _internal_member_rank();
}
inline void GuildMemberInfo::_internal_set_member_rank(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  member_rank_ = value;
}
inline void GuildMemberInfo::set_member_rank(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_member_rank(value);
  // @@protoc_insertion_point(field_set:GuildMemberInfo.member_rank)
}

// uint32 member_score = 6;
inline void GuildMemberInfo::clear_member_score() {
  member_score_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::_internal_member_score() const {
  return member_score_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::member_score() const {
  // @@protoc_insertion_point(field_get:GuildMemberInfo.member_score)
  return _internal_member_score();
}
inline void GuildMemberInfo::_internal_set_member_score(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  member_score_ = value;
}
inline void GuildMemberInfo::set_member_score(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_member_score(value);
  // @@protoc_insertion_point(field_set:GuildMemberInfo.member_score)
}

// uint32 member_last_logout = 7;
inline void GuildMemberInfo::clear_member_last_logout() {
  member_last_logout_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::_internal_member_last_logout() const {
  return member_last_logout_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::member_last_logout() const {
  // @@protoc_insertion_point(field_get:GuildMemberInfo.member_last_logout)
  return _internal_member_last_logout();
}
inline void GuildMemberInfo::_internal_set_member_last_logout(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  member_last_logout_ = value;
}
inline void GuildMemberInfo::set_member_last_logout(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_member_last_logout(value);
  // @@protoc_insertion_point(field_set:GuildMemberInfo.member_last_logout)
}

// uint32 member_jointime = 8;
inline void GuildMemberInfo::clear_member_jointime() {
  member_jointime_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::_internal_member_jointime() const {
  return member_jointime_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GuildMemberInfo::member_jointime() const {
  // @@protoc_insertion_point(field_get:GuildMemberInfo.member_jointime)
  return _internal_member_jointime();
}
inline void GuildMemberInfo::_internal_set_member_jointime(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  member_jointime_ = value;
}
inline void GuildMemberInfo::set_member_jointime(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_member_jointime(value);
  // @@protoc_insertion_point(field_set:GuildMemberInfo.member_jointime)
}

// -------------------------------------------------------------------

// TeamMemberInfo

// uint64 member_id = 1;
inline void TeamMemberInfo::clear_member_id() {
  member_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TeamMemberInfo::_internal_member_id() const {
  return member_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TeamMemberInfo::member_id() const {
  // @@protoc_insertion_point(field_get:TeamMemberInfo.member_id)
  return _internal_member_id();
}
inline void TeamMemberInfo::_internal_set_member_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  member_id_ = value;
}
inline void TeamMemberInfo::set_member_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_member_id(value);
  // @@protoc_insertion_point(field_set:TeamMemberInfo.member_id)
}

// uint32 member_lev = 2;
inline void TeamMemberInfo::clear_member_lev() {
  member_lev_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TeamMemberInfo::_internal_member_lev() const {
  return member_lev_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TeamMemberInfo::member_lev() const {
  // @@protoc_insertion_point(field_get:TeamMemberInfo.member_lev)
  return _internal_member_lev();
}
inline void TeamMemberInfo::_internal_set_member_lev(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  member_lev_ = value;
}
inline void TeamMemberInfo::set_member_lev(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_member_lev(value);
  // @@protoc_insertion_point(field_set:TeamMemberInfo.member_lev)
}

// bool member_online = 3;
inline void TeamMemberInfo::clear_member_online() {
  member_online_ = false;
}
inline bool TeamMemberInfo::_internal_member_online() const {
  return member_online_;
}
inline bool TeamMemberInfo::member_online() const {
  // @@protoc_insertion_point(field_get:TeamMemberInfo.member_online)
  return _internal_member_online();
}
inline void TeamMemberInfo::_internal_set_member_online(bool value) {
  
  member_online_ = value;
}
inline void TeamMemberInfo::set_member_online(bool value) {
  _internal_set_member_online(value);
  // @@protoc_insertion_point(field_set:TeamMemberInfo.member_online)
}

// string member_name = 4;
inline void TeamMemberInfo::clear_member_name() {
  member_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TeamMemberInfo::member_name() const {
  // @@protoc_insertion_point(field_get:TeamMemberInfo.member_name)
  return _internal_member_name();
}
inline void TeamMemberInfo::set_member_name(const std::string& value) {
  _internal_set_member_name(value);
  // @@protoc_insertion_point(field_set:TeamMemberInfo.member_name)
}
inline std::string* TeamMemberInfo::mutable_member_name() {
  // @@protoc_insertion_point(field_mutable:TeamMemberInfo.member_name)
  return _internal_mutable_member_name();
}
inline const std::string& TeamMemberInfo::_internal_member_name() const {
  return member_name_.GetNoArena();
}
inline void TeamMemberInfo::_internal_set_member_name(const std::string& value) {
  
  member_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void TeamMemberInfo::set_member_name(std::string&& value) {
  
  member_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TeamMemberInfo.member_name)
}
inline void TeamMemberInfo::set_member_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  member_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TeamMemberInfo.member_name)
}
inline void TeamMemberInfo::set_member_name(const char* value, size_t size) {
  
  member_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TeamMemberInfo.member_name)
}
inline std::string* TeamMemberInfo::_internal_mutable_member_name() {
  
  return member_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TeamMemberInfo::release_member_name() {
  // @@protoc_insertion_point(field_release:TeamMemberInfo.member_name)
  
  return member_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TeamMemberInfo::set_allocated_member_name(std::string* member_name) {
  if (member_name != nullptr) {
    
  } else {
    
  }
  member_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), member_name);
  // @@protoc_insertion_point(field_set_allocated:TeamMemberInfo.member_name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ACTOR_ATTRIB> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ACTOR_ATTRIB>() {
  return ::ACTOR_ATTRIB_descriptor();
}
template <> struct is_proto_enum< ::ACTOR_PROPERTY> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ACTOR_PROPERTY>() {
  return ::ACTOR_PROPERTY_descriptor();
}
template <> struct is_proto_enum< ::MONEY_TYPE> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MONEY_TYPE>() {
  return ::MONEY_TYPE_descriptor();
}
template <> struct is_proto_enum< ::PK_MODE> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PK_MODE>() {
  return ::PK_MODE_descriptor();
}
template <> struct is_proto_enum< ::TaskState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TaskState>() {
  return ::TaskState_descriptor();
}
template <> struct is_proto_enum< ::GuildRank> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::GuildRank>() {
  return ::GuildRank_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2fCommon_2eproto
