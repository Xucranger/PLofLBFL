#include<stdio.h>
#include<stdlib.h>
int main()
{   int a,b;
	float c,d;
	scanf("%d,%d",&a,&b);
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0) printf("error");
	else
	{	d=a/b;
		c=a/b*10;
		if((int)c%10>=5) d=d+1;
		printf("%.0f",d);
	}
	}
	return 0;
 } 
