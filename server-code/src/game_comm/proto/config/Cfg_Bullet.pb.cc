// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config/Cfg_Bullet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "config/Cfg_Bullet.pb.h"

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

const ::google::protobuf::Descriptor* Cfg_Bullet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_Bullet_reflection_ = NULL;
const ::google::protobuf::Descriptor* Cfg_Bullet_Row_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Cfg_Bullet_Row_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_config_2fCfg_5fBullet_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_config_2fCfg_5fBullet_2eproto() {
  protobuf_AddDesc_config_2fCfg_5fBullet_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "config/Cfg_Bullet.proto");
  GOOGLE_CHECK(file != NULL);
  Cfg_Bullet_descriptor_ = file->message_type(0);
  static const int Cfg_Bullet_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet, rows_),
  };
  Cfg_Bullet_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_Bullet_descriptor_,
      Cfg_Bullet::internal_default_instance(),
      Cfg_Bullet_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_Bullet),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet, _internal_metadata_));
  Cfg_Bullet_Row_descriptor_ = Cfg_Bullet_descriptor_->nested_type(0);
  static const int Cfg_Bullet_Row_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, emit_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, target_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, move_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, move_param_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, move_spd_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, apply_times_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, apply_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, apply_adj_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, expire_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, expire_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, skill_id_),
  };
  Cfg_Bullet_Row_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Cfg_Bullet_Row_descriptor_,
      Cfg_Bullet_Row::internal_default_instance(),
      Cfg_Bullet_Row_offsets_,
      -1,
      -1,
      -1,
      sizeof(Cfg_Bullet_Row),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Cfg_Bullet_Row, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_config_2fCfg_5fBullet_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_Bullet_descriptor_, Cfg_Bullet::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Cfg_Bullet_Row_descriptor_, Cfg_Bullet_Row::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_config_2fCfg_5fBullet_2eproto() {
  Cfg_Bullet_default_instance_.Shutdown();
  delete Cfg_Bullet_reflection_;
  Cfg_Bullet_Row_default_instance_.Shutdown();
  delete Cfg_Bullet_Row_reflection_;
}

void protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Cfg_Bullet_default_instance_.DefaultConstruct();
  Cfg_Bullet_Row_default_instance_.DefaultConstruct();
  Cfg_Bullet_default_instance_.get_mutable()->InitAsDefaultInstance();
  Cfg_Bullet_Row_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto_once_);
void protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto_once_,
                 &protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto_impl);
}
void protobuf_AddDesc_config_2fCfg_5fBullet_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027config/Cfg_Bullet.proto\"\244\002\n\nCfg_Bullet"
    "\022\035\n\004rows\030\001 \003(\0132\017.Cfg_Bullet.Row\032\366\001\n\003Row\022"
    "\n\n\002id\030\001 \001(\r\022\013\n\003num\030\002 \001(\r\022\021\n\temit_type\030\003 "
    "\001(\r\022\023\n\013target_type\030\004 \001(\r\022\021\n\tmove_type\030\005 "
    "\001(\r\022\022\n\nmove_param\030\006 \001(\r\022\020\n\010move_spd\030\007 \001("
    "\r\022\023\n\013apply_times\030\t \001(\r\022\020\n\010apply_ms\030\n \001(\r"
    "\022\024\n\014apply_adj_ms\030\013 \001(\r\022\023\n\013expire_type\030\014 "
    "\001(\r\022\021\n\texpire_ms\030\r \001(\r\022\020\n\010skill_id\030\016 \001(\r"
    "B\002H\002b\006proto3", 332);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "config/Cfg_Bullet.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_config_2fCfg_5fBullet_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_config_2fCfg_5fBullet_2eproto_once_);
void protobuf_AddDesc_config_2fCfg_5fBullet_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_config_2fCfg_5fBullet_2eproto_once_,
                 &protobuf_AddDesc_config_2fCfg_5fBullet_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_config_2fCfg_5fBullet_2eproto {
  StaticDescriptorInitializer_config_2fCfg_5fBullet_2eproto() {
    protobuf_AddDesc_config_2fCfg_5fBullet_2eproto();
  }
} static_descriptor_initializer_config_2fCfg_5fBullet_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_Bullet_Row::kIdFieldNumber;
const int Cfg_Bullet_Row::kNumFieldNumber;
const int Cfg_Bullet_Row::kEmitTypeFieldNumber;
const int Cfg_Bullet_Row::kTargetTypeFieldNumber;
const int Cfg_Bullet_Row::kMoveTypeFieldNumber;
const int Cfg_Bullet_Row::kMoveParamFieldNumber;
const int Cfg_Bullet_Row::kMoveSpdFieldNumber;
const int Cfg_Bullet_Row::kApplyTimesFieldNumber;
const int Cfg_Bullet_Row::kApplyMsFieldNumber;
const int Cfg_Bullet_Row::kApplyAdjMsFieldNumber;
const int Cfg_Bullet_Row::kExpireTypeFieldNumber;
const int Cfg_Bullet_Row::kExpireMsFieldNumber;
const int Cfg_Bullet_Row::kSkillIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_Bullet_Row::Cfg_Bullet_Row()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_Bullet.Row)
}

