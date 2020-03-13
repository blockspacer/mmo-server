// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_Pet.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fPet_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fPet_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "common/AttribChangeDataProto.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_config_2fCfg_5fPet_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_config_2fCfg_5fPet_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_config_2fCfg_5fPet_2eproto;
class Cfg_Pet;
class Cfg_PetDefaultTypeInternal;
extern Cfg_PetDefaultTypeInternal _Cfg_Pet_default_instance_;
class Cfg_Pet_Row;
class Cfg_Pet_RowDefaultTypeInternal;
extern Cfg_Pet_RowDefaultTypeInternal _Cfg_Pet_Row_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Cfg_Pet* Arena::CreateMaybeMessage<::Cfg_Pet>(Arena*);
template<> ::Cfg_Pet_Row* Arena::CreateMaybeMessage<::Cfg_Pet_Row>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Cfg_Pet_Row :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cfg_Pet.Row) */ {
 public:
  Cfg_Pet_Row();
  virtual ~Cfg_Pet_Row();

  Cfg_Pet_Row(const Cfg_Pet_Row& from);
  Cfg_Pet_Row(Cfg_Pet_Row&& from) noexcept
    : Cfg_Pet_Row() {
    *this = ::std::move(from);
  }

  inline Cfg_Pet_Row& operator=(const Cfg_Pet_Row& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cfg_Pet_Row& operator=(Cfg_Pet_Row&& from) noexcept {
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
  static const Cfg_Pet_Row& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cfg_Pet_Row* internal_default_instance() {
    return reinterpret_cast<const Cfg_Pet_Row*>(
               &_Cfg_Pet_Row_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Cfg_Pet_Row& a, Cfg_Pet_Row& b) {
    a.Swap(&b);
  }
  inline void Swap(Cfg_Pet_Row* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cfg_Pet_Row* New() const final {
    return CreateMaybeMessage<Cfg_Pet_Row>(nullptr);
  }

  Cfg_Pet_Row* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cfg_Pet_Row>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cfg_Pet_Row* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cfg_Pet.Row";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_config_2fCfg_5fPet_2eproto);
    return ::descriptor_table_config_2fCfg_5fPet_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 3,
    kAttrDataFieldNumber = 11,
    kIdFieldNumber = 1,
    kPetTypeFieldNumber = 4,
    kPetFlagFieldNumber = 5,
    kHighFieldNumber = 6,
    kVolumeFieldNumber = 7,
    kAitypeFieldNumber = 10,
    kScriptidFieldNumber = 9,
  };
  // string name = 3;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .AttribDataProto attr_data = 11;
  bool has_attr_data() const;
  private:
  bool _internal_has_attr_data() const;
  public:
  void clear_attr_data();
  const ::AttribDataProto& attr_data() const;
  ::AttribDataProto* release_attr_data();
  ::AttribDataProto* mutable_attr_data();
  void set_allocated_attr_data(::AttribDataProto* attr_data);
  private:
  const ::AttribDataProto& _internal_attr_data() const;
  ::AttribDataProto* _internal_mutable_attr_data();
  public:

  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 pet_type = 4;
  void clear_pet_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 pet_type() const;
  void set_pet_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_pet_type() const;
  void _internal_set_pet_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 pet_flag = 5;
  void clear_pet_flag();
  ::PROTOBUF_NAMESPACE_ID::uint32 pet_flag() const;
  void set_pet_flag(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_pet_flag() const;
  void _internal_set_pet_flag(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // float high = 6;
  void clear_high();
  float high() const;
  void set_high(float value);
  private:
  float _internal_high() const;
  void _internal_set_high(float value);
  public:

  // float volume = 7;
  void clear_volume();
  float volume() const;
  void set_volume(float value);
  private:
  float _internal_volume() const;
  void _internal_set_volume(float value);
  public:

  // uint32 aitype = 10;
  void clear_aitype();
  ::PROTOBUF_NAMESPACE_ID::uint32 aitype() const;
  void set_aitype(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_aitype() const;
  void _internal_set_aitype(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint64 scriptid = 9;
  void clear_scriptid();
  ::PROTOBUF_NAMESPACE_ID::uint64 scriptid() const;
  void set_scriptid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_scriptid() const;
  void _internal_set_scriptid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:Cfg_Pet.Row)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::AttribDataProto* attr_data_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pet_type_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pet_flag_;
  float high_;
  float volume_;
  ::PROTOBUF_NAMESPACE_ID::uint32 aitype_;
  ::PROTOBUF_NAMESPACE_ID::uint64 scriptid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_config_2fCfg_5fPet_2eproto;
};
// -------------------------------------------------------------------

class Cfg_Pet :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cfg_Pet) */ {
 public:
  Cfg_Pet();
  virtual ~Cfg_Pet();

  Cfg_Pet(const Cfg_Pet& from);
  Cfg_Pet(Cfg_Pet&& from) noexcept
    : Cfg_Pet() {
    *this = ::std::move(from);
  }

  inline Cfg_Pet& operator=(const Cfg_Pet& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cfg_Pet& operator=(Cfg_Pet&& from) noexcept {
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
  static const Cfg_Pet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cfg_Pet* internal_default_instance() {
    return reinterpret_cast<const Cfg_Pet*>(
               &_Cfg_Pet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Cfg_Pet& a, Cfg_Pet& b) {
    a.Swap(&b);
  }
  inline void Swap(Cfg_Pet* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cfg_Pet* New() const final {
    return CreateMaybeMessage<Cfg_Pet>(nullptr);
  }

  Cfg_Pet* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cfg_Pet>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cfg_Pet* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cfg_Pet";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_config_2fCfg_5fPet_2eproto);
    return ::descriptor_table_config_2fCfg_5fPet_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Cfg_Pet_Row Row;

  // accessors -------------------------------------------------------

  enum : int {
    kRowsFieldNumber = 1,
  };
  // repeated .Cfg_Pet.Row rows = 1;
  int rows_size() const;
  private:
  int _internal_rows_size() const;
  public:
  void clear_rows();
  ::Cfg_Pet_Row* mutable_rows(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Pet_Row >*
      mutable_rows();
  private:
  const ::Cfg_Pet_Row& _internal_rows(int index) const;
  ::Cfg_Pet_Row* _internal_add_rows();
  public:
  const ::Cfg_Pet_Row& rows(int index) const;
  ::Cfg_Pet_Row* add_rows();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Pet_Row >&
      rows() const;

  // @@protoc_insertion_point(class_scope:Cfg_Pet)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Pet_Row > rows_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_config_2fCfg_5fPet_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Cfg_Pet_Row

// uint32 id = 1;
inline void Cfg_Pet_Row::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Pet_Row::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Pet_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.id)
  return _internal_id();
}
inline void Cfg_Pet_Row::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void Cfg_Pet_Row::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Cfg_Pet.Row.id)
}

// string name = 3;
inline void Cfg_Pet_Row::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Cfg_Pet_Row::name() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.name)
  return _internal_name();
}
inline void Cfg_Pet_Row::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Cfg_Pet.Row.name)
}
inline std::string* Cfg_Pet_Row::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Cfg_Pet.Row.name)
  return _internal_mutable_name();
}
inline const std::string& Cfg_Pet_Row::_internal_name() const {
  return name_.GetNoArena();
}
inline void Cfg_Pet_Row::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Cfg_Pet_Row::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Cfg_Pet.Row.name)
}
inline void Cfg_Pet_Row::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Cfg_Pet.Row.name)
}
inline void Cfg_Pet_Row::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Cfg_Pet.Row.name)
}
inline std::string* Cfg_Pet_Row::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Cfg_Pet_Row::release_name() {
  // @@protoc_insertion_point(field_release:Cfg_Pet.Row.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Cfg_Pet_Row::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Cfg_Pet.Row.name)
}

