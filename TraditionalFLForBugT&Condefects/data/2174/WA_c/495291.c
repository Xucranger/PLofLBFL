#include "stdio.h"
void main( )
{
	int a,b,c;
while(scanf("%d%d",&a,&b)!=EOF)
{
	if(b==0)
	printf("error");
	else if(b!=0)
	{
		c=a/b;
		if(((1.0*a)/(1.0*b)-c)>=0.5)
			printf("%d",c);
		else
			printf("%d",c+1);
	}
}
}
