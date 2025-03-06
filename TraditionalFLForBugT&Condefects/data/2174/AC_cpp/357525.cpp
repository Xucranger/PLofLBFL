#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float a,b;
	while(cin>>a>>b)
	{
		if(b==0) cout<<"error"<<endl;
		else
		{
			a/=b;
			printf("%d\n",(int)(a+0.5));
		}
	}
	return 0;
} 
