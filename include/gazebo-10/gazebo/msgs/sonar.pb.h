// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sonar.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sonar_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sonar_2eproto

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
#include "pose.pb.h"
#include "vector3d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sonar_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_sonar_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sonar_2eproto;
namespace gazebo {
namespace msgs {
class Sonar;
class SonarDefaultTypeInternal;
GZ_MSGS_VISIBLE extern SonarDefaultTypeInternal _Sonar_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Sonar* Arena::CreateMaybeMessage<::gazebo::msgs::Sonar>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Sonar :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Sonar) */ {
 public:
  Sonar();
  virtual ~Sonar();

  Sonar(const Sonar& from);
  Sonar(Sonar&& from) noexcept
    : Sonar() {
    *this = ::std::move(from);
  }

  inline Sonar& operator=(const Sonar& from) {
    CopyFrom(from);
    return *this;
  }
  inline Sonar& operator=(Sonar&& from) noexcept {
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
  static const Sonar& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Sonar* internal_default_instance() {
    return reinterpret_cast<const Sonar*>(
               &_Sonar_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Sonar& a, Sonar& b) {
    a.Swap(&b);
  }
  inline void Swap(Sonar* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Sonar* New() const final {
    return CreateMaybeMessage<Sonar>(nullptr);
  }

  Sonar* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Sonar>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Sonar& from);
  void MergeFrom(const Sonar& from);
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
  void InternalSwap(Sonar* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Sonar";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_sonar_2eproto);
    return ::descriptor_table_sonar_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFrameFieldNumber = 1,
    kGeometryFieldNumber = 8,
    kWorldPoseFieldNumber = 2,
    kContactFieldNumber = 7,
    kRangeMinFieldNumber = 3,
    kRangeMaxFieldNumber = 4,
    kRadiusFieldNumber = 5,
    kRangeFieldNumber = 6,
  };
  // required string frame = 1;
  bool has_frame() const;
  private:
  bool _internal_has_frame() const;
  public:
  void clear_frame();
  const std::string& frame() const;
  void set_frame(const std::string& value);
  void set_frame(std::string&& value);
  void set_frame(const char* value);
  void set_frame(const char* value, size_t size);
  std::string* mutable_frame();
  std::string* release_frame();
  void set_allocated_frame(std::string* frame);
  private:
  const std::string& _internal_frame() const;
  void _internal_set_frame(const std::string& value);
  std::string* _internal_mutable_frame();
  public:

  // required string geometry = 8;
  bool has_geometry() const;
  private:
  bool _internal_has_geometry() const;
  public:
  void clear_geometry();
  const std::string& geometry() const;
  void set_geometry(const std::string& value);
  void set_geometry(std::string&& value);
  void set_geometry(const char* value);
  void set_geometry(const char* value, size_t size);
  std::string* mutable_geometry();
  std::string* release_geometry();
  void set_allocated_geometry(std::string* geometry);
  private:
  const std::string& _internal_geometry() const;
  void _internal_set_geometry(const std::string& value);
  std::string* _internal_mutable_geometry();
  public:

  // required .gazebo.msgs.Pose world_pose = 2;
  bool has_world_pose() const;
  private:
  bool _internal_has_world_pose() const;
  public:
  void clear_world_pose();
  const ::gazebo::msgs::Pose& world_pose() const;
  ::gazebo::msgs::Pose* release_world_pose();
  ::gazebo::msgs::Pose* mutable_world_pose();
  void set_allocated_world_pose(::gazebo::msgs::Pose* world_pose);
  private:
  const ::gazebo::msgs::Pose& _internal_world_pose() const;
  ::gazebo::msgs::Pose* _internal_mutable_world_pose();
  public:

  // optional .gazebo.msgs.Vector3d contact = 7;
  bool has_contact() const;
  private:
  bool _internal_has_contact() const;
  public:
  void clear_contact();
  const ::gazebo::msgs::Vector3d& contact() const;
  ::gazebo::msgs::Vector3d* release_contact();
  ::gazebo::msgs::Vector3d* mutable_contact();
  void set_allocated_contact(::gazebo::msgs::Vector3d* contact);
  private:
  const ::gazebo::msgs::Vector3d& _internal_contact() const;
  ::gazebo::msgs::Vector3d* _internal_mutable_contact();
  public:

  // required double range_min = 3;
  bool has_range_min() const;
  private:
  bool _internal_has_range_min() const;
  public:
  void clear_range_min();
  double range_min() const;
  void set_range_min(double value);
  private:
  double _internal_range_min() const;
  void _internal_set_range_min(double value);
  public:

  // required double range_max = 4;
  bool has_range_max() const;
  private:
  bool _internal_has_range_max() const;
  public:
  void clear_range_max();
  double range_max() const;
  void set_range_max(double value);
  private:
  double _internal_range_max() const;
  void _internal_set_range_max(double value);
  public:

  // required double radius = 5;
  bool has_radius() const;
  private:
  bool _internal_has_radius() const;
  public:
  void clear_radius();
  double radius() const;
  void set_radius(double value);
  private:
  double _internal_radius() const;
  void _internal_set_radius(double value);
  public:

  // required double range = 6;
  bool has_range() const;
  private:
  bool _internal_has_range() const;
  public:
  void clear_range();
  double range() const;
  void set_range(double value);
  private:
  double _internal_range() const;
  void _internal_set_range(double value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Sonar)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr frame_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr geometry_;
  ::gazebo::msgs::Pose* world_pose_;
  ::gazebo::msgs::Vector3d* contact_;
  double range_min_;
  double range_max_;
  double radius_;
  double range_;
  friend struct ::TableStruct_sonar_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Sonar

// required string frame = 1;
inline bool Sonar::_internal_has_frame() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Sonar::has_frame() const {
  return _internal_has_frame();
}
inline void Sonar::clear_frame() {
  frame_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Sonar::frame() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sonar.frame)
  return _internal_frame();
}
inline void Sonar::set_frame(const std::string& value) {
  _internal_set_frame(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sonar.frame)
}
inline std::string* Sonar::mutable_frame() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Sonar.frame)
  return _internal_mutable_frame();
}
inline const std::string& Sonar::_internal_frame() const {
  return frame_.GetNoArena();
}
inline void Sonar::_internal_set_frame(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Sonar::set_frame(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  frame_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Sonar.frame)
}
inline void Sonar::set_frame(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Sonar.frame)
}
inline void Sonar::set_frame(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Sonar.frame)
}
inline std::string* Sonar::_internal_mutable_frame() {
  _has_bits_[0] |= 0x00000001u;
  return frame_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Sonar::release_frame() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Sonar.frame)
  if (!has_frame()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return frame_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Sonar::set_allocated_frame(std::string* frame) {
  if (frame != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  frame_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), frame);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Sonar.frame)
}

