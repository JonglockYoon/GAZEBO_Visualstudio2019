// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: image.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_image_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_image_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_image_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_image_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_image_2eproto;
namespace gazebo {
namespace msgs {
class Image;
class ImageDefaultTypeInternal;
GZ_MSGS_VISIBLE extern ImageDefaultTypeInternal _Image_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Image* Arena::CreateMaybeMessage<::gazebo::msgs::Image>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Image :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Image) */ {
 public:
  Image();
  virtual ~Image();

  Image(const Image& from);
  Image(Image&& from) noexcept
    : Image() {
    *this = ::std::move(from);
  }

  inline Image& operator=(const Image& from) {
    CopyFrom(from);
    return *this;
  }
  inline Image& operator=(Image&& from) noexcept {
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
  static const Image& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Image* internal_default_instance() {
    return reinterpret_cast<const Image*>(
               &_Image_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Image& a, Image& b) {
    a.Swap(&b);
  }
  inline void Swap(Image* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Image* New() const final {
    return CreateMaybeMessage<Image>(nullptr);
  }

  Image* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Image>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Image& from);
  void MergeFrom(const Image& from);
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
  void InternalSwap(Image* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Image";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_image_2eproto);
    return ::descriptor_table_image_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 5,
    kWidthFieldNumber = 1,
    kHeightFieldNumber = 2,
    kPixelFormatFieldNumber = 3,
    kStepFieldNumber = 4,
  };
  // required bytes data = 5;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // required uint32 width = 1;
  bool has_width() const;
  private:
  bool _internal_has_width() const;
  public:
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::uint32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_width() const;
  void _internal_set_width(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 height = 2;
  bool has_height() const;
  private:
  bool _internal_has_height() const;
  public:
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::uint32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 pixel_format = 3;
  bool has_pixel_format() const;
  private:
  bool _internal_has_pixel_format() const;
  public:
  void clear_pixel_format();
  ::PROTOBUF_NAMESPACE_ID::uint32 pixel_format() const;
  void set_pixel_format(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_pixel_format() const;
  void _internal_set_pixel_format(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 step = 4;
  bool has_step() const;
  private:
  bool _internal_has_step() const;
  public:
  void clear_step();
  ::PROTOBUF_NAMESPACE_ID::uint32 step() const;
  void set_step(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_step() const;
  void _internal_set_step(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Image)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::PROTOBUF_NAMESPACE_ID::uint32 width_;
  ::PROTOBUF_NAMESPACE_ID::uint32 height_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pixel_format_;
  ::PROTOBUF_NAMESPACE_ID::uint32 step_;
  friend struct ::TableStruct_image_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Image

// required uint32 width = 1;
inline bool Image::_internal_has_width() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Image::has_width() const {
  return _internal_has_width();
}
inline void Image::clear_width() {
  width_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Image::_internal_width() const {
  return width_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Image::width() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Image.width)
  return _internal_width();
}
inline void Image::_internal_set_width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  width_ = value;
}
inline void Image::set_width(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Image.width)
}

// required uint32 height = 2;
inline bool Image::_internal_has_height() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Image::has_height() const {
  return _internal_has_height();
}
inline void Image::clear_height() {
  height_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Image::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Image::height() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Image.height)
  return _internal_height();
}
inline void Image::_internal_set_height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  height_ = value;
}
inline void Image::set_height(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Image.height)
}

// required uint32 pixel_format = 3;
inline bool Image::_internal_has_pixel_format() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Image::has_pixel_format() const {
  return _internal_has_pixel_format();
}
inline void Image::clear_pixel_format() {
  pixel_format_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Image::_internal_pixel_format() const {
  return pixel_format_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Image::pixel_format() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Image.pixel_format)
  return _internal_pixel_format();
}
inline void Image::_internal_set_pixel_format(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  pixel_format_ = value;
}
inline void Image::set_pixel_format(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_pixel_format(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Image.pixel_format)
}

// required uint32 step = 4;
inline bool Image::_internal_has_step() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Image::has_step() const {
  return _internal_has_step();
}
inline void Image::clear_step() {
  step_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Image::_internal_step() const {
  return step_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Image::step() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Image.step)
  return _internal_step();
}
inline void Image::_internal_set_step(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  step_ = value;
}
inline void Image::set_step(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_step(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Image.step)
}

// required bytes data = 5;
inline bool Image::_internal_has_data() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Image::has_data() const {
  return _internal_has_data();
}
inline void Image::clear_data() {
  data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Image::data() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Image.data)
  return _internal_data();
}
inline void Image::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Image.data)
}
inline std::string* Image::mutable_data() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Image.data)
  return _internal_mutable_data();
}
inline const std::string& Image::_internal_data() const {
  return data_.GetNoArena();
}
inline void Image::_internal_set_data(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Image::set_data(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Image.data)
}
inline void Image::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Image.data)
}
inline void Image::set_data(const void* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Image.data)
}
inline std::string* Image::_internal_mutable_data() {
  _has_bits_[0] |= 0x00000001u;
  return data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Image::release_data() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Image.data)
  if (!has_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return data_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Image.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Image> ImagePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Image const> ConstImagePtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_image_2eproto
