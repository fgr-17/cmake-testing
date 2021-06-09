#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <class-a.hpp>
#include <Example.hpp>

#include "mock-class-a.h"


TEST(ExampleTest, DemoGtest) {

    EXPECT_TRUE(true);
}

TEST(ExampleTest, is_greater_10_test) {

    EXPECT_TRUE(is_greater_10(11));
    EXPECT_FALSE(is_greater_10(4));
    EXPECT_FALSE(is_greater_10(3));
}