// required .gazebo.msgs.Pose world_pose = 2;
inline bool Sonar::_internal_has_world_pose() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || world_pose_ != nullptr);
  return value;
}
inline bool Sonar::has_world_pose() const {
  return _internal_has_world_pose();
}
inline const ::gazebo::msgs::Pose& Sonar::_internal_world_pose() const {
  const ::gazebo::msgs::Pose* p = world_pose_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline const ::gazebo::msgs::Pose& Sonar::world_pose() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sonar.world_pose)
  return _internal_world_pose();
}
inline ::gazebo::msgs::Pose* Sonar::release_world_pose() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Sonar.world_pose)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Pose* temp = world_pose_;
  world_pose_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* Sonar::_internal_mutable_world_pose() {
  _has_bits_[0] |= 0x00000004u;
  if (world_pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    world_pose_ = p;
  }
  return world_pose_;
}
inline ::gazebo::msgs::Pose* Sonar::mutable_world_pose() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Sonar.world_pose)
  return _internal_mutable_world_pose();
}
inline void Sonar::set_allocated_world_pose(::gazebo::msgs::Pose* world_pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(world_pose_);
  }
  if (world_pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      world_pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, world_pose, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  world_pose_ = world_pose;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Sonar.world_pose)
}

// required double range_min = 3;
inline bool Sonar::_internal_has_range_min() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Sonar::has_range_min() const {
  return _internal_has_range_min();
}
inline void Sonar::clear_range_min() {
  range_min_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double Sonar::_internal_range_min() const {
  return range_min_;
}
inline double Sonar::range_min() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sonar.range_min)
  return _internal_range_min();
}
inline void Sonar::_internal_set_range_min(double value) {
  _has_bits_[0] |= 0x00000010u;
  range_min_ = value;
}
inline void Sonar::set_range_min(double value) {
  _internal_set_range_min(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sonar.range_min)
}

