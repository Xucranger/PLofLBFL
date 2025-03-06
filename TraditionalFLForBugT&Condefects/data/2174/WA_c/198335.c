#include <stdio.h>
#include"math.h"
void main ()
{
	int a,b;
	float c;
	int f;
	while (scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else
		{	
			c=(a*1.0)/b*(1.0);
			if(c>=0)
			{
				f=(int) (c+0.5);
			}
			else
			{
				f=(int) (c-0.5);
			}
			printf("%d",f);
		}
	}
}