void Cfg_Bullet_Row::InitAsDefaultInstance() {
}

Cfg_Bullet_Row::Cfg_Bullet_Row(const Cfg_Bullet_Row& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_Bullet.Row)
}

void Cfg_Bullet_Row::SharedCtor() {
  ::memset(&id_, 0, reinterpret_cast<char*>(&skill_id_) -
    reinterpret_cast<char*>(&id_) + sizeof(skill_id_));
  _cached_size_ = 0;
}

Cfg_Bullet_Row::~Cfg_Bullet_Row() {
  // @@protoc_insertion_point(destructor:Cfg_Bullet.Row)
  SharedDtor();
}

void Cfg_Bullet_Row::SharedDtor() {
}

void Cfg_Bullet_Row::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_Bullet_Row::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_Bullet_Row_descriptor_;
}

const Cfg_Bullet_Row& Cfg_Bullet_Row::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_Bullet_Row> Cfg_Bullet_Row_default_instance_;

Cfg_Bullet_Row* Cfg_Bullet_Row::New(::google::protobuf::Arena* arena) const {
  Cfg_Bullet_Row* n = new Cfg_Bullet_Row;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_Bullet_Row::UnsafeMergeFrom(const Cfg_Bullet_Row& from) {
  MergeFrom(from);
}
void Cfg_Bullet_Row::Swap(Cfg_Bullet_Row* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_Bullet_Row::InternalSwap(Cfg_Bullet_Row* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_Bullet_Row::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_Bullet_Row_descriptor_;
  metadata.reflection = Cfg_Bullet_Row_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cfg_Bullet::kRowsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cfg_Bullet::Cfg_Bullet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cfg_Bullet)
}

void Cfg_Bullet::InitAsDefaultInstance() {
}

Cfg_Bullet::Cfg_Bullet(const Cfg_Bullet& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Cfg_Bullet)
}

void Cfg_Bullet::SharedCtor() {
  _cached_size_ = 0;
}

Cfg_Bullet::~Cfg_Bullet() {
  // @@protoc_insertion_point(destructor:Cfg_Bullet)
  SharedDtor();
}

void Cfg_Bullet::SharedDtor() {
}

void Cfg_Bullet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Cfg_Bullet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Cfg_Bullet_descriptor_;
}

const Cfg_Bullet& Cfg_Bullet::default_instance() {
  protobuf_InitDefaults_config_2fCfg_5fBullet_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Cfg_Bullet> Cfg_Bullet_default_instance_;

Cfg_Bullet* Cfg_Bullet::New(::google::protobuf::Arena* arena) const {
  Cfg_Bullet* n = new Cfg_Bullet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Cfg_Bullet::UnsafeMergeFrom(const Cfg_Bullet& from) {
  MergeFrom(from);
}
void Cfg_Bullet::Swap(Cfg_Bullet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cfg_Bullet::InternalSwap(Cfg_Bullet* other) {
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Cfg_Bullet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Cfg_Bullet_descriptor_;
  metadata.reflection = Cfg_Bullet_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Cfg_Bullet_Row

// optional uint32 id = 1;
void Cfg_Bullet_Row::clear_id() {
  id_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::id() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.id)
  return id_;
}
void Cfg_Bullet_Row::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.id)
}

// optional uint32 num = 2;
void Cfg_Bullet_Row::clear_num() {
  num_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::num() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.num)
  return num_;
}
void Cfg_Bullet_Row::set_num(::google::protobuf::uint32 value) {
  
  num_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.num)
}

// optional uint32 emit_type = 3;
void Cfg_Bullet_Row::clear_emit_type() {
  emit_type_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::emit_type() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.emit_type)
  return emit_type_;
}
void Cfg_Bullet_Row::set_emit_type(::google::protobuf::uint32 value) {
  
  emit_type_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.emit_type)
}

// optional uint32 target_type = 4;
void Cfg_Bullet_Row::clear_target_type() {
  target_type_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::target_type() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.target_type)
  return target_type_;
}
void Cfg_Bullet_Row::set_target_type(::google::protobuf::uint32 value) {
  
  target_type_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.target_type)
}

