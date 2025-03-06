#include<iostream>
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
			if(a%b<b-a%b)
			cout<<a/b<<endl;
			else
			cout<<a/b+1<<endl;
		}
	}
}
