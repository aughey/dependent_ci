#include <gtest/gtest.h>
#include "local/Hello.h"

TEST(localHelloTests, BasicAssertions)
{
    EXPECT_STREQ(local::Hello::HelloString().c_str(), "Local: Hello, World!");
}