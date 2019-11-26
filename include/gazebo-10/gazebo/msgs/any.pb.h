// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: any.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_any_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_any_2eproto

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
#include "color.pb.h"
#include "pose.pb.h"
#include "quaternion.pb.h"
#include "time.pb.h"
#include "vector3d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_any_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_any_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_any_2eproto;
namespace gazebo {
namespace msgs {
class Any;
class AnyDefaultTypeInternal;
GZ_MSGS_VISIBLE extern AnyDefaultTypeInternal _Any_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Any* Arena::CreateMaybeMessage<::gazebo::msgs::Any>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

enum Any_ValueType : int {
  Any_ValueType_NONE = 1,
  Any_ValueType_DOUBLE = 2,
  Any_ValueType_INT32 = 3,
  Any_ValueType_STRING = 4,
  Any_ValueType_BOOLEAN = 5,
  Any_ValueType_VECTOR3D = 6,
  Any_ValueType_COLOR = 7,
  Any_ValueType_POSE3D = 8,
  Any_ValueType_QUATERNIOND = 9,
  Any_ValueType_TIME = 10
};
GZ_MSGS_VISIBLE bool Any_ValueType_IsValid(int value);
constexpr Any_ValueType Any_ValueType_ValueType_MIN = Any_ValueType_NONE;
constexpr Any_ValueType Any_ValueType_ValueType_MAX = Any_ValueType_TIME;
constexpr int Any_ValueType_ValueType_ARRAYSIZE = Any_ValueType_ValueType_MAX + 1;

GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Any_ValueType_descriptor();
template<typename T>
inline const std::string& Any_ValueType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Any_ValueType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Any_ValueType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Any_ValueType_descriptor(), enum_t_value);
}
inline bool Any_ValueType_Parse(
    const std::string& name, Any_ValueType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Any_ValueType>(
    Any_ValueType_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE Any :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Any) */ {
 public:
  Any();
  virtual ~Any();

  Any(const Any& from);
  Any(Any&& from) noexcept
    : Any() {
    *this = ::std::move(from);
  }

  inline Any& operator=(const Any& from) {
    CopyFrom(from);
    return *this;
  }
  inline Any& operator=(Any&& from) noexcept {
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
  static const Any& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Any* internal_default_instance() {
    return reinterpret_cast<const Any*>(
               &_Any_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Any& a, Any& b) {
    a.Swap(&b);
  }
  inline void Swap(Any* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Any* New() const final {
    return CreateMaybeMessage<Any>(nullptr);
  }

  Any* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Any>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Any& from);
  void MergeFrom(const Any& from);
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
  void InternalSwap(Any* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Any";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_any_2eproto);
    return ::descriptor_table_any_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Any_ValueType ValueType;
  static constexpr ValueType NONE =
    Any_ValueType_NONE;
  static constexpr ValueType DOUBLE =
    Any_ValueType_DOUBLE;
  static constexpr ValueType INT32 =
    Any_ValueType_INT32;
  static constexpr ValueType STRING =
    Any_ValueType_STRING;
  static constexpr ValueType BOOLEAN =
    Any_ValueType_BOOLEAN;
  static constexpr ValueType VECTOR3D =
    Any_ValueType_VECTOR3D;
  static constexpr ValueType COLOR =
    Any_ValueType_COLOR;
  static constexpr ValueType POSE3D =
    Any_ValueType_POSE3D;
  static constexpr ValueType QUATERNIOND =
    Any_ValueType_QUATERNIOND;
  static constexpr ValueType TIME =
    Any_ValueType_TIME;
  static inline bool ValueType_IsValid(int value) {
    return Any_ValueType_IsValid(value);
  }
  static constexpr ValueType ValueType_MIN =
    Any_ValueType_ValueType_MIN;
  static constexpr ValueType ValueType_MAX =
    Any_ValueType_ValueType_MAX;
  static constexpr int ValueType_ARRAYSIZE =
    Any_ValueType_ValueType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ValueType_descriptor() {
    return Any_ValueType_descriptor();
  }
  template<typename T>
  static inline const std::string& ValueType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ValueType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ValueType_Name.");
    return Any_ValueType_Name(enum_t_value);
  }
  static inline bool ValueType_Parse(const std::string& name,
      ValueType* value) {
    return Any_ValueType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kStringValueFieldNumber = 4,
    kVector3DValueFieldNumber = 6,
    kColorValueFieldNumber = 7,
    kPose3DValueFieldNumber = 8,
    kQuaternionValueFieldNumber = 9,
    kTimeValueFieldNumber = 10,
    kDoubleValueFieldNumber = 2,
    kIntValueFieldNumber = 3,
    kBoolValueFieldNumber = 5,
    kTypeFieldNumber = 1,
  };
  // optional string string_value = 4;
  bool has_string_value() const;
  private:
  bool _internal_has_string_value() const;
  public:
  void clear_string_value();
  const std::string& string_value() const;
  void set_string_value(const std::string& value);
  void set_string_value(std::string&& value);
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  std::string* mutable_string_value();
  std::string* release_string_value();
  void set_allocated_string_value(std::string* string_value);
  private:
  const std::string& _internal_string_value() const;
  void _internal_set_string_value(const std::string& value);
  std::string* _internal_mutable_string_value();
  public:

  // optional .gazebo.msgs.Vector3d vector3d_value = 6;
  bool has_vector3d_value() const;
  private:
  bool _internal_has_vector3d_value() const;
  public:
  void clear_vector3d_value();
  const ::gazebo::msgs::Vector3d& vector3d_value() const;
  ::gazebo::msgs::Vector3d* release_vector3d_value();
  ::gazebo::msgs::Vector3d* mutable_vector3d_value();
  void set_allocated_vector3d_value(::gazebo::msgs::Vector3d* vector3d_value);
  private:
  const ::gazebo::msgs::Vector3d& _internal_vector3d_value() const;
  ::gazebo::msgs::Vector3d* _internal_mutable_vector3d_value();
  public:

  // optional .gazebo.msgs.Color color_value = 7;
  bool has_color_value() const;
  private:
  bool _internal_has_color_value() const;
  public:
  void clear_color_value();
  const ::gazebo::msgs::Color& color_value() const;
  ::gazebo::msgs::Color* release_color_value();
  ::gazebo::msgs::Color* mutable_color_value();
  void set_allocated_color_value(::gazebo::msgs::Color* color_value);
  private:
  const ::gazebo::msgs::Color& _internal_color_value() const;
  ::gazebo::msgs::Color* _internal_mutable_color_value();
  public:

  // optional .gazebo.msgs.Pose pose3d_value = 8;
  bool has_pose3d_value() const;
  private:
  bool _internal_has_pose3d_value() const;
  public:
  void clear_pose3d_value();
  const ::gazebo::msgs::Pose& pose3d_value() const;
  ::gazebo::msgs::Pose* release_pose3d_value();
  ::gazebo::msgs::Pose* mutable_pose3d_value();
  void set_allocated_pose3d_value(::gazebo::msgs::Pose* pose3d_value);
  private:
  const ::gazebo::msgs::Pose& _internal_pose3d_value() const;
  ::gazebo::msgs::Pose* _internal_mutable_pose3d_value();
  public:

  // optional .gazebo.msgs.Quaternion quaternion_value = 9;
  bool has_quaternion_value() const;
  private:
  bool _internal_has_quaternion_value() const;
  public:
  void clear_quaternion_value();
  const ::gazebo::msgs::Quaternion& quaternion_value() const;
  ::gazebo::msgs::Quaternion* release_quaternion_value();
  ::gazebo::msgs::Quaternion* mutable_quaternion_value();
  void set_allocated_quaternion_value(::gazebo::msgs::Quaternion* quaternion_value);
  private:
  const ::gazebo::msgs::Quaternion& _internal_quaternion_value() const;
  ::gazebo::msgs::Quaternion* _internal_mutable_quaternion_value();
  public:

  // optional .gazebo.msgs.Time time_value = 10;
  bool has_time_value() const;
  private:
  bool _internal_has_time_value() const;
  public:
  void clear_time_value();
  const ::gazebo::msgs::Time& time_value() const;
  ::gazebo::msgs::Time* release_time_value();
  ::gazebo::msgs::Time* mutable_time_value();
  void set_allocated_time_value(::gazebo::msgs::Time* time_value);
  private:
  const ::gazebo::msgs::Time& _internal_time_value() const;
  ::gazebo::msgs::Time* _internal_mutable_time_value();
  public:

  // optional double double_value = 2;
  bool has_double_value() const;
  private:
  bool _internal_has_double_value() const;
  public:
  void clear_double_value();
  double double_value() const;
  void set_double_value(double value);
  private:
  double _internal_double_value() const;
  void _internal_set_double_value(double value);
  public:

  // optional int32 int_value = 3;
  bool has_int_value() const;
  private:
  bool _internal_has_int_value() const;
  public:
  void clear_int_value();
  ::PROTOBUF_NAMESPACE_ID::int32 int_value() const;
  void set_int_value(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_int_value() const;
  void _internal_set_int_value(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool bool_value = 5;
  bool has_bool_value() const;
  private:
  bool _internal_has_bool_value() const;
  public:
  void clear_bool_value();
  bool bool_value() const;
  void set_bool_value(bool value);
  private:
  bool _internal_bool_value() const;
  void _internal_set_bool_value(bool value);
  public:

  // required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::gazebo::msgs::Any_ValueType type() const;
  void set_type(::gazebo::msgs::Any_ValueType value);
  private:
  ::gazebo::msgs::Any_ValueType _internal_type() const;
  void _internal_set_type(::gazebo::msgs::Any_ValueType value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Any)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr string_value_;
  ::gazebo::msgs::Vector3d* vector3d_value_;
  ::gazebo::msgs::Color* color_value_;
  ::gazebo::msgs::Pose* pose3d_value_;
  ::gazebo::msgs::Quaternion* quaternion_value_;
  ::gazebo::msgs::Time* time_value_;
  double double_value_;
  ::PROTOBUF_NAMESPACE_ID::int32 int_value_;
  bool bool_value_;
  int type_;
  friend struct ::TableStruct_any_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Any

// required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
inline bool Any::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool Any::has_type() const {
  return _internal_has_type();
}
inline void Any::clear_type() {
  type_ = 1;
  _has_bits_[0] &= ~0x00000200u;
}
inline ::gazebo::msgs::Any_ValueType Any::_internal_type() const {
  return static_cast< ::gazebo::msgs::Any_ValueType >(type_);
}
inline ::gazebo::msgs::Any_ValueType Any::type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.type)
  return _internal_type();
}
inline void Any::_internal_set_type(::gazebo::msgs::Any_ValueType value) {
  assert(::gazebo::msgs::Any_ValueType_IsValid(value));
  _has_bits_[0] |= 0x00000200u;
  type_ = value;
}
inline void Any::set_type(::gazebo::msgs::Any_ValueType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Any.type)
}

// optional double double_value = 2;
inline bool Any::_internal_has_double_value() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Any::has_double_value() const {
  return _internal_has_double_value();
}
inline void Any::clear_double_value() {
  double_value_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double Any::_internal_double_value() const {
  return double_value_;
}
inline double Any::double_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.double_value)
  return _internal_double_value();
}
inline void Any::_internal_set_double_value(double value) {
  _has_bits_[0] |= 0x00000040u;
  double_value_ = value;
}
inline void Any::set_double_value(double value) {
  _internal_set_double_value(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Any.double_value)
}

// optional int32 int_value = 3;
inline bool Any::_internal_has_int_value() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Any::has_int_value() const {
  return _internal_has_int_value();
}
inline void Any::clear_int_value() {
  int_value_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Any::_internal_int_value() const {
  return int_value_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Any::int_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.int_value)
  return _internal_int_value();
}
inline void Any::_internal_set_int_value(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000080u;
  int_value_ = value;
}
inline void Any::set_int_value(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_int_value(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Any.int_value)
}

// optional string string_value = 4;
inline bool Any::_internal_has_string_value() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Any::has_string_value() const {
  return _internal_has_string_value();
}
inline void Any::clear_string_value() {
  string_value_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Any::string_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.string_value)
  return _internal_string_value();
}
inline void Any::set_string_value(const std::string& value) {
  _internal_set_string_value(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Any.string_value)
}
inline std::string* Any::mutable_string_value() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Any.string_value)
  return _internal_mutable_string_value();
}
inline const std::string& Any::_internal_string_value() const {
  return string_value_.GetNoArena();
}
inline void Any::_internal_set_string_value(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  string_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Any::set_string_value(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  string_value_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Any.string_value)
}
inline void Any::set_string_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  string_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Any.string_value)
}
inline void Any::set_string_value(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  string_value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Any.string_value)
}
inline std::string* Any::_internal_mutable_string_value() {
  _has_bits_[0] |= 0x00000001u;
  return string_value_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Any::release_string_value() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Any.string_value)
  if (!has_string_value()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return string_value_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Any::set_allocated_string_value(std::string* string_value) {
  if (string_value != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  string_value_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), string_value);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Any.string_value)
}

