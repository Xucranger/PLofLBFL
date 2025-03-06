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
		c=(int)(a/b+0.5);
		printf("%d\n",c);
		}
	}
 } 
