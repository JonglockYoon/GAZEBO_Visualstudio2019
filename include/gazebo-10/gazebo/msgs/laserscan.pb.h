// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: laserscan.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_laserscan_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_laserscan_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_laserscan_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_laserscan_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_laserscan_2eproto;
namespace gazebo {
namespace msgs {
class LaserScan;
class LaserScanDefaultTypeInternal;
GZ_MSGS_VISIBLE extern LaserScanDefaultTypeInternal _LaserScan_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::LaserScan* Arena::CreateMaybeMessage<::gazebo::msgs::LaserScan>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE LaserScan :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.LaserScan) */ {
 public:
  LaserScan();
  virtual ~LaserScan();

  LaserScan(const LaserScan& from);
  LaserScan(LaserScan&& from) noexcept
    : LaserScan() {
    *this = ::std::move(from);
  }

  inline LaserScan& operator=(const LaserScan& from) {
    CopyFrom(from);
    return *this;
  }
  inline LaserScan& operator=(LaserScan&& from) noexcept {
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
  static const LaserScan& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LaserScan* internal_default_instance() {
    return reinterpret_cast<const LaserScan*>(
               &_LaserScan_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LaserScan& a, LaserScan& b) {
    a.Swap(&b);
  }
  inline void Swap(LaserScan* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LaserScan* New() const final {
    return CreateMaybeMessage<LaserScan>(nullptr);
  }

  LaserScan* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LaserScan>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LaserScan& from);
  void MergeFrom(const LaserScan& from);
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
  void InternalSwap(LaserScan* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.LaserScan";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_laserscan_2eproto);
    return ::descriptor_table_laserscan_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRangesFieldNumber = 13,
    kIntensitiesFieldNumber = 14,
    kFrameFieldNumber = 1,
    kWorldPoseFieldNumber = 2,
    kAngleMinFieldNumber = 3,
    kAngleMaxFieldNumber = 4,
    kAngleStepFieldNumber = 5,
    kRangeMinFieldNumber = 6,
    kRangeMaxFieldNumber = 7,
    kVerticalAngleMinFieldNumber = 9,
    kVerticalAngleMaxFieldNumber = 10,
    kCountFieldNumber = 8,
    kVerticalCountFieldNumber = 12,
    kVerticalAngleStepFieldNumber = 11,
  };
  // repeated double ranges = 13;
  int ranges_size() const;
  private:
  int _internal_ranges_size() const;
  public:
  void clear_ranges();
  private:
  double _internal_ranges(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_ranges() const;
  void _internal_add_ranges(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_ranges();
  public:
  double ranges(int index) const;
  void set_ranges(int index, double value);
  void add_ranges(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      ranges() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_ranges();

  // repeated double intensities = 14;
  int intensities_size() const;
  private:
  int _internal_intensities_size() const;
  public:
  void clear_intensities();
  private:
  double _internal_intensities(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_intensities() const;
  void _internal_add_intensities(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_intensities();
  public:
  double intensities(int index) const;
  void set_intensities(int index, double value);
  void add_intensities(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      intensities() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_intensities();

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

  // required double angle_min = 3;
  bool has_angle_min() const;
  private:
  bool _internal_has_angle_min() const;
  public:
  void clear_angle_min();
  double angle_min() const;
  void set_angle_min(double value);
  private:
  double _internal_angle_min() const;
  void _internal_set_angle_min(double value);
  public:

  // required double angle_max = 4;
  bool has_angle_max() const;
  private:
  bool _internal_has_angle_max() const;
  public:
  void clear_angle_max();
  double angle_max() const;
  void set_angle_max(double value);
  private:
  double _internal_angle_max() const;
  void _internal_set_angle_max(double value);
  public:

  // required double angle_step = 5;
  bool has_angle_step() const;
  private:
  bool _internal_has_angle_step() const;
  public:
  void clear_angle_step();
  double angle_step() const;
  void set_angle_step(double value);
  private:
  double _internal_angle_step() const;
  void _internal_set_angle_step(double value);
  public:

  // required double range_min = 6;
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

  // required double range_max = 7;
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

  // optional double vertical_angle_min = 9;
  bool has_vertical_angle_min() const;
  private:
  bool _internal_has_vertical_angle_min() const;
  public:
  void clear_vertical_angle_min();
  double vertical_angle_min() const;
  void set_vertical_angle_min(double value);
  private:
  double _internal_vertical_angle_min() const;
  void _internal_set_vertical_angle_min(double value);
  public:

  // optional double vertical_angle_max = 10;
  bool has_vertical_angle_max() const;
  private:
  bool _internal_has_vertical_angle_max() const;
  public:
  void clear_vertical_angle_max();
  double vertical_angle_max() const;
  void set_vertical_angle_max(double value);
  private:
  double _internal_vertical_angle_max() const;
  void _internal_set_vertical_angle_max(double value);
  public:

  // required uint32 count = 8;
  bool has_count() const;
  private:
  bool _internal_has_count() const;
  public:
  void clear_count();
  ::PROTOBUF_NAMESPACE_ID::uint32 count() const;
  void set_count(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_count() const;
  void _internal_set_count(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional uint32 vertical_count = 12;
  bool has_vertical_count() const;
  private:
  bool _internal_has_vertical_count() const;
  public:
  void clear_vertical_count();
  ::PROTOBUF_NAMESPACE_ID::uint32 vertical_count() const;
  void set_vertical_count(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_vertical_count() const;
  void _internal_set_vertical_count(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional double vertical_angle_step = 11;
  bool has_vertical_angle_step() const;
  private:
  bool _internal_has_vertical_angle_step() const;
  public:
  void clear_vertical_angle_step();
  double vertical_angle_step() const;
  void set_vertical_angle_step(double value);
  private:
  double _internal_vertical_angle_step() const;
  void _internal_set_vertical_angle_step(double value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LaserScan)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > ranges_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > intensities_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr frame_;
  ::gazebo::msgs::Pose* world_pose_;
  double angle_min_;
  double angle_max_;
  double angle_step_;
  double range_min_;
  double range_max_;
  double vertical_angle_min_;
  double vertical_angle_max_;
  ::PROTOBUF_NAMESPACE_ID::uint32 count_;
  ::PROTOBUF_NAMESPACE_ID::uint32 vertical_count_;
  double vertical_angle_step_;
  friend struct ::TableStruct_laserscan_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LaserScan

// required string frame = 1;
inline bool LaserScan::_internal_has_frame() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool LaserScan::has_frame() const {
  return _internal_has_frame();
}
inline void LaserScan::clear_frame() {
  frame_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& LaserScan::frame() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.frame)
  return _internal_frame();
}
inline void LaserScan::set_frame(const std::string& value) {
  _internal_set_frame(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.frame)
}
inline std::string* LaserScan::mutable_frame() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LaserScan.frame)
  return _internal_mutable_frame();
}
inline const std::string& LaserScan::_internal_frame() const {
  return frame_.GetNoArena();
}
inline void LaserScan::_internal_set_frame(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void LaserScan::set_frame(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  frame_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.LaserScan.frame)
}
inline void LaserScan::set_frame(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.LaserScan.frame)
}
inline void LaserScan::set_frame(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.LaserScan.frame)
}
inline std::string* LaserScan::_internal_mutable_frame() {
  _has_bits_[0] |= 0x00000001u;
  return frame_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LaserScan::release_frame() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LaserScan.frame)
  if (!has_frame()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return frame_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LaserScan::set_allocated_frame(std::string* frame) {
  if (frame != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  frame_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), frame);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LaserScan.frame)
}

// required .gazebo.msgs.Pose world_pose = 2;
inline bool LaserScan::_internal_has_world_pose() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || world_pose_ != nullptr);
  return value;
}
inline bool LaserScan::has_world_pose() const {
  return _internal_has_world_pose();
}
inline const ::gazebo::msgs::Pose& LaserScan::_internal_world_pose() const {
  const ::gazebo::msgs::Pose* p = world_pose_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline const ::gazebo::msgs::Pose& LaserScan::world_pose() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.world_pose)
  return _internal_world_pose();
}
inline ::gazebo::msgs::Pose* LaserScan::release_world_pose() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LaserScan.world_pose)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Pose* temp = world_pose_;
  world_pose_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* LaserScan::_internal_mutable_world_pose() {
  _has_bits_[0] |= 0x00000002u;
  if (world_pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    world_pose_ = p;
  }
  return world_pose_;
}
inline ::gazebo::msgs::Pose* LaserScan::mutable_world_pose() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LaserScan.world_pose)
  return _internal_mutable_world_pose();
}
inline void LaserScan::set_allocated_world_pose(::gazebo::msgs::Pose* world_pose) {
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
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  world_pose_ = world_pose;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LaserScan.world_pose)
}

// required double angle_min = 3;
inline bool LaserScan::_internal_has_angle_min() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool LaserScan::has_angle_min() const {
  return _internal_has_angle_min();
}
inline void LaserScan::clear_angle_min() {
  angle_min_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double LaserScan::_internal_angle_min() const {
  return angle_min_;
}
inline double LaserScan::angle_min() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.angle_min)
  return _internal_angle_min();
}
inline void LaserScan::_internal_set_angle_min(double value) {
  _has_bits_[0] |= 0x00000004u;
  angle_min_ = value;
}
inline void LaserScan::set_angle_min(double value) {
  _internal_set_angle_min(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.angle_min)
}

