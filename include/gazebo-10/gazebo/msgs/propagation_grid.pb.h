// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: propagation_grid.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_propagation_5fgrid_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_propagation_5fgrid_2eproto

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
#include "propagation_particle.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_propagation_5fgrid_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_propagation_5fgrid_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_propagation_5fgrid_2eproto;
namespace gazebo {
namespace msgs {
class PropagationGrid;
class PropagationGridDefaultTypeInternal;
GZ_MSGS_VISIBLE extern PropagationGridDefaultTypeInternal _PropagationGrid_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::PropagationGrid* Arena::CreateMaybeMessage<::gazebo::msgs::PropagationGrid>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE PropagationGrid :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.PropagationGrid) */ {
 public:
  PropagationGrid();
  virtual ~PropagationGrid();

  PropagationGrid(const PropagationGrid& from);
  PropagationGrid(PropagationGrid&& from) noexcept
    : PropagationGrid() {
    *this = ::std::move(from);
  }

  inline PropagationGrid& operator=(const PropagationGrid& from) {
    CopyFrom(from);
    return *this;
  }
  inline PropagationGrid& operator=(PropagationGrid&& from) noexcept {
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
  static const PropagationGrid& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PropagationGrid* internal_default_instance() {
    return reinterpret_cast<const PropagationGrid*>(
               &_PropagationGrid_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PropagationGrid& a, PropagationGrid& b) {
    a.Swap(&b);
  }
  inline void Swap(PropagationGrid* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PropagationGrid* New() const final {
    return CreateMaybeMessage<PropagationGrid>(nullptr);
  }

  PropagationGrid* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PropagationGrid>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PropagationGrid& from);
  void MergeFrom(const PropagationGrid& from);
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
  void InternalSwap(PropagationGrid* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.PropagationGrid";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_propagation_5fgrid_2eproto);
    return ::descriptor_table_propagation_5fgrid_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kParticleFieldNumber = 1,
  };
  // repeated .gazebo.msgs.PropagationParticle particle = 1;
  int particle_size() const;
  private:
  int _internal_particle_size() const;
  public:
  void clear_particle();
  ::gazebo::msgs::PropagationParticle* mutable_particle(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::PropagationParticle >*
      mutable_particle();
  private:
  const ::gazebo::msgs::PropagationParticle& _internal_particle(int index) const;
  ::gazebo::msgs::PropagationParticle* _internal_add_particle();
  public:
  const ::gazebo::msgs::PropagationParticle& particle(int index) const;
  ::gazebo::msgs::PropagationParticle* add_particle();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::PropagationParticle >&
      particle() const;

  // @@protoc_insertion_point(class_scope:gazebo.msgs.PropagationGrid)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::PropagationParticle > particle_;
  friend struct ::TableStruct_propagation_5fgrid_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PropagationGrid

// repeated .gazebo.msgs.PropagationParticle particle = 1;
inline int PropagationGrid::_internal_particle_size() const {
  return particle_.size();
}
inline int PropagationGrid::particle_size() const {
  return _internal_particle_size();
}
inline ::gazebo::msgs::PropagationParticle* PropagationGrid::mutable_particle(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.PropagationGrid.particle)
  return particle_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::PropagationParticle >*
PropagationGrid::mutable_particle() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.PropagationGrid.particle)
  return &particle_;
}
inline const ::gazebo::msgs::PropagationParticle& PropagationGrid::_internal_particle(int index) const {
  return particle_.Get(index);
}
inline const ::gazebo::msgs::PropagationParticle& PropagationGrid::particle(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PropagationGrid.particle)
  return _internal_particle(index);
}
inline ::gazebo::msgs::PropagationParticle* PropagationGrid::_internal_add_particle() {
  return particle_.Add();
}
inline ::gazebo::msgs::PropagationParticle* PropagationGrid::add_particle() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.PropagationGrid.particle)
  return _internal_add_particle();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::PropagationParticle >&
PropagationGrid::particle() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.PropagationGrid.particle)
  return particle_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::PropagationGrid> PropagationGridPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::PropagationGrid const> ConstPropagationGridPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_propagation_5fgrid_2eproto
