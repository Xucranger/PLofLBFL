#include<stdio.h>
int main()
{
	int m,n,i,k;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(n==0)
			printf("error\n");
		else
		{
			if(m%n==0)
				printf("%d\n",m/n);
			else
			{
				k=m%n;
				if(2*k>=n)
					printf("%d\n",m/n+1);
				else
					printf("%d\n",m/n);
			}
		}
	}
	return 0;
}
