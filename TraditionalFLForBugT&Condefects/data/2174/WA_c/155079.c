#include<stdio.h>
void main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
			printf("%d\n",a/b);
	}
}