// optional bool bool_value = 5;
inline bool Any::_internal_has_bool_value() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool Any::has_bool_value() const {
  return _internal_has_bool_value();
}
inline void Any::clear_bool_value() {
  bool_value_ = false;
  _has_bits_[0] &= ~0x00000100u;
}
inline bool Any::_internal_bool_value() const {
  return bool_value_;
}
inline bool Any::bool_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.bool_value)
  return _internal_bool_value();
}
inline void Any::_internal_set_bool_value(bool value) {
  _has_bits_[0] |= 0x00000100u;
  bool_value_ = value;
}
inline void Any::set_bool_value(bool value) {
  _internal_set_bool_value(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Any.bool_value)
}

// optional .gazebo.msgs.Vector3d vector3d_value = 6;
inline bool Any::_internal_has_vector3d_value() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || vector3d_value_ != nullptr);
  return value;
}
inline bool Any::has_vector3d_value() const {
  return _internal_has_vector3d_value();
}
inline const ::gazebo::msgs::Vector3d& Any::_internal_vector3d_value() const {
  const ::gazebo::msgs::Vector3d* p = vector3d_value_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline const ::gazebo::msgs::Vector3d& Any::vector3d_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.vector3d_value)
  return _internal_vector3d_value();
}
inline ::gazebo::msgs::Vector3d* Any::release_vector3d_value() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Any.vector3d_value)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Vector3d* temp = vector3d_value_;
  vector3d_value_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Any::_internal_mutable_vector3d_value() {
  _has_bits_[0] |= 0x00000002u;
  if (vector3d_value_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    vector3d_value_ = p;
  }
  return vector3d_value_;
}
inline ::gazebo::msgs::Vector3d* Any::mutable_vector3d_value() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Any.vector3d_value)
  return _internal_mutable_vector3d_value();
}
inline void Any::set_allocated_vector3d_value(::gazebo::msgs::Vector3d* vector3d_value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(vector3d_value_);
  }
  if (vector3d_value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      vector3d_value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, vector3d_value, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  vector3d_value_ = vector3d_value;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Any.vector3d_value)
}

