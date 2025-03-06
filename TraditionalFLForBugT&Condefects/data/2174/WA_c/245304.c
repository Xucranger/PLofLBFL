#include<stdio.h>
int main()
{
	int m,n,i;
	for(i=0;i<20;i++)
	{
		scanf("%d %d",&m,&n);
		if(n==0)
			printf("error\n");
		else
			printf("%d\n",m/n);
	}
	return 0;
}
