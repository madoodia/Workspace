/* madoodia@gmail.com
(C) 2019
------------------ */

#include <cstdio>

#include <ostream>

#include <gtest/gtest.h>

struct BanckAccount
{
    float balance = 0.00;

    BanckAccount() {}
    explicit BanckAccount(float bal) : balance(bal) {}
    void deposite(float value) { balance += value; }
    bool withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            return true;
        }
        return false;
    }
};

// Regular Tests --------------------------------------------
TEST(Test1, TestEquality1)
{
    BanckAccount account;
    GTEST_ASSERT_EQ(account.balance, 0.00);
}

TEST(Test2, TestEquality2)
{
    BanckAccount account;
    EXPECT_EQ(0.00, account.balance);
}

TEST(Test3, TestLessThanOrEquality)
{
    BanckAccount account;
    GTEST_ASSERT_LE(account.balance, 10.00);
}
// ----------------------------------------------------------

struct BanckAccountFixture : testing::Test
{
    BanckAccount *account;
    void SetUp() // Same as constructor
    {
        account = new BanckAccount;
    }

    void TearDown() // Same as destructor
    {
        delete account;
    }
};
// Fixture Tests --------------------------------------------
TEST_F(BanckAccountFixture, TestEqualityWithFixture)
{
    GTEST_ASSERT_EQ(account->balance, 0.00);
}

TEST_F(BanckAccountFixture, CanDepositMoney)
{
    account->deposite(100.00);
    GTEST_ASSERT_EQ(account->balance, 100.00);
    // GTEST_ASSERT_LE(account->balance, 10.00); // error: Expected: (account->balance) <= (10.00), actual: 100 vs 10
}
// ----------------------------------------------------------
struct AccountStates
{
    float initialBalance;
    float withdrawAmount;
    float finalBalance;
    bool success;

    friend std::ostream &operator<<(std::ostream &stream, const AccountStates &obj)
    {
        stream << "initialBalance: " << obj.initialBalance
               << " withdrawAmount: " << obj.withdrawAmount
               << " finalBalance: " << obj.finalBalance
               << " success: " << obj.success;
        return stream;
    }
};

struct WithdrawAccountFixture : BanckAccountFixture, testing::WithParamInterface<AccountStates>
{
    void SetUp() // Same as constructor
    {
        account->balance = GetParam().initialBalance;
    }
};

TEST_P(WithdrawAccountFixture, FinalBalance)
{
    auto as = GetParam();
    auto success = account->withdraw(as.withdrawAmount);
    // EXPECT_EQ(as.finalBalance, account->balance);
    ASSERT_EQ(as.success, success);
}

INSTANTIATE_TEST_CASE_P(Default,
                        WithdrawAccountFixture,
                        testing::Values(
                            AccountStates{100, 50, 50, true},
                            AccountStates{100, 200, 100, false}));

int main(int argc, char *argv[])
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    // printf("\n-------------------------\n");
    // printf("------- After Tests -------\n");

    // return 0;
}
