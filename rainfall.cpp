/******************************************************************************

 write a program that store rainfall amount in amount in array. the program then displays the monthly rainfall amount, the total annual 
 rainfall amount, the average rainfall amount, the highest rainfall amount, the lowest rainfall amount . first get the rainfall amount for
 the 12 month .next display the following menu and wait for the user response. repeat the menu display and the calculation as long as the
 user is not typing.
 monthly amount
 total amount
 average amount
 highest amount
 lowest amount
 end program

*******************************************************************************/

#include <iostream>

using namespace std;

float rainfall[12], total =0,avg;
	int choice, highest_amount(), lowest_amount() ;
int main()
{
	//float rainfall[12], total =0,avg;
	//int choice, highest_amount() ;
	for(int i=1; i<=12; i++)
	{
	cout<<"Enter the rainfall amount in month"<<i<<" ";
	cin>>rainfall[i];
	total = total +rainfall[i];
   }
    avg = total/12;
    himanshu :
    cout<<"\n1. display monthly amount \n 2. display total amount \n 3. display average amount \n 4. display Highest amount \n 5. display";
	 cout<<" lowest amount \n 6. end program \n";
  cout<<" enter your choice :";
  cin>>choice;
  switch(choice)
    {
    case 1:
	        for(int j=1; j<=12; j++)
	        {
	        	cout<<"month "<<j<<" rainfall amount is :"<<rainfall[j]<<endl;
			}
			break;
	case 2:
	        cout<<"total amount ="<<total<<endl;
		  break;
	case 3:
	       cout<<" Average amount ="<<avg<<endl;
		  break;
	case 4:
	     highest_amount();
		 break;
    case 5:
	     lowest_amount();
		 break;
	case 6:
	     cout<<"end program";
		 exit(0);
	default :
	    cout<<"Invalid program";
		exit(0)	;
	}
	goto himanshu ;
  return 0;
}

int highest_amount()
{
	for(int j=1; j<12; j++)
	{
		if(rainfall[0]<rainfall[j])
		    rainfall[0]= rainfall[j];
	}
	cout<<"Highest rainfall amount in month :"<<rainfall[0]<<endl;
}

int lowest_amount()
{
	int rain_fall;
	rain_fall= rainfall[0];
	for(int x=0; x<12; x++)
	{
		if(rainfall[x]<rain_fall)
		    rain_fall= rainfall[x];
	}
	cout<<"lowest rainfall amount in month :"<<rain_fall<<endl;
}
