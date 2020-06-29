
#ifndef BANK_H
#define BANK_H

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

#endif // BANK_H