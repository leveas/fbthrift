/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/python_capi/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/python_capi/gen-cpp2/module_types.tcc"

namespace test::fixtures::python_capi {

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void MyDataItem::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyDataItem::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyDataItem::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void TransitiveDoubler::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TransitiveDoubler::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TransitiveDoubler::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TransitiveDoubler::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

namespace detail {
template void DoubledPair::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t DoubledPair::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t DoubledPair::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t DoubledPair::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
} // namespace detail

template void StringPair::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StringPair::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StringPair::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StringPair::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void VapidStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t VapidStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t VapidStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t VapidStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void PrimitiveStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t PrimitiveStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t PrimitiveStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t PrimitiveStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void AdaptedFields::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t AdaptedFields::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t AdaptedFields::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t AdaptedFields::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void ListStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ListStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ListStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ListStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void SetStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SetStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SetStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SetStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void MapStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MapStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MapStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MapStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void ComposeStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ComposeStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ComposeStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ComposeStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void Shallot::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Shallot::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Shallot::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Shallot::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

template void SomeBinary::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SomeBinary::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SomeBinary::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SomeBinary::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;

} // namespace test::fixtures::python_capi
