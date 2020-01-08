// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_Suit.proto

#ifndef PROTOBUF_config_2fCfg_5fSuit_2eproto__INCLUDED
#define PROTOBUF_config_2fCfg_5fSuit_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "common/AttribChangeDataProto.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_config_2fCfg_5fSuit_2eproto();
void protobuf_InitDefaults_config_2fCfg_5fSuit_2eproto();
void protobuf_AssignDesc_config_2fCfg_5fSuit_2eproto();
void protobuf_ShutdownFile_config_2fCfg_5fSuit_2eproto();

class Cfg_Suit;
class Cfg_Suit_Row;

// ===================================================================

class Cfg_Suit_Row : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Cfg_Suit.Row) */ {
 public:
  Cfg_Suit_Row();
  virtual ~Cfg_Suit_Row();

  Cfg_Suit_Row(const Cfg_Suit_Row& from);

  inline Cfg_Suit_Row& operator=(const Cfg_Suit_Row& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Cfg_Suit_Row& default_instance();

  static const Cfg_Suit_Row* internal_default_instance();

  void Swap(Cfg_Suit_Row* other);

  // implements Message ----------------------------------------------

  inline Cfg_Suit_Row* New() const { return New(NULL); }

  Cfg_Suit_Row* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Cfg_Suit_Row* other);
  void UnsafeMergeFrom(const Cfg_Suit_Row& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional uint32 num = 2;
  void clear_num();
  static const int kNumFieldNumber = 2;
  ::google::protobuf::uint32 num() const;
  void set_num(::google::protobuf::uint32 value);

  // repeated .AttribChangeDataProto attrib_change_list = 12;
  int attrib_change_list_size() const;
  void clear_attrib_change_list();
  static const int kAttribChangeListFieldNumber = 12;
  const ::AttribChangeDataProto& attrib_change_list(int index) const;
  ::AttribChangeDataProto* mutable_attrib_change_list(int index);
  ::AttribChangeDataProto* add_attrib_change_list();
  ::google::protobuf::RepeatedPtrField< ::AttribChangeDataProto >*
      mutable_attrib_change_list();
  const ::google::protobuf::RepeatedPtrField< ::AttribChangeDataProto >&
      attrib_change_list() const;

  // @@protoc_insertion_point(class_scope:Cfg_Suit.Row)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::AttribChangeDataProto > attrib_change_list_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 num_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_config_2fCfg_5fSuit_2eproto_impl();
  friend void  protobuf_AddDesc_config_2fCfg_5fSuit_2eproto_impl();
  friend void protobuf_AssignDesc_config_2fCfg_5fSuit_2eproto();
  friend void protobuf_ShutdownFile_config_2fCfg_5fSuit_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Cfg_Suit_Row> Cfg_Suit_Row_default_instance_;

// -------------------------------------------------------------------

class Cfg_Suit : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Cfg_Suit) */ {
 public:
  Cfg_Suit();
  virtual ~Cfg_Suit();

  Cfg_Suit(const Cfg_Suit& from);

  inline Cfg_Suit& operator=(const Cfg_Suit& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Cfg_Suit& default_instance();

  static const Cfg_Suit* internal_default_instance();

  void Swap(Cfg_Suit* other);

  // implements Message ----------------------------------------------

  inline Cfg_Suit* New() const { return New(NULL); }

  Cfg_Suit* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Cfg_Suit* other);
  void UnsafeMergeFrom(const Cfg_Suit& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Cfg_Suit_Row Row;

  // accessors -------------------------------------------------------

  // repeated .Cfg_Suit.Row rows = 1;
  int rows_size() const;
  void clear_rows();
  static const int kRowsFieldNumber = 1;
  const ::Cfg_Suit_Row& rows(int index) const;
  ::Cfg_Suit_Row* mutable_rows(int index);
  ::Cfg_Suit_Row* add_rows();
  ::google::protobuf::RepeatedPtrField< ::Cfg_Suit_Row >*
      mutable_rows();
  const ::google::protobuf::RepeatedPtrField< ::Cfg_Suit_Row >&
      rows() const;

  // @@protoc_insertion_point(class_scope:Cfg_Suit)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::Cfg_Suit_Row > rows_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_config_2fCfg_5fSuit_2eproto_impl();
  friend void  protobuf_AddDesc_config_2fCfg_5fSuit_2eproto_impl();
  friend void protobuf_AssignDesc_config_2fCfg_5fSuit_2eproto();
  friend void protobuf_ShutdownFile_config_2fCfg_5fSuit_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Cfg_Suit> Cfg_Suit_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Cfg_Suit_Row

// optional uint32 id = 1;
inline void Cfg_Suit_Row::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_Suit_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_Suit.Row.id)
  return id_;
}
inline void Cfg_Suit_Row::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Suit.Row.id)
}

// optional uint32 num = 2;
inline void Cfg_Suit_Row::clear_num() {
  num_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_Suit_Row::num() const {
  // @@protoc_insertion_point(field_get:Cfg_Suit.Row.num)
  return num_;
}
inline void Cfg_Suit_Row::set_num(::google::protobuf::uint32 value) {
  
  num_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Suit.Row.num)
}

// repeated .AttribChangeDataProto attrib_change_list = 12;
inline int Cfg_Suit_Row::attrib_change_list_size() const {
  return attrib_change_list_.size();
}
inline void Cfg_Suit_Row::clear_attrib_change_list() {
  attrib_change_list_.Clear();
}
inline const ::AttribChangeDataProto& Cfg_Suit_Row::attrib_change_list(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_Suit.Row.attrib_change_list)
  return attrib_change_list_.Get(index);
}
inline ::AttribChangeDataProto* Cfg_Suit_Row::mutable_attrib_change_list(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_Suit.Row.attrib_change_list)
  return attrib_change_list_.Mutable(index);
}
inline ::AttribChangeDataProto* Cfg_Suit_Row::add_attrib_change_list() {
  // @@protoc_insertion_point(field_add:Cfg_Suit.Row.attrib_change_list)
  return attrib_change_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::AttribChangeDataProto >*
Cfg_Suit_Row::mutable_attrib_change_list() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_Suit.Row.attrib_change_list)
  return &attrib_change_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::AttribChangeDataProto >&
Cfg_Suit_Row::attrib_change_list() const {
  // @@protoc_insertion_point(field_list:Cfg_Suit.Row.attrib_change_list)
  return attrib_change_list_;
}

inline const Cfg_Suit_Row* Cfg_Suit_Row::internal_default_instance() {
  return &Cfg_Suit_Row_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_Suit

// repeated .Cfg_Suit.Row rows = 1;
inline int Cfg_Suit::rows_size() const {
  return rows_.size();
}
inline void Cfg_Suit::clear_rows() {
  rows_.Clear();
}
inline const ::Cfg_Suit_Row& Cfg_Suit::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_Suit.rows)
  return rows_.Get(index);
}
inline ::Cfg_Suit_Row* Cfg_Suit::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_Suit.rows)
  return rows_.Mutable(index);
}
inline ::Cfg_Suit_Row* Cfg_Suit::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_Suit.rows)
  return rows_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Cfg_Suit_Row >*
Cfg_Suit::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_Suit.rows)
  return &rows_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Cfg_Suit_Row >&
Cfg_Suit::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_Suit.rows)
  return rows_;
}

inline const Cfg_Suit* Cfg_Suit::internal_default_instance() {
  return &Cfg_Suit_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_config_2fCfg_5fSuit_2eproto__INCLUDED
