#include "gtest/gtest.h"
#include "foo.h"

#ifndef _TESTFOO_H_
#define _TESTFOO_H_

// Class declaration
class TestFoo;

class TestFoo : public ::testing::Test {

protected:
    TestFoo();
    virtual ~TestFoo();

    virtual void SetUp();
    virtual void TearDown();

    static void SetUpTestCase();
    static void TearDownTestCase();
};

#endif //_TESTFOO_H_
/* EOF */
