#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error";
		else 
		{
			r=a/b;
			if((float)a/b>=0.5)
			r=r+1;
			cout<<r<<endl;
		}
	}
}
