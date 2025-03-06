#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	while(cin>>a>>b)
	{
		if(b!=0)
		{
			c=a%b;
			d=a/b;
			if(2*c>b)
			{
				d=d+1;
				cout<<d<<endl;
			}
			else
				cout<<d<<endl;
		}
		else
			cout<<"error";
	}
	return 0;
}
