// Autogenerated by Thrift for thrift/annotation/go.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package go_


import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.VOID

// Premade codec specs
var (
    premadeCodecTypeSpec_string = &thrift.TypeSpec{
        FullName: "string",
        CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

    }
    premadeCodecTypeSpec_go_Name = &thrift.TypeSpec{
        FullName: "go.Name",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "go.Name",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewName() },
},

    }
    premadeCodecTypeSpec_go_Tag = &thrift.TypeSpec{
        FullName: "go.Tag",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "go.Tag",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewTag() },
},

    }
    premadeCodecTypeSpec_go_MinimizePadding = &thrift.TypeSpec{
        FullName: "go.MinimizePadding",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "go.MinimizePadding",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewMinimizePadding() },
},

    }
    premadeCodecTypeSpec_go_UseReflectCodec = &thrift.TypeSpec{
        FullName: "go.UseReflectCodec",
        CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "go.UseReflectCodec",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewUseReflectCodec() },
},

    }
)

// Premade struct specs
var (
    premadeStructSpec_Name = &thrift.StructSpec{
    Name:                 "Name",
    ScopedName:           "go.Name",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
    },
}
    premadeStructSpec_Tag = &thrift.StructSpec{
    Name:                 "Tag",
    ScopedName:           "go.Tag",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "tag",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "tag": 0,
    },
}
    premadeStructSpec_MinimizePadding = &thrift.StructSpec{
    Name:                 "MinimizePadding",
    ScopedName:           "go.MinimizePadding",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    premadeStructSpec_UseReflectCodec = &thrift.StructSpec{
    Name:                 "UseReflectCodec",
    ScopedName:           "go.UseReflectCodec",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
)

var premadeCodecSpecsMap = func() map[string]*thrift.TypeSpec {
    fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_string.FullName] = premadeCodecTypeSpec_string
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_go_Name.FullName] = premadeCodecTypeSpec_go_Name
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_go_Tag.FullName] = premadeCodecTypeSpec_go_Tag
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_go_MinimizePadding.FullName] = premadeCodecTypeSpec_go_MinimizePadding
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_go_UseReflectCodec.FullName] = premadeCodecTypeSpec_go_UseReflectCodec
    return fbthriftTypeSpecsMap
}()

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMap[fullName]
}
