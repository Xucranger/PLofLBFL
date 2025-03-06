#include<cstdio>
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int n,i=0,a,b,c[1000]={0};
	while(cin>>a>>b)
	{
		if (b==0)
		{
			c[i]--;
		}	
		else
		{
			c[i]=a/b;
			if ((a%b)/(b*1.0)>=0.5)
			{
				c[i]++;
			}
		}
		i++;
	}
	for (n=0; n<i; n++)
	{
		if (c[n]==-1)
			printf("error\n");
		else
			printf("%d\n",c[n]);
	}
} 
