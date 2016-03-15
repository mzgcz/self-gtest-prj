#include <gtest/gtest.h>

TEST(PassTest, EqTest)
{
  EXPECT_EQ(1, 1);
}

TEST(FailTest, EqTest)
{
  EXPECT_EQ(1, 2);
}
