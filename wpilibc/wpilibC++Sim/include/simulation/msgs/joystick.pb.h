// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: joystick.proto

#ifndef PROTOBUF_joystick_2eproto__INCLUDED
#define PROTOBUF_joystick_2eproto__INCLUDED

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
void  protobuf_AddDesc_joystick_2eproto();
void protobuf_AssignDesc_joystick_2eproto();
void protobuf_ShutdownFile_joystick_2eproto();

class Joystick;

// ===================================================================

class Joystick : public ::google::protobuf::Message {
 public:
  Joystick();
  virtual ~Joystick();

  Joystick(const Joystick& from);

  inline Joystick& operator=(const Joystick& from) {
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
  static const Joystick& default_instance();

  void Swap(Joystick* other);

  // implements Message ----------------------------------------------

  Joystick* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Joystick& from);
  void MergeFrom(const Joystick& from);
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

  // repeated double axes = 1;
  inline int axes_size() const;
  inline void clear_axes();
  static const int kAxesFieldNumber = 1;
  inline double axes(int index) const;
  inline void set_axes(int index, double value);
  inline void add_axes(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      axes() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_axes();

  // repeated bool buttons = 2;
  inline int buttons_size() const;
  inline void clear_buttons();
  static const int kButtonsFieldNumber = 2;
  inline bool buttons(int index) const;
  inline void set_buttons(int index, bool value);
  inline void add_buttons(bool value);
  inline const ::google::protobuf::RepeatedField< bool >&
      buttons() const;
  inline ::google::protobuf::RepeatedField< bool >*
      mutable_buttons();

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Joystick)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< double > axes_;
  ::google::protobuf::RepeatedField< bool > buttons_;
  friend void  protobuf_AddDesc_joystick_2eproto();
  friend void protobuf_AssignDesc_joystick_2eproto();
  friend void protobuf_ShutdownFile_joystick_2eproto();

  void InitAsDefaultInstance();
  static Joystick* default_instance_;
};
// ===================================================================


// ===================================================================

// Joystick

// repeated double axes = 1;
inline int Joystick::axes_size() const {
  return axes_.size();
}
inline void Joystick::clear_axes() {
  axes_.Clear();
}
inline double Joystick::axes(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Joystick.axes)
  return axes_.Get(index);
}
inline void Joystick::set_axes(int index, double value) {
  axes_.Set(index, value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Joystick.axes)
}
inline void Joystick::add_axes(double value) {
  axes_.Add(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.Joystick.axes)
}
inline const ::google::protobuf::RepeatedField< double >&
Joystick::axes() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Joystick.axes)
  return axes_;
}
inline ::google::protobuf::RepeatedField< double >*
Joystick::mutable_axes() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Joystick.axes)
  return &axes_;
}

// repeated bool buttons = 2;
inline int Joystick::buttons_size() const {
  return buttons_.size();
}
inline void Joystick::clear_buttons() {
  buttons_.Clear();
}
inline bool Joystick::buttons(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Joystick.buttons)
  return buttons_.Get(index);
}
inline void Joystick::set_buttons(int index, bool value) {
  buttons_.Set(index, value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Joystick.buttons)
}
inline void Joystick::add_buttons(bool value) {
  buttons_.Add(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.Joystick.buttons)
}
inline const ::google::protobuf::RepeatedField< bool >&
Joystick::buttons() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Joystick.buttons)
  return buttons_;
}
inline ::google::protobuf::RepeatedField< bool >*
Joystick::mutable_buttons() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Joystick.buttons)
  return &buttons_;
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

#endif  // PROTOBUF_joystick_2eproto__INCLUDED
