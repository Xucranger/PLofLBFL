#include<stdio.h>
void main()
{
	int a,b,s;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{if(b==0)
printf("error\n");
else
{	c=1.0*a/b;
		s=c+0.5;
		printf("%d\n",s);}
	}
}
