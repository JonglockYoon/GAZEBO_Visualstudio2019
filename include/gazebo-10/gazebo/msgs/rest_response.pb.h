// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rest_response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rest_5fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rest_5fresponse_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rest_5fresponse_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_rest_5fresponse_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rest_5fresponse_2eproto;
namespace gazebo {
namespace msgs {
class RestResponse;
class RestResponseDefaultTypeInternal;
GZ_MSGS_VISIBLE extern RestResponseDefaultTypeInternal _RestResponse_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::RestResponse* Arena::CreateMaybeMessage<::gazebo::msgs::RestResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

enum RestResponse_Type : int {
  RestResponse_Type_SUCCESS = 1,
  RestResponse_Type_ERR = 2,
  RestResponse_Type_LOGIN = 3,
  RestResponse_Type_LOGOUT = 4
};
GZ_MSGS_VISIBLE bool RestResponse_Type_IsValid(int value);
constexpr RestResponse_Type RestResponse_Type_Type_MIN = RestResponse_Type_SUCCESS;
constexpr RestResponse_Type RestResponse_Type_Type_MAX = RestResponse_Type_LOGOUT;
constexpr int RestResponse_Type_Type_ARRAYSIZE = RestResponse_Type_Type_MAX + 1;

GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RestResponse_Type_descriptor();
template<typename T>
inline const std::string& RestResponse_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RestResponse_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RestResponse_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RestResponse_Type_descriptor(), enum_t_value);
}
inline bool RestResponse_Type_Parse(
    const std::string& name, RestResponse_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RestResponse_Type>(
    RestResponse_Type_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE RestResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.RestResponse) */ {
 public:
  RestResponse();
  virtual ~RestResponse();

  RestResponse(const RestResponse& from);
  RestResponse(RestResponse&& from) noexcept
    : RestResponse() {
    *this = ::std::move(from);
  }

  inline RestResponse& operator=(const RestResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline RestResponse& operator=(RestResponse&& from) noexcept {
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
  static const RestResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RestResponse* internal_default_instance() {
    return reinterpret_cast<const RestResponse*>(
               &_RestResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RestResponse& a, RestResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(RestResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RestResponse* New() const final {
    return CreateMaybeMessage<RestResponse>(nullptr);
  }

  RestResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RestResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RestResponse& from);
  void MergeFrom(const RestResponse& from);
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
  void InternalSwap(RestResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.RestResponse";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_rest_5fresponse_2eproto);
    return ::descriptor_table_rest_5fresponse_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef RestResponse_Type Type;
  static constexpr Type SUCCESS =
    RestResponse_Type_SUCCESS;
  static constexpr Type ERR =
    RestResponse_Type_ERR;
  static constexpr Type LOGIN =
    RestResponse_Type_LOGIN;
  static constexpr Type LOGOUT =
    RestResponse_Type_LOGOUT;
  static inline bool Type_IsValid(int value) {
    return RestResponse_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    RestResponse_Type_Type_MIN;
  static constexpr Type Type_MAX =
    RestResponse_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    RestResponse_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return RestResponse_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return RestResponse_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return RestResponse_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 3,
    kIdFieldNumber = 1,
    kTypeFieldNumber = 2,
  };
  // optional string msg = 3;
  bool has_msg() const;
  private:
  bool _internal_has_msg() const;
  public:
  void clear_msg();
  const std::string& msg() const;
  void set_msg(const std::string& value);
  void set_msg(std::string&& value);
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  std::string* mutable_msg();
  std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  private:
  const std::string& _internal_msg() const;
  void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // optional uint32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required .gazebo.msgs.RestResponse.Type type = 2;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::gazebo::msgs::RestResponse_Type type() const;
  void set_type(::gazebo::msgs::RestResponse_Type value);
  private:
  ::gazebo::msgs::RestResponse_Type _internal_type() const;
  void _internal_set_type(::gazebo::msgs::RestResponse_Type value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.RestResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  int type_;
  friend struct ::TableStruct_rest_5fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RestResponse

// optional uint32 id = 1;
inline bool RestResponse::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RestResponse::has_id() const {
  return _internal_has_id();
}
inline void RestResponse::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RestResponse::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RestResponse::id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RestResponse.id)
  return _internal_id();
}
inline void RestResponse::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  id_ = value;
}
inline void RestResponse::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.RestResponse.id)
}

// required .gazebo.msgs.RestResponse.Type type = 2;
inline bool RestResponse::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool RestResponse::has_type() const {
  return _internal_has_type();
}
inline void RestResponse::clear_type() {
  type_ = 1;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::gazebo::msgs::RestResponse_Type RestResponse::_internal_type() const {
  return static_cast< ::gazebo::msgs::RestResponse_Type >(type_);
}
inline ::gazebo::msgs::RestResponse_Type RestResponse::type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RestResponse.type)
  return _internal_type();
}
inline void RestResponse::_internal_set_type(::gazebo::msgs::RestResponse_Type value) {
  assert(::gazebo::msgs::RestResponse_Type_IsValid(value));
  _has_bits_[0] |= 0x00000004u;
  type_ = value;
}
inline void RestResponse::set_type(::gazebo::msgs::RestResponse_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.RestResponse.type)
}

// optional string msg = 3;
inline bool RestResponse::_internal_has_msg() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RestResponse::has_msg() const {
  return _internal_has_msg();
}
inline void RestResponse::clear_msg() {
  msg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& RestResponse::msg() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RestResponse.msg)
  return _internal_msg();
}
inline void RestResponse::set_msg(const std::string& value) {
  _internal_set_msg(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.RestResponse.msg)
}
inline std::string* RestResponse::mutable_msg() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.RestResponse.msg)
  return _internal_mutable_msg();
}
inline const std::string& RestResponse::_internal_msg() const {
  return msg_.GetNoArena();
}
inline void RestResponse::_internal_set_msg(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void RestResponse::set_msg(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  msg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.RestResponse.msg)
}
inline void RestResponse::set_msg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.RestResponse.msg)
}
inline void RestResponse::set_msg(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  msg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.RestResponse.msg)
}
inline std::string* RestResponse::_internal_mutable_msg() {
  _has_bits_[0] |= 0x00000001u;
  return msg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RestResponse::release_msg() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.RestResponse.msg)
  if (!has_msg()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return msg_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RestResponse::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  msg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.RestResponse.msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::RestResponse> RestResponsePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gazebo::msgs::RestResponse_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::RestResponse_Type>() {
  return ::gazebo::msgs::RestResponse_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

typedef const boost::shared_ptr<gazebo::msgs::RestResponse const> ConstRestResponsePtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rest_5fresponse_2eproto