// optional .gazebo.msgs.Color color_value = 7;
inline bool Any::_internal_has_color_value() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || color_value_ != nullptr);
  return value;
}
inline bool Any::has_color_value() const {
  return _internal_has_color_value();
}
inline const ::gazebo::msgs::Color& Any::_internal_color_value() const {
  const ::gazebo::msgs::Color* p = color_value_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline const ::gazebo::msgs::Color& Any::color_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.color_value)
  return _internal_color_value();
}
inline ::gazebo::msgs::Color* Any::release_color_value() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Any.color_value)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Color* temp = color_value_;
  color_value_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Any::_internal_mutable_color_value() {
  _has_bits_[0] |= 0x00000004u;
  if (color_value_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    color_value_ = p;
  }
  return color_value_;
}
inline ::gazebo::msgs::Color* Any::mutable_color_value() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Any.color_value)
  return _internal_mutable_color_value();
}
inline void Any::set_allocated_color_value(::gazebo::msgs::Color* color_value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(color_value_);
  }
  if (color_value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      color_value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, color_value, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  color_value_ = color_value;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Any.color_value)
}

// optional .gazebo.msgs.Pose pose3d_value = 8;
inline bool Any::_internal_has_pose3d_value() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || pose3d_value_ != nullptr);
  return value;
}
inline bool Any::has_pose3d_value() const {
  return _internal_has_pose3d_value();
}
inline const ::gazebo::msgs::Pose& Any::_internal_pose3d_value() const {
  const ::gazebo::msgs::Pose* p = pose3d_value_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline const ::gazebo::msgs::Pose& Any::pose3d_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.pose3d_value)
  return _internal_pose3d_value();
}
inline ::gazebo::msgs::Pose* Any::release_pose3d_value() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Any.pose3d_value)
  _has_bits_[0] &= ~0x00000008u;
  ::gazebo::msgs::Pose* temp = pose3d_value_;
  pose3d_value_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* Any::_internal_mutable_pose3d_value() {
  _has_bits_[0] |= 0x00000008u;
  if (pose3d_value_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    pose3d_value_ = p;
  }
  return pose3d_value_;
}
inline ::gazebo::msgs::Pose* Any::mutable_pose3d_value() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Any.pose3d_value)
  return _internal_mutable_pose3d_value();
}
inline void Any::set_allocated_pose3d_value(::gazebo::msgs::Pose* pose3d_value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose3d_value_);
  }
  if (pose3d_value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pose3d_value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose3d_value, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  pose3d_value_ = pose3d_value;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Any.pose3d_value)
}

