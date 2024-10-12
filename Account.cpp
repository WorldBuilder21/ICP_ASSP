#include <iostream>
#include <string>
#include "Customer.h"
#include "Account.h"
using namespace std;

Account::Account(string accountNumber, string firstName, string lastName, string date_of_birth, string gender, string address, string email, string phone_no, double initial_balance)
    : Customer(accountNumber, firstName, lastName, date_of_birth, gender, address, email, phone_no)
{
    account_balance = initial_balance;
    if (initial_balance >= 0)
    {
        account_balance = initial_balance;
    }
    else
    {
        account_balance = 0.0;
        cout << "The initial balance is invalid" << endl;
    }
}

void Account::credit(double credit) 
{
    account_balance += credit;
}

void Account::debit(double debit) 
{
    if (account_balance >= debit)
    {
        account_balance -= debit;
    }
    else
    {
        cout << "Not enough funds available in account for withdrawal" << endl;
    }
}

double Account::getBalance() const
{
    return account_balance;
}

void Account::setBalance(double new_balance)
{
    account_balance = new_balance;
}
