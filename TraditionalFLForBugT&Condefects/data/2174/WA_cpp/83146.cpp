#include<iostream>
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
		c=(a+0.0)/b;
		d=a/b;
		if(c-d>0.4)
		{
			d=d+1;
		} 
		cout<<d<<endl;
		return(0);
	}
} 
