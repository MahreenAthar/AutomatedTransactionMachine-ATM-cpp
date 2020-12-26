//19I-1712
//Mahreen Athar
//BS(DS-N)
#include<iostream>
#include<cstring>
#include "Bank.cpp"
#include "Account.cpp"
#include "DebitCard.h"
using namespace std;

DebitCard::DebitCard()
{
    PIN = 0;
    CardNO = 0;
    Owner = '\0';
}
DebitCard::DebitCard(int PIN_, long int CardNO_, string Owner_)
{
    PIN = PIN_;
    CardNO = CardNO_;
    Owner = Owner_;
}
void DebitCard::setPIN(int PIN_)
{
    PIN = PIN_;
}
int DebitCard::getPIN()
{
    return PIN;
}
void DebitCard::setCardNO(long int CardNO_)
{
    CardNO = CardNO_;
}
long int DebitCard::getCardNO()
{
    return CardNO;
}
void DebitCard::setOwner(string Owner_)
{
    Owner = Owner_;
}
string DebitCard::getOwner()
{
    return Owner;
}

bool DebitCard::Access()
{
    bool access = true;
    return access;
}
void DebitCard::ChangePIN(int PIN_)
{
    PIN = PIN_;
    cout<<"PIN Changed Successfully."<<endl;
    cout<<"Your new PIN is: "<<PIN<<endl;
}