#include<stdio.h>
int main()
{
	int a,b,x;
	float y;
	while(scanf("%d %d",&a,&b)!=EOF)
	if(b==0)
		printf("error\n");
	else
	{
		x=a/b;
		y=(a*1.0)/b;
		if(y-x<0.5)
			printf("%d\n",x);
		else
			printf("%d\n",x+1);
	}
}