// uint32 pet_type = 4;
inline void Cfg_Pet_Row::clear_pet_type() {
  pet_type_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Pet_Row::_internal_pet_type() const {
  return pet_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Pet_Row::pet_type() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.pet_type)
  return _internal_pet_type();
}
inline void Cfg_Pet_Row::_internal_set_pet_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  pet_type_ = value;
}
inline void Cfg_Pet_Row::set_pet_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_pet_type(value);
  // @@protoc_insertion_point(field_set:Cfg_Pet.Row.pet_type)
}

// uint32 pet_flag = 5;
inline void Cfg_Pet_Row::clear_pet_flag() {
  pet_flag_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Pet_Row::_internal_pet_flag() const {
  return pet_flag_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Pet_Row::pet_flag() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.pet_flag)
  return _internal_pet_flag();
}
inline void Cfg_Pet_Row::_internal_set_pet_flag(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  pet_flag_ = value;
}
inline void Cfg_Pet_Row::set_pet_flag(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_pet_flag(value);
  // @@protoc_insertion_point(field_set:Cfg_Pet.Row.pet_flag)
}

// float high = 6;
inline void Cfg_Pet_Row::clear_high() {
  high_ = 0;
}
inline float Cfg_Pet_Row::_internal_high() const {
  return high_;
}
inline float Cfg_Pet_Row::high() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.high)
  return _internal_high();
}
inline void Cfg_Pet_Row::_internal_set_high(float value) {
  
  high_ = value;
}
inline void Cfg_Pet_Row::set_high(float value) {
  _internal_set_high(value);
  // @@protoc_insertion_point(field_set:Cfg_Pet.Row.high)
}

