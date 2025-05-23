/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/templated-deserialize/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache::thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::SmallStruct>::name = "SmallStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::cpp2::SmallStruct>::fields_names = { {
  "small_A"sv,
  "small_B"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::SmallStruct>::fields_ids = { {
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::SmallStruct>::fields_types = { {
  TType::T_BOOL,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::SmallStruct>::isset_indexes = { {
  0,
  1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::containerStruct>::name = "containerStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 19> TStructDataStorage<::cpp2::containerStruct>::fields_names = { {
  "fieldA"sv,
  "fieldB"sv,
  "fieldC"sv,
  "fieldD"sv,
  "fieldE"sv,
  "fieldF"sv,
  "fieldG"sv,
  "fieldH"sv,
  "fieldI"sv,
  "fieldJ"sv,
  "fieldK"sv,
  "fieldL"sv,
  "fieldM"sv,
  "fieldQ"sv,
  "fieldR"sv,
  "fieldS"sv,
  "fieldT"sv,
  "fieldU"sv,
  "fieldX"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 19> TStructDataStorage<::cpp2::containerStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  17,
  18,
  19,
  20,
  21,
  23,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 19> TStructDataStorage<::cpp2::containerStruct>::fields_types = { {
  TType::T_BOOL,
  TType::T_MAP,
  TType::T_SET,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_LIST,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_BOOL,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_I32,
  TType::T_MAP,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<int, 19> TStructDataStorage<::cpp2::containerStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  -1,
  -1,
  -1,
  -1,
  -1,
}};

namespace detail {

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::cpp2::SmallStruct, false>::bundle)() =
    nullptr;

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::cpp2::containerStruct, false>::bundle)() =
    nullptr;

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::cpp2::MyEnumA, true>::bundle)() =
    nullptr;

} // namespace detail
} // namespace apache::thrift