// required double angle_max = 4;
inline bool LaserScan::_internal_has_angle_max() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool LaserScan::has_angle_max() const {
  return _internal_has_angle_max();
}
inline void LaserScan::clear_angle_max() {
  angle_max_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double LaserScan::_internal_angle_max() const {
  return angle_max_;
}
inline double LaserScan::angle_max() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.angle_max)
  return _internal_angle_max();
}
inline void LaserScan::_internal_set_angle_max(double value) {
  _has_bits_[0] |= 0x00000008u;
  angle_max_ = value;
}
inline void LaserScan::set_angle_max(double value) {
  _internal_set_angle_max(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.angle_max)
}

// required double angle_step = 5;
inline bool LaserScan::_internal_has_angle_step() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool LaserScan::has_angle_step() const {
  return _internal_has_angle_step();
}
inline void LaserScan::clear_angle_step() {
  angle_step_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double LaserScan::_internal_angle_step() const {
  return angle_step_;
}
inline double LaserScan::angle_step() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.angle_step)
  return _internal_angle_step();
}
inline void LaserScan::_internal_set_angle_step(double value) {
  _has_bits_[0] |= 0x00000010u;
  angle_step_ = value;
}
inline void LaserScan::set_angle_step(double value) {
  _internal_set_angle_step(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.angle_step)
}

