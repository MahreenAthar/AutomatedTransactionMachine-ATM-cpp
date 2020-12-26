//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
#include "Bank.cpp"
#include "Account.cpp"
using namespace std;

class DebitCard : public Account
{
private:
    int PIN;
    long int CardNO;
    string Owner;
public:
    DebitCard();
    DebitCard(int PIN_, long int CardNO_, string Owner_);
    void setPIN(int PIN_);
    int getPIN();
    void setCardNO(long int CardNO_);
    long int getCardNO();
    void setOwner(string Owner_);
    string getOwner();
    bool Access();
    void ChangePIN(int PIN_);
};