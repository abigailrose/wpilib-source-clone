// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bool.proto

#ifndef PROTOBUF_bool_2eproto__INCLUDED
#define PROTOBUF_bool_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_bool_2eproto();
void protobuf_AssignDesc_bool_2eproto();
void protobuf_ShutdownFile_bool_2eproto();

class Bool;

// ===================================================================

class Bool : public ::google::protobuf::Message {
 public:
  Bool();
  virtual ~Bool();

  Bool(const Bool& from);

  inline Bool& operator=(const Bool& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Bool& default_instance();

  void Swap(Bool* other);

  // implements Message ----------------------------------------------

  Bool* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Bool& from);
  void MergeFrom(const Bool& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool data = 1;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline bool data() const;
  inline void set_data(bool value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Bool)
 private:
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool data_;
  friend void  protobuf_AddDesc_bool_2eproto();
  friend void protobuf_AssignDesc_bool_2eproto();
  friend void protobuf_ShutdownFile_bool_2eproto();

  void InitAsDefaultInstance();
  static Bool* default_instance_;
};
// ===================================================================


// ===================================================================

// Bool

// required bool data = 1;
inline bool Bool::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Bool::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Bool::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Bool::clear_data() {
  data_ = false;
  clear_has_data();
}
inline bool Bool::data() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Bool.data)
  return data_;
}
inline void Bool::set_data(bool value) {
  set_has_data();
  data_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Bool.data)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_bool_2eproto__INCLUDED
