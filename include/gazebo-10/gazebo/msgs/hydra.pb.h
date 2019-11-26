// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hydra.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_hydra_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_hydra_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_hydra_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_hydra_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_hydra_2eproto;
namespace gazebo {
namespace msgs {
class Hydra;
class HydraDefaultTypeInternal;
GZ_MSGS_VISIBLE extern HydraDefaultTypeInternal _Hydra_default_instance_;
class Hydra_Paddle;
class Hydra_PaddleDefaultTypeInternal;
GZ_MSGS_VISIBLE extern Hydra_PaddleDefaultTypeInternal _Hydra_Paddle_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Hydra* Arena::CreateMaybeMessage<::gazebo::msgs::Hydra>(Arena*);
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Hydra_Paddle* Arena::CreateMaybeMessage<::gazebo::msgs::Hydra_Paddle>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Hydra_Paddle :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Hydra.Paddle) */ {
 public:
  Hydra_Paddle();
  virtual ~Hydra_Paddle();

  Hydra_Paddle(const Hydra_Paddle& from);
  Hydra_Paddle(Hydra_Paddle&& from) noexcept
    : Hydra_Paddle() {
    *this = ::std::move(from);
  }

  inline Hydra_Paddle& operator=(const Hydra_Paddle& from) {
    CopyFrom(from);
    return *this;
  }
  inline Hydra_Paddle& operator=(Hydra_Paddle&& from) noexcept {
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
  static const Hydra_Paddle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hydra_Paddle* internal_default_instance() {
    return reinterpret_cast<const Hydra_Paddle*>(
               &_Hydra_Paddle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Hydra_Paddle& a, Hydra_Paddle& b) {
    a.Swap(&b);
  }
  inline void Swap(Hydra_Paddle* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Hydra_Paddle* New() const final {
    return CreateMaybeMessage<Hydra_Paddle>(nullptr);
  }

  Hydra_Paddle* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Hydra_Paddle>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Hydra_Paddle& from);
  void MergeFrom(const Hydra_Paddle& from);
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
  void InternalSwap(Hydra_Paddle* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Hydra.Paddle";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_hydra_2eproto);
    return ::descriptor_table_hydra_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPoseFieldNumber = 1,
    kButtonBumperFieldNumber = 2,
    kButton1FieldNumber = 3,
    kButton2FieldNumber = 4,
    kButton3FieldNumber = 5,
    kButton4FieldNumber = 6,
    kButtonJoyFieldNumber = 7,
    kButtonCenterFieldNumber = 8,
    kJoyXFieldNumber = 9,
    kJoyYFieldNumber = 10,
    kTriggerFieldNumber = 11,
  };
  // required .gazebo.msgs.Pose pose = 1;
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

  // required bool button_bumper = 2;
  bool has_button_bumper() const;
  private:
  bool _internal_has_button_bumper() const;
  public:
  void clear_button_bumper();
  bool button_bumper() const;
  void set_button_bumper(bool value);
  private:
  bool _internal_button_bumper() const;
  void _internal_set_button_bumper(bool value);
  public:

  // required bool button_1 = 3;
  bool has_button_1() const;
  private:
  bool _internal_has_button_1() const;
  public:
  void clear_button_1();
  bool button_1() const;
  void set_button_1(bool value);
  private:
  bool _internal_button_1() const;
  void _internal_set_button_1(bool value);
  public:

  // required bool button_2 = 4;
  bool has_button_2() const;
  private:
  bool _internal_has_button_2() const;
  public:
  void clear_button_2();
  bool button_2() const;
  void set_button_2(bool value);
  private:
  bool _internal_button_2() const;
  void _internal_set_button_2(bool value);
  public:

  // required bool button_3 = 5;
  bool has_button_3() const;
  private:
  bool _internal_has_button_3() const;
  public:
  void clear_button_3();
  bool button_3() const;
  void set_button_3(bool value);
  private:
  bool _internal_button_3() const;
  void _internal_set_button_3(bool value);
  public:

  // required bool button_4 = 6;
  bool has_button_4() const;
  private:
  bool _internal_has_button_4() const;
  public:
  void clear_button_4();
  bool button_4() const;
  void set_button_4(bool value);
  private:
  bool _internal_button_4() const;
  void _internal_set_button_4(bool value);
  public:

  // required bool button_joy = 7;
  bool has_button_joy() const;
  private:
  bool _internal_has_button_joy() const;
  public:
  void clear_button_joy();
  bool button_joy() const;
  void set_button_joy(bool value);
  private:
  bool _internal_button_joy() const;
  void _internal_set_button_joy(bool value);
  public:

  // required bool button_center = 8;
  bool has_button_center() const;
  private:
  bool _internal_has_button_center() const;
  public:
  void clear_button_center();
  bool button_center() const;
  void set_button_center(bool value);
  private:
  bool _internal_button_center() const;
  void _internal_set_button_center(bool value);
  public:

  // required double joy_x = 9;
  bool has_joy_x() const;
  private:
  bool _internal_has_joy_x() const;
  public:
  void clear_joy_x();
  double joy_x() const;
  void set_joy_x(double value);
  private:
  double _internal_joy_x() const;
  void _internal_set_joy_x(double value);
  public:

  // required double joy_y = 10;
  bool has_joy_y() const;
  private:
  bool _internal_has_joy_y() const;
  public:
  void clear_joy_y();
  double joy_y() const;
  void set_joy_y(double value);
  private:
  double _internal_joy_y() const;
  void _internal_set_joy_y(double value);
  public:

  // required double trigger = 11;
  bool has_trigger() const;
  private:
  bool _internal_has_trigger() const;
  public:
  void clear_trigger();
  double trigger() const;
  void set_trigger(double value);
  private:
  double _internal_trigger() const;
  void _internal_set_trigger(double value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Hydra.Paddle)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Pose* pose_;
  bool button_bumper_;
  bool button_1_;
  bool button_2_;
  bool button_3_;
  bool button_4_;
  bool button_joy_;
  bool button_center_;
  double joy_x_;
  double joy_y_;
  double trigger_;
  friend struct ::TableStruct_hydra_2eproto;
};
// -------------------------------------------------------------------

class GZ_MSGS_VISIBLE Hydra :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Hydra) */ {
 public:
  Hydra();
  virtual ~Hydra();

  Hydra(const Hydra& from);
  Hydra(Hydra&& from) noexcept
    : Hydra() {
    *this = ::std::move(from);
  }

  inline Hydra& operator=(const Hydra& from) {
    CopyFrom(from);
    return *this;
  }
  inline Hydra& operator=(Hydra&& from) noexcept {
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
  static const Hydra& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hydra* internal_default_instance() {
    return reinterpret_cast<const Hydra*>(
               &_Hydra_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Hydra& a, Hydra& b) {
    a.Swap(&b);
  }
  inline void Swap(Hydra* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Hydra* New() const final {
    return CreateMaybeMessage<Hydra>(nullptr);
  }

  Hydra* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Hydra>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Hydra& from);
  void MergeFrom(const Hydra& from);
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
  void InternalSwap(Hydra* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Hydra";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_hydra_2eproto);
    return ::descriptor_table_hydra_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Hydra_Paddle Paddle;

  // accessors -------------------------------------------------------

  enum : int {
    kRightFieldNumber = 1,
    kLeftFieldNumber = 2,
  };
  // required .gazebo.msgs.Hydra.Paddle right = 1;
  bool has_right() const;
  private:
  bool _internal_has_right() const;
  public:
  void clear_right();
  const ::gazebo::msgs::Hydra_Paddle& right() const;
  ::gazebo::msgs::Hydra_Paddle* release_right();
  ::gazebo::msgs::Hydra_Paddle* mutable_right();
  void set_allocated_right(::gazebo::msgs::Hydra_Paddle* right);
  private:
  const ::gazebo::msgs::Hydra_Paddle& _internal_right() const;
  ::gazebo::msgs::Hydra_Paddle* _internal_mutable_right();
  public:

  // required .gazebo.msgs.Hydra.Paddle left = 2;
  bool has_left() const;
  private:
  bool _internal_has_left() const;
  public:
  void clear_left();
  const ::gazebo::msgs::Hydra_Paddle& left() const;
  ::gazebo::msgs::Hydra_Paddle* release_left();
  ::gazebo::msgs::Hydra_Paddle* mutable_left();
  void set_allocated_left(::gazebo::msgs::Hydra_Paddle* left);
  private:
  const ::gazebo::msgs::Hydra_Paddle& _internal_left() const;
  ::gazebo::msgs::Hydra_Paddle* _internal_mutable_left();
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Hydra)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Hydra_Paddle* right_;
  ::gazebo::msgs::Hydra_Paddle* left_;
  friend struct ::TableStruct_hydra_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Hydra_Paddle

// required .gazebo.msgs.Pose pose = 1;
inline bool Hydra_Paddle::_internal_has_pose() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || pose_ != nullptr);
  return value;
}
inline bool Hydra_Paddle::has_pose() const {
  return _internal_has_pose();
}
inline const ::gazebo::msgs::Pose& Hydra_Paddle::_internal_pose() const {
  const ::gazebo::msgs::Pose* p = pose_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline const ::gazebo::msgs::Pose& Hydra_Paddle::pose() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.pose)
  return _internal_pose();
}
inline ::gazebo::msgs::Pose* Hydra_Paddle::release_pose() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Hydra.Paddle.pose)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* Hydra_Paddle::_internal_mutable_pose() {
  _has_bits_[0] |= 0x00000001u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  return pose_;
}
inline ::gazebo::msgs::Pose* Hydra_Paddle::mutable_pose() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Hydra.Paddle.pose)
  return _internal_mutable_pose();
}
inline void Hydra_Paddle::set_allocated_pose(::gazebo::msgs::Pose* pose) {
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
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Hydra.Paddle.pose)
}

