#include<iostream>
using namespace std;
int main()
{
	int a,b,t,h;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else 
		{
		    t=a/b;
		    h=a%b;
		    if(h>=0.5*b)
		      t=t+1;
		    cout <<t<<endl;	
		}   
	}
	return 0;
} 
