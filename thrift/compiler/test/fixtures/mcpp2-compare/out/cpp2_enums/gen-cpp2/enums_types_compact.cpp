/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.tcc"

namespace facebook::ns::qwerty {

template void SomeStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // namespace facebook::ns::qwerty
