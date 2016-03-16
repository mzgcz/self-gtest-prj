#include <gtest/gtest.h>
#include "../code.h"

TEST(PassTest, EqTest)
{
  EXPECT_EQ(1, give_input_num(1));
}

TEST(FailTest, EqTest)
{
  EXPECT_EQ(2, give_input_num(2));
}
