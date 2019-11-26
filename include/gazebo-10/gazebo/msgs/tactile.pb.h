// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tactile.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tactile_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tactile_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tactile_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_tactile_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tactile_2eproto;
namespace gazebo {
namespace msgs {
class Tactile;
class TactileDefaultTypeInternal;
GZ_MSGS_VISIBLE extern TactileDefaultTypeInternal _Tactile_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Tactile* Arena::CreateMaybeMessage<::gazebo::msgs::Tactile>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Tactile :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Tactile) */ {
 public:
  Tactile();
  virtual ~Tactile();

  Tactile(const Tactile& from);
  Tactile(Tactile&& from) noexcept
    : Tactile() {
    *this = ::std::move(from);
  }

  inline Tactile& operator=(const Tactile& from) {
    CopyFrom(from);
    return *this;
  }
  inline Tactile& operator=(Tactile&& from) noexcept {
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
  static const Tactile& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Tactile* internal_default_instance() {
    return reinterpret_cast<const Tactile*>(
               &_Tactile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Tactile& a, Tactile& b) {
    a.Swap(&b);
  }
  inline void Swap(Tactile* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Tactile* New() const final {
    return CreateMaybeMessage<Tactile>(nullptr);
  }

  Tactile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Tactile>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Tactile& from);
  void MergeFrom(const Tactile& from);
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
  void InternalSwap(Tactile* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Tactile";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tactile_2eproto);
    return ::descriptor_table_tactile_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCollisionNameFieldNumber = 1,
    kCollisionIdFieldNumber = 2,
    kPressureFieldNumber = 3,
    kTimeFieldNumber = 4,
  };
  // repeated string collision_name = 1;
  int collision_name_size() const;
  private:
  int _internal_collision_name_size() const;
  public:
  void clear_collision_name();
  const std::string& collision_name(int index) const;
  std::string* mutable_collision_name(int index);
  void set_collision_name(int index, const std::string& value);
  void set_collision_name(int index, std::string&& value);
  void set_collision_name(int index, const char* value);
  void set_collision_name(int index, const char* value, size_t size);
  std::string* add_collision_name();
  void add_collision_name(const std::string& value);
  void add_collision_name(std::string&& value);
  void add_collision_name(const char* value);
  void add_collision_name(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& collision_name() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_collision_name();
  private:
  const std::string& _internal_collision_name(int index) const;
  std::string* _internal_add_collision_name();
  public:

  // repeated uint32 collision_id = 2;
  int collision_id_size() const;
  private:
  int _internal_collision_id_size() const;
  public:
  void clear_collision_id();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_collision_id(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_collision_id() const;
  void _internal_add_collision_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_collision_id();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 collision_id(int index) const;
  void set_collision_id(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_collision_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      collision_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_collision_id();

  // repeated double pressure = 3;
  int pressure_size() const;
  private:
  int _internal_pressure_size() const;
  public:
  void clear_pressure();
  private:
  double _internal_pressure(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_pressure() const;
  void _internal_add_pressure(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_pressure();
  public:
  double pressure(int index) const;
  void set_pressure(int index, double value);
  void add_pressure(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      pressure() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_pressure();

  // required .gazebo.msgs.Time time = 4;
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

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Tactile)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> collision_name_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > collision_id_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > pressure_;
  ::gazebo::msgs::Time* time_;
  friend struct ::TableStruct_tactile_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Tactile

// repeated string collision_name = 1;
inline int Tactile::_internal_collision_name_size() const {
  return collision_name_.size();
}
inline int Tactile::collision_name_size() const {
  return _internal_collision_name_size();
}
inline void Tactile::clear_collision_name() {
  collision_name_.Clear();
}
inline std::string* Tactile::add_collision_name() {
  // @@protoc_insertion_point(field_add_mutable:gazebo.msgs.Tactile.collision_name)
  return _internal_add_collision_name();
}
inline const std::string& Tactile::_internal_collision_name(int index) const {
  return collision_name_.Get(index);
}
inline const std::string& Tactile::collision_name(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Tactile.collision_name)
  return _internal_collision_name(index);
}
inline std::string* Tactile::mutable_collision_name(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Tactile.collision_name)
  return collision_name_.Mutable(index);
}
inline void Tactile::set_collision_name(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:gazebo.msgs.Tactile.collision_name)
  collision_name_.Mutable(index)->assign(value);
}
inline void Tactile::set_collision_name(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:gazebo.msgs.Tactile.collision_name)
  collision_name_.Mutable(index)->assign(std::move(value));
}
inline void Tactile::set_collision_name(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  collision_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Tactile.collision_name)
}
inline void Tactile::set_collision_name(int index, const char* value, size_t size) {
  collision_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Tactile.collision_name)
}
inline std::string* Tactile::_internal_add_collision_name() {
  return collision_name_.Add();
}
inline void Tactile::add_collision_name(const std::string& value) {
  collision_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.Tactile.collision_name)
}
inline void Tactile::add_collision_name(std::string&& value) {
  collision_name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:gazebo.msgs.Tactile.collision_name)
}
inline void Tactile::add_collision_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  collision_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:gazebo.msgs.Tactile.collision_name)
}
inline void Tactile::add_collision_name(const char* value, size_t size) {
  collision_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:gazebo.msgs.Tactile.collision_name)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Tactile::collision_name() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Tactile.collision_name)
  return collision_name_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Tactile::mutable_collision_name() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Tactile.collision_name)
  return &collision_name_;
}

