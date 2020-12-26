//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
#include "Bank.cpp"
using namespace std;

class Account
{
public:
//private:
    string Owner;
    long int AccountNumber;
    double Balance;
//public:
    Account();
    Account(string Owner_, long int AccountNumber_, double Balance_);
    void setOwner(string Owner_);
    string getOwner();
    void setAccountNumber(long int AccountNumber_);
    long int getAccountNumber();
    void setBalance(double Balance_);
    double getBalance();

    void AddAccount(string Owner_, long int AccountNumber_, double Balance_);
};