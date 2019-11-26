// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_configuration.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_5fconfiguration_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_model_5fconfiguration_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "time.pb.h"
#include "pose.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_model_5fconfiguration_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_model_5fconfiguration_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_5fconfiguration_2eproto;
namespace gazebo {
namespace msgs {
class ModelConfiguration;
class ModelConfigurationDefaultTypeInternal;
GZ_MSGS_VISIBLE extern ModelConfigurationDefaultTypeInternal _ModelConfiguration_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::ModelConfiguration* Arena::CreateMaybeMessage<::gazebo::msgs::ModelConfiguration>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE ModelConfiguration :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.ModelConfiguration) */ {
 public:
  ModelConfiguration();
  virtual ~ModelConfiguration();

  ModelConfiguration(const ModelConfiguration& from);
  ModelConfiguration(ModelConfiguration&& from) noexcept
    : ModelConfiguration() {
    *this = ::std::move(from);
  }

  inline ModelConfiguration& operator=(const ModelConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  inline ModelConfiguration& operator=(ModelConfiguration&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const ModelConfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ModelConfiguration* internal_default_instance() {
    return reinterpret_cast<const ModelConfiguration*>(
               &_ModelConfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ModelConfiguration& a, ModelConfiguration& b) {
    a.Swap(&b);
  }
  inline void Swap(ModelConfiguration* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ModelConfiguration* New() const final {
    return CreateMaybeMessage<ModelConfiguration>(nullptr);
  }

  ModelConfiguration* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ModelConfiguration>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ModelConfiguration& from);
  void MergeFrom(const ModelConfiguration& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ModelConfiguration* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.ModelConfiguration";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_model_5fconfiguration_2eproto);
    return ::descriptor_table_model_5fconfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kJointNamesFieldNumber = 2,
    kJointPositionsFieldNumber = 3,
    kLinkNameFieldNumber = 5,
    kTimeFieldNumber = 1,
    kPoseFieldNumber = 4,
  };
  // repeated string joint_names = 2;
  int joint_names_size() const;
  private:
  int _internal_joint_names_size() const;
  public:
  void clear_joint_names();
  const std::string& joint_names(int index) const;
  std::string* mutable_joint_names(int index);
  void set_joint_names(int index, const std::string& value);
  void set_joint_names(int index, std::string&& value);
  void set_joint_names(int index, const char* value);
  void set_joint_names(int index, const char* value, size_t size);
  std::string* add_joint_names();
  void add_joint_names(const std::string& value);
  void add_joint_names(std::string&& value);
  void add_joint_names(const char* value);
  void add_joint_names(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& joint_names() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_joint_names();
  private:
  const std::string& _internal_joint_names(int index) const;
  std::string* _internal_add_joint_names();
  public:

  // repeated double joint_positions = 3;
  int joint_positions_size() const;
  private:
  int _internal_joint_positions_size() const;
  public:
  void clear_joint_positions();
  private:
  double _internal_joint_positions(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_joint_positions() const;
  void _internal_add_joint_positions(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_joint_positions();
  public:
  double joint_positions(int index) const;
  void set_joint_positions(int index, double value);
  void add_joint_positions(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      joint_positions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_joint_positions();

  // optional string link_name = 5;
  bool has_link_name() const;
  private:
  bool _internal_has_link_name() const;
  public:
  void clear_link_name();
  const std::string& link_name() const;
  void set_link_name(const std::string& value);
  void set_link_name(std::string&& value);
  void set_link_name(const char* value);
  void set_link_name(const char* value, size_t size);
  std::string* mutable_link_name();
  std::string* release_link_name();
  void set_allocated_link_name(std::string* link_name);
  private:
  const std::string& _internal_link_name() const;
  void _internal_set_link_name(const std::string& value);
  std::string* _internal_mutable_link_name();
  public:

  // required .gazebo.msgs.Time time = 1;
  bool has_time() const;
  private:
  bool _internal_has_time() const;
  public:
  void clear_time();
  const ::gazebo::msgs::Time& time() const;
  ::gazebo::msgs::Time* release_time();
  ::gazebo::msgs::Time* mutable_time();
  void set_allocated_time(::gazebo::msgs::Time* time);
  private:
  const ::gazebo::msgs::Time& _internal_time() const;
  ::gazebo::msgs::Time* _internal_mutable_time();
  public:

  // optional .gazebo.msgs.Pose pose = 4;
  bool has_pose() const;
  private:
  bool _internal_has_pose() const;
  public:
  void clear_pose();
  const ::gazebo::msgs::Pose& pose() const;
  ::gazebo::msgs::Pose* release_pose();
  ::gazebo::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gazebo::msgs::Pose* pose);
  private:
  const ::gazebo::msgs::Pose& _internal_pose() const;
  ::gazebo::msgs::Pose* _internal_mutable_pose();
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.ModelConfiguration)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> joint_names_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > joint_positions_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr link_name_;
  ::gazebo::msgs::Time* time_;
  ::gazebo::msgs::Pose* pose_;
  friend struct ::TableStruct_model_5fconfiguration_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ModelConfiguration

// required .gazebo.msgs.Time time = 1;
inline bool ModelConfiguration::_internal_has_time() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || time_ != nullptr);
  return value;
}
inline bool ModelConfiguration::has_time() const {
  return _internal_has_time();
}
inline const ::gazebo::msgs::Time& ModelConfiguration::_internal_time() const {
  const ::gazebo::msgs::Time* p = time_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline const ::gazebo::msgs::Time& ModelConfiguration::time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ModelConfiguration.time)
  return _internal_time();
}
inline ::gazebo::msgs::Time* ModelConfiguration::release_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.ModelConfiguration.time)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Time* temp = time_;
  time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* ModelConfiguration::_internal_mutable_time() {
  _has_bits_[0] |= 0x00000002u;
  if (time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    time_ = p;
  }
  return time_;
}
inline ::gazebo::msgs::Time* ModelConfiguration::mutable_time() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.ModelConfiguration.time)
  return _internal_mutable_time();
}
inline void ModelConfiguration::set_allocated_time(::gazebo::msgs::Time* time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_);
  }
  if (time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.ModelConfiguration.time)
}

