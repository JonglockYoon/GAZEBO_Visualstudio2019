// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: subscribe.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_subscribe_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_subscribe_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_subscribe_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_subscribe_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_subscribe_2eproto;
namespace gazebo {
namespace msgs {
class Subscribe;
class SubscribeDefaultTypeInternal;
GZ_MSGS_VISIBLE extern SubscribeDefaultTypeInternal _Subscribe_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Subscribe* Arena::CreateMaybeMessage<::gazebo::msgs::Subscribe>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Subscribe :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Subscribe) */ {
 public:
  Subscribe();
  virtual ~Subscribe();

  Subscribe(const Subscribe& from);
  Subscribe(Subscribe&& from) noexcept
    : Subscribe() {
    *this = ::std::move(from);
  }

  inline Subscribe& operator=(const Subscribe& from) {
    CopyFrom(from);
    return *this;
  }
  inline Subscribe& operator=(Subscribe&& from) noexcept {
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
  static const Subscribe& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Subscribe* internal_default_instance() {
    return reinterpret_cast<const Subscribe*>(
               &_Subscribe_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Subscribe& a, Subscribe& b) {
    a.Swap(&b);
  }
  inline void Swap(Subscribe* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Subscribe* New() const final {
    return CreateMaybeMessage<Subscribe>(nullptr);
  }

  Subscribe* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Subscribe>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Subscribe& from);
  void MergeFrom(const Subscribe& from);
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
  void InternalSwap(Subscribe* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Subscribe";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_subscribe_2eproto);
    return ::descriptor_table_subscribe_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTopicFieldNumber = 1,
    kHostFieldNumber = 2,
    kMsgTypeFieldNumber = 4,
    kPortFieldNumber = 3,
    kLatchingFieldNumber = 5,
  };
  // required string topic = 1;
  bool has_topic() const;
  private:
  bool _internal_has_topic() const;
  public:
  void clear_topic();
  const std::string& topic() const;
  void set_topic(const std::string& value);
  void set_topic(std::string&& value);
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  std::string* mutable_topic();
  std::string* release_topic();
  void set_allocated_topic(std::string* topic);
  private:
  const std::string& _internal_topic() const;
  void _internal_set_topic(const std::string& value);
  std::string* _internal_mutable_topic();
  public:

  // required string host = 2;
  bool has_host() const;
  private:
  bool _internal_has_host() const;
  public:
  void clear_host();
  const std::string& host() const;
  void set_host(const std::string& value);
  void set_host(std::string&& value);
  void set_host(const char* value);
  void set_host(const char* value, size_t size);
  std::string* mutable_host();
  std::string* release_host();
  void set_allocated_host(std::string* host);
  private:
  const std::string& _internal_host() const;
  void _internal_set_host(const std::string& value);
  std::string* _internal_mutable_host();
  public:

  // required string msg_type = 4;
  bool has_msg_type() const;
  private:
  bool _internal_has_msg_type() const;
  public:
  void clear_msg_type();
  const std::string& msg_type() const;
  void set_msg_type(const std::string& value);
  void set_msg_type(std::string&& value);
  void set_msg_type(const char* value);
  void set_msg_type(const char* value, size_t size);
  std::string* mutable_msg_type();
  std::string* release_msg_type();
  void set_allocated_msg_type(std::string* msg_type);
  private:
  const std::string& _internal_msg_type() const;
  void _internal_set_msg_type(const std::string& value);
  std::string* _internal_mutable_msg_type();
  public:

  // required uint32 port = 3;
  bool has_port() const;
  private:
  bool _internal_has_port() const;
  public:
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::uint32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_port() const;
  void _internal_set_port(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional bool latching = 5 [default = false];
  bool has_latching() const;
  private:
  bool _internal_has_latching() const;
  public:
  void clear_latching();
  bool latching() const;
  void set_latching(bool value);
  private:
  bool _internal_latching() const;
  void _internal_set_latching(bool value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Subscribe)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr topic_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr host_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_type_;
  ::PROTOBUF_NAMESPACE_ID::uint32 port_;
  bool latching_;
  friend struct ::TableStruct_subscribe_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Subscribe

// required string topic = 1;
inline bool Subscribe::_internal_has_topic() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Subscribe::has_topic() const {
  return _internal_has_topic();
}
inline void Subscribe::clear_topic() {
  topic_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Subscribe::topic() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Subscribe.topic)
  return _internal_topic();
}
inline void Subscribe::set_topic(const std::string& value) {
  _internal_set_topic(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Subscribe.topic)
}
inline std::string* Subscribe::mutable_topic() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Subscribe.topic)
  return _internal_mutable_topic();
}
inline const std::string& Subscribe::_internal_topic() const {
  return topic_.GetNoArena();
}
inline void Subscribe::_internal_set_topic(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Subscribe::set_topic(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  topic_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Subscribe.topic)
}
inline void Subscribe::set_topic(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Subscribe.topic)
}
inline void Subscribe::set_topic(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Subscribe.topic)
}
inline std::string* Subscribe::_internal_mutable_topic() {
  _has_bits_[0] |= 0x00000001u;
  return topic_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Subscribe::release_topic() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Subscribe.topic)
  if (!has_topic()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return topic_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Subscribe::set_allocated_topic(std::string* topic) {
  if (topic != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  topic_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Subscribe.topic)
}

// required string host = 2;
inline bool Subscribe::_internal_has_host() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Subscribe::has_host() const {
  return _internal_has_host();
}
inline void Subscribe::clear_host() {
  host_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Subscribe::host() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Subscribe.host)
  return _internal_host();
}
inline void Subscribe::set_host(const std::string& value) {
  _internal_set_host(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Subscribe.host)
}
inline std::string* Subscribe::mutable_host() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Subscribe.host)
  return _internal_mutable_host();
}
inline const std::string& Subscribe::_internal_host() const {
  return host_.GetNoArena();
}
inline void Subscribe::_internal_set_host(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Subscribe::set_host(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  host_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Subscribe.host)
}
inline void Subscribe::set_host(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Subscribe.host)
}
inline void Subscribe::set_host(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Subscribe.host)
}
inline std::string* Subscribe::_internal_mutable_host() {
  _has_bits_[0] |= 0x00000002u;
  return host_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Subscribe::release_host() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Subscribe.host)
  if (!has_host()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return host_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Subscribe::set_allocated_host(std::string* host) {
  if (host != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  host_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), host);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Subscribe.host)
}

