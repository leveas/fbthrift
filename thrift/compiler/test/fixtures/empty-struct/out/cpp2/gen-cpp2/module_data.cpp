/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/empty-struct/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/empty-struct/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/empty-struct/gen-cpp2/module_constants.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache::thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::Empty>::name = "Empty";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::Empty>::fields_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::Empty>::fields_ids = { {
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::Empty>::fields_types = { {
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::Empty>::isset_indexes = { {
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::Nada>::name = "Nada";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::Nada>::fields_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::Nada>::fields_ids = { {
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::Nada>::fields_types = { {
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::Nada>::isset_indexes = { {
}};

namespace detail {

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::cpp2::Empty, false>::bundle)() =
    nullptr;

::folly::Range<const ::std::string_view*>(*TSchemaAssociation<::cpp2::Nada, false>::bundle)() =
    nullptr;

} // namespace detail
} // namespace apache::thrift
