#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	while(cin>>a>>b)
	{
		if(b==0)
		{
			cout<<"error"<<endl;
			continue;
		}
		c=a/b;
		int ans=(int)(c+0.5);
		cout<<ans<<endl;
	}
	return 0;
}
