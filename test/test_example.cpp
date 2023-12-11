#include <gtest/gtest.h>
#include <physics/engine/example.hpp>

TEST(ToggleTest, ToggleTrueToFalse)
{
    EXPECT_FALSE(false);
}

TEST(ToggleTest, ToggleFalseToTrue)
{
    EXPECT_TRUE(true);
}