// repeated uint32 collision_id = 2;
inline int Tactile::_internal_collision_id_size() const {
  return collision_id_.size();
}
inline int Tactile::collision_id_size() const {
  return _internal_collision_id_size();
}
inline void Tactile::clear_collision_id() {
  collision_id_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Tactile::_internal_collision_id(int index) const {
  return collision_id_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Tactile::collision_id(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Tactile.collision_id)
  return _internal_collision_id(index);
}
inline void Tactile::set_collision_id(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  collision_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Tactile.collision_id)
}
inline void Tactile::_internal_add_collision_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  collision_id_.Add(value);
}
inline void Tactile::add_collision_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_collision_id(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.Tactile.collision_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
Tactile::_internal_collision_id() const {
  return collision_id_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
Tactile::collision_id() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Tactile.collision_id)
  return _internal_collision_id();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
Tactile::_internal_mutable_collision_id() {
  return &collision_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
Tactile::mutable_collision_id() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Tactile.collision_id)
  return _internal_mutable_collision_id();
}

// repeated double pressure = 3;
inline int Tactile::_internal_pressure_size() const {
  return pressure_.size();
}
inline int Tactile::pressure_size() const {
  return _internal_pressure_size();
}
inline void Tactile::clear_pressure() {
  pressure_.Clear();
}
inline double Tactile::_internal_pressure(int index) const {
  return pressure_.Get(index);
}
inline double Tactile::pressure(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Tactile.pressure)
  return _internal_pressure(index);
}
inline void Tactile::set_pressure(int index, double value) {
  pressure_.Set(index, value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Tactile.pressure)
}
inline void Tactile::_internal_add_pressure(double value) {
  pressure_.Add(value);
}
inline void Tactile::add_pressure(double value) {
  _internal_add_pressure(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.Tactile.pressure)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Tactile::_internal_pressure() const {
  return pressure_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
Tactile::pressure() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Tactile.pressure)
  return _internal_pressure();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Tactile::_internal_mutable_pressure() {
  return &pressure_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
Tactile::mutable_pressure() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Tactile.pressure)
  return _internal_mutable_pressure();
}

// required .gazebo.msgs.Time time = 4;
inline bool Tactile::_internal_has_time() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || time_ != nullptr);
  return value;
}
inline bool Tactile::has_time() const {
  return _internal_has_time();
}
inline const ::gazebo::msgs::Time& Tactile::_internal_time() const {
  const ::gazebo::msgs::Time* p = time_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline const ::gazebo::msgs::Time& Tactile::time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Tactile.time)
  return _internal_time();
}
inline ::gazebo::msgs::Time* Tactile::release_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Tactile.time)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = time_;
  time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* Tactile::_internal_mutable_time() {
  _has_bits_[0] |= 0x00000001u;
  if (time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    time_ = p;
  }
  return time_;
}
inline ::gazebo::msgs::Time* Tactile::mutable_time() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Tactile.time)
  return _internal_mutable_time();
}
inline void Tactile::set_allocated_time(::gazebo::msgs::Time* time) {
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
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Tactile.time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Tactile> TactilePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Tactile const> ConstTactilePtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tactile_2eproto
