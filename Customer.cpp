//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
#include "Bank.cpp"
#include "Customer.h"
using namespace std;

Customer::Customer()
{
    CustomerName = '\0';
    Province = '\0';
    City = '\0';
    Month = 0;
    Date = 0;
    Year = 0;
}
Customer::Customer(string CustomerName_, string Province_, string City_, int Month_, int Date_, int Year_)
{
    CustomerName = CustomerName_;
    Province = Province_;
    City = City_;
    Month = Month_;
    Date = Date_;
    Year = Year_;
}
void Customer::setCustomerName(string CustomerName_)
{
    CustomerName = CustomerName_;
}
string Customer::getCustomerName()
{
    return CustomerName;
}
void Customer::setProvince(string Province_)
{
    Province = Province_;
}
string Customer::getProvince()
{
    return Province;
}
void Customer::setCity(string City_)
{
    City = City_;
}
string Customer::getCity()
{
    return City;
}
void Customer::setMonth(int Month_)
{
    Month = Month_;
}
int Customer::getMonth()
{
    return Month;
}
void Customer::setDate(int Date_)
{
    Date = Date_;
}
int Customer::getDate()
{
    return Date;
}
void Customer::setYear(int Year_)
{
    Year = Year_;
}
int Customer::getYear()
{
    return Year;
}