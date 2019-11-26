// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: param.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_param_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_param_2eproto

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
#include "any.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_param_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_param_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_param_2eproto;
namespace gazebo {
namespace msgs {
class Param;
class ParamDefaultTypeInternal;
GZ_MSGS_VISIBLE extern ParamDefaultTypeInternal _Param_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Param* Arena::CreateMaybeMessage<::gazebo::msgs::Param>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Param :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Param) */ {
 public:
  Param();
  virtual ~Param();

  Param(const Param& from);
  Param(Param&& from) noexcept
    : Param() {
    *this = ::std::move(from);
  }

  inline Param& operator=(const Param& from) {
    CopyFrom(from);
    return *this;
  }
  inline Param& operator=(Param&& from) noexcept {
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
  static const Param& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Param* internal_default_instance() {
    return reinterpret_cast<const Param*>(
               &_Param_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Param& a, Param& b) {
    a.Swap(&b);
  }
  inline void Swap(Param* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Param* New() const final {
    return CreateMaybeMessage<Param>(nullptr);
  }

  Param* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Param>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Param& from);
  void MergeFrom(const Param& from);
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
  void InternalSwap(Param* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Param";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_param_2eproto);
    return ::descriptor_table_param_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChildrenFieldNumber = 3,
    kNameFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // repeated .gazebo.msgs.Param children = 3;
  int children_size() const;
  private:
  int _internal_children_size() const;
  public:
  void clear_children();
  ::gazebo::msgs::Param* mutable_children(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Param >*
      mutable_children();
  private:
  const ::gazebo::msgs::Param& _internal_children(int index) const;
  ::gazebo::msgs::Param* _internal_add_children();
  public:
  const ::gazebo::msgs::Param& children(int index) const;
  ::gazebo::msgs::Param* add_children();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Param >&
      children() const;

  // required string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional .gazebo.msgs.Any value = 2;
  bool has_value() const;
  private:
  bool _internal_has_value() const;
  public:
  void clear_value();
  const ::gazebo::msgs::Any& value() const;
  ::gazebo::msgs::Any* release_value();
  ::gazebo::msgs::Any* mutable_value();
  void set_allocated_value(::gazebo::msgs::Any* value);
  private:
  const ::gazebo::msgs::Any& _internal_value() const;
  ::gazebo::msgs::Any* _internal_mutable_value();
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Param)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Param > children_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::gazebo::msgs::Any* value_;
  friend struct ::TableStruct_param_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Param

// required string name = 1;
inline bool Param::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Param::has_name() const {
  return _internal_has_name();
}
inline void Param::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Param::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Param.name)
  return _internal_name();
}
inline void Param::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Param.name)
}
inline std::string* Param::mutable_name() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Param.name)
  return _internal_mutable_name();
}
inline const std::string& Param::_internal_name() const {
  return name_.GetNoArena();
}
inline void Param::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Param::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Param.name)
}
inline void Param::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Param.name)
}
inline void Param::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Param.name)
}
inline std::string* Param::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Param::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Param.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Param::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Param.name)
}

// optional .gazebo.msgs.Any value = 2;
inline bool Param::_internal_has_value() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || value_ != nullptr);
  return value;
}
inline bool Param::has_value() const {
  return _internal_has_value();
}
inline const ::gazebo::msgs::Any& Param::_internal_value() const {
  const ::gazebo::msgs::Any* p = value_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Any*>(
      &::gazebo::msgs::_Any_default_instance_);
}
inline const ::gazebo::msgs::Any& Param::value() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Param.value)
  return _internal_value();
}
inline ::gazebo::msgs::Any* Param::release_value() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Param.value)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Any* temp = value_;
  value_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Any* Param::_internal_mutable_value() {
  _has_bits_[0] |= 0x00000002u;
  if (value_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Any>(GetArenaNoVirtual());
    value_ = p;
  }
  return value_;
}
inline ::gazebo::msgs::Any* Param::mutable_value() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Param.value)
  return _internal_mutable_value();
}
inline void Param::set_allocated_value(::gazebo::msgs::Any* value) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(value_);
  }
  if (value) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      value = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, value, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  value_ = value;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Param.value)
}

// repeated .gazebo.msgs.Param children = 3;
inline int Param::_internal_children_size() const {
  return children_.size();
}
inline int Param::children_size() const {
  return _internal_children_size();
}
inline void Param::clear_children() {
  children_.Clear();
}
inline ::gazebo::msgs::Param* Param::mutable_children(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Param.children)
  return children_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Param >*
Param::mutable_children() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Param.children)
  return &children_;
}
inline const ::gazebo::msgs::Param& Param::_internal_children(int index) const {
  return children_.Get(index);
}
inline const ::gazebo::msgs::Param& Param::children(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Param.children)
  return _internal_children(index);
}
inline ::gazebo::msgs::Param* Param::_internal_add_children() {
  return children_.Add();
}
inline ::gazebo::msgs::Param* Param::add_children() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Param.children)
  return _internal_add_children();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Param >&
Param::children() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Param.children)
  return children_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Param> ParamPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Param const> ConstParamPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_param_2eproto
