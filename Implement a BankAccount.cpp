/****6. Implement a BankAccount class with attributes accountNumber, balance, deposit and withdraw methods.******/
#include <iostream>
using namespace std;
class BankAccount
{
    public:
    int choice,repeat;
    int pin=1111,upin,withdraw,deposite,changepin,npin;
    float balance = 4000.0;
    void display()
    {
    switch(choice)
    {
    case 1:
    
    printf("Enter a pin:"); 
    scanf("%d",&upin);
    if(upin==pin)
    {
        printf("Balance %f\n",balance);
    }
       else
       {
           printf("invalid pin\n");
           
       }
    
       break;
       case 2:
       printf("Enter the amount to be withdraw:");
       scanf("%d",&withdraw);
       printf("Enter the pin:");
       scanf("%d",&upin);
       if(upin==pin)
       {
           if(withdraw>0 && withdraw<balance)
           {
               withdraw=balance-withdraw;
               printf("Amount is withdraw\n");
               printf("Total balance=%d\n",withdraw);
               
           }
           else
           {
               printf("insufficient balance");
           }
       }
       else
       {
           printf("invalid pin");
       }
       break;
       case 3:
       printf("Enter the Amount of cash deposite:");
       scanf("%d",&deposite);
       printf("Enter the pin:\n");
       scanf("%d",&upin);
       if(upin==pin)
       {
           deposite=balance+deposite;
           printf("Amount is deposite");
           printf("Total Amount=%d\n",deposite);
           
       }
       else
       {
           printf("invali pin");
       }
       break;
       case 4:
       printf("Enter pin:");
       scanf("%d",&upin);
       if(upin==pin)
       {
          printf("Enter the new pin:");
          scanf("%d",&npin);
          pin=npin;
       }
       else
       {
           printf("invalid pin");
       }
       break;
       case 5:
       printf("ThankYou");
       break;
       default:
       printf("invalid choice");
 }
}
};

int main()
{
    BankAccount obj;
    cout<<""
  
    return 0;
}
