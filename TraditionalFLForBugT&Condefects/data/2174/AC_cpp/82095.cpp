#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int c;
	float a,b;
	while(cin>>a>>b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
		{
		c=int(a/b+0.5);
		cout<<c<<endl;
		}
	}
}
