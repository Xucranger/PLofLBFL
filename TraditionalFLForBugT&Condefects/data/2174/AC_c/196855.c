#include<stdio.h>
int main()
{
	int a,b,y;
	float x;
	while(scanf("%d%d",&a,&b)==2)
	{
		if(b==0)
			printf("error\n");
		if(b!=0)
		{
			x=(a*1.0)/(b*1.0);
			y=(int)(x+0.5);
			printf("%d\n",y);
		}
	}
	return 0;
}
