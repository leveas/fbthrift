// Autogenerated by Thrift for thrift/compiler/test/fixtures/go-service/src/module.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package module

import (
    "maps"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.VOID
var _ = maps.Copy[map[int]int, map[int]int]
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_string = &metadata.ThriftType{
        TPrimitive: thrift.Pointerize(metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE),

    }
    premadeThriftType_module_GetEntityRequest = &metadata.ThriftType{
        TStruct: &metadata.ThriftStructType{
    Name: "module.GetEntityRequest",
},

    }
    premadeThriftType_module_GetEntityResponse = &metadata.ThriftType{
        TStruct: &metadata.ThriftStructType{
    Name: "module.GetEntityResponse",
},

    }
    premadeThriftType_list_string = &metadata.ThriftType{
        TList: &metadata.ThriftListType{
    ValueType: premadeThriftType_string,
},

    }
    premadeThriftType_module_NonComparableStruct = &metadata.ThriftType{
        TStruct: &metadata.ThriftStructType{
    Name: "module.NonComparableStruct",
},

    }
    premadeThriftType_i64 = &metadata.ThriftType{
        TPrimitive: thrift.Pointerize(metadata.ThriftPrimitiveType_THRIFT_I64_TYPE),

    }
    premadeThriftType_map_module_NonComparableStruct_i64 = &metadata.ThriftType{
        TMap: &metadata.ThriftMapType{
    KeyType:   premadeThriftType_module_NonComparableStruct,
    ValueType: premadeThriftType_i64,
},

    }
    premadeThriftType_bool = &metadata.ThriftType{
        TPrimitive: thrift.Pointerize(metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE),

    }
    premadeThriftType_byte = &metadata.ThriftType{
        TPrimitive: thrift.Pointerize(metadata.ThriftPrimitiveType_THRIFT_BYTE_TYPE),

    }
    premadeThriftType_i16 = &metadata.ThriftType{
        TPrimitive: thrift.Pointerize(metadata.ThriftPrimitiveType_THRIFT_I16_TYPE),

    }
    premadeThriftType_i32 = &metadata.ThriftType{
        TPrimitive: thrift.Pointerize(metadata.ThriftPrimitiveType_THRIFT_I32_TYPE),

    }
    premadeThriftType_double = &metadata.ThriftType{
        TPrimitive: thrift.Pointerize(metadata.ThriftPrimitiveType_THRIFT_DOUBLE_TYPE),

    }
    premadeThriftType_binary = &metadata.ThriftType{
        TPrimitive: thrift.Pointerize(metadata.ThriftPrimitiveType_THRIFT_BINARY_TYPE),

    }
    premadeThriftType_map_string_string = &metadata.ThriftType{
        TMap: &metadata.ThriftMapType{
    KeyType:   premadeThriftType_string,
    ValueType: premadeThriftType_string,
},

    }
    premadeThriftType_set_string = &metadata.ThriftType{
        TSet: &metadata.ThriftSetType{
    ValueType: premadeThriftType_string,
},

    }
)

var premadeThriftTypesMap = func() map[string]*metadata.ThriftType {
    fbthriftThriftTypesMap := make(map[string]*metadata.ThriftType)
    fbthriftThriftTypesMap["string"] = premadeThriftType_string
    fbthriftThriftTypesMap["module.GetEntityRequest"] = premadeThriftType_module_GetEntityRequest
    fbthriftThriftTypesMap["module.GetEntityResponse"] = premadeThriftType_module_GetEntityResponse
    fbthriftThriftTypesMap["module.NonComparableStruct"] = premadeThriftType_module_NonComparableStruct
    fbthriftThriftTypesMap["i64"] = premadeThriftType_i64
    fbthriftThriftTypesMap["bool"] = premadeThriftType_bool
    fbthriftThriftTypesMap["byte"] = premadeThriftType_byte
    fbthriftThriftTypesMap["i16"] = premadeThriftType_i16
    fbthriftThriftTypesMap["i32"] = premadeThriftType_i32
    fbthriftThriftTypesMap["double"] = premadeThriftType_double
    fbthriftThriftTypesMap["binary"] = premadeThriftType_binary
    return fbthriftThriftTypesMap
}()

