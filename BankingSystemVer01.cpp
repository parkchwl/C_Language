/*#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN=20;

void ShowMenu();
void MakeAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAccInfo();

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct
{
  int accID;
  int balance;
  char cusName[NAME_LEN];
} Account;

Account accArr[100];
int accNum=0;

int main()
{
  int choice;
  
  while(1)
  {
    ShowMenu();
    cout<<"선택: ";
    cin>>choice;
    cout<<endl;

    switch()
    {
      case MAKE:
        MakeAccount();
    }
  }
}
*/