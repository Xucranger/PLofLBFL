#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
			cout<<floor((1.0*a/b)+0.5)<<endl;
	}
}
