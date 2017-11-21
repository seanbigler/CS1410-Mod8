//
// Created by w01164264 on 11/21/2017.
//

#ifndef MOD8_BANKACCOUNT_H
#define MOD8_BANKACCOUNT_H


class BankAccount
{
private:
    int balanceInPennies;   // TODO
public:
    BankAccount();
    ~BankAccount();

    int getBalanceInPennies() const;
    void setBalanceInPennies(int balanceInPennies);

    bool operator < (const BankAccount &b2);
};


#endif //MOD8_BANKACCOUNT_H
