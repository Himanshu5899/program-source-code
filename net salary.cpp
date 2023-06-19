#include <iostream>

using namespace std;

int main()
{
    float sal, I_tax,DA,HRA, Net_sal;
    cout<<"enter Gross Salary number :"<<endl;
    cin>>sal;
    
    I_tax= (sal*40)/100;
    DA= (sal*30)/100;
    HRA = (sal*20)/100;
    
    Net_sal=(sal-I_tax)+DA+HRA;
        cout<<" Net salary : "<<Net_sal;
    
    return 0;
}
