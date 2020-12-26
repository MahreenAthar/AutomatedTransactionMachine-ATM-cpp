//19I-1712
//Mahreen Athar
//BS(DS-N)
#ifndef AAA_HEADER
#define AAA_HEADER
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

bool AccountTransactions::TransactionGrant(bool grant_)
{
    bool grant = grant_;
    return grant;
}
void AccountTransactions::Withdraw(double money_)
{
    if(Balance < money_)
    {
        TransactionGrant(true);
        Balance = Balance - money_;
        cout<<"Withdrawal Successful."<<endl;
    }
    else
    {
        TransactionGrant(false);
        cout<<"Withdrawal Error."<<endl;
        cout<<"Sorry the amount you have entered succeeds your current balance."<<endl;       
    }

}
// void AccountTransactions::Deduct()
// {
//     cout<<"Deducted."<<endl;
// }
void AccountTransactions::Transfer(double money_)
{
    Account account_;
    cout<<"Enter the account number to which you want to transfer money: "<<endl;
    cin>>account_.AccountNumber;
    cout<<"Enter account owner's name: "<<endl;
    cin>>account_.Owner;

    account_.Balance = account_.Balance + money_;
    
    cout<<"You have successfully tansferred the money."<<endl;
}
void AccountTransactions::Statement()
{
    cout<<"Mini Statement."<<endl;
    cout<<"Account Owner: "<<Owner<<endl;
    cout<<"Account Number: "<<AccountNumber<<endl;
    cout<<"Your current balance is: "<<Balance<<endl;
    cout<<""<<endl;
}
#endif