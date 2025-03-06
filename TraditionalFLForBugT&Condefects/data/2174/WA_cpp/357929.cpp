#include<iostream>
using namespace std;
int main()
{
	int a,b,d;
	float c;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error";
		else
		{
			c=a*1.0/b;
			d=a/b;
			if((c-d)>=0.5)
			cout<<d+1;
			else
			cout<<d;
		}
	}
}
