// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_BornPos.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "config/Cfg_BornPos.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Cfg_BornPos_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_BornPos_reflection_ = NULL;
const ::google::protobuf::Descriptor* Cfg_BornPos_Row_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_BornPos_Row_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_config_2fCfg_5fBornPos_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_config_2fCfg_5fBornPos_2eproto() {
  protobuf_AddDesc_config_2fCfg_5fBornPos_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "config/Cfg_BornPos.proto");
  GOOGLE_CHECK(file != NULL);
  Cfg_BornPos_descriptor_ = file->message_type(0);
  static const int Cfg_BornPos_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos, rows_),
  };
  Cfg_BornPos_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_BornPos_descriptor_,
      Cfg_BornPos::internal_default_instance(),
      Cfg_BornPos_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_BornPos),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos, _internal_metadata_));
  Cfg_BornPos_Row_descriptor_ = Cfg_BornPos_descriptor_->nested_type(0);
  static const int Cfg_BornPos_Row_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos_Row, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos_Row, prof_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos_Row, mapid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos_Row, posx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos_Row, posy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos_Row, range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos_Row, face_),
  };
  Cfg_BornPos_Row_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_BornPos_Row_descriptor_,
      Cfg_BornPos_Row::internal_default_instance(),
      Cfg_BornPos_Row_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_BornPos_Row),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_BornPos_Row, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_config_2fCfg_5fBornPos_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_BornPos_descriptor_, Cfg_BornPos::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_BornPos_Row_descriptor_, Cfg_BornPos_Row::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_config_2fCfg_5fBornPos_2eproto() {
  Cfg_BornPos_default_instance_.Shutdown();
  delete Cfg_BornPos_reflection_;
  Cfg_BornPos_Row_default_instance_.Shutdown();
  delete Cfg_BornPos_Row_reflection_;
}

void protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Cfg_BornPos_default_instance_.DefaultConstruct();
  Cfg_BornPos_Row_default_instance_.DefaultConstruct();
  Cfg_BornPos_default_instance_.get_mutable()->InitAsDefaultInstance();
  Cfg_BornPos_Row_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto_once_);
void protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto_once_,
                 &protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto_impl);
}
void protobuf_AddDesc_config_2fCfg_5fBornPos_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030config/Cfg_BornPos.proto\"\226\001\n\013Cfg_BornP"
    "os\022\036\n\004rows\030\001 \003(\0132\020.Cfg_BornPos.Row\032g\n\003Ro"
    "w\022\n\n\002id\030\001 \001(\r\022\014\n\004prof\030\002 \001(\r\022\r\n\005mapid\030\003 \001"
    "(\r\022\014\n\004posx\030\004 \001(\002\022\014\n\004posy\030\005 \001(\002\022\r\n\005range\030"
    "\006 \001(\002\022\014\n\004face\030\007 \001(\002B\002H\002b\006proto3", 191);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config/Cfg_BornPos.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_config_2fCfg_5fBornPos_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_config_2fCfg_5fBornPos_2eproto_once_);
void protobuf_AddDesc_config_2fCfg_5fBornPos_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_config_2fCfg_5fBornPos_2eproto_once_,
                 &protobuf_AddDesc_config_2fCfg_5fBornPos_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_config_2fCfg_5fBornPos_2eproto {
  StaticDescriptorInitializer_config_2fCfg_5fBornPos_2eproto() {
    protobuf_AddDesc_config_2fCfg_5fBornPos_2eproto();
  }
} static_descriptor_initializer_config_2fCfg_5fBornPos_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_BornPos_Row::kIdFieldNumber;
const int Cfg_BornPos_Row::kProfFieldNumber;
const int Cfg_BornPos_Row::kMapidFieldNumber;
const int Cfg_BornPos_Row::kPosxFieldNumber;
const int Cfg_BornPos_Row::kPosyFieldNumber;
const int Cfg_BornPos_Row::kRangeFieldNumber;
const int Cfg_BornPos_Row::kFaceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_BornPos_Row::Cfg_BornPos_Row()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_BornPos.Row)
}

void Cfg_BornPos_Row::InitAsDefaultInstance() {
}

Cfg_BornPos_Row::Cfg_BornPos_Row(const Cfg_BornPos_Row& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_BornPos.Row)
}

void Cfg_BornPos_Row::SharedCtor() {
  ::memset(&id_, 0, reinterpret_cast<char*>(&face_) -
    reinterpret_cast<char*>(&id_) + sizeof(face_));
  _cached_size_ = 0;
}

Cfg_BornPos_Row::~Cfg_BornPos_Row() {
  // @@protoc_insertion_point(destructor:Cfg_BornPos.Row)
  SharedDtor();
}

void Cfg_BornPos_Row::SharedDtor() {
}

void Cfg_BornPos_Row::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_BornPos_Row::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_BornPos_Row_descriptor_;
}

const Cfg_BornPos_Row& Cfg_BornPos_Row::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_BornPos_Row> Cfg_BornPos_Row_default_instance_;

Cfg_BornPos_Row* Cfg_BornPos_Row::New(::google::protobuf::Arena* arena) const {
  Cfg_BornPos_Row* n = new Cfg_BornPos_Row;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_BornPos_Row::UnsafeMergeFrom(const Cfg_BornPos_Row& from) {
  MergeFrom(from);
}
void Cfg_BornPos_Row::Swap(Cfg_BornPos_Row* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_BornPos_Row::InternalSwap(Cfg_BornPos_Row* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_BornPos_Row::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_BornPos_Row_descriptor_;
  metadata.reflection = Cfg_BornPos_Row_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_BornPos::kRowsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_BornPos::Cfg_BornPos()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_BornPos)
}

void Cfg_BornPos::InitAsDefaultInstance() {
}

Cfg_BornPos::Cfg_BornPos(const Cfg_BornPos& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_BornPos)
}

