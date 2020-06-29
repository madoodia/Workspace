#include <gtest/gtest.h>

#include "bank.h"

// Regular Tests --------------------------------------------
TEST(Test1, TestEquality1)
{
  BanckAccount account;
  ASSERT_EQ(account.balance, 0.00);
}

TEST(Test2, TestEquality1)
{
  BanckAccount account;
  ASSERT_EQ(account.balance, 0.00);
}