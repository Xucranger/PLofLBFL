#include "stdio.h"
void main()
{
	int a,b,c;
	double flag;
	while ( scanf("%d%d",&a,&b)!=EOF) 
	{	
		if(b==0)
		{printf("error\n");}
			else 
			{flag=(double)(a)/(double)(b);
			c=(int)(flag+0.5);
			printf("%d\n",c);}
}
}
