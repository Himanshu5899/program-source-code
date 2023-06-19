/******************************************************************************

 write a program to perform banking transaction operations : withdraw , deposite and check balance. follow the 
 constraint 
 initial balance amount should be 1000
 maintain minimum balance is account always 1000 rs

*******************************************************************************/

#include <iostream>

using namespace std;

   int choice;
  float amount, total_amt = 1000;

 int withdraw()
   {
       cout<<" Enter Amount for withdraw :";
       cin>>amount;
        
        if(amount<total_amt && total_amt>=1000)
        { 
         if(total_amt-amount>=1000)
         {
         	total_amt = total_amt-amount;
           cout<<"your withdraw amount is :"<<amount<<endl<<" your total balance after withraw is :"<<total_amt<<endl;
           }
       else
       {
           cout<<" withdraw Transaction is unseccussful Due Balance maintance 1000 rs.\n";
       }
     }
       return 0 ;
   }
   
  int deposite()
   {
       cout<<" Enter Amount for deposite :";
       cin>>amount;
       
      total_amt = total_amt + amount;
      cout<<" total Balance after deposite :"<<total_amt<<endl;
      
      return 0;
   }
   
  int check_balance()
   {
       cout<<"your current balance is  :"<<total_amt<<endl;
        return 0;
   }
   

int main()
{
  /*  int choice;
  float amount, total_amt = 1000;*/
  hello:{
  cout<<"Select the choice : \n 1. Withdraw\n 2. Deposite\n 3. Check balance\n";
  cin>>choice;
   switch(choice)
   {
       case 1:
            withdraw();
            break;
        case 2:
            deposite();
            break;
        case 3:
             check_balance();
             break;
        default :
           cout<<" Invalid your Choice\n Thank you for Visiting HBB !!";
           exit(0);
    
   }goto hello;
  }
   return 0;
}
