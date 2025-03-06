#include<stdio.h>
int main()
{
	int a,b,e;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			e=(a+(b/2))/b;
			printf("%d\n",e);
		}
	}
	return 0;
}
