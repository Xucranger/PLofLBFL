#include<iostream>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(n==0)
		printf("error\n");
		else
		{
		int a=m/n;
		int b=m%n;
		if(b>=n/2.0)
		{
		a++;
		}
		cout<<a<<endl;
		}
	}
	return 0;
}
