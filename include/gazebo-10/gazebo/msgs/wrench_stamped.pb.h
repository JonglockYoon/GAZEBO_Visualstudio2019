// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wrench_stamped.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_wrench_5fstamped_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_wrench_5fstamped_2eproto

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
#include "wrench.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_wrench_5fstamped_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_wrench_5fstamped_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_wrench_5fstamped_2eproto;
namespace gazebo {
namespace msgs {
class WrenchStamped;
class WrenchStampedDefaultTypeInternal;
GZ_MSGS_VISIBLE extern WrenchStampedDefaultTypeInternal _WrenchStamped_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::WrenchStamped* Arena::CreateMaybeMessage<::gazebo::msgs::WrenchStamped>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE WrenchStamped :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.WrenchStamped) */ {
 public:
  WrenchStamped();
  virtual ~WrenchStamped();

  WrenchStamped(const WrenchStamped& from);
  WrenchStamped(WrenchStamped&& from) noexcept
    : WrenchStamped() {
    *this = ::std::move(from);
  }

  inline WrenchStamped& operator=(const WrenchStamped& from) {
    CopyFrom(from);
    return *this;
  }
  inline WrenchStamped& operator=(WrenchStamped&& from) noexcept {
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
  static const WrenchStamped& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WrenchStamped* internal_default_instance() {
    return reinterpret_cast<const WrenchStamped*>(
               &_WrenchStamped_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WrenchStamped& a, WrenchStamped& b) {
    a.Swap(&b);
  }
  inline void Swap(WrenchStamped* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WrenchStamped* New() const final {
    return CreateMaybeMessage<WrenchStamped>(nullptr);
  }

  WrenchStamped* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WrenchStamped>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WrenchStamped& from);
  void MergeFrom(const WrenchStamped& from);
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
  void InternalSwap(WrenchStamped* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.WrenchStamped";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_wrench_5fstamped_2eproto);
    return ::descriptor_table_wrench_5fstamped_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeFieldNumber = 1,
    kWrenchFieldNumber = 2,
  };
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

  // required .gazebo.msgs.Wrench wrench = 2;
  bool has_wrench() const;
  private:
  bool _internal_has_wrench() const;
  public:
  void clear_wrench();
  const ::gazebo::msgs::Wrench& wrench() const;
  ::gazebo::msgs::Wrench* release_wrench();
  ::gazebo::msgs::Wrench* mutable_wrench();
  void set_allocated_wrench(::gazebo::msgs::Wrench* wrench);
  private:
  const ::gazebo::msgs::Wrench& _internal_wrench() const;
  ::gazebo::msgs::Wrench* _internal_mutable_wrench();
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.WrenchStamped)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Time* time_;
  ::gazebo::msgs::Wrench* wrench_;
  friend struct ::TableStruct_wrench_5fstamped_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WrenchStamped

// required .gazebo.msgs.Time time = 1;
inline bool WrenchStamped::_internal_has_time() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || time_ != nullptr);
  return value;
}
inline bool WrenchStamped::has_time() const {
  return _internal_has_time();
}
inline const ::gazebo::msgs::Time& WrenchStamped::_internal_time() const {
  const ::gazebo::msgs::Time* p = time_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline const ::gazebo::msgs::Time& WrenchStamped::time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.WrenchStamped.time)
  return _internal_time();
}
inline ::gazebo::msgs::Time* WrenchStamped::release_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.WrenchStamped.time)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = time_;
  time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* WrenchStamped::_internal_mutable_time() {
  _has_bits_[0] |= 0x00000001u;
  if (time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    time_ = p;
  }
  return time_;
}
inline ::gazebo::msgs::Time* WrenchStamped::mutable_time() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.WrenchStamped.time)
  return _internal_mutable_time();
}
inline void WrenchStamped::set_allocated_time(::gazebo::msgs::Time* time) {
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
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.WrenchStamped.time)
}

// required .gazebo.msgs.Wrench wrench = 2;
inline bool WrenchStamped::_internal_has_wrench() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || wrench_ != nullptr);
  return value;
}
inline bool WrenchStamped::has_wrench() const {
  return _internal_has_wrench();
}
inline const ::gazebo::msgs::Wrench& WrenchStamped::_internal_wrench() const {
  const ::gazebo::msgs::Wrench* p = wrench_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Wrench*>(
      &::gazebo::msgs::_Wrench_default_instance_);
}
inline const ::gazebo::msgs::Wrench& WrenchStamped::wrench() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.WrenchStamped.wrench)
  return _internal_wrench();
}
inline ::gazebo::msgs::Wrench* WrenchStamped::release_wrench() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.WrenchStamped.wrench)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Wrench* temp = wrench_;
  wrench_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Wrench* WrenchStamped::_internal_mutable_wrench() {
  _has_bits_[0] |= 0x00000002u;
  if (wrench_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Wrench>(GetArenaNoVirtual());
    wrench_ = p;
  }
  return wrench_;
}
inline ::gazebo::msgs::Wrench* WrenchStamped::mutable_wrench() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.WrenchStamped.wrench)
  return _internal_mutable_wrench();
}
inline void WrenchStamped::set_allocated_wrench(::gazebo::msgs::Wrench* wrench) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(wrench_);
  }
  if (wrench) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      wrench = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, wrench, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  wrench_ = wrench;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.WrenchStamped.wrench)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::WrenchStamped> WrenchStampedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::WrenchStamped const> ConstWrenchStampedPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_wrench_5fstamped_2eproto