// required bool button_bumper = 2;
inline bool Hydra_Paddle::_internal_has_button_bumper() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_button_bumper() const {
  return _internal_has_button_bumper();
}
inline void Hydra_Paddle::clear_button_bumper() {
  button_bumper_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool Hydra_Paddle::_internal_button_bumper() const {
  return button_bumper_;
}
inline bool Hydra_Paddle::button_bumper() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.button_bumper)
  return _internal_button_bumper();
}
inline void Hydra_Paddle::_internal_set_button_bumper(bool value) {
  _has_bits_[0] |= 0x00000002u;
  button_bumper_ = value;
}
inline void Hydra_Paddle::set_button_bumper(bool value) {
  _internal_set_button_bumper(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.button_bumper)
}

// required bool button_1 = 3;
inline bool Hydra_Paddle::_internal_has_button_1() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_button_1() const {
  return _internal_has_button_1();
}
inline void Hydra_Paddle::clear_button_1() {
  button_1_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool Hydra_Paddle::_internal_button_1() const {
  return button_1_;
}
inline bool Hydra_Paddle::button_1() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.button_1)
  return _internal_button_1();
}
inline void Hydra_Paddle::_internal_set_button_1(bool value) {
  _has_bits_[0] |= 0x00000004u;
  button_1_ = value;
}
inline void Hydra_Paddle::set_button_1(bool value) {
  _internal_set_button_1(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.button_1)
}

