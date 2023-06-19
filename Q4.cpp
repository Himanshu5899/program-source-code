/******************************************************************************

A company offers commission for selling it products to its salesperson. 
The commission rate is Rs. 5 per product. However if the salesperson sells more than 200 items, 
he gets a commission of Rs. 10 on all items he sold after the first 200. Writes a program to calculate the
commission for the salesperson.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int Sell_Pro, commission;
    cout<<"Enter the quntity of sell products :";
    cin>>Sell_Pro;
    
    if(Sell_Pro<200)
      {
         commission =Sell_Pro*5; 
      }
      else
      
       commission = (Sell_Pro-200)*10+(200*5);
       
       cout<<"commission ="<<commission;
    return 0;
}