#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

class SavingsAccount : public Account
{
private:
    double interest_rate;

public:
    SavingsAccount(string accountNumber, string firstName, string lastName, string date_of_birth, string gender, string address, string phone_no, string email, double initial_balance, double rate);


    double calculateInterest() const;
};

#endif