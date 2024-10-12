#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer
{
protected:
    string accountNumber;
    string firstName;
    string lastName;
    string date_of_birth;
    string gender;
    string address;
    string phone_no;
    string email;
public:
    Customer(string accountNumber, string firstName, string lastName, string date_of_birth, string gender, string address, string phone_no, string email);

    void setAccountNumber(string setAccountNumber);
    void setFirstName(string setFirstName);
    void setLastName(string setLastName);
    void setDateOfBirth(string setDob);
    void setGender(string setGender);
    void setAddress(string setAddress);
    void setPhoneNumber(string setPhoneNumber);
    void setEmail(string setEmail);

    string getAccountNumber()const;
    string getFirstName()const;
    string getLastName()const;
    string  getDateOfBirth()const;
    string getGender()const;
    string getAddress()const;
    string getPhoneNumber()const;
    string getEmail()const;
};

#endif