// required bool button_2 = 4;
inline bool Hydra_Paddle::_internal_has_button_2() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_button_2() const {
  return _internal_has_button_2();
}
inline void Hydra_Paddle::clear_button_2() {
  button_2_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool Hydra_Paddle::_internal_button_2() const {
  return button_2_;
}
inline bool Hydra_Paddle::button_2() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.button_2)
  return _internal_button_2();
}
inline void Hydra_Paddle::_internal_set_button_2(bool value) {
  _has_bits_[0] |= 0x00000008u;
  button_2_ = value;
}
inline void Hydra_Paddle::set_button_2(bool value) {
  _internal_set_button_2(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.button_2)
}

// required bool button_3 = 5;
inline bool Hydra_Paddle::_internal_has_button_3() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_button_3() const {
  return _internal_has_button_3();
}
inline void Hydra_Paddle::clear_button_3() {
  button_3_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Hydra_Paddle::_internal_button_3() const {
  return button_3_;
}
inline bool Hydra_Paddle::button_3() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.button_3)
  return _internal_button_3();
}
inline void Hydra_Paddle::_internal_set_button_3(bool value) {
  _has_bits_[0] |= 0x00000010u;
  button_3_ = value;
}
inline void Hydra_Paddle::set_button_3(bool value) {
  _internal_set_button_3(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.button_3)
}

