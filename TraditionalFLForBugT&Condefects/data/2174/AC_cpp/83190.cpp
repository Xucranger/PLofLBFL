#include<iostream>
using namespace std;
int main ()
{
	int a,b,c;
	float d;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else
		{
		c=a/b;
		d=(a+0.0)/b;
		if(d-c>=0.5)
		{
			c=c+1;
		} 
		cout<<c<<endl;	
		}
	}
} 
