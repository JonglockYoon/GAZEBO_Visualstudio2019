// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fog.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_fog_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_fog_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_fog_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_fog_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_fog_2eproto;
namespace gazebo {
namespace msgs {
class Fog;
class FogDefaultTypeInternal;
GZ_MSGS_VISIBLE extern FogDefaultTypeInternal _Fog_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Fog* Arena::CreateMaybeMessage<::gazebo::msgs::Fog>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

enum Fog_FogType : int {
  Fog_FogType_NONE = 1,
  Fog_FogType_LINEAR = 2,
  Fog_FogType_EXPONENTIAL = 3,
  Fog_FogType_EXPONENTIAL2 = 4
};
GZ_MSGS_VISIBLE bool Fog_FogType_IsValid(int value);
constexpr Fog_FogType Fog_FogType_FogType_MIN = Fog_FogType_NONE;
constexpr Fog_FogType Fog_FogType_FogType_MAX = Fog_FogType_EXPONENTIAL2;
constexpr int Fog_FogType_FogType_ARRAYSIZE = Fog_FogType_FogType_MAX + 1;

GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Fog_FogType_descriptor();
template<typename T>
inline const std::string& Fog_FogType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Fog_FogType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Fog_FogType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Fog_FogType_descriptor(), enum_t_value);
}
inline bool Fog_FogType_Parse(
    const std::string& name, Fog_FogType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Fog_FogType>(
    Fog_FogType_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE Fog :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Fog) */ {
 public:
  Fog();
  virtual ~Fog();

  Fog(const Fog& from);
  Fog(Fog&& from) noexcept
    : Fog() {
    *this = ::std::move(from);
  }

  inline Fog& operator=(const Fog& from) {
    CopyFrom(from);
    return *this;
  }
  inline Fog& operator=(Fog&& from) noexcept {
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
  static const Fog& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Fog* internal_default_instance() {
    return reinterpret_cast<const Fog*>(
               &_Fog_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Fog& a, Fog& b) {
    a.Swap(&b);
  }
  inline void Swap(Fog* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Fog* New() const final {
    return CreateMaybeMessage<Fog>(nullptr);
  }

  Fog* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Fog>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Fog& from);
  void MergeFrom(const Fog& from);
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
  void InternalSwap(Fog* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Fog";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_fog_2eproto);
    return ::descriptor_table_fog_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Fog_FogType FogType;
  static constexpr FogType NONE =
    Fog_FogType_NONE;
  static constexpr FogType LINEAR =
    Fog_FogType_LINEAR;
  static constexpr FogType EXPONENTIAL =
    Fog_FogType_EXPONENTIAL;
  static constexpr FogType EXPONENTIAL2 =
    Fog_FogType_EXPONENTIAL2;
  static inline bool FogType_IsValid(int value) {
    return Fog_FogType_IsValid(value);
  }
  static constexpr FogType FogType_MIN =
    Fog_FogType_FogType_MIN;
  static constexpr FogType FogType_MAX =
    Fog_FogType_FogType_MAX;
  static constexpr int FogType_ARRAYSIZE =
    Fog_FogType_FogType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  FogType_descriptor() {
    return Fog_FogType_descriptor();
  }
  template<typename T>
  static inline const std::string& FogType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, FogType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function FogType_Name.");
    return Fog_FogType_Name(enum_t_value);
  }
  static inline bool FogType_Parse(const std::string& name,
      FogType* value) {
    return Fog_FogType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kColorFieldNumber = 2,
    kDensityFieldNumber = 3,
    kStartFieldNumber = 4,
    kEndFieldNumber = 5,
    kTypeFieldNumber = 1,
  };
  // optional .gazebo.msgs.Color color = 2;
  bool has_color() const;
  private:
  bool _internal_has_color() const;
  public:
  void clear_color();
  const ::gazebo::msgs::Color& color() const;
  ::gazebo::msgs::Color* release_color();
  ::gazebo::msgs::Color* mutable_color();
  void set_allocated_color(::gazebo::msgs::Color* color);
  private:
  const ::gazebo::msgs::Color& _internal_color() const;
  ::gazebo::msgs::Color* _internal_mutable_color();
  public:

  // optional float density = 3;
  bool has_density() const;
  private:
  bool _internal_has_density() const;
  public:
  void clear_density();
  float density() const;
  void set_density(float value);
  private:
  float _internal_density() const;
  void _internal_set_density(float value);
  public:

  // optional float start = 4;
  bool has_start() const;
  private:
  bool _internal_has_start() const;
  public:
  void clear_start();
  float start() const;
  void set_start(float value);
  private:
  float _internal_start() const;
  void _internal_set_start(float value);
  public:

  // optional float end = 5;
  bool has_end() const;
  private:
  bool _internal_has_end() const;
  public:
  void clear_end();
  float end() const;
  void set_end(float value);
  private:
  float _internal_end() const;
  void _internal_set_end(float value);
  public:

  // optional .gazebo.msgs.Fog.FogType type = 1;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::gazebo::msgs::Fog_FogType type() const;
  void set_type(::gazebo::msgs::Fog_FogType value);
  private:
  ::gazebo::msgs::Fog_FogType _internal_type() const;
  void _internal_set_type(::gazebo::msgs::Fog_FogType value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Fog)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Color* color_;
  float density_;
  float start_;
  float end_;
  int type_;
  friend struct ::TableStruct_fog_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Fog

// optional .gazebo.msgs.Fog.FogType type = 1;
inline bool Fog::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Fog::has_type() const {
  return _internal_has_type();
}
inline void Fog::clear_type() {
  type_ = 1;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::gazebo::msgs::Fog_FogType Fog::_internal_type() const {
  return static_cast< ::gazebo::msgs::Fog_FogType >(type_);
}
inline ::gazebo::msgs::Fog_FogType Fog::type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Fog.type)
  return _internal_type();
}
inline void Fog::_internal_set_type(::gazebo::msgs::Fog_FogType value) {
  assert(::gazebo::msgs::Fog_FogType_IsValid(value));
  _has_bits_[0] |= 0x00000010u;
  type_ = value;
}
inline void Fog::set_type(::gazebo::msgs::Fog_FogType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Fog.type)
}

// optional .gazebo.msgs.Color color = 2;
inline bool Fog::_internal_has_color() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || color_ != nullptr);
  return value;
}
inline bool Fog::has_color() const {
  return _internal_has_color();
}
inline const ::gazebo::msgs::Color& Fog::_internal_color() const {
  const ::gazebo::msgs::Color* p = color_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline const ::gazebo::msgs::Color& Fog::color() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Fog.color)
  return _internal_color();
}
inline ::gazebo::msgs::Color* Fog::release_color() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Fog.color)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Color* temp = color_;
  color_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Fog::_internal_mutable_color() {
  _has_bits_[0] |= 0x00000001u;
  if (color_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    color_ = p;
  }
  return color_;
}
inline ::gazebo::msgs::Color* Fog::mutable_color() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Fog.color)
  return _internal_mutable_color();
}
inline void Fog::set_allocated_color(::gazebo::msgs::Color* color) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(color_);
  }
  if (color) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      color = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, color, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  color_ = color;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Fog.color)
}

