#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"
#include <string>
#include <iostream>

class CheckingAccount : public Account
{
private:
    double fee;

public:
    CheckingAccount(string accountNumber, string firstName, string lastName, string date_of_birth, string gender, string address, string phone_no, string email, double initial_balance, double fee);

    void credit(double credit) ;
    void debit(double debit) ;
};

#endif