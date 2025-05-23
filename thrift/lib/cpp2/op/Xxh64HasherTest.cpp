/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/cpp2/hash/DeterministicHash.h>
#include <thrift/lib/cpp2/op/Xxh64Hasher.h>
#include <thrift/lib/rust/deterministic_hash/src/tests/gen-cpp2/test_structs_constants.h>
#include <thrift/lib/rust/deterministic_hash/src/tests/gen-cpp2/test_structs_types.h>
#include <thrift/lib/rust/deterministic_hash/src/tests/gen-cpp2/test_structs_types_custom_protocol.h>

#include <cstdint>

#include <gtest/gtest.h>
#include <folly/Range.h>
#include <folly/io/IOBuf.h>

using apache::thrift::hash::deterministic_hash;

namespace apache::thrift::op {

TEST(Xxh64HasherTest, checkCombineBool) {
  Xxh64Hasher hasher1;
  hasher1.combine(true);
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.combine(false);
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());
}

TEST(Xxh64HasherTest, checkCombineInt8) {
  Xxh64Hasher hasher1;
  hasher1.combine(static_cast<std::int8_t>(-1));
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.combine(static_cast<std::int8_t>(0));
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());
  Xxh64Hasher hasher3;
  hasher3.combine(static_cast<std::int8_t>(+1));
  hasher3.finalize();
  EXPECT_NE(hasher2.getResult(), hasher3.getResult());
}

TEST(Xxh64HasherTest, checkCombineInt16) {
  Xxh64Hasher hasher1;
  hasher1.combine(static_cast<std::int16_t>(-1));
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.combine(static_cast<std::int16_t>(0));
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());
  Xxh64Hasher hasher3;
  hasher3.combine(static_cast<std::int16_t>(+1));
  hasher3.finalize();
  EXPECT_NE(hasher2.getResult(), hasher3.getResult());
}

TEST(Xxh64HasherTest, checkCombineInt32) {
  Xxh64Hasher hasher1;
  hasher1.combine(static_cast<std::int32_t>(-1));
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.combine(static_cast<std::int32_t>(0));
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());
  Xxh64Hasher hasher3;
  hasher3.combine(static_cast<std::int32_t>(+1));
  hasher3.finalize();
  EXPECT_NE(hasher2.getResult(), hasher3.getResult());
}

TEST(Xxh64HasherTest, checkCombineInt64) {
  Xxh64Hasher hasher1;
  hasher1.combine(static_cast<std::int64_t>(-1));
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.combine(static_cast<std::int64_t>(0));
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());
  Xxh64Hasher hasher3;
  hasher3.combine(static_cast<std::int64_t>(+1));
  hasher3.finalize();
  EXPECT_NE(hasher2.getResult(), hasher3.getResult());
}

TEST(Xxh64HasherTest, checkCombineFloat) {
  Xxh64Hasher hasher1;
  hasher1.combine(static_cast<float>(-1.0));
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.combine(static_cast<float>(0.0));
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());
  Xxh64Hasher hasher3;
  hasher3.combine(static_cast<float>(+1.0));
  hasher3.finalize();
  EXPECT_NE(hasher2.getResult(), hasher3.getResult());
}

TEST(Xxh64HasherTest, checkCombineDouble) {
  Xxh64Hasher hasher1;
  hasher1.combine(static_cast<double>(-1.0));
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.combine(static_cast<double>(0.0));
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());
  Xxh64Hasher hasher3;
  hasher3.combine(static_cast<double>(+1.0));
  hasher3.finalize();
  EXPECT_NE(hasher2.getResult(), hasher3.getResult());
}

TEST(Xxh64HasherTest, checkCombineIOBuf) {
  Xxh64Hasher hasher1;
  hasher1.finalize();
  Xxh64Hasher hasher2;
  auto bufA = folly::IOBuf::wrapBuffer(folly::range("abc"));
  hasher2.combine(*bufA);
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());

  Xxh64Hasher hasher3;
  Xxh64Hasher hasherCopy;
  auto bufB = folly::IOBuf::wrapBuffer(folly::range("def"));
  hasherCopy.combine(*bufA);
  hasherCopy.combine(*bufB);
  hasherCopy.finalize();
  bufA->prependChain(std::move(bufB));
  hasher3.combine(*bufA);
  hasher3.finalize();
  EXPECT_EQ(hasherCopy.getResult(), hasher3.getResult());
}

