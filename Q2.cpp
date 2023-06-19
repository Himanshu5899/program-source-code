/******************************************************************************
Write a program to generate electricity bill from the following constraint:
if meter reading is more then 100 unit then chargeble amount will be 6.95 Rs.per unit.
if meter reading is less then 100 unit then chargeble amount will be 5.95 Rs. per unit.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float unit, amount;
    cout<<"Enter use of electricity in unit :";
    cin>>unit;
    
    if(unit<100)
    {
        amount = unit*5.95;
    }
    else
       amount = unit*6.95;
       
      cout<<"\nelectricity bill ="<<amount;

    return 0;
}
