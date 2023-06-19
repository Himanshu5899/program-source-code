#include <iostream>

using namespace std;

int main()
{
  int num , res, sum=0,sum1=0;
  cin>>num;
  while(num> 0)
  {
      res=num%10;
      if(res%2==0)
      {
          sum+=res; 
      }
      else
      {
          sum1+=res;
      }
      num=num/10;
  }
  cout<<sum<<" "<<sum1;

    return 0;
}