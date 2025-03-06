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
		{
			if((a%b)*10/b<=4)
			cout<<a/b<<endl;
			else
			cout<<(a/b)+1<<endl;
		}
	}
}
