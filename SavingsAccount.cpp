#include "SavingsAccount.h"
#include "Account.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

SavingsAccount::SavingsAccount(string accountNumber, string firstName, string lastName, string date_of_birth, string gender, string address, string phone_no, string email, double initial_balance, double rate) 
: Account(accountNumber, firstName, lastName, date_of_birth, gender, address, phone_no, email, initial_balance), interest_rate(rate){}

double SavingsAccount::calculateInterest() const{
    return getBalance() * interest_rate;
}