// required double range_min = 6;
inline bool LaserScan::_internal_has_range_min() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool LaserScan::has_range_min() const {
  return _internal_has_range_min();
}
inline void LaserScan::clear_range_min() {
  range_min_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double LaserScan::_internal_range_min() const {
  return range_min_;
}
inline double LaserScan::range_min() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.range_min)
  return _internal_range_min();
}
inline void LaserScan::_internal_set_range_min(double value) {
  _has_bits_[0] |= 0x00000020u;
  range_min_ = value;
}
inline void LaserScan::set_range_min(double value) {
  _internal_set_range_min(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.range_min)
}

// required double range_max = 7;
inline bool LaserScan::_internal_has_range_max() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool LaserScan::has_range_max() const {
  return _internal_has_range_max();
}
inline void LaserScan::clear_range_max() {
  range_max_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double LaserScan::_internal_range_max() const {
  return range_max_;
}
inline double LaserScan::range_max() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.range_max)
  return _internal_range_max();
}
inline void LaserScan::_internal_set_range_max(double value) {
  _has_bits_[0] |= 0x00000040u;
  range_max_ = value;
}
inline void LaserScan::set_range_max(double value) {
  _internal_set_range_max(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.range_max)
}

// required uint32 count = 8;
inline bool LaserScan::_internal_has_count() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool LaserScan::has_count() const {
  return _internal_has_count();
}
inline void LaserScan::clear_count() {
  count_ = 0u;
  _has_bits_[0] &= ~0x00000200u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LaserScan::_internal_count() const {
  return count_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LaserScan::count() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.count)
  return _internal_count();
}
inline void LaserScan::_internal_set_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000200u;
  count_ = value;
}
inline void LaserScan::set_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.count)
}

// optional double vertical_angle_min = 9;
inline bool LaserScan::_internal_has_vertical_angle_min() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool LaserScan::has_vertical_angle_min() const {
  return _internal_has_vertical_angle_min();
}
inline void LaserScan::clear_vertical_angle_min() {
  vertical_angle_min_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double LaserScan::_internal_vertical_angle_min() const {
  return vertical_angle_min_;
}
inline double LaserScan::vertical_angle_min() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.vertical_angle_min)
  return _internal_vertical_angle_min();
}
inline void LaserScan::_internal_set_vertical_angle_min(double value) {
  _has_bits_[0] |= 0x00000080u;
  vertical_angle_min_ = value;
}
inline void LaserScan::set_vertical_angle_min(double value) {
  _internal_set_vertical_angle_min(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.vertical_angle_min)
}

