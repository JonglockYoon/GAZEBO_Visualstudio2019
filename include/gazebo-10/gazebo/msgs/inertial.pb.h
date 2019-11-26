// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: inertial.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_inertial_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_inertial_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_inertial_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_inertial_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_inertial_2eproto;
namespace gazebo {
namespace msgs {
class Inertial;
class InertialDefaultTypeInternal;
GZ_MSGS_VISIBLE extern InertialDefaultTypeInternal _Inertial_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Inertial* Arena::CreateMaybeMessage<::gazebo::msgs::Inertial>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Inertial :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Inertial) */ {
 public:
  Inertial();
  virtual ~Inertial();

  Inertial(const Inertial& from);
  Inertial(Inertial&& from) noexcept
    : Inertial() {
    *this = ::std::move(from);
  }

  inline Inertial& operator=(const Inertial& from) {
    CopyFrom(from);
    return *this;
  }
  inline Inertial& operator=(Inertial&& from) noexcept {
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
  static const Inertial& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Inertial* internal_default_instance() {
    return reinterpret_cast<const Inertial*>(
               &_Inertial_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Inertial& a, Inertial& b) {
    a.Swap(&b);
  }
  inline void Swap(Inertial* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Inertial* New() const final {
    return CreateMaybeMessage<Inertial>(nullptr);
  }

  Inertial* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Inertial>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Inertial& from);
  void MergeFrom(const Inertial& from);
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
  void InternalSwap(Inertial* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Inertial";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_inertial_2eproto);
    return ::descriptor_table_inertial_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPoseFieldNumber = 2,
    kMassFieldNumber = 1,
    kIxxFieldNumber = 3,
    kIxyFieldNumber = 4,
    kIxzFieldNumber = 5,
    kIyyFieldNumber = 6,
    kIyzFieldNumber = 7,
    kIzzFieldNumber = 8,
  };
  // optional .gazebo.msgs.Pose pose = 2;
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

  // optional double mass = 1;
  bool has_mass() const;
  private:
  bool _internal_has_mass() const;
  public:
  void clear_mass();
  double mass() const;
  void set_mass(double value);
  private:
  double _internal_mass() const;
  void _internal_set_mass(double value);
  public:

  // optional double ixx = 3;
  bool has_ixx() const;
  private:
  bool _internal_has_ixx() const;
  public:
  void clear_ixx();
  double ixx() const;
  void set_ixx(double value);
  private:
  double _internal_ixx() const;
  void _internal_set_ixx(double value);
  public:

  // optional double ixy = 4;
  bool has_ixy() const;
  private:
  bool _internal_has_ixy() const;
  public:
  void clear_ixy();
  double ixy() const;
  void set_ixy(double value);
  private:
  double _internal_ixy() const;
  void _internal_set_ixy(double value);
  public:

  // optional double ixz = 5;
  bool has_ixz() const;
  private:
  bool _internal_has_ixz() const;
  public:
  void clear_ixz();
  double ixz() const;
  void set_ixz(double value);
  private:
  double _internal_ixz() const;
  void _internal_set_ixz(double value);
  public:

  // optional double iyy = 6;
  bool has_iyy() const;
  private:
  bool _internal_has_iyy() const;
  public:
  void clear_iyy();
  double iyy() const;
  void set_iyy(double value);
  private:
  double _internal_iyy() const;
  void _internal_set_iyy(double value);
  public:

  // optional double iyz = 7;
  bool has_iyz() const;
  private:
  bool _internal_has_iyz() const;
  public:
  void clear_iyz();
  double iyz() const;
  void set_iyz(double value);
  private:
  double _internal_iyz() const;
  void _internal_set_iyz(double value);
  public:

  // optional double izz = 8;
  bool has_izz() const;
  private:
  bool _internal_has_izz() const;
  public:
  void clear_izz();
  double izz() const;
  void set_izz(double value);
  private:
  double _internal_izz() const;
  void _internal_set_izz(double value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Inertial)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Pose* pose_;
  double mass_;
  double ixx_;
  double ixy_;
  double ixz_;
  double iyy_;
  double iyz_;
  double izz_;
  friend struct ::TableStruct_inertial_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Inertial

// optional double mass = 1;
inline bool Inertial::_internal_has_mass() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Inertial::has_mass() const {
  return _internal_has_mass();
}
inline void Inertial::clear_mass() {
  mass_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double Inertial::_internal_mass() const {
  return mass_;
}
inline double Inertial::mass() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Inertial.mass)
  return _internal_mass();
}
inline void Inertial::_internal_set_mass(double value) {
  _has_bits_[0] |= 0x00000002u;
  mass_ = value;
}
inline void Inertial::set_mass(double value) {
  _internal_set_mass(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Inertial.mass)
}

// optional .gazebo.msgs.Pose pose = 2;
inline bool Inertial::_internal_has_pose() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || pose_ != nullptr);
  return value;
}
inline bool Inertial::has_pose() const {
  return _internal_has_pose();
}
inline const ::gazebo::msgs::Pose& Inertial::_internal_pose() const {
  const ::gazebo::msgs::Pose* p = pose_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline const ::gazebo::msgs::Pose& Inertial::pose() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Inertial.pose)
  return _internal_pose();
}
inline ::gazebo::msgs::Pose* Inertial::release_pose() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Inertial.pose)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* Inertial::_internal_mutable_pose() {
  _has_bits_[0] |= 0x00000001u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  return pose_;
}
inline ::gazebo::msgs::Pose* Inertial::mutable_pose() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Inertial.pose)
  return _internal_mutable_pose();
}
inline void Inertial::set_allocated_pose(::gazebo::msgs::Pose* pose) {
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
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Inertial.pose)
}