// required double range_max = 4;
inline bool Sonar::_internal_has_range_max() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Sonar::has_range_max() const {
  return _internal_has_range_max();
}
inline void Sonar::clear_range_max() {
  range_max_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double Sonar::_internal_range_max() const {
  return range_max_;
}
inline double Sonar::range_max() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sonar.range_max)
  return _internal_range_max();
}
inline void Sonar::_internal_set_range_max(double value) {
  _has_bits_[0] |= 0x00000020u;
  range_max_ = value;
}
inline void Sonar::set_range_max(double value) {
  _internal_set_range_max(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sonar.range_max)
}

// required double radius = 5;
inline bool Sonar::_internal_has_radius() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Sonar::has_radius() const {
  return _internal_has_radius();
}
inline void Sonar::clear_radius() {
  radius_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double Sonar::_internal_radius() const {
  return radius_;
}
inline double Sonar::radius() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sonar.radius)
  return _internal_radius();
}
inline void Sonar::_internal_set_radius(double value) {
  _has_bits_[0] |= 0x00000040u;
  radius_ = value;
}
inline void Sonar::set_radius(double value) {
  _internal_set_radius(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sonar.radius)
}

// required double range = 6;
inline bool Sonar::_internal_has_range() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Sonar::has_range() const {
  return _internal_has_range();
}
inline void Sonar::clear_range() {
  range_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double Sonar::_internal_range() const {
  return range_;
}
inline double Sonar::range() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sonar.range)
  return _internal_range();
}
inline void Sonar::_internal_set_range(double value) {
  _has_bits_[0] |= 0x00000080u;
  range_ = value;
}
inline void Sonar::set_range(double value) {
  _internal_set_range(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sonar.range)
}

// optional .gazebo.msgs.Vector3d contact = 7;
inline bool Sonar::_internal_has_contact() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || contact_ != nullptr);
  return value;
}
inline bool Sonar::has_contact() const {
  return _internal_has_contact();
}
inline const ::gazebo::msgs::Vector3d& Sonar::_internal_contact() const {
  const ::gazebo::msgs::Vector3d* p = contact_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline const ::gazebo::msgs::Vector3d& Sonar::contact() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sonar.contact)
  return _internal_contact();
}
inline ::gazebo::msgs::Vector3d* Sonar::release_contact() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Sonar.contact)
  _has_bits_[0] &= ~0x00000008u;
  ::gazebo::msgs::Vector3d* temp = contact_;
  contact_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Sonar::_internal_mutable_contact() {
  _has_bits_[0] |= 0x00000008u;
  if (contact_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    contact_ = p;
  }
  return contact_;
}
inline ::gazebo::msgs::Vector3d* Sonar::mutable_contact() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Sonar.contact)
  return _internal_mutable_contact();
}
inline void Sonar::set_allocated_contact(::gazebo::msgs::Vector3d* contact) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(contact_);
  }
  if (contact) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      contact = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, contact, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  contact_ = contact;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Sonar.contact)
}

// required string geometry = 8;
inline bool Sonar::_internal_has_geometry() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Sonar::has_geometry() const {
  return _internal_has_geometry();
}
inline void Sonar::clear_geometry() {
  geometry_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Sonar::geometry() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sonar.geometry)
  return _internal_geometry();
}
inline void Sonar::set_geometry(const std::string& value) {
  _internal_set_geometry(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sonar.geometry)
}
inline std::string* Sonar::mutable_geometry() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Sonar.geometry)
  return _internal_mutable_geometry();
}
inline const std::string& Sonar::_internal_geometry() const {
  return geometry_.GetNoArena();
}
inline void Sonar::_internal_set_geometry(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  geometry_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Sonar::set_geometry(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  geometry_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Sonar.geometry)
}
inline void Sonar::set_geometry(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  geometry_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Sonar.geometry)
}
inline void Sonar::set_geometry(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  geometry_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Sonar.geometry)
}
inline std::string* Sonar::_internal_mutable_geometry() {
  _has_bits_[0] |= 0x00000002u;
  return geometry_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Sonar::release_geometry() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Sonar.geometry)
  if (!has_geometry()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return geometry_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Sonar::set_allocated_geometry(std::string* geometry) {
  if (geometry != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  geometry_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), geometry);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Sonar.geometry)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Sonar> SonarPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Sonar const> ConstSonarPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sonar_2eproto
