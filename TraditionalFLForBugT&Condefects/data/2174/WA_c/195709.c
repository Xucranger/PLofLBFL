#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,n;
	scanf("%d%d",&a,&b);
	if(b==0)
	{
		printf("error\n");
		exit(0);
	}
	else
	{
		printf("%d\n",a/b);
	}
return 0;
}
