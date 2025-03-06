#include<stdio.h>
int main()
{
	int a,b,d;
	float s;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
				s=(1.0)*a/b;
		if((s-a/b)>=0.5)
		{
				d=a/b+1;
		printf("%d\n",d);
		}
		else
		{
				d=a/b;
		 printf("%d\n",d);
		}
		}
	}
 } 
