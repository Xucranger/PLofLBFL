#include<stdio.h>
int main()
{
	int x;
	float a,b,y;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			y=a/b;
		y=y+0.5;
		x=y;
			printf("%d",x);
		}
		else
			printf("error");
			printf("\n");
	}
	return 0;
}
