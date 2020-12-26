//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
using namespace std;

class Bank
{
private:
    string BankName;
    int BankCode;
    string Province;
    string City;
public:
    Bank();
    Bank(string BankName_, int BankCode_, string Province_, string City_);
    void setBankName(string BankName_);
    string getBankName();
    void setBankCode(int BankCode_);
    int getBankCode();
    void setProvince(string Province_);
    string getProvince();
    void setCity(string City_);
    string getCity();
};