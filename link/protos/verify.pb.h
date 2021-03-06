// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: verify.proto

#ifndef PROTOBUF_INCLUDED_verify_2eproto
#define PROTOBUF_INCLUDED_verify_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_verify_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_verify_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_verify_2eproto();
namespace protos {
class CSPing;
class CSPingDefaultTypeInternal;
extern CSPingDefaultTypeInternal _CSPing_default_instance_;
class CSVersion;
class CSVersionDefaultTypeInternal;
extern CSVersionDefaultTypeInternal _CSVersion_default_instance_;
class SCPong;
class SCPongDefaultTypeInternal;
extern SCPongDefaultTypeInternal _SCPong_default_instance_;
class SCVersion;
class SCVersionDefaultTypeInternal;
extern SCVersionDefaultTypeInternal _SCVersion_default_instance_;
}  // namespace protos
namespace google {
namespace protobuf {
template<> ::protos::CSPing* Arena::CreateMaybeMessage<::protos::CSPing>(Arena*);
template<> ::protos::CSVersion* Arena::CreateMaybeMessage<::protos::CSVersion>(Arena*);
template<> ::protos::SCPong* Arena::CreateMaybeMessage<::protos::SCPong>(Arena*);
template<> ::protos::SCVersion* Arena::CreateMaybeMessage<::protos::SCVersion>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protos {

// ===================================================================

class CSVersion :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protos.CSVersion) */ {
 public:
  CSVersion();
  virtual ~CSVersion();

  CSVersion(const CSVersion& from);

