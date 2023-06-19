#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"enter two number :"<<endl;
    cin>>x>>y;
    if(x>=y)
    {
        cout<<x<<"is grater than"<<y;
    }
    else
    {
        cout<<y<<"is grater than"<<x;
    }

    return 0;
}