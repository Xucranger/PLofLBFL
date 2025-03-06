#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	while(cin>>a>>b){
				if(b==0)
		cout<<"error";
		else
		{
			c=a/b;
			if(c>=5)
			c++;		
			cout<<c<<endl;
		}
	}
}