  inline CSVersion& operator=(const CSVersion& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CSVersion(CSVersion&& from) noexcept
    : CSVersion() {
    *this = ::std::move(from);
  }

  inline CSVersion& operator=(CSVersion&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const CSVersion& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CSVersion* internal_default_instance() {
    return reinterpret_cast<const CSVersion*>(
               &_CSVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CSVersion* other);
  friend void swap(CSVersion& a, CSVersion& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CSVersion* New() const final {
    return CreateMaybeMessage<CSVersion>(nullptr);
  }

  CSVersion* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CSVersion>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CSVersion& from);
  void MergeFrom(const CSVersion& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CSVersion* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string version = 1;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:protos.CSVersion)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_verify_2eproto;
};
// -------------------------------------------------------------------

class SCVersion :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protos.SCVersion) */ {
 public:
  SCVersion();
  virtual ~SCVersion();

  SCVersion(const SCVersion& from);

  inline SCVersion& operator=(const SCVersion& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SCVersion(SCVersion&& from) noexcept
    : SCVersion() {
    *this = ::std::move(from);
  }

  inline SCVersion& operator=(SCVersion&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const SCVersion& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SCVersion* internal_default_instance() {
    return reinterpret_cast<const SCVersion*>(
               &_SCVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SCVersion* other);
  friend void swap(SCVersion& a, SCVersion& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SCVersion* New() const final {
    return CreateMaybeMessage<SCVersion>(nullptr);
  }

  SCVersion* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SCVersion>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SCVersion& from);
  void MergeFrom(const SCVersion& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SCVersion* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string version = 1;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:protos.SCVersion)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_verify_2eproto;
};
// -------------------------------------------------------------------

class CSPing :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protos.CSPing) */ {
 public:
  CSPing();
  virtual ~CSPing();

  CSPing(const CSPing& from);

  inline CSPing& operator=(const CSPing& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CSPing(CSPing&& from) noexcept
    : CSPing() {
    *this = ::std::move(from);
  }

  inline CSPing& operator=(CSPing&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const CSPing& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CSPing* internal_default_instance() {
    return reinterpret_cast<const CSPing*>(
               &_CSPing_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(CSPing* other);
  friend void swap(CSPing& a, CSPing& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CSPing* New() const final {
    return CreateMaybeMessage<CSPing>(nullptr);
  }

  CSPing* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CSPing>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CSPing& from);
  void MergeFrom(const CSPing& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CSPing* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 code = 1;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  ::google::protobuf::int32 code() const;
  void set_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protos.CSPing)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_verify_2eproto;
};
// -------------------------------------------------------------------

class SCPong :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protos.SCPong) */ {
 public:
  SCPong();
  virtual ~SCPong();

  SCPong(const SCPong& from);

  inline SCPong& operator=(const SCPong& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SCPong(SCPong&& from) noexcept
    : SCPong() {
    *this = ::std::move(from);
  }

  inline SCPong& operator=(SCPong&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const SCPong& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SCPong* internal_default_instance() {
    return reinterpret_cast<const SCPong*>(
               &_SCPong_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(SCPong* other);
  friend void swap(SCPong& a, SCPong& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SCPong* New() const final {
    return CreateMaybeMessage<SCPong>(nullptr);
  }

  SCPong* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SCPong>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SCPong& from);
  void MergeFrom(const SCPong& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SCPong* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 code = 1;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  ::google::protobuf::int32 code() const;
  void set_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protos.SCPong)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_verify_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CSVersion

// string version = 1;
inline void CSVersion::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CSVersion::version() const {
  // @@protoc_insertion_point(field_get:protos.CSVersion.version)
  return version_.GetNoArena();
}
inline void CSVersion::set_version(const ::std::string& value) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protos.CSVersion.version)
}
#if LANG_CXX11
inline void CSVersion::set_version(::std::string&& value) {
  
  version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protos.CSVersion.version)
}
#endif
inline void CSVersion::set_version(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protos.CSVersion.version)
}
inline void CSVersion::set_version(const char* value, size_t size) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protos.CSVersion.version)
}
inline ::std::string* CSVersion::mutable_version() {
  
  // @@protoc_insertion_point(field_mutable:protos.CSVersion.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CSVersion::release_version() {
  // @@protoc_insertion_point(field_release:protos.CSVersion.version)
  
  return version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CSVersion::set_allocated_version(::std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:protos.CSVersion.version)
}

// -------------------------------------------------------------------

// SCVersion

// string version = 1;
inline void SCVersion::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SCVersion::version() const {
  // @@protoc_insertion_point(field_get:protos.SCVersion.version)
  return version_.GetNoArena();
}
inline void SCVersion::set_version(const ::std::string& value) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protos.SCVersion.version)
}
#if LANG_CXX11
inline void SCVersion::set_version(::std::string&& value) {
  
  version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protos.SCVersion.version)
}
#endif
inline void SCVersion::set_version(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protos.SCVersion.version)
}
inline void SCVersion::set_version(const char* value, size_t size) {
  
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protos.SCVersion.version)
}
inline ::std::string* SCVersion::mutable_version() {
  
  // @@protoc_insertion_point(field_mutable:protos.SCVersion.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SCVersion::release_version() {
  // @@protoc_insertion_point(field_release:protos.SCVersion.version)
  
  return version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SCVersion::set_allocated_version(::std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:protos.SCVersion.version)
}

// -------------------------------------------------------------------

// CSPing

// int32 code = 1;
inline void CSPing::clear_code() {
  code_ = 0;
}
inline ::google::protobuf::int32 CSPing::code() const {
  // @@protoc_insertion_point(field_get:protos.CSPing.code)
  return code_;
}
inline void CSPing::set_code(::google::protobuf::int32 value) {
  
  code_ = value;
  // @@protoc_insertion_point(field_set:protos.CSPing.code)
}

// -------------------------------------------------------------------

// SCPong

// int32 code = 1;
inline void SCPong::clear_code() {
  code_ = 0;
}
inline ::google::protobuf::int32 SCPong::code() const {
  // @@protoc_insertion_point(field_get:protos.SCPong.code)
  return code_;
}
inline void SCPong::set_code(::google::protobuf::int32 value) {
  
  code_ = value;
  // @@protoc_insertion_point(field_set:protos.SCPong.code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_verify_2eproto
