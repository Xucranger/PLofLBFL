#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
{
	if(b==0)
	cout<<"ERROR"<<endl;
	if(b!=0)
	{
		float c;
		c=a/b*1.0;
		cout.setf(ios::fixed);
		cout.precision(0);
		cout<<c<<endl;
	}
}	
}
