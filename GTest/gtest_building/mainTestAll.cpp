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
    ASSERT_EQ(account.balance, 0.00);
}

int main(int argc, char *argv[])
{

    printf("Here\n");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
