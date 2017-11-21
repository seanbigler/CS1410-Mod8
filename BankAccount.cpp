//
// Created by w01164264 on 11/21/2017.
//

#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
    cout << "Constructing bank account." << endl;
}

BankAccount::~BankAccount()
{
    cout << "Destructing bank account." << endl;
}

int BankAccount::getBalanceInPennies() const
{
    return balanceInPennies;
}

void BankAccount::setBalanceInPennies(int balanceInPennies)
{
    BankAccount::balanceInPennies = balanceInPennies;
}

bool BankAccount::operator<(const BankAccount &b2)
{
    return balanceInPennies < b2.balanceInPennies;
}
