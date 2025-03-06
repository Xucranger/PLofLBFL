#include<stdio.h>
int main()
{
	int a,b,d,x;
	float c,e;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b!=0)
	{
	c=(float)a/(float)b;
	d=a/b;
	e=(float)d+0.5;
	if(c>=e)
	x=d+1;
	else
	x=d;
	printf("%d\n",x);
    }
    else
    printf("error\n");
    }
 } 
