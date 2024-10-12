#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

class Transaction {
private:
    string date; 
    string tran_type;
    double amount;

public:
    Transaction(string type, double amount);
    void displayTransaction() const;
    string getType() const;
    double getAmount() const;
};

#endif