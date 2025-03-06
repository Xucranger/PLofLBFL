#include<iostream>
#include<string>
#include<stdlib.h>
#include <fstream>
using namespace std;
int main()
{
	float c,d;
	int a,b;
    while(cin>>a>>b)
	{
		if(b!=0)
		{
		c=float(a)/float(b);
		d=a/b;
		if(d>=0)
		{
		d=c-d;
		if(d<0.5)
		cout<<a/b<<endl;
		if(d>=0.5)
		cout<<a/b+1<<endl;
	    }
	    else
	    {
	    d=d-c;
		if(d<0.5)
		cout<<a/b<<endl;
		if(d>=0.5)
		cout<<a/b-1<<endl;
	    }
	    }
	    else
	    {
	    	cout<<"error"<<endl;
	    }
	}
	 return 0;
}
