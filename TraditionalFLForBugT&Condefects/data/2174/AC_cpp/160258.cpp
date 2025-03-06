#include<iostream>
using namespace std;
int main()
{
	float m,n,t;
	while(cin>>m>>n)
	{
		if(n==0)
		{
			cout<<"error\n";
		}
		else
		{
			t=m/n;
			cout<<(int)(t+0.5)<<endl;
		}
	}
}
