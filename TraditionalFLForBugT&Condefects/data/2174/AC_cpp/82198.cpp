#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
			continue;
		}
		int c=(int)(1.0*a/b+0.5);
		cout<<c<<endl;
	}
}
