#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
	int a,b,n;
	while(cin>>a>>b)
    {
    	if(b==0)
		{
			cout<<"error"<<endl;
			continue;
		}
	    a=a*10;
	    n=a/b;
	    if(n%10<5)
	    cout<<n/10;
	    else
	    cout<<n/10+1;
	    cout<<endl;
	}
}