var structMetadatas = func() []*metadata.ThriftStruct {
    fbthriftResults := make([]*metadata.ThriftStruct, 0)
    fbthriftResults = append(fbthriftResults,
        &metadata.ThriftStruct{
            Name:    "module.GetEntityRequest",
            IsUnion: false,
            Fields:  []*metadata.ThriftField{
                &metadata.ThriftField{
                    Id:         1,
                    Name:       "id",
                    IsOptional: false,
                    Type:       premadeThriftType_string,
                },
            },
        },
    )
    fbthriftResults = append(fbthriftResults,
        &metadata.ThriftStruct{
            Name:    "module.GetEntityResponse",
            IsUnion: false,
            Fields:  []*metadata.ThriftField{
                &metadata.ThriftField{
                    Id:         1,
                    Name:       "entity",
                    IsOptional: false,
                    Type:       premadeThriftType_string,
                },
            },
        },
    )
    fbthriftResults = append(fbthriftResults,
        &metadata.ThriftStruct{
            Name:    "module.NonComparableStruct",
            IsUnion: false,
            Fields:  []*metadata.ThriftField{
                &metadata.ThriftField{
                    Id:         1,
                    Name:       "foo",
                    IsOptional: false,
                    Type:       premadeThriftType_string,
                },
                &metadata.ThriftField{
                    Id:         2,
                    Name:       "bar",
                    IsOptional: false,
                    Type:       premadeThriftType_list_string,
                },
                &metadata.ThriftField{
                    Id:         3,
                    Name:       "baz",
                    IsOptional: false,
                    Type:       premadeThriftType_map_module_NonComparableStruct_i64,
                },
            },
        },
    )
    return fbthriftResults
}()

var exceptionMetadatas = func() []*metadata.ThriftException {
    fbthriftResults := make([]*metadata.ThriftException, 0)
    return fbthriftResults
}()

var enumMetadatas = func() []*metadata.ThriftEnum {
    fbthriftResults := make([]*metadata.ThriftEnum, 0)
    return fbthriftResults
}()

