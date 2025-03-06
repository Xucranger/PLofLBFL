#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	while(cin>>a>>b)
	{
		if(b!=0)
		{
			c=a%b;
			d=a/b;
			if(2*c>=b)
			{
				e=d+1;
				cout<<e<<endl;
			}
			else
				cout<<d<<endl;
		}
		else
			cout<<"error"<<endl;
	}
	return 0;
}
