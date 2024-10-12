#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(string accountNumber, string firstName, string lastName, string date_of_birth, string gender, string address, string phone_no, string email)
    : accountNumber(accountNumber), firstName(firstName), lastName(lastName), date_of_birth(date_of_birth), gender(gender), address(address), phone_no(phone_no), email(email){}



void Customer::setAccountNumber(string setAccountNumber)
{
    accountNumber = setAccountNumber;
}

void Customer::setFirstName(string setFirstName)
{
    firstName = setFirstName;
}

void Customer::setLastName(string setLastName)
{
    lastName = setLastName;
}

void Customer::setDateOfBirth(string setDob)
{
    date_of_birth = setDob;
}

void Customer::setGender(string setGender)
{
    gender = setGender;
}

void Customer::setAddress(string setAddress)
{
    address = setAddress;
}

void Customer::setPhoneNumber(string setPhoneNumber)
{
    phone_no = setPhoneNumber;
}

void Customer::setEmail(string setEmail)
{
    email = setEmail;
}

string Customer::getAccountNumber() const
{
    return accountNumber;
}

string Customer::getFirstName() const
{
    return firstName;
}

string Customer::getLastName() const
{
    return lastName;
}

string Customer::getDateOfBirth() const
{
    return date_of_birth;
}

string Customer::getGender() const
{
    return gender;
}

string Customer::getAddress() const
{
    return address;
}

string Customer::getPhoneNumber() const
{
    return phone_no;
}

string Customer::getEmail() const
{
    return email;
}
