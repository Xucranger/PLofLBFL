#include <stdio.h>
#include"math.h"
void main ()
{
	float a,b,c;
	int f;
	while (scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else
		{	
			c=a/b;
			f=(int) (c+0.5);
			printf("%d",f);
		}
	}
}
