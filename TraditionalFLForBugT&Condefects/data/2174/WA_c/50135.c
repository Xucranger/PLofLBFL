#include<stdio.h>
void main()
{
	int a,b,x,y;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
	else
	{
		x=a/b;
	    y=a%b;
		if(2*y-b>=0)
			x+=x;
		printf("%d\n",x);
	}
	}
}
