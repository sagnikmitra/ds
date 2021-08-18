#include<iostream>
using namespace std;
class Account
{
public:
  string name;
  long long int accountnumber;
  float balance=0, inputdeposit, inputinterest, inputwithdraw;
  int registration()
  {
    cout<<"Enter Your Name: ";
    getline(cin,name);
    cout<<"Enter Your Account Number: ";
    cin>>accountnumber;
    cin.ignore();
    return accountnumber;
  }
  void deposit()
  {
    cout<<"Enter Amount to be Deposited: ";
    cin>>inputdeposit;
    balance += inputdeposit;
    cout<<"Rs "<<inputdeposit<<" is successfully deposited in your bank account with account number "<<accountnumber<<"."<<endl;
    cout<<"Available Balance is "<<balance<<"."<<endl;
  }
  void displaybalance()
  {
    cout<<"Available Balance in your Account with A/c No. "<<accountnumber<<" is: "<<balance<<"."<<endl;
  }
  void interestadd()
  {
    cout<<"Enter Rate of Interest: ";
    cin>>inputinterest;
    float i;
    i = ((balance*inputinterest)/100);
    balance += i;
    cout<<"Interest Rs. "<<i<<" added successfully in your account, your current balance is: "<<balance<<"."<<endl;
  }
  void withdraw()
  {
    cout<<"Enter the Amount to be Withdrawn: ";
    cin>>inputwithdraw;
    if(inputwithdraw<balance)
    {
      balance -= inputwithdraw;
    }
    else
    {
      cout<<"Insufficient Balance"<<endl;
    }
    cout<<"Your Current Balance is "<<balance<<endl;
  }
};
class Savings : public Account
{
  float fine;
public:
  void minimumbalance()
  {
    if(balance<1000.00)
    {
      cout<<"Service Tax applied as your account didn't have the minimum balance of 1000."<<endl;
      fine = 0.05*balance;
      balance -= fine;
      cout<<"Available Balance is "<<balance<<"."<<endl;
    }
    else
      cout<<"Your Balance is above Minimum Balance"<<endl;
  }
};
class Current : public Account
{
  float fine;
public:
  void minimumbalance()
  {
    if(balance<3000.00)
    {
      cout<<"Service Tax applied as your account didn't have the minimum balance of 1000."<<endl;
      fine = 0.05*balance;
      balance -= fine;
      cout<<"Available Balance is "<<balance<<"."<<endl;
    }
    else
      cout<<"Your Balance is above Minimum Balance"<<endl;
  }
};
int main()
{
  Savings s;
  Current c;
  int ch,ch1,ch2;
  s.registration();
  cout<<"Enter 1 for Savings Account & 2 for Current Account: ";
  cin>>ch;
  if(ch==1)
  {
    while(1)
    {
      cout<<"Enter 1 to Deposit."<<endl<<"Enter 2 to Withdraw."<<endl<<"Enter 3 to InterestAdd"<<endl<<"Enter 4 to View Balance"<<endl<<"Enter 5 to Exit"<<endl<<"Your Entry: ";
      cin>>ch1;
      if(ch1==1)
      {
        s.deposit();
        s.minimumbalance();
      }
      else if(ch1==2)
      {
        s.withdraw();
        s.minimumbalance();
      }
      else if(ch1==3)
      {
        s.interestadd();
        s.minimumbalance();
      }
      else if(ch1==4)
      {
        s.displaybalance();
      }
      else if(ch1==5)
        break;
      else
        cout<<"Invalid Choice";
    }
  }
  else if(ch==2)
  {
    while(1)
    {
      cout<<"Enter 1 to Deposit."<<endl<<"Enter 2 to Withdraw."<<endl<<"Enter 3 to InterestAdd"<<endl<<"Enter 4 to View Balance"<<endl<<"Enter 5 to Exit"<<endl<<"Your Entry: ";
      cin>>ch1;
      if(ch1==1)
      {
        c.deposit();
        c.minimumbalance();
      }
      else if(ch1==2)
      {
        c.withdraw();
        c.minimumbalance();
      }
      else if(ch1==3)
      {
        c.interestadd();
        c.minimumbalance();
      }
      else if(ch1==4)
      {
        c.displaybalance();
      }
      else if(ch1==5)
        break;
      else
        cout<<"Invalid Choice";
    }
  }
  else
    cout<<"Invalid Choice";
  return 0;
}