// required bool button_4 = 6;
inline bool Hydra_Paddle::_internal_has_button_4() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_button_4() const {
  return _internal_has_button_4();
}
inline void Hydra_Paddle::clear_button_4() {
  button_4_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool Hydra_Paddle::_internal_button_4() const {
  return button_4_;
}
inline bool Hydra_Paddle::button_4() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.button_4)
  return _internal_button_4();
}
inline void Hydra_Paddle::_internal_set_button_4(bool value) {
  _has_bits_[0] |= 0x00000020u;
  button_4_ = value;
}
inline void Hydra_Paddle::set_button_4(bool value) {
  _internal_set_button_4(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.button_4)
}

// required bool button_joy = 7;
inline bool Hydra_Paddle::_internal_has_button_joy() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_button_joy() const {
  return _internal_has_button_joy();
}
inline void Hydra_Paddle::clear_button_joy() {
  button_joy_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool Hydra_Paddle::_internal_button_joy() const {
  return button_joy_;
}
inline bool Hydra_Paddle::button_joy() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.button_joy)
  return _internal_button_joy();
}
inline void Hydra_Paddle::_internal_set_button_joy(bool value) {
  _has_bits_[0] |= 0x00000040u;
  button_joy_ = value;
}
inline void Hydra_Paddle::set_button_joy(bool value) {
  _internal_set_button_joy(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.button_joy)
}

// required bool button_center = 8;
inline bool Hydra_Paddle::_internal_has_button_center() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_button_center() const {
  return _internal_has_button_center();
}
inline void Hydra_Paddle::clear_button_center() {
  button_center_ = false;
  _has_bits_[0] &= ~0x00000080u;
}
inline bool Hydra_Paddle::_internal_button_center() const {
  return button_center_;
}
inline bool Hydra_Paddle::button_center() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.button_center)
  return _internal_button_center();
}
inline void Hydra_Paddle::_internal_set_button_center(bool value) {
  _has_bits_[0] |= 0x00000080u;
  button_center_ = value;
}
inline void Hydra_Paddle::set_button_center(bool value) {
  _internal_set_button_center(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.button_center)
}

// required double joy_x = 9;
inline bool Hydra_Paddle::_internal_has_joy_x() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_joy_x() const {
  return _internal_has_joy_x();
}
inline void Hydra_Paddle::clear_joy_x() {
  joy_x_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline double Hydra_Paddle::_internal_joy_x() const {
  return joy_x_;
}
inline double Hydra_Paddle::joy_x() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.joy_x)
  return _internal_joy_x();
}
inline void Hydra_Paddle::_internal_set_joy_x(double value) {
  _has_bits_[0] |= 0x00000100u;
  joy_x_ = value;
}
inline void Hydra_Paddle::set_joy_x(double value) {
  _internal_set_joy_x(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.joy_x)
}

// required double joy_y = 10;
inline bool Hydra_Paddle::_internal_has_joy_y() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_joy_y() const {
  return _internal_has_joy_y();
}
inline void Hydra_Paddle::clear_joy_y() {
  joy_y_ = 0;
  _has_bits_[0] &= ~0x00000200u;
}
inline double Hydra_Paddle::_internal_joy_y() const {
  return joy_y_;
}
inline double Hydra_Paddle::joy_y() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.joy_y)
  return _internal_joy_y();
}
inline void Hydra_Paddle::_internal_set_joy_y(double value) {
  _has_bits_[0] |= 0x00000200u;
  joy_y_ = value;
}
inline void Hydra_Paddle::set_joy_y(double value) {
  _internal_set_joy_y(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.joy_y)
}

