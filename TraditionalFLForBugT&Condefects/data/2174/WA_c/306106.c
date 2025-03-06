#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(!b)
		printf("error\n");
		else
		printf("%d\n",((int)(a/b)+0.5));
	}
	return 0;
}