// optional uint32 move_type = 5;
void Cfg_Bullet_Row::clear_move_type() {
  move_type_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::move_type() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.move_type)
  return move_type_;
}
void Cfg_Bullet_Row::set_move_type(::google::protobuf::uint32 value) {
  
  move_type_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.move_type)
}

// optional uint32 move_param = 6;
void Cfg_Bullet_Row::clear_move_param() {
  move_param_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::move_param() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.move_param)
  return move_param_;
}
void Cfg_Bullet_Row::set_move_param(::google::protobuf::uint32 value) {
  
  move_param_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.move_param)
}

// optional uint32 move_spd = 7;
void Cfg_Bullet_Row::clear_move_spd() {
  move_spd_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::move_spd() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.move_spd)
  return move_spd_;
}
void Cfg_Bullet_Row::set_move_spd(::google::protobuf::uint32 value) {
  
  move_spd_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.move_spd)
}

// optional uint32 apply_times = 9;
void Cfg_Bullet_Row::clear_apply_times() {
  apply_times_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::apply_times() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.apply_times)
  return apply_times_;
}
void Cfg_Bullet_Row::set_apply_times(::google::protobuf::uint32 value) {
  
  apply_times_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.apply_times)
}

// optional uint32 apply_ms = 10;
void Cfg_Bullet_Row::clear_apply_ms() {
  apply_ms_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::apply_ms() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.apply_ms)
  return apply_ms_;
}
void Cfg_Bullet_Row::set_apply_ms(::google::protobuf::uint32 value) {
  
  apply_ms_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.apply_ms)
}

// optional uint32 apply_adj_ms = 11;
void Cfg_Bullet_Row::clear_apply_adj_ms() {
  apply_adj_ms_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::apply_adj_ms() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.apply_adj_ms)
  return apply_adj_ms_;
}
void Cfg_Bullet_Row::set_apply_adj_ms(::google::protobuf::uint32 value) {
  
  apply_adj_ms_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.apply_adj_ms)
}

// optional uint32 expire_type = 12;
void Cfg_Bullet_Row::clear_expire_type() {
  expire_type_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::expire_type() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.expire_type)
  return expire_type_;
}
void Cfg_Bullet_Row::set_expire_type(::google::protobuf::uint32 value) {
  
  expire_type_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.expire_type)
}

// optional uint32 expire_ms = 13;
void Cfg_Bullet_Row::clear_expire_ms() {
  expire_ms_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::expire_ms() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.expire_ms)
  return expire_ms_;
}
void Cfg_Bullet_Row::set_expire_ms(::google::protobuf::uint32 value) {
  
  expire_ms_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.expire_ms)
}

// optional uint32 skill_id = 14;
void Cfg_Bullet_Row::clear_skill_id() {
  skill_id_ = 0u;
}
::google::protobuf::uint32 Cfg_Bullet_Row::skill_id() const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.Row.skill_id)
  return skill_id_;
}
void Cfg_Bullet_Row::set_skill_id(::google::protobuf::uint32 value) {
  
  skill_id_ = value;
  // @@protoc_insertion_point(field_set:Cfg_Bullet.Row.skill_id)
}

inline const Cfg_Bullet_Row* Cfg_Bullet_Row::internal_default_instance() {
  return &Cfg_Bullet_Row_default_instance_.get();
}
// -------------------------------------------------------------------

// Cfg_Bullet

// repeated .Cfg_Bullet.Row rows = 1;
int Cfg_Bullet::rows_size() const {
  return rows_.size();
}
void Cfg_Bullet::clear_rows() {
  rows_.Clear();
}
const ::Cfg_Bullet_Row& Cfg_Bullet::rows(int index) const {
  // @@protoc_insertion_point(field_get:Cfg_Bullet.rows)
  return rows_.Get(index);
}
::Cfg_Bullet_Row* Cfg_Bullet::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:Cfg_Bullet.rows)
  return rows_.Mutable(index);
}
::Cfg_Bullet_Row* Cfg_Bullet::add_rows() {
  // @@protoc_insertion_point(field_add:Cfg_Bullet.rows)
  return rows_.Add();
}
::google::protobuf::RepeatedPtrField< ::Cfg_Bullet_Row >*
Cfg_Bullet::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:Cfg_Bullet.rows)
  return &rows_;
}
const ::google::protobuf::RepeatedPtrField< ::Cfg_Bullet_Row >&
Cfg_Bullet::rows() const {
  // @@protoc_insertion_point(field_list:Cfg_Bullet.rows)
  return rows_;
}

inline const Cfg_Bullet* Cfg_Bullet::internal_default_instance() {
  return &Cfg_Bullet_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