// required double trigger = 11;
inline bool Hydra_Paddle::_internal_has_trigger() const {
  bool value = (_has_bits_[0] & 0x00000400u) != 0;
  return value;
}
inline bool Hydra_Paddle::has_trigger() const {
  return _internal_has_trigger();
}
inline void Hydra_Paddle::clear_trigger() {
  trigger_ = 0;
  _has_bits_[0] &= ~0x00000400u;
}
inline double Hydra_Paddle::_internal_trigger() const {
  return trigger_;
}
inline double Hydra_Paddle::trigger() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.Paddle.trigger)
  return _internal_trigger();
}
inline void Hydra_Paddle::_internal_set_trigger(double value) {
  _has_bits_[0] |= 0x00000400u;
  trigger_ = value;
}
inline void Hydra_Paddle::set_trigger(double value) {
  _internal_set_trigger(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Hydra.Paddle.trigger)
}

// -------------------------------------------------------------------

// Hydra

// required .gazebo.msgs.Hydra.Paddle right = 1;
inline bool Hydra::_internal_has_right() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || right_ != nullptr);
  return value;
}
inline bool Hydra::has_right() const {
  return _internal_has_right();
}
inline void Hydra::clear_right() {
  if (right_ != nullptr) right_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::gazebo::msgs::Hydra_Paddle& Hydra::_internal_right() const {
  const ::gazebo::msgs::Hydra_Paddle* p = right_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Hydra_Paddle*>(
      &::gazebo::msgs::_Hydra_Paddle_default_instance_);
}
inline const ::gazebo::msgs::Hydra_Paddle& Hydra::right() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.right)
  return _internal_right();
}
inline ::gazebo::msgs::Hydra_Paddle* Hydra::release_right() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Hydra.right)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Hydra_Paddle* temp = right_;
  right_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Hydra_Paddle* Hydra::_internal_mutable_right() {
  _has_bits_[0] |= 0x00000001u;
  if (right_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Hydra_Paddle>(GetArenaNoVirtual());
    right_ = p;
  }
  return right_;
}
inline ::gazebo::msgs::Hydra_Paddle* Hydra::mutable_right() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Hydra.right)
  return _internal_mutable_right();
}
inline void Hydra::set_allocated_right(::gazebo::msgs::Hydra_Paddle* right) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete right_;
  }
  if (right) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      right = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, right, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  right_ = right;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Hydra.right)
}

// required .gazebo.msgs.Hydra.Paddle left = 2;
inline bool Hydra::_internal_has_left() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || left_ != nullptr);
  return value;
}
inline bool Hydra::has_left() const {
  return _internal_has_left();
}
inline void Hydra::clear_left() {
  if (left_ != nullptr) left_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::gazebo::msgs::Hydra_Paddle& Hydra::_internal_left() const {
  const ::gazebo::msgs::Hydra_Paddle* p = left_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Hydra_Paddle*>(
      &::gazebo::msgs::_Hydra_Paddle_default_instance_);
}
inline const ::gazebo::msgs::Hydra_Paddle& Hydra::left() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Hydra.left)
  return _internal_left();
}
inline ::gazebo::msgs::Hydra_Paddle* Hydra::release_left() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Hydra.left)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Hydra_Paddle* temp = left_;
  left_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Hydra_Paddle* Hydra::_internal_mutable_left() {
  _has_bits_[0] |= 0x00000002u;
  if (left_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Hydra_Paddle>(GetArenaNoVirtual());
    left_ = p;
  }
  return left_;
}
inline ::gazebo::msgs::Hydra_Paddle* Hydra::mutable_left() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Hydra.left)
  return _internal_mutable_left();
}
inline void Hydra::set_allocated_left(::gazebo::msgs::Hydra_Paddle* left) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete left_;
  }
  if (left) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      left = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, left, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  left_ = left;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Hydra.left)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


typedef boost::shared_ptr<gazebo::msgs::Hydra> HydraPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Hydra const> ConstHydraPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_hydra_2eproto