// optional .gazebo.msgs.Quaternion quaternion_value = 9;
inline bool Any::_internal_has_quaternion_value() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  PROTOBUF_ASSUME(!value || quaternion_value_ != nullptr);
  return value;
}
inline bool Any::has_quaternion_value() const {
  return _internal_has_quaternion_value();
}
inline const ::gazebo::msgs::Quaternion& Any::_internal_quaternion_value() const {
  const ::gazebo::msgs::Quaternion* p = quaternion_value_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Quaternion*>(
      &::gazebo::msgs::_Quaternion_default_instance_);
}
inline const ::gazebo::msgs::Quaternion& Any::quaternion_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.quaternion_value)
  return _internal_quaternion_value();
}
inline ::gazebo::msgs::Quaternion* Any::release_quaternion_value() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Any.quaternion_value)
  _has_bits_[0] &= ~0x00000010u;
  ::gazebo::msgs::Quaternion* temp = quaternion_value_;
  quaternion_value_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Quaternion* Any::_internal_mutable_quaternion_value() {
  _has_bits_[0] |= 0x00000010u;
  if (quaternion_value_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Quaternion>(GetArenaNoVirtual());
    quaternion_value_ = p;
  }
  return quaternion_value_;
}
inline ::gazebo::msgs::Quaternion* Any::mutable_quaternion_value() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Any.quaternion_value)
  return _internal_mutable_quaternion_value();
}
inline void Any::set_allocated_quaternion_value(::gazebo::msgs::Quaternion* quaternion_value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(quaternion_value_);
  }
  if (quaternion_value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      quaternion_value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, quaternion_value, submessage_arena);
    }
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  quaternion_value_ = quaternion_value;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Any.quaternion_value)
}