void Cfg_BornPos::SharedCtor() {
  _cached_size_ = 0;
}

Cfg_BornPos::~Cfg_BornPos() {
  // @@protoc_insertion_point(destructor:Cfg_BornPos)
  SharedDtor();
}

void Cfg_BornPos::SharedDtor() {
}

void Cfg_BornPos::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_BornPos::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_BornPos_descriptor_;
}

const Cfg_BornPos& Cfg_BornPos::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fBornPos_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_BornPos> Cfg_BornPos_default_instance_;

Cfg_BornPos* Cfg_BornPos::New(::google::protobuf::Arena* arena) const {
  Cfg_BornPos* n = new Cfg_BornPos;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_BornPos::UnsafeMergeFrom(const Cfg_BornPos& from) {
  MergeFrom(from);
}
void Cfg_BornPos::Swap(Cfg_BornPos* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_BornPos::InternalSwap(Cfg_BornPos* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_BornPos::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_BornPos_descriptor_;
  metadata.reflection = Cfg_BornPos_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Cfg_BornPos_Row

// optional uint32 id = 1;
void Cfg_BornPos_Row::clear_id() {
  id_ = 0u;
}
::google::protobuf::uint32 Cfg_BornPos_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_BornPos.Row.id)
  return id_;
}
void Cfg_BornPos_Row::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_BornPos.Row.id)
}

// optional uint32 prof = 2;
void Cfg_BornPos_Row::clear_prof() {
  prof_ = 0u;
}
::google::protobuf::uint32 Cfg_BornPos_Row::prof() const {
  // @@protoc_insertion_point(field_get:Cfg_BornPos.Row.prof)
  return prof_;
}
void Cfg_BornPos_Row::set_prof(::google::protobuf::uint32 value) {
  
  prof_ = value;
  // @@protoc_insertion_point(field_set:Cfg_BornPos.Row.prof)
}

// optional uint32 mapid = 3;
void Cfg_BornPos_Row::clear_mapid() {
  mapid_ = 0u;
}
::google::protobuf::uint32 Cfg_BornPos_Row::mapid() const {
  // @@protoc_insertion_point(field_get:Cfg_BornPos.Row.mapid)
  return mapid_;
}
void Cfg_BornPos_Row::set_mapid(::google::protobuf::uint32 value) {
  
  mapid_ = value;
  // @@protoc_insertion_point(field_set:Cfg_BornPos.Row.mapid)
}

// optional float posx = 4;
void Cfg_BornPos_Row::clear_posx() {
  posx_ = 0;
}
float Cfg_BornPos_Row::posx() const {
  // @@protoc_insertion_point(field_get:Cfg_BornPos.Row.posx)
  return posx_;
}
void Cfg_BornPos_Row::set_posx(float value) {
  
  posx_ = value;
  // @@protoc_insertion_point(field_set:Cfg_BornPos.Row.posx)
}

// optional float posy = 5;
void Cfg_BornPos_Row::clear_posy() {
  posy_ = 0;
}
float Cfg_BornPos_Row::posy() const {
  // @@protoc_insertion_point(field_get:Cfg_BornPos.Row.posy)
  return posy_;
}
void Cfg_BornPos_Row::set_posy(float value) {
  
  posy_ = value;
  // @@protoc_insertion_point(field_set:Cfg_BornPos.Row.posy)
}

// optional float range = 6;
void Cfg_BornPos_Row::clear_range() {
  range_ = 0;
}
float Cfg_BornPos_Row::range() const {
  // @@protoc_insertion_point(field_get:Cfg_BornPos.Row.range)
  return range_;
}
void Cfg_BornPos_Row::set_range(float value) {
  
  range_ = value;
  // @@protoc_insertion_point(field_set:Cfg_BornPos.Row.range)
}

// optional float face = 7;
void Cfg_BornPos_Row::clear_face() {
  face_ = 0;
}
float Cfg_BornPos_Row::face() const {
  // @@protoc_insertion_point(field_get:Cfg_BornPos.Row.face)
  return face_;
}
void Cfg_BornPos_Row::set_face(float value) {
  
  face_ = value;
  // @@protoc_insertion_point(field_set:Cfg_BornPos.Row.face)
}

inline const Cfg_BornPos_Row* Cfg_BornPos_Row::internal_default_instance() {
  return &Cfg_BornPos_Row_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_BornPos

// repeated .Cfg_BornPos.Row rows = 1;
int Cfg_BornPos::rows_size() const {
  return rows_.size();
}
void Cfg_BornPos::clear_rows() {
  rows_.Clear();
}
const ::Cfg_BornPos_Row& Cfg_BornPos::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_BornPos.rows)
  return rows_.Get(index);
}
::Cfg_BornPos_Row* Cfg_BornPos::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_BornPos.rows)
  return rows_.Mutable(index);
}
::Cfg_BornPos_Row* Cfg_BornPos::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_BornPos.rows)
  return rows_.Add();
}
::google::protobuf::RepeatedPtrField< ::Cfg_BornPos_Row >*
Cfg_BornPos::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_BornPos.rows)
  return &rows_;
}
const ::google::protobuf::RepeatedPtrField< ::Cfg_BornPos_Row >&
Cfg_BornPos::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_BornPos.rows)
  return rows_;
}

inline const Cfg_BornPos* Cfg_BornPos::internal_default_instance() {
  return &Cfg_BornPos_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
