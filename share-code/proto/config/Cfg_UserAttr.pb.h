// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_UserAttr.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fUserAttr_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fUserAttr_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_config_2fCfg_5fUserAttr_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_config_2fCfg_5fUserAttr_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_config_2fCfg_5fUserAttr_2eproto;
class Cfg_UserAttr;
class Cfg_UserAttrDefaultTypeInternal;
extern Cfg_UserAttrDefaultTypeInternal _Cfg_UserAttr_default_instance_;
class Cfg_UserAttr_Row;
class Cfg_UserAttr_RowDefaultTypeInternal;
extern Cfg_UserAttr_RowDefaultTypeInternal _Cfg_UserAttr_Row_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Cfg_UserAttr* Arena::CreateMaybeMessage<::Cfg_UserAttr>(Arena*);
template<> ::Cfg_UserAttr_Row* Arena::CreateMaybeMessage<::Cfg_UserAttr_Row>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Cfg_UserAttr_Row :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cfg_UserAttr.Row) */ {
 public:
  Cfg_UserAttr_Row();
  virtual ~Cfg_UserAttr_Row();

  Cfg_UserAttr_Row(const Cfg_UserAttr_Row& from);
  Cfg_UserAttr_Row(Cfg_UserAttr_Row&& from) noexcept
    : Cfg_UserAttr_Row() {
    *this = ::std::move(from);
  }

  inline Cfg_UserAttr_Row& operator=(const Cfg_UserAttr_Row& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cfg_UserAttr_Row& operator=(Cfg_UserAttr_Row&& from) noexcept {
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
  static const Cfg_UserAttr_Row& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cfg_UserAttr_Row* internal_default_instance() {
    return reinterpret_cast<const Cfg_UserAttr_Row*>(
               &_Cfg_UserAttr_Row_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Cfg_UserAttr_Row& a, Cfg_UserAttr_Row& b) {
    a.Swap(&b);
  }
  inline void Swap(Cfg_UserAttr_Row* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cfg_UserAttr_Row* New() const final {
    return CreateMaybeMessage<Cfg_UserAttr_Row>(nullptr);
  }

  Cfg_UserAttr_Row* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cfg_UserAttr_Row>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cfg_UserAttr_Row* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cfg_UserAttr.Row";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_config_2fCfg_5fUserAttr_2eproto);
    return ::descriptor_table_config_2fCfg_5fUserAttr_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAttrDataFieldNumber = 4,
    kIdFieldNumber = 1,
    kProfFieldNumber = 2,
    kLevelFieldNumber = 3,
  };
  // .AttribDataProto attr_data = 4;
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

  // int32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 prof = 2;
  void clear_prof();
  ::PROTOBUF_NAMESPACE_ID::int32 prof() const;
  void set_prof(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_prof() const;
  void _internal_set_prof(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 level = 3;
  void clear_level();
  ::PROTOBUF_NAMESPACE_ID::int32 level() const;
  void set_level(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_level() const;
  void _internal_set_level(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Cfg_UserAttr.Row)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::AttribDataProto* attr_data_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  ::PROTOBUF_NAMESPACE_ID::int32 prof_;
  ::PROTOBUF_NAMESPACE_ID::int32 level_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_config_2fCfg_5fUserAttr_2eproto;
};
// -------------------------------------------------------------------

class Cfg_UserAttr :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cfg_UserAttr) */ {
 public:
  Cfg_UserAttr();
  virtual ~Cfg_UserAttr();

  Cfg_UserAttr(const Cfg_UserAttr& from);
  Cfg_UserAttr(Cfg_UserAttr&& from) noexcept
    : Cfg_UserAttr() {
    *this = ::std::move(from);
  }

  inline Cfg_UserAttr& operator=(const Cfg_UserAttr& from) {
    CopyFrom(from);
    return *this;
  }
  inline Cfg_UserAttr& operator=(Cfg_UserAttr&& from) noexcept {
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
  static const Cfg_UserAttr& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Cfg_UserAttr* internal_default_instance() {
    return reinterpret_cast<const Cfg_UserAttr*>(
               &_Cfg_UserAttr_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Cfg_UserAttr& a, Cfg_UserAttr& b) {
    a.Swap(&b);
  }
  inline void Swap(Cfg_UserAttr* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Cfg_UserAttr* New() const final {
    return CreateMaybeMessage<Cfg_UserAttr>(nullptr);
  }

  Cfg_UserAttr* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Cfg_UserAttr>(arena);
  }
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Cfg_UserAttr* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cfg_UserAttr";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_config_2fCfg_5fUserAttr_2eproto);
    return ::descriptor_table_config_2fCfg_5fUserAttr_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Cfg_UserAttr_Row Row;

  // accessors -------------------------------------------------------

  enum : int {
    kRowsFieldNumber = 1,
  };
  // repeated .Cfg_UserAttr.Row rows = 1;
  int rows_size() const;
  private:
  int _internal_rows_size() const;
  public:
  void clear_rows();
  ::Cfg_UserAttr_Row* mutable_rows(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_UserAttr_Row >*
      mutable_rows();
  private:
  const ::Cfg_UserAttr_Row& _internal_rows(int index) const;
  ::Cfg_UserAttr_Row* _internal_add_rows();
  public:
  const ::Cfg_UserAttr_Row& rows(int index) const;
  ::Cfg_UserAttr_Row* add_rows();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_UserAttr_Row >&
      rows() const;

  // @@protoc_insertion_point(class_scope:Cfg_UserAttr)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_UserAttr_Row > rows_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_config_2fCfg_5fUserAttr_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Cfg_UserAttr_Row

// int32 id = 1;
inline void Cfg_UserAttr_Row::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Cfg_UserAttr_Row::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Cfg_UserAttr_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_UserAttr.Row.id)
  return _internal_id();
}
inline void Cfg_UserAttr_Row::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Cfg_UserAttr_Row::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Cfg_UserAttr.Row.id)
}

// int32 prof = 2;
inline void Cfg_UserAttr_Row::clear_prof() {
  prof_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Cfg_UserAttr_Row::_internal_prof() const {
  return prof_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Cfg_UserAttr_Row::prof() const {
  // @@protoc_insertion_point(field_get:Cfg_UserAttr.Row.prof)
  return _internal_prof();
}
inline void Cfg_UserAttr_Row::_internal_set_prof(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  prof_ = value;
}
inline void Cfg_UserAttr_Row::set_prof(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_prof(value);
  // @@protoc_insertion_point(field_set:Cfg_UserAttr.Row.prof)
}

// int32 level = 3;
inline void Cfg_UserAttr_Row::clear_level() {
  level_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Cfg_UserAttr_Row::_internal_level() const {
  return level_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Cfg_UserAttr_Row::level() const {
  // @@protoc_insertion_point(field_get:Cfg_UserAttr.Row.level)
  return _internal_level();
}
inline void Cfg_UserAttr_Row::_internal_set_level(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  level_ = value;
}
inline void Cfg_UserAttr_Row::set_level(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_level(value);
  // @@protoc_insertion_point(field_set:Cfg_UserAttr.Row.level)
}

// .AttribDataProto attr_data = 4;
inline bool Cfg_UserAttr_Row::_internal_has_attr_data() const {
  return this != internal_default_instance() && attr_data_ != nullptr;
}
inline bool Cfg_UserAttr_Row::has_attr_data() const {
  return _internal_has_attr_data();
}
inline const ::AttribDataProto& Cfg_UserAttr_Row::_internal_attr_data() const {
  const ::AttribDataProto* p = attr_data_;
  return p != nullptr ? *p : *reinterpret_cast<const ::AttribDataProto*>(
      &::_AttribDataProto_default_instance_);
}
inline const ::AttribDataProto& Cfg_UserAttr_Row::attr_data() const {
  // @@protoc_insertion_point(field_get:Cfg_UserAttr.Row.attr_data)
  return _internal_attr_data();
}
inline ::AttribDataProto* Cfg_UserAttr_Row::release_attr_data() {
  // @@protoc_insertion_point(field_release:Cfg_UserAttr.Row.attr_data)
  
  ::AttribDataProto* temp = attr_data_;
  attr_data_ = nullptr;
  return temp;
}
inline ::AttribDataProto* Cfg_UserAttr_Row::_internal_mutable_attr_data() {
  
  if (attr_data_ == nullptr) {
    auto* p = CreateMaybeMessage<::AttribDataProto>(GetArenaNoVirtual());
    attr_data_ = p;
  }
  return attr_data_;
}
inline ::AttribDataProto* Cfg_UserAttr_Row::mutable_attr_data() {
  // @@protoc_insertion_point(field_mutable:Cfg_UserAttr.Row.attr_data)
  return _internal_mutable_attr_data();
}
inline void Cfg_UserAttr_Row::set_allocated_attr_data(::AttribDataProto* attr_data) {
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
  // @@protoc_insertion_point(field_set_allocated:Cfg_UserAttr.Row.attr_data)
}

// -------------------------------------------------------------------

// Cfg_UserAttr

// repeated .Cfg_UserAttr.Row rows = 1;
inline int Cfg_UserAttr::_internal_rows_size() const {
  return rows_.size();
}
inline int Cfg_UserAttr::rows_size() const {
  return _internal_rows_size();
}
inline void Cfg_UserAttr::clear_rows() {
  rows_.Clear();
}
inline ::Cfg_UserAttr_Row* Cfg_UserAttr::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_UserAttr.rows)
  return rows_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_UserAttr_Row >*
Cfg_UserAttr::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_UserAttr.rows)
  return &rows_;
}
inline const ::Cfg_UserAttr_Row& Cfg_UserAttr::_internal_rows(int index) const {
  return rows_.Get(index);
}
inline const ::Cfg_UserAttr_Row& Cfg_UserAttr::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_UserAttr.rows)
  return _internal_rows(index);
}
inline ::Cfg_UserAttr_Row* Cfg_UserAttr::_internal_add_rows() {
  return rows_.Add();
}
inline ::Cfg_UserAttr_Row* Cfg_UserAttr::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_UserAttr.rows)
  return _internal_add_rows();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Cfg_UserAttr_Row >&
Cfg_UserAttr::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_UserAttr.rows)
  return rows_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_config_2fCfg_5fUserAttr_2eproto
