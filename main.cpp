#include<iostream>
#include<cstring>
#include "Bank.h"
#include "Customer.h"
#include "AccountTransactions.h"
#include "DebitCard.h"
#include "Account.h"
using namespace std;

int main()
{
    Bank bank_;
    Account account_;
    Customer customer_;
    DebitCard debitcard_;
    AccountTransactions accounttransactions_;
    
    string bankname, bprovince, bcity;
    int bankcode;
    cout<<"Bank Details: "<<endl;
    cout<<"Enter name of your bank: "<<endl;
    cin>>bankname;
    cout<<"Enter code of your bank: "<<endl;
    cin>>bankcode;
    cout<<"Enter the address of your bank(Province and City): "<<endl;
    cin>>bprovince>>bcity;
    cout<<"Bank Details Saved."<<endl;
    cout<<"-----------------------------------------------------------"<<endl<<endl;
    
    string cname, cprovince, ccity;
    int cmonth, cdate, cyear;
    cout<<"Customer Details: "<<endl;
    cout<<"Enter customer's name: "<<endl;
    cin>>cname;
    cout<<"Enter Customer's Address(Province and City): "<<endl;
    cin>>cprovince>>ccity;
    cout<<"Enter customer's DOB(Month/Date/Year): "<<endl;
    cin>>cmonth>>cdate>>cyear;
    cout<<"Customer Details Saved."<<endl;
    cout<<"-----------------------------------------------------------"<<endl<<endl;

    string owner;
    int accountnumber;
    double balance;
    cout<<"Customer's Account Details: "<<endl;
    cout<<"Enter account owner's name: "<<endl;
    cin>>owner;
    cout<<"Enter Account Number: "<<endl;
    cin>>accountnumber;
    cout<<"Enter current Balance: "<<endl;
    cin>>balance;
    cout<<"Account Details Saved."<<endl;
    cout<<"-----------------------------------------------------------"<<endl<<endl;
    
    int pin, cardno;
    string cardowner;
    cout<<"Card Details: "<<endl;
    cout<<"Enter your PIN: "<<endl;
    cin>>pin;
    cout<<"Enter card number: "<<endl;
    cin>>cardno;
    cout<<"Enter card owner's name: "<<endl;
    cin>>cardowner;
    cout<<"Card Details Saved."<<endl;
    cout<<"-----------------------------------------------------------"<<endl<<endl;

    char ans;
    cout<<"Do you want to make any Transactions?(y/n)"<<endl;
    cin>>ans;
    if(ans == 'y')
    {
        char choice;
        cout<<"Please a number corresponding the operation: "<<endl;
        cout<<"1) Withdraw Money"<<endl;
        cout<<"2) Transfer Money"<<endl;
        cout<<"3) Bank Statement"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
        {
            double amount;
            cout<<"Enter the amount you want to withdraw: "<<endl;
            cin>>amount;
            accounttransactions_.Withdraw(amount);
            break;
        }
        case 2:
        {
            double amount;
            cout<<"Enter the amount you want to transfer: "<<endl;
            cin>>amount;
            accounttransactions_.Transfer(amount);
            break;
        }
        case 3:
        {
            accounttransactions_.Statement();
        }
        
        default:
            break;
        }
    }
    else
    {
        cout<<"Okay! Have a nice Day!"<<endl;
    }
    
    return 0;
}