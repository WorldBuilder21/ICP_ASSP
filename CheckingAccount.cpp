#include "CheckingAccount.h"
#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

CheckingAccount::CheckingAccount(string accountNumber, string firstName, string lastName, string date_of_birth, string gender, string address, string phone_no, string email, double initial_balance, double fee)
    : Account(accountNumber, firstName, lastName, date_of_birth, gender, address, phone_no, email, initial_balance), fee(fee) {};

void CheckingAccount::credit(double credit)  {
    Account::credit(credit);
    setBalance(getBalance() - fee);
}

void CheckingAccount::debit(double debit)  {
    if(debit > getBalance()){
        cout << "Insufficient funds" << endl;
    } else {
        Account::debit(debit);
        setBalance(getBalance() - fee);
    }
}