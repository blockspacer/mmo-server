// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_Scene_LeavePoint.proto

#ifndef PROTOBUF_config_2fCfg_5fScene_5fLeavePoint_2eproto__INCLUDED
#define PROTOBUF_config_2fCfg_5fScene_5fLeavePoint_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_config_2fCfg_5fScene_5fLeavePoint_2eproto();
void protobuf_InitDefaults_config_2fCfg_5fScene_5fLeavePoint_2eproto();
void protobuf_AssignDesc_config_2fCfg_5fScene_5fLeavePoint_2eproto();
void protobuf_ShutdownFile_config_2fCfg_5fScene_5fLeavePoint_2eproto();

class Cfg_Scene_LeavePoint;
class Cfg_Scene_LeavePoint_Row;

// ===================================================================

class Cfg_Scene_LeavePoint_Row : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Cfg_Scene_LeavePoint.Row) */ {
 public:
  Cfg_Scene_LeavePoint_Row();
  virtual ~Cfg_Scene_LeavePoint_Row();

  Cfg_Scene_LeavePoint_Row(const Cfg_Scene_LeavePoint_Row& from);

  inline Cfg_Scene_LeavePoint_Row& operator=(const Cfg_Scene_LeavePoint_Row& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Cfg_Scene_LeavePoint_Row& default_instance();

  static const Cfg_Scene_LeavePoint_Row* internal_default_instance();

  void Swap(Cfg_Scene_LeavePoint_Row* other);

  // implements Message ----------------------------------------------

  inline Cfg_Scene_LeavePoint_Row* New() const { return New(NULL); }

  Cfg_Scene_LeavePoint_Row* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Cfg_Scene_LeavePoint_Row* other);
  void UnsafeMergeFrom(const Cfg_Scene_LeavePoint_Row& from);
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

  // optional uint32 idmap = 1;
  void clear_idmap();
  static const int kIdmapFieldNumber = 1;
  ::google::protobuf::uint32 idmap() const;
  void set_idmap(::google::protobuf::uint32 value);

  // optional uint32 idx = 2;
  void clear_idx();
  static const int kIdxFieldNumber = 2;
  ::google::protobuf::uint32 idx() const;
  void set_idx(::google::protobuf::uint32 value);

  // optional float x = 3;
  void clear_x();
  static const int kXFieldNumber = 3;
  float x() const;
  void set_x(float value);

  // optional float y = 4;
  void clear_y();
  static const int kYFieldNumber = 4;
  float y() const;
  void set_y(float value);

  // optional float range = 5;
  void clear_range();
  static const int kRangeFieldNumber = 5;
  float range() const;
  void set_range(float value);

  // optional uint32 dest_map_id = 6;
  void clear_dest_map_id();
  static const int kDestMapIdFieldNumber = 6;
  ::google::protobuf::uint32 dest_map_id() const;
  void set_dest_map_id(::google::protobuf::uint32 value);

  // optional uint32 dest_enter_point_idx = 7;
  void clear_dest_enter_point_idx();
  static const int kDestEnterPointIdxFieldNumber = 7;
  ::google::protobuf::uint32 dest_enter_point_idx() const;
  void set_dest_enter_point_idx(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Cfg_Scene_LeavePoint.Row)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 idmap_;
  ::google::protobuf::uint32 idx_;
  float x_;
  float y_;
  float range_;
  ::google::protobuf::uint32 dest_map_id_;
  ::google::protobuf::uint32 dest_enter_point_idx_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_config_2fCfg_5fScene_5fLeavePoint_2eproto_impl();
  friend void  protobuf_AddDesc_config_2fCfg_5fScene_5fLeavePoint_2eproto_impl();
  friend void protobuf_AssignDesc_config_2fCfg_5fScene_5fLeavePoint_2eproto();
  friend void protobuf_ShutdownFile_config_2fCfg_5fScene_5fLeavePoint_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Cfg_Scene_LeavePoint_Row> Cfg_Scene_LeavePoint_Row_default_instance_;

// -------------------------------------------------------------------

class Cfg_Scene_LeavePoint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Cfg_Scene_LeavePoint) */ {
 public:
  Cfg_Scene_LeavePoint();
  virtual ~Cfg_Scene_LeavePoint();

  Cfg_Scene_LeavePoint(const Cfg_Scene_LeavePoint& from);

  inline Cfg_Scene_LeavePoint& operator=(const Cfg_Scene_LeavePoint& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Cfg_Scene_LeavePoint& default_instance();

  static const Cfg_Scene_LeavePoint* internal_default_instance();

  void Swap(Cfg_Scene_LeavePoint* other);

  // implements Message ----------------------------------------------

  inline Cfg_Scene_LeavePoint* New() const { return New(NULL); }

  Cfg_Scene_LeavePoint* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Cfg_Scene_LeavePoint* other);
  void UnsafeMergeFrom(const Cfg_Scene_LeavePoint& from);
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

  typedef Cfg_Scene_LeavePoint_Row Row;

  // accessors -------------------------------------------------------

  // repeated .Cfg_Scene_LeavePoint.Row rows = 1;
  int rows_size() const;
  void clear_rows();
  static const int kRowsFieldNumber = 1;
  const ::Cfg_Scene_LeavePoint_Row& rows(int index) const;
  ::Cfg_Scene_LeavePoint_Row* mutable_rows(int index);
  ::Cfg_Scene_LeavePoint_Row* add_rows();
  ::google::protobuf::RepeatedPtrField< ::Cfg_Scene_LeavePoint_Row >*
      mutable_rows();
  const ::google::protobuf::RepeatedPtrField< ::Cfg_Scene_LeavePoint_Row >&
      rows() const;

