#include<stdio.h>
int main ()
{
	int a,b;
	int c;
	int d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
		c=a/b;
		d=a%b;
		if(d>b/2||d==b/2)
		c=c+1;
		printf("%d\n",c);
	}
	}
 } 
