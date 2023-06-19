/*****************************************************************************
 Write a Program for shopping mall,In Shopping mall,there is a mobile shop,in this mobile shop you are getting 
 offer if you will purchase mobile phone with power bank you will get 10% discount , but if you purchase any mobile 
 or power bank you will get only 5% discount. Display this offer to the user screen whenever user is selecting the 
 option.
Select option:
1.only Mobile
2.Only powerbank
3.mobile with powerbank
4.nothing

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{  
    int option, mob_pri =10000, powerbank_pri = 1200 , both_pri, price;
    cout<<" Mobile Prices = 10000 rs and discount is = 5% \n powerbank Prices = 1200 and discount = 5% ";
    cout<<" and Both discount = 10%";
    cout<<"\nSelect option :\n 1. only mobile \n 2. only powerbank \n 3. mobile with powerbank \n 4. Nothing \n ";
    cin>>option;
    
    switch(option)
    {
        case 1:
             price = mob_pri - (mob_pri*5)/100;
             cout<<"\n mobile price ="<<price;
             break;
        case 2:
             price = powerbank_pri - (powerbank_pri*5)/100;
             cout<<"\n powerbank Price ="<<price;
             break;
        case 3:
             both_pri = mob_pri+powerbank_pri;
             price = both_pri - (both_pri*10)/100;
             cout<<"\n Total Price ="<<price;
             break;
        case 4:
             cout<<" Thank you for visiting Mobile Shop !!!!!!";
             break;
        default :
             cout<<" invalid option ";
             break;
    }
    
    return 0;
}