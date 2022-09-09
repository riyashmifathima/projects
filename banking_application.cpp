#include<iostream.h>
#include<conio.h>
#include<process.h>
class banking
{
  public:
    char uname[25];
    int dpo,wid,bal,phno,acno ;
    banking()
    {
      bal=1000;
    }
       void reg();
       void deposit();
       void withdraw();
       void balance();
       void userdetails();
};
void banking::userdetails()
{
    cout<<"enter the username: "<<uname<<endl;
    cout<<"enter the accountnum: "<<acno<<endl;
    cout<<"enter the phonenm: "<<phno<<endl;
}
void banking::reg()
{
  cout<<"enter the username: "<<endl;
  cin>>uname;

  cout<<"enter the phonenum: "<<endl;
  cin>>phno;

  cout<<"enter the accountnum: "<<endl;
  cin>>acno;
}

void banking::deposit()
{
  cout<<"enter the amount to deposit: "<<endl;
  cin>>dpo;
  bal=bal+dpo;
  cout<<"ur amount will be deposited"<<endl;
}

void banking::withdraw()
{
  cout<<"withdraw ammount: "<<endl;
  cin>>wid;
  bal=bal-wid;
  cout<<"amount withdraw"<<endl;
}

void banking::balance()
{

  cout<<" the balance amount is: "<<bal<<endl;

}

void main()
{

  clrscr();
  banking b;
  int ch;


do
{
  cout<<"0. reg"<<endl;
  cout<<"1. userdetails"<<endl;
  cout<<"2. deposit"<<endl;
  cout<<"3. withdraw"<<endl;
  cout<<"4. balance"<<endl;
  cout<<"5. exist"<<endl;
  cout<<"enter the choice(0 -5)"<<endl;
  cin>>ch;
  clrscr();
 switch(ch)
 {
   case 0:
     clrscr();
     b.reg();
     break;

   case 1:
     clrscr();
     b.userdetails();
     break;

   case 2:
    clrscr();
    b.deposit();
    break;

   case 3:
     clrscr();
     b.withdraw();
     break;

   case 4:
      clrscr();
      b.balance();
      break;
   case 5:
      exit(0);
      break;
   }
}while(ch>=0&&ch<=4);
}