// optional double ixx = 3;
inline bool Inertial::_internal_has_ixx() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Inertial::has_ixx() const {
  return _internal_has_ixx();
}
inline void Inertial::clear_ixx() {
  ixx_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Inertial::_internal_ixx() const {
  return ixx_;
}
inline double Inertial::ixx() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Inertial.ixx)
  return _internal_ixx();
}
inline void Inertial::_internal_set_ixx(double value) {
  _has_bits_[0] |= 0x00000004u;
  ixx_ = value;
}
inline void Inertial::set_ixx(double value) {
  _internal_set_ixx(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Inertial.ixx)
}

// optional double ixy = 4;
inline bool Inertial::_internal_has_ixy() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Inertial::has_ixy() const {
  return _internal_has_ixy();
}
inline void Inertial::clear_ixy() {
  ixy_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Inertial::_internal_ixy() const {
  return ixy_;
}
inline double Inertial::ixy() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Inertial.ixy)
  return _internal_ixy();
}
inline void Inertial::_internal_set_ixy(double value) {
  _has_bits_[0] |= 0x00000008u;
  ixy_ = value;
}
inline void Inertial::set_ixy(double value) {
  _internal_set_ixy(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Inertial.ixy)
}

// optional double ixz = 5;
inline bool Inertial::_internal_has_ixz() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Inertial::has_ixz() const {
  return _internal_has_ixz();
}
inline void Inertial::clear_ixz() {
  ixz_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double Inertial::_internal_ixz() const {
  return ixz_;
}
inline double Inertial::ixz() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Inertial.ixz)
  return _internal_ixz();
}
inline void Inertial::_internal_set_ixz(double value) {
  _has_bits_[0] |= 0x00000010u;
  ixz_ = value;
}
inline void Inertial::set_ixz(double value) {
  _internal_set_ixz(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Inertial.ixz)
}

// optional double iyy = 6;
inline bool Inertial::_internal_has_iyy() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Inertial::has_iyy() const {
  return _internal_has_iyy();
}
inline void Inertial::clear_iyy() {
  iyy_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double Inertial::_internal_iyy() const {
  return iyy_;
}
inline double Inertial::iyy() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Inertial.iyy)
  return _internal_iyy();
}
inline void Inertial::_internal_set_iyy(double value) {
  _has_bits_[0] |= 0x00000020u;
  iyy_ = value;
}
inline void Inertial::set_iyy(double value) {
  _internal_set_iyy(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Inertial.iyy)
}

// optional double iyz = 7;
inline bool Inertial::_internal_has_iyz() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Inertial::has_iyz() const {
  return _internal_has_iyz();
}
inline void Inertial::clear_iyz() {
  iyz_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double Inertial::_internal_iyz() const {
  return iyz_;
}
inline double Inertial::iyz() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Inertial.iyz)
  return _internal_iyz();
}
inline void Inertial::_internal_set_iyz(double value) {
  _has_bits_[0] |= 0x00000040u;
  iyz_ = value;
}
inline void Inertial::set_iyz(double value) {
  _internal_set_iyz(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Inertial.iyz)
}

// optional double izz = 8;
inline bool Inertial::_internal_has_izz() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Inertial::has_izz() const {
  return _internal_has_izz();
}
inline void Inertial::clear_izz() {
  izz_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double Inertial::_internal_izz() const {
  return izz_;
}
inline double Inertial::izz() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Inertial.izz)
  return _internal_izz();
}
inline void Inertial::_internal_set_izz(double value) {
  _has_bits_[0] |= 0x00000080u;
  izz_ = value;
}
inline void Inertial::set_izz(double value) {
  _internal_set_izz(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Inertial.izz)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Inertial> InertialPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Inertial const> ConstInertialPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_inertial_2eproto