// float volume = 7;
inline void Cfg_Pet_Row::clear_volume() {
  volume_ = 0;
}
inline float Cfg_Pet_Row::_internal_volume() const {
  return volume_;
}
inline float Cfg_Pet_Row::volume() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.volume)
  return _internal_volume();
}
inline void Cfg_Pet_Row::_internal_set_volume(float value) {
  
  volume_ = value;
}
inline void Cfg_Pet_Row::set_volume(float value) {
  _internal_set_volume(value);
  // @@protoc_insertion_point(field_set:Cfg_Pet.Row.volume)
}

// uint64 scriptid = 9;
inline void Cfg_Pet_Row::clear_scriptid() {
  scriptid_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Cfg_Pet_Row::_internal_scriptid() const {
  return scriptid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 Cfg_Pet_Row::scriptid() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.scriptid)
  return _internal_scriptid();
}
inline void Cfg_Pet_Row::_internal_set_scriptid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  scriptid_ = value;
}
inline void Cfg_Pet_Row::set_scriptid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_scriptid(value);
  // @@protoc_insertion_point(field_set:Cfg_Pet.Row.scriptid)
}

// uint32 aitype = 10;
inline void Cfg_Pet_Row::clear_aitype() {
  aitype_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Pet_Row::_internal_aitype() const {
  return aitype_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Cfg_Pet_Row::aitype() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.aitype)
  return _internal_aitype();
}
inline void Cfg_Pet_Row::_internal_set_aitype(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  aitype_ = value;
}
inline void Cfg_Pet_Row::set_aitype(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_aitype(value);
  // @@protoc_insertion_point(field_set:Cfg_Pet.Row.aitype)
}

// .AttribDataProto attr_data = 11;
inline bool Cfg_Pet_Row::_internal_has_attr_data() const {
  return this != internal_default_instance() && attr_data_ != nullptr;
}
inline bool Cfg_Pet_Row::has_attr_data() const {
  return _internal_has_attr_data();
}
inline const ::AttribDataProto& Cfg_Pet_Row::_internal_attr_data() const {
  const ::AttribDataProto* p = attr_data_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AttribDataProto*>(
      &::_AttribDataProto_default_instance_);
}
inline const ::AttribDataProto& Cfg_Pet_Row::attr_data() const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.Row.attr_data)
  return _internal_attr_data();
}
inline ::AttribDataProto* Cfg_Pet_Row::release_attr_data() {
  // @@protoc_insertion_point(field_release:Cfg_Pet.Row.attr_data)
  
  ::AttribDataProto* temp = attr_data_;
  attr_data_ = nullptr;
  return temp;
}
inline ::AttribDataProto* Cfg_Pet_Row::_internal_mutable_attr_data() {
  
  if (attr_data_ == nullptr) {
    auto* p = CreateMaybeMessage<::AttribDataProto>(GetArenaNoVirtual());
    attr_data_ = p;
  }
  return attr_data_;
}
inline ::AttribDataProto* Cfg_Pet_Row::mutable_attr_data() {
  // @@protoc_insertion_point(field_mutable:Cfg_Pet.Row.attr_data)
  return _internal_mutable_attr_data();
}
inline void Cfg_Pet_Row::set_allocated_attr_data(::AttribDataProto* attr_data) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(attr_data_);
  }
  if (attr_data) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      attr_data = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, attr_data, submessage_arena);
    }
    
  } else {
    
  }
  attr_data_ = attr_data;
  // @@protoc_insertion_point(field_set_allocated:Cfg_Pet.Row.attr_data)
}

// -------------------------------------------------------------------

// Cfg_Pet

// repeated .Cfg_Pet.Row rows = 1;
inline int Cfg_Pet::_internal_rows_size() const {
  return rows_.size();
}
inline int Cfg_Pet::rows_size() const {
  return _internal_rows_size();
}
inline void Cfg_Pet::clear_rows() {
  rows_.Clear();
}
inline ::Cfg_Pet_Row* Cfg_Pet::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_Pet.rows)
  return rows_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Pet_Row >*
Cfg_Pet::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_Pet.rows)
  return &rows_;
}
inline const ::Cfg_Pet_Row& Cfg_Pet::_internal_rows(int index) const {
  return rows_.Get(index);
}
inline const ::Cfg_Pet_Row& Cfg_Pet::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_Pet.rows)
  return _internal_rows(index);
}
inline ::Cfg_Pet_Row* Cfg_Pet::_internal_add_rows() {
  return rows_.Add();
}
inline ::Cfg_Pet_Row* Cfg_Pet::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_Pet.rows)
  return _internal_add_rows();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_Pet_Row >&
Cfg_Pet::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_Pet.rows)
  return rows_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fPet_2eproto