// optional .gazebo.msgs.Time time_value = 10;
inline bool Any::_internal_has_time_value() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  PROTOBUF_ASSUME(!value || time_value_ != nullptr);
  return value;
}
inline bool Any::has_time_value() const {
  return _internal_has_time_value();
}
inline const ::gazebo::msgs::Time& Any::_internal_time_value() const {
  const ::gazebo::msgs::Time* p = time_value_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline const ::gazebo::msgs::Time& Any::time_value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Any.time_value)
  return _internal_time_value();
}
inline ::gazebo::msgs::Time* Any::release_time_value() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Any.time_value)
  _has_bits_[0] &= ~0x00000020u;
  ::gazebo::msgs::Time* temp = time_value_;
  time_value_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* Any::_internal_mutable_time_value() {
  _has_bits_[0] |= 0x00000020u;
  if (time_value_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    time_value_ = p;
  }
  return time_value_;
}
inline ::gazebo::msgs::Time* Any::mutable_time_value() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Any.time_value)
  return _internal_mutable_time_value();
}
inline void Any::set_allocated_time_value(::gazebo::msgs::Time* time_value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_value_);
  }
  if (time_value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      time_value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, time_value, submessage_arena);
    }
    _has_bits_[0] |= 0x00000020u;
  } else {
    _has_bits_[0] &= ~0x00000020u;
  }
  time_value_ = time_value;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Any.time_value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Any> AnyPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gazebo::msgs::Any_ValueType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::Any_ValueType>() {
  return ::gazebo::msgs::Any_ValueType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

typedef const boost::shared_ptr<gazebo::msgs::Any const> ConstAnyPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_any_2eproto
