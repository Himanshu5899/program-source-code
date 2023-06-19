#include <iostream>

using namespace std;

int main()
{
    int x ,y;
    cout<<"enter two number :"<<endl;
    cin>>x>>y;
    
    for(int i=x; i<=y; i++)
    {
    if(i%2==0)
    {
        cout<<i<<" is even number \n";
    }
    else
    {
        cout<<i<<" is odd number \n";
    }
}
    return 0;
}
