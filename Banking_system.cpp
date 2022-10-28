#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Bank
{
  public:
    char name[20];
  char account_type[20];
  int account_number;
  int balance;
  
  void initialize()
  {
    cout << "\nEnter Account Holders Name:";
    cin >> name;
    cout << "\nEnter Account type:";
    cin >> account_type;
    cout << "\nEnter account number:";
    cin >> account_number;
    cout << "\nEnter balance to deposit:";
    cin >> balance;
  }

  void deposit()
  {
    int bal;
    cout << "\nEnter the amout to deposit:";
    cin >> bal;
    balance = balance + bal;
    cout << "\nAmount deposited successfuly!!\nYour New Balance:" << balance;
  }

  void withdraw()
  {
    int bal;
    cout << "\nYour balance :" << balance << "\nEnter amount to withdraw:";
    cin >> bal;
    if (bal <= balance)
    {
      balance = balance - bal;
      cout << "\nRemaining Balance:" << balance;
    } else
    {
      cout << "Cannot withdraw amount!!";
    }
  }

  void display()
  {
    cout << "\nName :" << name;
    cout << "\nAccout Type:" << account_type;
    cout << "\nAccount No." << account_number;
    cout << "\nBalance :" << balance;
  }
};

int main()
{
  int i;
  Bank bk;
  bk.initialize();
  cout << "\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice:\n";
  cin >> i;
  if (i == 1)
  {
    bk.display();
  } else if (i == 2)
  {
    bk.deposit();
  } else if (i == 3)
  {
    bk.withdraw();
  }
  
  getch();

  return 0;
}
