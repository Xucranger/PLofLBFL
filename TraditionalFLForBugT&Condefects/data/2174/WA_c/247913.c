#include<stdio.h>
int main()
{
	float a;
	int b,c;
	while(scanf("%f%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
		c=(int)(a=0.5)/b;
		printf("%d\n",c);
		}
	}
 } 
