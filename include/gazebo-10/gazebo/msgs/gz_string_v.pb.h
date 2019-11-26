// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz_string_v.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_gz_5fstring_5fv_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_gz_5fstring_5fv_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_gz_5fstring_5fv_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_gz_5fstring_5fv_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gz_5fstring_5fv_2eproto;
namespace gazebo {
namespace msgs {
class GzString_V;
class GzString_VDefaultTypeInternal;
GZ_MSGS_VISIBLE extern GzString_VDefaultTypeInternal _GzString_V_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::GzString_V* Arena::CreateMaybeMessage<::gazebo::msgs::GzString_V>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE GzString_V :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.GzString_V) */ {
 public:
  GzString_V();
  virtual ~GzString_V();

  GzString_V(const GzString_V& from);
  GzString_V(GzString_V&& from) noexcept
    : GzString_V() {
    *this = ::std::move(from);
  }

  inline GzString_V& operator=(const GzString_V& from) {
    CopyFrom(from);
    return *this;
  }
  inline GzString_V& operator=(GzString_V&& from) noexcept {
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
  static const GzString_V& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GzString_V* internal_default_instance() {
    return reinterpret_cast<const GzString_V*>(
               &_GzString_V_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GzString_V& a, GzString_V& b) {
    a.Swap(&b);
  }
  inline void Swap(GzString_V* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GzString_V* New() const final {
    return CreateMaybeMessage<GzString_V>(nullptr);
  }

  GzString_V* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GzString_V>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GzString_V& from);
  void MergeFrom(const GzString_V& from);
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
  void InternalSwap(GzString_V* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.GzString_V";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_gz_5fstring_5fv_2eproto);
    return ::descriptor_table_gz_5fstring_5fv_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
  };
  // repeated string data = 1;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  const std::string& data(int index) const;
  std::string* mutable_data(int index);
  void set_data(int index, const std::string& value);
  void set_data(int index, std::string&& value);
  void set_data(int index, const char* value);
  void set_data(int index, const char* value, size_t size);
  std::string* add_data();
  void add_data(const std::string& value);
  void add_data(std::string&& value);
  void add_data(const char* value);
  void add_data(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_data();
  private:
  const std::string& _internal_data(int index) const;
  std::string* _internal_add_data();
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.GzString_V)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> data_;
  friend struct ::TableStruct_gz_5fstring_5fv_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GzString_V

// repeated string data = 1;
inline int GzString_V::_internal_data_size() const {
  return data_.size();
}
inline int GzString_V::data_size() const {
  return _internal_data_size();
}
inline void GzString_V::clear_data() {
  data_.Clear();
}
inline std::string* GzString_V::add_data() {
  // @@protoc_insertion_point(field_add_mutable:gazebo.msgs.GzString_V.data)
  return _internal_add_data();
}
inline const std::string& GzString_V::_internal_data(int index) const {
  return data_.Get(index);
}
inline const std::string& GzString_V::data(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.GzString_V.data)
  return _internal_data(index);
}
inline std::string* GzString_V::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.GzString_V.data)
  return data_.Mutable(index);
}
inline void GzString_V::set_data(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:gazebo.msgs.GzString_V.data)
  data_.Mutable(index)->assign(value);
}
inline void GzString_V::set_data(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:gazebo.msgs.GzString_V.data)
  data_.Mutable(index)->assign(std::move(value));
}
inline void GzString_V::set_data(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  data_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.GzString_V.data)
}
inline void GzString_V::set_data(int index, const char* value, size_t size) {
  data_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.GzString_V.data)
}
inline std::string* GzString_V::_internal_add_data() {
  return data_.Add();
}
inline void GzString_V::add_data(const std::string& value) {
  data_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.GzString_V.data)
}
inline void GzString_V::add_data(std::string&& value) {
  data_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:gazebo.msgs.GzString_V.data)
}
inline void GzString_V::add_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  data_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:gazebo.msgs.GzString_V.data)
}
inline void GzString_V::add_data(const char* value, size_t size) {
  data_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:gazebo.msgs.GzString_V.data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
GzString_V::data() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.GzString_V.data)
  return data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
GzString_V::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.GzString_V.data)
  return &data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::GzString_V> GzString_VPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::GzString_V const> ConstGzString_VPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_gz_5fstring_5fv_2eproto