// repeated string joint_names = 2;
inline int ModelConfiguration::_internal_joint_names_size() const {
  return joint_names_.size();
}
inline int ModelConfiguration::joint_names_size() const {
  return _internal_joint_names_size();
}
inline void ModelConfiguration::clear_joint_names() {
  joint_names_.Clear();
}
inline std::string* ModelConfiguration::add_joint_names() {
  // @@protoc_insertion_point(field_add_mutable:gazebo.msgs.ModelConfiguration.joint_names)
  return _internal_add_joint_names();
}
inline const std::string& ModelConfiguration::_internal_joint_names(int index) const {
  return joint_names_.Get(index);
}
inline const std::string& ModelConfiguration::joint_names(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ModelConfiguration.joint_names)
  return _internal_joint_names(index);
}
inline std::string* ModelConfiguration::mutable_joint_names(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.ModelConfiguration.joint_names)
  return joint_names_.Mutable(index);
}
inline void ModelConfiguration::set_joint_names(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:gazebo.msgs.ModelConfiguration.joint_names)
  joint_names_.Mutable(index)->assign(value);
}
inline void ModelConfiguration::set_joint_names(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:gazebo.msgs.ModelConfiguration.joint_names)
  joint_names_.Mutable(index)->assign(std::move(value));
}
inline void ModelConfiguration::set_joint_names(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  joint_names_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.ModelConfiguration.joint_names)
}
inline void ModelConfiguration::set_joint_names(int index, const char* value, size_t size) {
  joint_names_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.ModelConfiguration.joint_names)
}
inline std::string* ModelConfiguration::_internal_add_joint_names() {
  return joint_names_.Add();
}
inline void ModelConfiguration::add_joint_names(const std::string& value) {
  joint_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.ModelConfiguration.joint_names)
}
inline void ModelConfiguration::add_joint_names(std::string&& value) {
  joint_names_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:gazebo.msgs.ModelConfiguration.joint_names)
}
inline void ModelConfiguration::add_joint_names(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  joint_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:gazebo.msgs.ModelConfiguration.joint_names)
}
inline void ModelConfiguration::add_joint_names(const char* value, size_t size) {
  joint_names_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:gazebo.msgs.ModelConfiguration.joint_names)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ModelConfiguration::joint_names() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.ModelConfiguration.joint_names)
  return joint_names_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ModelConfiguration::mutable_joint_names() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.ModelConfiguration.joint_names)
  return &joint_names_;
}

