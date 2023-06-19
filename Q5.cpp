/******************************************************************************

Display the student's result in terms of grade from the following condition:
If marks between 90 to 100:grade'O'
marks between 80 to 90:grade'A+'
marks between 70 to 80:grade'A'
marks between 60 to 70:grade'B+'
marks between 50 to 60:grade'B'

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout<<"Enter the marks :";
    cin>>marks;
    
    if(marks>=90&&marks<=100)
      {
          cout<<" Grade = 'O'";
      }
      else if(marks>=80&&marks<90)
      {
          cout<<" Grade = 'A+'";
      }
      else if(marks>=70&&marks<80)
      {
          cout<<" Grade = 'A'";
      }
     else if(marks>=60&&marks<70)
     {
         cout<<" Grade = 'B+'";
     }
     else if(marks>=50&&marks<60)
     {
         cout<<" Grade = 'B'";
     }
     else
      cout<<" Grade = 'F'";
    return 0;
}