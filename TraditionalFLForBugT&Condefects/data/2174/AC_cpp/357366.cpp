#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
			c=(a+(b/2.0))/b;
			cout<<c<<endl;
		}
	}
	return 0;
}
