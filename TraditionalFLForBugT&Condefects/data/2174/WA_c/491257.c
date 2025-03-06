#include<stdio.h>
int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(n==0)
		printf("error\n");
		else
		printf("%d",m/n);
	}
	return 0;
}