// required uint32 port = 3;
inline bool Subscribe::_internal_has_port() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Subscribe::has_port() const {
  return _internal_has_port();
}
inline void Subscribe::clear_port() {
  port_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Subscribe::_internal_port() const {
  return port_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Subscribe::port() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Subscribe.port)
  return _internal_port();
}
inline void Subscribe::_internal_set_port(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  port_ = value;
}
inline void Subscribe::set_port(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Subscribe.port)
}

// required string msg_type = 4;
inline bool Subscribe::_internal_has_msg_type() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Subscribe::has_msg_type() const {
  return _internal_has_msg_type();
}
inline void Subscribe::clear_msg_type() {
  msg_type_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Subscribe::msg_type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Subscribe.msg_type)
  return _internal_msg_type();
}
inline void Subscribe::set_msg_type(const std::string& value) {
  _internal_set_msg_type(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Subscribe.msg_type)
}
inline std::string* Subscribe::mutable_msg_type() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Subscribe.msg_type)
  return _internal_mutable_msg_type();
}
inline const std::string& Subscribe::_internal_msg_type() const {
  return msg_type_.GetNoArena();
}
inline void Subscribe::_internal_set_msg_type(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Subscribe::set_msg_type(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  msg_type_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Subscribe.msg_type)
}
inline void Subscribe::set_msg_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Subscribe.msg_type)
}
inline void Subscribe::set_msg_type(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Subscribe.msg_type)
}
inline std::string* Subscribe::_internal_mutable_msg_type() {
  _has_bits_[0] |= 0x00000004u;
  return msg_type_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Subscribe::release_msg_type() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Subscribe.msg_type)
  if (!has_msg_type()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return msg_type_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Subscribe::set_allocated_msg_type(std::string* msg_type) {
  if (msg_type != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  msg_type_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg_type);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Subscribe.msg_type)
}

// optional bool latching = 5 [default = false];
inline bool Subscribe::_internal_has_latching() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Subscribe::has_latching() const {
  return _internal_has_latching();
}
inline void Subscribe::clear_latching() {
  latching_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Subscribe::_internal_latching() const {
  return latching_;
}
inline bool Subscribe::latching() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Subscribe.latching)
  return _internal_latching();
}
inline void Subscribe::_internal_set_latching(bool value) {
  _has_bits_[0] |= 0x00000010u;
  latching_ = value;
}
inline void Subscribe::set_latching(bool value) {
  _internal_set_latching(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Subscribe.latching)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Subscribe> SubscribePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Subscribe const> ConstSubscribePtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_subscribe_2eproto
