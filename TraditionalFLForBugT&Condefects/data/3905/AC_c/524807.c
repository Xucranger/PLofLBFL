#include<stdio.h>
int main()
{
	int n,i,j,m,sum,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&m);
		for(j=1;j<=m;j++)
		{
		scanf("%d",&k);
		sum=sum+k;
	    }
		printf("%d\n",sum);  
	}
}
