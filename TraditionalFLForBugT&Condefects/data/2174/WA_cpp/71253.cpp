#include<iostream>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(n==0)
		break;
		else
		{
		int a=m/n;
		int b=m%n;
		if(b>n/2)
		{
		a++;
		}
		cout<<a<<endl;
		}
	}
	return 0;
}
