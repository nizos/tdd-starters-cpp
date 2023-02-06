#include <gtest/gtest.h>
#include "example.h"

TEST(example, greet)
{
    ASSERT_EQ(greet(), "Hello World!");
}
