#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
			continue;
		}
		c=a%b;
		if(2*c>=b)a=a/b+1;
			else a=a/b;
		cout<<a<<endl;
	}
	return 0;
}