TEST(Xxh64HasherTest, checkCombineChainedIOBuf) {
  Xxh64Hasher hasher1, hasher2;
  auto bufA = folly::IOBuf::wrapBuffer("abc", 3);
  auto bufB = folly::IOBuf::wrapBuffer("def", 3);
  bufA->prependChain(std::move(bufB));
  hasher1.combine(*bufA);
  hasher2.combine(*folly::IOBuf::wrapBuffer("abcdef", 6));
  hasher1.finalize();
  hasher2.finalize();
  EXPECT_EQ(hasher1.getResult(), hasher2.getResult());
}

TEST(Xxh64HasherTest, checkCombineByteRange) {
  Xxh64Hasher hasher1;
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.combine(folly::range("abc"));
  hasher2.finalize();
  EXPECT_NE(hasher1.getResult(), hasher2.getResult());
  Xxh64Hasher hasher3;
  hasher3.combine(folly::range("abc"));
  hasher3.combine(folly::range(""));
  hasher3.finalize();
  EXPECT_NE(hasher3.getResult(), hasher2.getResult());
}

TEST(Xxh64HasherTest, checkCombineXxh64Hasher) {
  Xxh64Hasher hasher1;
  hasher1.finalize();

  Xxh64Hasher hasher4;
  hasher4.combine(folly::range("abc"));
  hasher4.finalize();
  Xxh64Hasher hasher5;
  hasher5.combine(hasher4);
  hasher5.finalize();
  EXPECT_NE(hasher1.getResult(), hasher5.getResult());
  EXPECT_NE(hasher4.getResult(), hasher5.getResult());
}

TEST(Xxh64HasherTest, checkLess) {
  Xxh64Hasher hasher1;
  hasher1.combine(folly::range("abc"));
  hasher1.finalize();
  Xxh64Hasher hasher2;
  hasher2.finalize();
  EXPECT_TRUE(hasher2 < hasher1);
  Xxh64Hasher hasher3;
  hasher3.combine(folly::range("abc"));
  hasher3.finalize();
  EXPECT_FALSE(hasher1 < hasher3);
  EXPECT_FALSE(hasher3 < hasher1);
}

TEST(Xxh64HasherTest, e2eSimpleStruct) {
  SimpleStruct1 s;
  s.byte_() = 8;
  s.i_16() = 12;
  s.i_32() = 1;
  s.i_64() = 2;
  s.f_32() = 1.0;
  s.f_64() = 2.0;
  s.str_with_value() = "abc";
  s.str_empty() = "";
  s.bool_true() = true;
  s.bool_false() = false;
  s.binary_() = {{1, 2, 3}};
  auto result = hash::deterministic_hash<Xxh64Hasher>(s);
  EXPECT_EQ(result, 3750621144346093671UL);
}

TEST(Xxh64HasherTest, e2eComplexStruct) {
  ComplexStruct s;

  s.l() = {"a", "ab", "abc"};
  s.s() = {"a", "ab", "abc"};
  s.m() = {{"aa", "bb"}, {"cc", "dd"}, {"ee", "ff"}};
  s.ml() = {
      {"aa", {1, 2, 3}},
      {"bb", {}},
      {"cc", {3, 2}},
      {"ee",
       {
           1,
           2,
           3,
       }},
      {"ff", {}}};

  s.mm() = {
      {"aa", {{1, 2}}},
      {"bb", {}},
      {"cc", {{2, 3}, {3, 2}}},
      {"ee", {{3, 4}}},
      {"ff", {}}};

  auto result = hash::deterministic_hash<Xxh64Hasher>(s);
  EXPECT_EQ(result, 2487349242360451610UL);
}

} // namespace apache::thrift::op
