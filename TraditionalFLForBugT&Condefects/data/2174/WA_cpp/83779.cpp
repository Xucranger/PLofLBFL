#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else
		{
			cout<<a/b<<endl;
		}
	}
	return 0;
}
