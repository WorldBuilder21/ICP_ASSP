#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Customer.h"
#include <string>
using namespace std;

class Account : public Customer
{
protected:
    double account_balance;

public:
    Account(string accountNumber, string firstName, string lastName, string date_of_birth, string gender, string address, string phone_no, string email, double initial_balance) : Customer(accountNumber, firstName, lastName, date_of_birth, gender, address, phone_no, email), account_balance(initial_balance) {}

    void credit(double credit) ;
    void debit(double debit) ;
    double getBalance() const;
    void setBalance(double new_balance);

};

#endif