  // @@protoc_insertion_point(class_scope:Cfg_Scene_LeavePoint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::Cfg_Scene_LeavePoint_Row > rows_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_config_2fCfg_5fScene_5fLeavePoint_2eproto_impl();
  friend void  protobuf_AddDesc_config_2fCfg_5fScene_5fLeavePoint_2eproto_impl();
  friend void protobuf_AssignDesc_config_2fCfg_5fScene_5fLeavePoint_2eproto();
  friend void protobuf_ShutdownFile_config_2fCfg_5fScene_5fLeavePoint_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Cfg_Scene_LeavePoint> Cfg_Scene_LeavePoint_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Cfg_Scene_LeavePoint_Row

// optional uint32 idmap = 1;
inline void Cfg_Scene_LeavePoint_Row::clear_idmap() {
  idmap_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_Scene_LeavePoint_Row::idmap() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_LeavePoint.Row.idmap)
  return idmap_;
}
inline void Cfg_Scene_LeavePoint_Row::set_idmap(::google::protobuf::uint32 value) {
  
  idmap_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_LeavePoint.Row.idmap)
}

// optional uint32 idx = 2;
inline void Cfg_Scene_LeavePoint_Row::clear_idx() {
  idx_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_Scene_LeavePoint_Row::idx() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_LeavePoint.Row.idx)
  return idx_;
}
inline void Cfg_Scene_LeavePoint_Row::set_idx(::google::protobuf::uint32 value) {
  
  idx_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_LeavePoint.Row.idx)
}

// optional float x = 3;
inline void Cfg_Scene_LeavePoint_Row::clear_x() {
  x_ = 0;
}
inline float Cfg_Scene_LeavePoint_Row::x() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_LeavePoint.Row.x)
  return x_;
}
inline void Cfg_Scene_LeavePoint_Row::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_LeavePoint.Row.x)
}

// optional float y = 4;
inline void Cfg_Scene_LeavePoint_Row::clear_y() {
  y_ = 0;
}
inline float Cfg_Scene_LeavePoint_Row::y() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_LeavePoint.Row.y)
  return y_;
}
inline void Cfg_Scene_LeavePoint_Row::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_LeavePoint.Row.y)
}

// optional float range = 5;
inline void Cfg_Scene_LeavePoint_Row::clear_range() {
  range_ = 0;
}
inline float Cfg_Scene_LeavePoint_Row::range() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_LeavePoint.Row.range)
  return range_;
}
inline void Cfg_Scene_LeavePoint_Row::set_range(float value) {
  
  range_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_LeavePoint.Row.range)
}

// optional uint32 dest_map_id = 6;
inline void Cfg_Scene_LeavePoint_Row::clear_dest_map_id() {
  dest_map_id_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_Scene_LeavePoint_Row::dest_map_id() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_LeavePoint.Row.dest_map_id)
  return dest_map_id_;
}
inline void Cfg_Scene_LeavePoint_Row::set_dest_map_id(::google::protobuf::uint32 value) {
  
  dest_map_id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_LeavePoint.Row.dest_map_id)
}

// optional uint32 dest_enter_point_idx = 7;
inline void Cfg_Scene_LeavePoint_Row::clear_dest_enter_point_idx() {
  dest_enter_point_idx_ = 0u;
}
inline ::google::protobuf::uint32 Cfg_Scene_LeavePoint_Row::dest_enter_point_idx() const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_LeavePoint.Row.dest_enter_point_idx)
  return dest_enter_point_idx_;
}
inline void Cfg_Scene_LeavePoint_Row::set_dest_enter_point_idx(::google::protobuf::uint32 value) {
  
  dest_enter_point_idx_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Scene_LeavePoint.Row.dest_enter_point_idx)
}

inline const Cfg_Scene_LeavePoint_Row* Cfg_Scene_LeavePoint_Row::internal_default_instance() {
  return &Cfg_Scene_LeavePoint_Row_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_Scene_LeavePoint

// repeated .Cfg_Scene_LeavePoint.Row rows = 1;
inline int Cfg_Scene_LeavePoint::rows_size() const {
  return rows_.size();
}
inline void Cfg_Scene_LeavePoint::clear_rows() {
  rows_.Clear();
}
inline const ::Cfg_Scene_LeavePoint_Row& Cfg_Scene_LeavePoint::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_Scene_LeavePoint.rows)
  return rows_.Get(index);
}
inline ::Cfg_Scene_LeavePoint_Row* Cfg_Scene_LeavePoint::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_Scene_LeavePoint.rows)
  return rows_.Mutable(index);
}
inline ::Cfg_Scene_LeavePoint_Row* Cfg_Scene_LeavePoint::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_Scene_LeavePoint.rows)
  return rows_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Cfg_Scene_LeavePoint_Row >*
Cfg_Scene_LeavePoint::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_Scene_LeavePoint.rows)
  return &rows_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Cfg_Scene_LeavePoint_Row >&
Cfg_Scene_LeavePoint::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_Scene_LeavePoint.rows)
  return rows_;
}

inline const Cfg_Scene_LeavePoint* Cfg_Scene_LeavePoint::internal_default_instance() {
  return &Cfg_Scene_LeavePoint_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_config_2fCfg_5fScene_5fLeavePoint_2eproto__INCLUDED
