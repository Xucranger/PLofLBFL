#include<stdio.h>
void main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			int c=(a+(b/2))/b;
			printf("%d\n",c);
		}
	}
}
