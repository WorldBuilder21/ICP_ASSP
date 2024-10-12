#include "Transaction.h"
#include <iostream>
#include <string>

Transaction::Transaction(string type, double amount)
{
    tran_type = type;
    this->amount = amount;
}

void Transaction::displayTransaction() const
{
    cout << "Transaction type: " << tran_type << endl;
    cout << "Amount: " << amount << endl;
}

string Transaction::getType() const
{
    return tran_type;
}

double Transaction::getAmount() const
{
    return amount;
}