#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class BankAccount
{
        int acno;
        char AccountHolderName[100], Account_Type[100];
        float bal;  
   public:
     BankAccount(int acc_no, char *name, char *acc_type, float Balance)  
        {
                acno=acc_no;
                strcpy(AccountHolderName, name);
                strcpy(Account_Type, acc_type);
                bal=Balance;
        }
        void deposit();
        void withdraw();
        void Show();
};
void BankAccount::deposit()   
{
        int DepositAmmount1;
        cout<<" Enter Deposit Amount = "<<endl;
        cin>>DepositAmmount1;
        bal+=DepositAmmount1;
}
void BankAccount::withdraw()  
{
        int WithdrawAmmount1;
        cout<<" Enter Withdraw Amount = "<<endl;
        cin>>WithdrawAmmount1;
        if(WithdrawAmmount1>bal)
                cout<<" Cannot Withdraw Amount"<<endl;
        bal-=WithdrawAmmount1;
}
void BankAccount::Show()  
{
        cout<<" *************"<<endl;
        cout<<" Accout No. : "<<acno;
        cout<<" Name : "<<AccountHolderName;
        cout<<" Account Type : "<<Account_Type;
        cout<<" Balance : "<<bal;  
}
int main()
{
        int acc_no;
        char name[100], acc_type[100];
        float Balance;
        cout<<" Enter Details: "<<endl;
        cout<<"***********"<<endl;
        cout<<" Accout No. "<<endl;
        cin>>acc_no;
        cout<<" Name : "<<endl;
        cin>>name;
        cout<<" Account Type : "<<endl;
        cin>>acc_type;
        cout<<" Balance : "<<endl;
        cin>>Balance;
  
     BankAccount b1(acc_no, name, acc_type, Balance);  
        b1.deposit(); 
        b1.withdraw(); 
        b1.Show(); 
        return 0;
}