#include<stdio.h>
int main()
{
	int a,b,x;
	float y;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			y=a/b;
		y=y+0.5;
		x=y;
			printf("%d\n",x);
		}
		else
			printf("error");
	}
	return 0;
}
