#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a,b,d;
	float c;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else
		{
			c=(float)a/b;
			d=a/b;
			if(c-d>=0.5)
				cout<<++d<<endl;
			else
			{
				cout<<d<<endl;
			}
		}
	}
	return 0;
}
