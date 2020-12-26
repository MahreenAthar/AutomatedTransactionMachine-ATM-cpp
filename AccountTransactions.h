//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
#include "Bank.cpp"
#include "Account.cpp"
#include <ctime>
using namespace std;

class AccountTransactions : public Account
{
private:
    string Province;
    string City;
    int Month;
    int Date;
    int Year;
    int TransactionID;
    double Amount;
public:
    AccountTransactions();
    AccountTransactions(string Province_, string City_, int Month_, int Date_, int Year_, int TransactionID_, double Amount_);
    void setProvince(string Province_);
    string getProvince();
    void setCity(string City_);
    string getCity();
    void setMonth(int Month_);
    int getMonth();
    void setDate(int Date_);
    int getDate();
    void setYear(int Year_);
    void setTransactionID(int TransactionID_);
    int getTransactionID();
    void setAmount(double Amount_);
    double getAmount();
    bool TransactionGrant(bool grant_);
    void Withdraw(double money_);
    //void Deduct();
    void Transfer(double money_);
    void Statement();
};