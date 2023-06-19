/****************************************************************************
 suppose you are planning to go to park so you are going to check ticket criteria online. the ticket rates details
 have been given
 * if children below 10 are not allpwed to swing
 * if age is between 10 to 15 allowed to swing and getting 10% discount
 * if age is between 15 to 20 allowed to swing and getting 5% siacount
 * if age more than 20 not then not eligible for swing and discount
 the age of person will run untill you enter the age of last family member and then calculate the total charge amount
 after entering each person's age. Assume price of ticket is 100 rs. each person.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int Mem_num,Ticket_price=100, sum =0, Mem= 0, age;
    cout<<"Enter total family member num :";
    cin>>Mem_num;
    
    for( int i=0; i<Mem_num; i++)
   {
    cout<<"Enter the age of member "<<i+1<<":-";
     cin>>age;
     
       if(age<10)
       {
         cout<<"Member "<<i+1<<" is below 10 so not allow to swing.\n"  ;
       }
       else if(age>=10&&age<15)
       {
           sum+= (Ticket_price-(Ticket_price*10)/100);
           Mem++;
       }
       else if(age>=15&&age<=20)
       {
           sum+= (Ticket_price-(Ticket_price*5)/100);
           Mem++;
       }
       else if(age>20)
       {
        cout<<"Member "<<i+1<<" is more than 20 So not allow for discount and swing \n\n" ;  
       }
   }
      cout<<"Total member of allow for Swing :"<<Mem<<endl;
      cout<<"After Discount total amout of ticket price is :"<<sum;
   
    return 0;
}