// optional float density = 3;
inline bool Fog::_internal_has_density() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Fog::has_density() const {
  return _internal_has_density();
}
inline void Fog::clear_density() {
  density_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float Fog::_internal_density() const {
  return density_;
}
inline float Fog::density() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Fog.density)
  return _internal_density();
}
inline void Fog::_internal_set_density(float value) {
  _has_bits_[0] |= 0x00000002u;
  density_ = value;
}
inline void Fog::set_density(float value) {
  _internal_set_density(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Fog.density)
}

// optional float start = 4;
inline bool Fog::_internal_has_start() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Fog::has_start() const {
  return _internal_has_start();
}
inline void Fog::clear_start() {
  start_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float Fog::_internal_start() const {
  return start_;
}
inline float Fog::start() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Fog.start)
  return _internal_start();
}
inline void Fog::_internal_set_start(float value) {
  _has_bits_[0] |= 0x00000004u;
  start_ = value;
}
inline void Fog::set_start(float value) {
  _internal_set_start(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Fog.start)
}

// optional float end = 5;
inline bool Fog::_internal_has_end() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Fog::has_end() const {
  return _internal_has_end();
}
inline void Fog::clear_end() {
  end_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float Fog::_internal_end() const {
  return end_;
}
inline float Fog::end() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Fog.end)
  return _internal_end();
}
inline void Fog::_internal_set_end(float value) {
  _has_bits_[0] |= 0x00000008u;
  end_ = value;
}
inline void Fog::set_end(float value) {
  _internal_set_end(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Fog.end)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Fog> FogPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gazebo::msgs::Fog_FogType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::Fog_FogType>() {
  return ::gazebo::msgs::Fog_FogType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

typedef const boost::shared_ptr<gazebo::msgs::Fog const> ConstFogPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_fog_2eproto