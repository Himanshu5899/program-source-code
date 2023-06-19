#include<iostream>
#include<conio.h>
using namespace std;
class ant
{
	int a ,b;
	public:
		void setdata()
		{
			cout<<"\n Enter two number :-";
			cin>>a>>b;
		}
		void showdata()
		{
			cout<<"a ="<<a<<endl<<"b = "<<b<<endl;
			if(a<b)
				cout<<"maximum ="<<b<<endl<<"minimum ="<<a;
			else
			 cout<<"maximum ="<<a<<endl<<"minimum ="<<b;
		}
};
int main()
{
	ant a;
	a.setdata();
	a.showdata();
	return(0);
}