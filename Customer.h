//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
#include "Bank.cpp"
using namespace std;

class Customer : public Bank
{
private:
    string CustomerName;
    string Province;
    string City;
    int Month;
    int Date;
    int Year;
public:
    Customer();
    Customer(string CustomerName_, string Province_, string City_, int Month_, int Date_, int Year_);
    void setCustomerName(string CustomerName_);
    string getCustomerName();
    void setProvince(string Province_);
    string getProvince();
    void setCity(string City_);
    string getCity();
    void setMonth(int Month_);
    int getMonth();
    void setDate(int Date_);
    int getDate();
    void setYear(int Year_);
    int getYear();
};