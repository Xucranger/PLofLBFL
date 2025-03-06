#include<iostream>
using namespace std;
int main()
{
	int a,b,s;
	while (cin>>a>>b)
	{
	if(b==0)
	cout<<"error"<<endl;
	else
	{
	s=(a+b/2)/b;
	cout<<s<<endl;
	}
	}
	return 0;
}
