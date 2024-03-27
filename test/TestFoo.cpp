#include "TestFoo.h"

TestFoo::TestFoo() {

}

TestFoo::~TestFoo() {

}

void TestFoo::SetUp() {

}

void TestFoo::TearDown() {

}

void TestFoo::SetUpTestCase() {

}

void TestFoo::TearDownTestCase() {

}

TEST_F(TestFoo, add) {
    Foo foo;
    EXPECT_EQ(foo.add(1, 2), 3);
}
