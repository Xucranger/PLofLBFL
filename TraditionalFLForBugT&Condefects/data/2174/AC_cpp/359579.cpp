#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)cout<<"error\n";
		else
		{
			a*=10;
			int k=a/b;
			if(k%10>=5)k+=5;
			printf("%d\n",k/10);
		}
	}
}
