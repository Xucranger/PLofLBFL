#include "stdio.h"
void main( )
{
	int a,b,c;
while(scanf("%d%d",&a,&b)!=EOF)
{
	if(b==0)
	printf("error\n");
	else
	{
		c=a/b;
		if(((1.0*a)/(1.0*b)-c)>=0.5)
			printf("%d\n",c+1);
		else
			printf("%d\n",c);
	}
}
}