var serviceMetadatas = func() []*metadata.ThriftService {
    fbthriftResults := make([]*metadata.ThriftService, 0)
    fbthriftResults = append(fbthriftResults,
        &metadata.ThriftService{
            Name:      "module.GetEntity",
            Functions: []*metadata.ThriftFunction{
                &metadata.ThriftFunction{
                    Name:       "getEntity",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_module_GetEntityResponse,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "r",
                            IsOptional: false,
                            Type:       premadeThriftType_module_GetEntityRequest,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getBool",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_bool,
                },
                &metadata.ThriftFunction{
                    Name:       "getByte",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_byte,
                },
                &metadata.ThriftFunction{
                    Name:       "getI16",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i16,
                },
                &metadata.ThriftFunction{
                    Name:       "getI32",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                },
                &metadata.ThriftFunction{
                    Name:       "getI64",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i64,
                },
                &metadata.ThriftFunction{
                    Name:       "getDouble",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_double,
                },
                &metadata.ThriftFunction{
                    Name:       "getString",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_string,
                },
                &metadata.ThriftFunction{
                    Name:       "getBinary",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_binary,
                },
                &metadata.ThriftFunction{
                    Name:       "getMap",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_map_string_string,
                },
                &metadata.ThriftFunction{
                    Name:       "getSet",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_set_string,
                },
                &metadata.ThriftFunction{
                    Name:       "getList",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_list_string,
                },
                &metadata.ThriftFunction{
                    Name:       "getLegacyStuff",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "numPos",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                        &metadata.ThriftField{
                            Id:         -1,
                            Name:       "numNeg1",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                        &metadata.ThriftField{
                            Id:         -2,
                            Name:       "numNeg2",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getCtxCollision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "ctx",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getCtx1Collision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "ctx",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                        &metadata.ThriftField{
                            Id:         2,
                            Name:       "ctx1",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getContextCollision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "context",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getOutCollision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "out",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getOut1Collision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "out",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                        &metadata.ThriftField{
                            Id:         2,
                            Name:       "out1",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getInCollision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "in",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getIn1Collision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "in",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                        &metadata.ThriftField{
                            Id:         2,
                            Name:       "in1",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getErrCollision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "err",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
                &metadata.ThriftFunction{
                    Name:       "getErr1Collision",
                    IsOneway:   false,
                    ReturnType: premadeThriftType_i32,
                    Arguments:  []*metadata.ThriftField{
                        &metadata.ThriftField{
                            Id:         1,
                            Name:       "err",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                        &metadata.ThriftField{
                            Id:         2,
                            Name:       "err1",
                            IsOptional: false,
                            Type:       premadeThriftType_i64,
                        },
                    },
                },
            },
        },
    )
    return fbthriftResults
}()

// Thrift metadata for this package, as well as all of its recursive imports.
var packageThriftMetadata = func() *metadata.ThriftMetadata {
    allEnumsMap := make(map[string]*metadata.ThriftEnum)
    allStructsMap := make(map[string]*metadata.ThriftStruct)
    allExceptionsMap := make(map[string]*metadata.ThriftException)
    allServicesMap := make(map[string]*metadata.ThriftService)

    // Add enum metadatas from the current program...
    for _, enumMetadata := range enumMetadatas {
        allEnumsMap[enumMetadata.GetName()] = enumMetadata
    }
    // Add struct metadatas from the current program...
    for _, structMetadata := range structMetadatas {
        allStructsMap[structMetadata.GetName()] = structMetadata
    }
    // Add exception metadatas from the current program...
    for _, exceptionMetadata := range exceptionMetadatas {
        allExceptionsMap[exceptionMetadata.GetName()] = exceptionMetadata
    }
    // Add service metadatas from the current program...
    for _, serviceMetadata := range serviceMetadatas {
        allServicesMap[serviceMetadata.GetName()] = serviceMetadata
    }

    // Obtain Thrift metadatas from recursively included programs...
    var recursiveThriftMetadatas []*metadata.ThriftMetadata

    // ...now merge metadatas from recursively included programs.
    for _, thriftMetadata := range recursiveThriftMetadatas {
        maps.Copy(allEnumsMap, thriftMetadata.GetEnums())
        maps.Copy(allStructsMap, thriftMetadata.GetStructs())
        maps.Copy(allExceptionsMap, thriftMetadata.GetExceptions())
        maps.Copy(allServicesMap, thriftMetadata.GetServices())
    }

    return metadata.NewThriftMetadata().
        SetEnums(allEnumsMap).
        SetStructs(allStructsMap).
        SetExceptions(allExceptionsMap).
        SetServices(allServicesMap)
}()

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata ThriftType for a given full type name.
func GetMetadataThriftType(fullName string) *metadata.ThriftType {
    return premadeThriftTypesMap[fullName]
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    return packageThriftMetadata
}

// GetThriftMetadataForService returns Thrift metadata for the given service.
func GetThriftMetadataForService(scopedServiceName string) *metadata.ThriftMetadata {
    allServicesMap := packageThriftMetadata.GetServices()
    relevantServicesMap := make(map[string]*metadata.ThriftService)

    serviceMetadata := allServicesMap[scopedServiceName]
    // Visit and record all recursive parents of the target service.
    for serviceMetadata != nil {
        relevantServicesMap[serviceMetadata.GetName()] = serviceMetadata
        if serviceMetadata.IsSetParent() {
            serviceMetadata = allServicesMap[serviceMetadata.GetParent()]
        } else {
            serviceMetadata = nil
        }
    }

    return metadata.NewThriftMetadata().
        SetEnums(packageThriftMetadata.GetEnums()).
        SetStructs(packageThriftMetadata.GetStructs()).
        SetExceptions(packageThriftMetadata.GetExceptions()).
        SetServices(relevantServicesMap)
}
