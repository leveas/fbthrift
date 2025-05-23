/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/client-methods/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

namespace apache::thrift {
namespace ident {
struct text;
struct text;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_text
#define APACHE_THRIFT_ACCESSOR_text
APACHE_THRIFT_DEFINE_ACCESSOR(text);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_text
#define APACHE_THRIFT_ACCESSOR_text
APACHE_THRIFT_DEFINE_ACCESSOR(text);
#endif
} // namespace detail
} // namespace apache::thrift

// BEGIN declare_enums
// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class EchoRequest;
class EchoResponse;
} // namespace cpp2
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


/** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "name": "EchoRequest", "kind": "struct" } */
class EchoRequest final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  template <class ...>
  FOLLY_ERASE static constexpr std::string_view __fbthrift_get_module_name() noexcept {
    return "module";
  }
  static constexpr std::size_t __fbthrift_num_fields = 1;

  static constexpr const int16_t __fbthrift_reflection_field_ids[] = {0,1};

  using __fbthrift_reflection_idents = folly::tag_t<
    ::apache::thrift::ident::text
  >;

  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::string_t
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = EchoRequest;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  EchoRequest();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  EchoRequest(apache::thrift::FragileConstructor, ::std::string text__arg);

  EchoRequest(EchoRequest&&) noexcept;

  EchoRequest(const EchoRequest& src);


  EchoRequest& operator=(EchoRequest&&) noexcept;
  EchoRequest& operator=(const EchoRequest& src);

  ~EchoRequest();

 private:
  ::std::string __fbthrift_field_text;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const EchoRequest&) const;
  bool operator<(const EchoRequest&) const;

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const fbthrift_T&> text_ref() const& {
    return {this->__fbthrift_field_text, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<fbthrift_T&> text_ref() & {
    return {this->__fbthrift_field_text, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<fbthrift_T&&> text_ref() && {
    return {static_cast<fbthrift_T&&>(this->__fbthrift_field_text), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const fbthrift_T&> text() const& {
    return {this->__fbthrift_field_text, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<fbthrift_T&> text() & {
    return {this->__fbthrift_field_text, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<fbthrift_T&&> text() && {
    return {static_cast<fbthrift_T&&>(this->__fbthrift_field_text), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  [[deprecated("Use `FOO.text().value()` instead of `FOO.get_text()`")]]
  const ::std::string& get_text() const& {
    return __fbthrift_field_text;
  }

  /** Glean { "field": "text" } */
  [[deprecated("Use `FOO.text().value()` instead of `FOO.get_text()`")]]
  ::std::string get_text() && {
    return static_cast<::std::string&&>(__fbthrift_field_text);
  }

  /** Glean { "field": "text" } */
  template <typename T_EchoRequest_text_struct_setter = ::std::string>
  [[deprecated("Use `FOO.text() = BAR` instead of `FOO.set_text(BAR)`")]]
  ::std::string& set_text(T_EchoRequest_text_struct_setter&& text_) {
    text_ref() = std::forward<T_EchoRequest_text_struct_setter>(text_);
    return __fbthrift_field_text;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<EchoRequest>;
  friend void swap(EchoRequest& a, EchoRequest& b);
};

template <class Protocol_>
unsigned long EchoRequest::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


/** Glean {"file": "thrift/compiler/test/fixtures/client-methods/src/module.thrift", "name": "EchoResponse", "kind": "struct" } */
class EchoResponse final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  template <class ...>
  FOLLY_ERASE static constexpr std::string_view __fbthrift_get_module_name() noexcept {
    return "module";
  }
  static constexpr std::size_t __fbthrift_num_fields = 1;

  static constexpr const int16_t __fbthrift_reflection_field_ids[] = {0,1};

  using __fbthrift_reflection_idents = folly::tag_t<
    ::apache::thrift::ident::text
  >;

  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::string_t
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = EchoResponse;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  EchoResponse();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  EchoResponse(apache::thrift::FragileConstructor, ::std::string text__arg);

  EchoResponse(EchoResponse&&) noexcept;

  EchoResponse(const EchoResponse& src);


  EchoResponse& operator=(EchoResponse&&) noexcept;
  EchoResponse& operator=(const EchoResponse& src);

  ~EchoResponse();

 private:
  ::std::string __fbthrift_field_text;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const EchoResponse&) const;
  bool operator<(const EchoResponse&) const;

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const fbthrift_T&> text_ref() const& {
    return {this->__fbthrift_field_text, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<fbthrift_T&> text_ref() & {
    return {this->__fbthrift_field_text, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<fbthrift_T&&> text_ref() && {
    return {static_cast<fbthrift_T&&>(this->__fbthrift_field_text), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const fbthrift_T&> text() const& {
    return {this->__fbthrift_field_text, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<fbthrift_T&> text() & {
    return {this->__fbthrift_field_text, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  template <typename..., typename fbthrift_T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<fbthrift_T&&> text() && {
    return {static_cast<fbthrift_T&&>(this->__fbthrift_field_text), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "text" } */
  [[deprecated("Use `FOO.text().value()` instead of `FOO.get_text()`")]]
  const ::std::string& get_text() const& {
    return __fbthrift_field_text;
  }

  /** Glean { "field": "text" } */
  [[deprecated("Use `FOO.text().value()` instead of `FOO.get_text()`")]]
  ::std::string get_text() && {
    return static_cast<::std::string&&>(__fbthrift_field_text);
  }

  /** Glean { "field": "text" } */
  template <typename T_EchoResponse_text_struct_setter = ::std::string>
  [[deprecated("Use `FOO.text() = BAR` instead of `FOO.set_text(BAR)`")]]
  ::std::string& set_text(T_EchoResponse_text_struct_setter&& text_) {
    text_ref() = std::forward<T_EchoResponse_text_struct_setter>(text_);
    return __fbthrift_field_text;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<EchoResponse>;
  friend void swap(EchoResponse& a, EchoResponse& b);
};

template <class Protocol_>
unsigned long EchoResponse::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // namespace cpp2

namespace apache::thrift::detail {
template <> struct TSchemaAssociation<::cpp2::EchoRequest, false> {
  static ::folly::Range<const ::std::string_view*>(*bundle)();
  static constexpr int64_t programId = 8289997534464861998;
  static constexpr ::std::string_view definitionKey = {"\x6a\x8f\xb5\x4d\xc7\x4c\x5a\xe6\xa3\xe3\xe0\xfb\x0b\xd8\x55\xa9", 16};
};
template <> struct TSchemaAssociation<::cpp2::EchoResponse, false> {
  static ::folly::Range<const ::std::string_view*>(*bundle)();
  static constexpr int64_t programId = 8289997534464861998;
  static constexpr ::std::string_view definitionKey = {"\xc9\xfb\x9b\x67\x7c\xc2\xd4\xdb\x25\x01\x12\x67\x08\x0d\x1d\x7c", 16};
};
} // namespace apache::thrift::detail
