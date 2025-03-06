#include<iostream>
using namespace std;
int main()
{
	double x;
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error";
		else
		{
		x=a/b;
		cout<<x<<endl;	
		}
	}
	return 0;
} 
