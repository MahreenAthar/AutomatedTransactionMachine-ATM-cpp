//19I-1712
//Mahreen Athar
//BS(DS-N)
#ifndef AAA_HEADER
#define AAA_HEADER
#include "Account.h"
using namespace std;

Account::Account()
{
    Owner = '\0';
    AccountNumber = 0;
    Balance = 0;
}
Account::Account(string Owner_, long int AccountNumber_, double Balance_)
{
    Owner = Owner_;
    AccountNumber = AccountNumber_;
    Balance = Balance_;
}
void Account::setOwner(string Owner_)
{
    Owner = Owner_;
}
string Account::getOwner()
{
    return Owner;
}
void Account::setAccountNumber(long int AccountNumber_)
{
    AccountNumber = AccountNumber_;
}
long int Account::getAccountNumber()
{
    return AccountNumber;
}
void Account::setBalance(double Balance_)
{
    Balance = Balance_;
}
double Account::getBalance()
{
    return Balance;
}

void Account::AddAccount(string Owner_, long int AccountNumber_, double Balance_)
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
#endif