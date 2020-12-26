//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
#include "Bank.cpp"
#include "Account.cpp"
#include "AccountTransactions.h"
using namespace std;

AccountTransactions::AccountTransactions()
{
    Province = '\0';
    City = '\0';
    Month = 0;
    Date = 0;
    Year = 0;
    TransactionID = 0;
    Amount = 0.00;
}
AccountTransactions::AccountTransactions(string Province_, string City_, int Month_, int Date_, int Year_, int TransactionID_, double Amount_)
{
    Province = Province_;
    City = City_;
    Month = Month_;
    Date = Date_;
    Year = Year_;
    TransactionID = TransactionID_;
    Amount = Amount_;
}
void AccountTransactions::setProvince(string Province_)
{
    Province = Province_;
}
string AccountTransactions::getProvince()
{
    return Province;
}
void AccountTransactions::setCity(string City_)
{
    City = City_;
}
string AccountTransactions::getCity()
{
    return City;
}
void AccountTransactions::setMonth(int Month_)
{
    Month = Month_;
}
int AccountTransactions::getMonth()
{
    return Month;
}
void AccountTransactions::setDate(int Date_)
{
    Date = Date_;
}
int AccountTransactions::getDate()
{
    return Date;
}
void AccountTransactions::setYear(int Year_)
{
    Year = Year_;
}
void AccountTransactions::setTransactionID(int TransactionID_)
{
    TransactionID = TransactionID_;
}
int AccountTransactions::getTransactionID()
{
    return TransactionID;
}
void AccountTransactions::setAmount(double Amount_)
{
    Amount = Amount_;
}
double AccountTransactions::getAmount()
{
    return Amount;
}

bool AccountTransactions::TransactionGrant()
{
    bool grant = true;
    return grant;
}
void AccountTransactions::Withdraw()
{
    cout<<"Withdrawal Successful."<<endl;
}
void AccountTransactions::Deduct()
{
    cout<<"Deducted."<<endl;
}
void AccountTransactions::Transfer()
{
    cout<<"Transfer successful."<<endl;
}
void AccountTransactions::Statement()
{
    cout<<"Mini Statement."<<endl;
}