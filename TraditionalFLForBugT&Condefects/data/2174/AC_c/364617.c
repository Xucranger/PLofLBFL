#include<stdio.h>
int main()
{
	int a,b,c;
	float x;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{	c=a/b;
		x=(float)a/b-c;
		if(x>=0.5)
			c=c+1;
		else
			c=c;
			printf("%d\n",c);
		}
		else
			printf("error\n");
	}
	return 0;
}
