#include<stdio.h>
int main()
{
	int m,n,i,k;
	for(i=0;i<20;i++)
	{
		scanf("%d %d",&m,&n);
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
