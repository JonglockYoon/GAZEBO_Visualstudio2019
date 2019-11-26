// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: topic_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_topic_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_topic_5finfo_2eproto

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
#include "publish.pb.h"
#include "subscribe.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_topic_5finfo_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_topic_5finfo_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_topic_5finfo_2eproto;
namespace gazebo {
namespace msgs {
class TopicInfo;
class TopicInfoDefaultTypeInternal;
GZ_MSGS_VISIBLE extern TopicInfoDefaultTypeInternal _TopicInfo_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::TopicInfo* Arena::CreateMaybeMessage<::gazebo::msgs::TopicInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE TopicInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.TopicInfo) */ {
 public:
  TopicInfo();
  virtual ~TopicInfo();

  TopicInfo(const TopicInfo& from);
  TopicInfo(TopicInfo&& from) noexcept
    : TopicInfo() {
    *this = ::std::move(from);
  }

  inline TopicInfo& operator=(const TopicInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline TopicInfo& operator=(TopicInfo&& from) noexcept {
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
  static const TopicInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TopicInfo* internal_default_instance() {
    return reinterpret_cast<const TopicInfo*>(
               &_TopicInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TopicInfo& a, TopicInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(TopicInfo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TopicInfo* New() const final {
    return CreateMaybeMessage<TopicInfo>(nullptr);
  }

  TopicInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TopicInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TopicInfo& from);
  void MergeFrom(const TopicInfo& from);
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
  void InternalSwap(TopicInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.TopicInfo";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_topic_5finfo_2eproto);
    return ::descriptor_table_topic_5finfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPublisherFieldNumber = 2,
    kSubscriberFieldNumber = 3,
    kMsgTypeFieldNumber = 1,
  };
  // repeated .gazebo.msgs.Publish publisher = 2;
  int publisher_size() const;
  private:
  int _internal_publisher_size() const;
  public:
  void clear_publisher();
  ::gazebo::msgs::Publish* mutable_publisher(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Publish >*
      mutable_publisher();
  private:
  const ::gazebo::msgs::Publish& _internal_publisher(int index) const;
  ::gazebo::msgs::Publish* _internal_add_publisher();
  public:
  const ::gazebo::msgs::Publish& publisher(int index) const;
  ::gazebo::msgs::Publish* add_publisher();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Publish >&
      publisher() const;

  // repeated .gazebo.msgs.Subscribe subscriber = 3;
  int subscriber_size() const;
  private:
  int _internal_subscriber_size() const;
  public:
  void clear_subscriber();
  ::gazebo::msgs::Subscribe* mutable_subscriber(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Subscribe >*
      mutable_subscriber();
  private:
  const ::gazebo::msgs::Subscribe& _internal_subscriber(int index) const;
  ::gazebo::msgs::Subscribe* _internal_add_subscriber();
  public:
  const ::gazebo::msgs::Subscribe& subscriber(int index) const;
  ::gazebo::msgs::Subscribe* add_subscriber();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Subscribe >&
      subscriber() const;

  // required string msg_type = 1;
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

  // @@protoc_insertion_point(class_scope:gazebo.msgs.TopicInfo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Publish > publisher_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Subscribe > subscriber_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_type_;
  friend struct ::TableStruct_topic_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TopicInfo

// required string msg_type = 1;
inline bool TopicInfo::_internal_has_msg_type() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TopicInfo::has_msg_type() const {
  return _internal_has_msg_type();
}
inline void TopicInfo::clear_msg_type() {
  msg_type_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& TopicInfo::msg_type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.TopicInfo.msg_type)
  return _internal_msg_type();
}
inline void TopicInfo::set_msg_type(const std::string& value) {
  _internal_set_msg_type(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.TopicInfo.msg_type)
}
inline std::string* TopicInfo::mutable_msg_type() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.TopicInfo.msg_type)
  return _internal_mutable_msg_type();
}
inline const std::string& TopicInfo::_internal_msg_type() const {
  return msg_type_.GetNoArena();
}
inline void TopicInfo::_internal_set_msg_type(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void TopicInfo::set_msg_type(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  msg_type_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.TopicInfo.msg_type)
}
inline void TopicInfo::set_msg_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.TopicInfo.msg_type)
}
inline void TopicInfo::set_msg_type(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.TopicInfo.msg_type)
}
inline std::string* TopicInfo::_internal_mutable_msg_type() {
  _has_bits_[0] |= 0x00000001u;
  return msg_type_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TopicInfo::release_msg_type() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.TopicInfo.msg_type)
  if (!has_msg_type()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return msg_type_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TopicInfo::set_allocated_msg_type(std::string* msg_type) {
  if (msg_type != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  msg_type_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg_type);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.TopicInfo.msg_type)
}

// repeated .gazebo.msgs.Publish publisher = 2;
inline int TopicInfo::_internal_publisher_size() const {
  return publisher_.size();
}
inline int TopicInfo::publisher_size() const {
  return _internal_publisher_size();
}
inline ::gazebo::msgs::Publish* TopicInfo::mutable_publisher(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.TopicInfo.publisher)
  return publisher_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Publish >*
TopicInfo::mutable_publisher() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.TopicInfo.publisher)
  return &publisher_;
}
inline const ::gazebo::msgs::Publish& TopicInfo::_internal_publisher(int index) const {
  return publisher_.Get(index);
}
inline const ::gazebo::msgs::Publish& TopicInfo::publisher(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.TopicInfo.publisher)
  return _internal_publisher(index);
}
inline ::gazebo::msgs::Publish* TopicInfo::_internal_add_publisher() {
  return publisher_.Add();
}
inline ::gazebo::msgs::Publish* TopicInfo::add_publisher() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.TopicInfo.publisher)
  return _internal_add_publisher();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Publish >&
TopicInfo::publisher() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.TopicInfo.publisher)
  return publisher_;
}

// repeated .gazebo.msgs.Subscribe subscriber = 3;
inline int TopicInfo::_internal_subscriber_size() const {
  return subscriber_.size();
}
inline int TopicInfo::subscriber_size() const {
  return _internal_subscriber_size();
}
inline ::gazebo::msgs::Subscribe* TopicInfo::mutable_subscriber(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.TopicInfo.subscriber)
  return subscriber_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Subscribe >*
TopicInfo::mutable_subscriber() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.TopicInfo.subscriber)
  return &subscriber_;
}
inline const ::gazebo::msgs::Subscribe& TopicInfo::_internal_subscriber(int index) const {
  return subscriber_.Get(index);
}
inline const ::gazebo::msgs::Subscribe& TopicInfo::subscriber(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.TopicInfo.subscriber)
  return _internal_subscriber(index);
}
inline ::gazebo::msgs::Subscribe* TopicInfo::_internal_add_subscriber() {
  return subscriber_.Add();
}
inline ::gazebo::msgs::Subscribe* TopicInfo::add_subscriber() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.TopicInfo.subscriber)
  return _internal_add_subscriber();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Subscribe >&
TopicInfo::subscriber() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.TopicInfo.subscriber)
  return subscriber_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::TopicInfo> TopicInfoPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::TopicInfo const> ConstTopicInfoPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_topic_5finfo_2eproto
