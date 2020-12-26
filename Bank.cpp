//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
#include "Bank.h"
using namespace std;

Bank::Bank()
{
    BankName = '\0';
    BankCode = 0;
    Province = '\0';
    City = '\0';
}
Bank::Bank(string BankName_, int BankCode_, string Province_, string City_)
{
    BankName = BankName_;
    BankCode = BankCode_;
    Province = Province_;
    City = City_;
}
void Bank::setBankName(string BankName_)
{
    BankName = BankName_;
}
string Bank::getBankName()
{
    return BankName;
}
void Bank::setBankCode(int BankCode_)
{
    BankCode = BankCode_;
}
int Bank::getBankCode()
{
    return BankCode;
}
void Bank::setProvince(string Province_)
{
    Province = Province_;
}
string Bank::getProvince()
{
    return Province;
}
void Bank::setCity(string City_)
{
    City = City_;
}
string Bank::getCity()
{
    return City;
}