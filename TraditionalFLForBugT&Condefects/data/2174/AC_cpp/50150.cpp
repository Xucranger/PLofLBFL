#include<iostream>
using namespace std;
int main()
{
	long double a,b;
	long long c=0;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else 
		{
			c = a/b;
			if(a/b >= c+0.5)
			{
				cout<<c+1<<endl;
			}
			else cout<<c<<endl;
		}
	}
	return 0;
}
