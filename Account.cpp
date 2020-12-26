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
    Account()
    {
        Owner = '\0';
        AccountNumber = 0;
        Balance = 0;
    }
    Account(string Owner_, long int AccountNumber_, double Balance_)
    {
        Owner = Owner_;
        AccountNumber = AccountNumber_;
        Balance = Balance_;
    }
    void setOwner(string Owner_)
    {
        Owner = Owner_;
    }
    string getOwner()
    {
        return Owner;
    }
    void setAccountNumber(long int AccountNumber_)
    {
        AccountNumber = AccountNumber_;
    }
    long int getAccountNumber()
    {
        return AccountNumber;
    }
    void setBalance(double Balance_)
    {
        Balance = Balance_;
    }
    double getBalance()
    {
        return Balance;
    }

    void AddAccount(string Owner_, long int AccountNumber_, double Balance_)
    {
        cout<<"Enter Account Owner Name: "<<endl;
        cin>>Owner_;
        Owner = Owner_;
        cout<<"Enter New Account Number: "<<endl;
        cin>>AccountNumber_;
        AccountNumber = AccountNumber_;
        cout<<"Enter your current Balance: "<<endl;
        cin>>Balance_;
        Balance = Balance_;
    }
};