// repeated double joint_positions = 3;
inline int ModelConfiguration::_internal_joint_positions_size() const {
  return joint_positions_.size();
}
inline int ModelConfiguration::joint_positions_size() const {
  return _internal_joint_positions_size();
}
inline void ModelConfiguration::clear_joint_positions() {
  joint_positions_.Clear();
}
inline double ModelConfiguration::_internal_joint_positions(int index) const {
  return joint_positions_.Get(index);
}
inline double ModelConfiguration::joint_positions(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ModelConfiguration.joint_positions)
  return _internal_joint_positions(index);
}
inline void ModelConfiguration::set_joint_positions(int index, double value) {
  joint_positions_.Set(index, value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.ModelConfiguration.joint_positions)
}
inline void ModelConfiguration::_internal_add_joint_positions(double value) {
  joint_positions_.Add(value);
}
inline void ModelConfiguration::add_joint_positions(double value) {
  _internal_add_joint_positions(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.ModelConfiguration.joint_positions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
ModelConfiguration::_internal_joint_positions() const {
  return joint_positions_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
ModelConfiguration::joint_positions() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.ModelConfiguration.joint_positions)
  return _internal_joint_positions();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
ModelConfiguration::_internal_mutable_joint_positions() {
  return &joint_positions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
ModelConfiguration::mutable_joint_positions() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.ModelConfiguration.joint_positions)
  return _internal_mutable_joint_positions();
}

// optional .gazebo.msgs.Pose pose = 4;
inline bool ModelConfiguration::_internal_has_pose() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || pose_ != nullptr);
  return value;
}
inline bool ModelConfiguration::has_pose() const {
  return _internal_has_pose();
}
inline const ::gazebo::msgs::Pose& ModelConfiguration::_internal_pose() const {
  const ::gazebo::msgs::Pose* p = pose_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline const ::gazebo::msgs::Pose& ModelConfiguration::pose() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ModelConfiguration.pose)
  return _internal_pose();
}
inline ::gazebo::msgs::Pose* ModelConfiguration::release_pose() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.ModelConfiguration.pose)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* ModelConfiguration::_internal_mutable_pose() {
  _has_bits_[0] |= 0x00000004u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  return pose_;
}
inline ::gazebo::msgs::Pose* ModelConfiguration::mutable_pose() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.ModelConfiguration.pose)
  return _internal_mutable_pose();
}
inline void ModelConfiguration::set_allocated_pose(::gazebo::msgs::Pose* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.ModelConfiguration.pose)
}

// optional string link_name = 5;
inline bool ModelConfiguration::_internal_has_link_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ModelConfiguration::has_link_name() const {
  return _internal_has_link_name();
}
inline void ModelConfiguration::clear_link_name() {
  link_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ModelConfiguration::link_name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ModelConfiguration.link_name)
  return _internal_link_name();
}
inline void ModelConfiguration::set_link_name(const std::string& value) {
  _internal_set_link_name(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.ModelConfiguration.link_name)
}
inline std::string* ModelConfiguration::mutable_link_name() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.ModelConfiguration.link_name)
  return _internal_mutable_link_name();
}
inline const std::string& ModelConfiguration::_internal_link_name() const {
  return link_name_.GetNoArena();
}
inline void ModelConfiguration::_internal_set_link_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  link_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ModelConfiguration::set_link_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  link_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.ModelConfiguration.link_name)
}
inline void ModelConfiguration::set_link_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  link_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.ModelConfiguration.link_name)
}
inline void ModelConfiguration::set_link_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  link_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.ModelConfiguration.link_name)
}
inline std::string* ModelConfiguration::_internal_mutable_link_name() {
  _has_bits_[0] |= 0x00000001u;
  return link_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ModelConfiguration::release_link_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.ModelConfiguration.link_name)
  if (!has_link_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return link_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ModelConfiguration::set_allocated_link_name(std::string* link_name) {
  if (link_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  link_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), link_name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.ModelConfiguration.link_name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::ModelConfiguration> ModelConfigurationPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::ModelConfiguration const> ConstModelConfigurationPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_model_5fconfiguration_2eproto