// optional double vertical_angle_max = 10;
inline bool LaserScan::_internal_has_vertical_angle_max() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool LaserScan::has_vertical_angle_max() const {
  return _internal_has_vertical_angle_max();
}
inline void LaserScan::clear_vertical_angle_max() {
  vertical_angle_max_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline double LaserScan::_internal_vertical_angle_max() const {
  return vertical_angle_max_;
}
inline double LaserScan::vertical_angle_max() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.vertical_angle_max)
  return _internal_vertical_angle_max();
}
inline void LaserScan::_internal_set_vertical_angle_max(double value) {
  _has_bits_[0] |= 0x00000100u;
  vertical_angle_max_ = value;
}
inline void LaserScan::set_vertical_angle_max(double value) {
  _internal_set_vertical_angle_max(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.vertical_angle_max)
}

// optional double vertical_angle_step = 11;
inline bool LaserScan::_internal_has_vertical_angle_step() const {
  bool value = (_has_bits_[0] & 0x00000800u) != 0;
  return value;
}
inline bool LaserScan::has_vertical_angle_step() const {
  return _internal_has_vertical_angle_step();
}
inline void LaserScan::clear_vertical_angle_step() {
  vertical_angle_step_ = 0;
  _has_bits_[0] &= ~0x00000800u;
}
inline double LaserScan::_internal_vertical_angle_step() const {
  return vertical_angle_step_;
}
inline double LaserScan::vertical_angle_step() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.vertical_angle_step)
  return _internal_vertical_angle_step();
}
inline void LaserScan::_internal_set_vertical_angle_step(double value) {
  _has_bits_[0] |= 0x00000800u;
  vertical_angle_step_ = value;
}
inline void LaserScan::set_vertical_angle_step(double value) {
  _internal_set_vertical_angle_step(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.vertical_angle_step)
}

// optional uint32 vertical_count = 12;
inline bool LaserScan::_internal_has_vertical_count() const {
  bool value = (_has_bits_[0] & 0x00000400u) != 0;
  return value;
}
inline bool LaserScan::has_vertical_count() const {
  return _internal_has_vertical_count();
}
inline void LaserScan::clear_vertical_count() {
  vertical_count_ = 0u;
  _has_bits_[0] &= ~0x00000400u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LaserScan::_internal_vertical_count() const {
  return vertical_count_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LaserScan::vertical_count() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.vertical_count)
  return _internal_vertical_count();
}
inline void LaserScan::_internal_set_vertical_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000400u;
  vertical_count_ = value;
}
inline void LaserScan::set_vertical_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_vertical_count(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.vertical_count)
}

// repeated double ranges = 13;
inline int LaserScan::_internal_ranges_size() const {
  return ranges_.size();
}
inline int LaserScan::ranges_size() const {
  return _internal_ranges_size();
}
inline void LaserScan::clear_ranges() {
  ranges_.Clear();
}
inline double LaserScan::_internal_ranges(int index) const {
  return ranges_.Get(index);
}
inline double LaserScan::ranges(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.ranges)
  return _internal_ranges(index);
}
inline void LaserScan::set_ranges(int index, double value) {
  ranges_.Set(index, value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.ranges)
}
inline void LaserScan::_internal_add_ranges(double value) {
  ranges_.Add(value);
}
inline void LaserScan::add_ranges(double value) {
  _internal_add_ranges(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.LaserScan.ranges)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
LaserScan::_internal_ranges() const {
  return ranges_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
LaserScan::ranges() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.LaserScan.ranges)
  return _internal_ranges();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
LaserScan::_internal_mutable_ranges() {
  return &ranges_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
LaserScan::mutable_ranges() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.LaserScan.ranges)
  return _internal_mutable_ranges();
}

// repeated double intensities = 14;
inline int LaserScan::_internal_intensities_size() const {
  return intensities_.size();
}
inline int LaserScan::intensities_size() const {
  return _internal_intensities_size();
}
inline void LaserScan::clear_intensities() {
  intensities_.Clear();
}
inline double LaserScan::_internal_intensities(int index) const {
  return intensities_.Get(index);
}
inline double LaserScan::intensities(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScan.intensities)
  return _internal_intensities(index);
}
inline void LaserScan::set_intensities(int index, double value) {
  intensities_.Set(index, value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LaserScan.intensities)
}
inline void LaserScan::_internal_add_intensities(double value) {
  intensities_.Add(value);
}
inline void LaserScan::add_intensities(double value) {
  _internal_add_intensities(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.LaserScan.intensities)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
LaserScan::_internal_intensities() const {
  return intensities_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
LaserScan::intensities() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.LaserScan.intensities)
  return _internal_intensities();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
LaserScan::_internal_mutable_intensities() {
  return &intensities_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
LaserScan::mutable_intensities() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.LaserScan.intensities)
  return _internal_mutable_intensities();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::LaserScan> LaserScanPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::LaserScan const> ConstLaserScanPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_laserscan_2eproto
