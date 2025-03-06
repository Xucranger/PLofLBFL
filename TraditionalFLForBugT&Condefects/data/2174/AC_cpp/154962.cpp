#include<iostream>
using namespace std;
int main()
{
	float m,n;
	while(cin>>m>>n)
	{
		if(n==0)
		cout<<"error"<<endl;
		else
		cout<<int(m/n+0.5)<<endl;
	}
}
