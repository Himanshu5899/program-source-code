#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;
    cout<<"enter the Name and Age :"<<endl;
    cin>>name>>age;
    
    if(age>=18)
    {
        cout<<name<<" is eligible for vote";
    }
    else
    {
        cout<<name<<" is not eligible for vote";
    }

    return 0;
}
