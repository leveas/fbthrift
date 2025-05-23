/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/tablebased/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/tablebased/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/tablebased/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache::thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::test::fixtures::tablebased::TrivialTypesStruct>::name = "TrivialTypesStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 5> TStructDataStorage<::test::fixtures::tablebased::TrivialTypesStruct>::fields_names = { {
  "fieldA"sv,
  "fieldB"sv,
  "fieldC"sv,
  "fieldD"sv,
  "fieldE"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 5> TStructDataStorage<::test::fixtures::tablebased::TrivialTypesStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 5> TStructDataStorage<::test::fixtures::tablebased::TrivialTypesStruct>::fields_types = { {
  TType::T_I32,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<int, 5> TStructDataStorage<::test::fixtures::tablebased::TrivialTypesStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::test::fixtures::tablebased::ContainerStruct>::name = "ContainerStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 8> TStructDataStorage<::test::fixtures::tablebased::ContainerStruct>::fields_names = { {
  "fieldA"sv,
  "fieldB"sv,
  "fieldC"sv,
  "fieldD"sv,
  "fieldE"sv,
  "fieldF"sv,
  "fieldG"sv,
  "fieldH"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 8> TStructDataStorage<::test::fixtures::tablebased::ContainerStruct>::fields_ids = { {
  12,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 8> TStructDataStorage<::test::fixtures::tablebased::ContainerStruct>::fields_types = { {
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<int, 8> TStructDataStorage<::test::fixtures::tablebased::ContainerStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::test::fixtures::tablebased::ExampleUnion>::name = "ExampleUnion";
THRIFT_DATA_MEMBER const std::array<std::string_view, 2> TStructDataStorage<::test::fixtures::tablebased::ExampleUnion>::fields_names = { {
  "fieldA"sv,
  "fieldB"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::tablebased::ExampleUnion>::fields_ids = { {
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::tablebased::ExampleUnion>::fields_types = { {
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::test::fixtures::tablebased::ExampleUnion>::isset_indexes = { {
  0,
  1,
}};

namespace detail {

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::test::fixtures::tablebased::TrivialTypesStruct, false>::bundle)() =
    nullptr;

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::test::fixtures::tablebased::ContainerStruct, false>::bundle)() =
    nullptr;

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::test::fixtures::tablebased::ExampleUnion, false>::bundle)() =
    nullptr;

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::test::fixtures::tablebased::ExampleEnum, true>::bundle)() =
    nullptr;

} // namespace detail
} // namespace apache::thrift
