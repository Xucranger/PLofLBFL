#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
		puts("error");
		else
		printf("%d\n",a/b);
	}
}
