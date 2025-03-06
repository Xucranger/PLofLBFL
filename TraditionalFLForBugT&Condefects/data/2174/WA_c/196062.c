#include<stdio.h>
int main()
{
	float a,b,c;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(0==b)
		printf("error");
		else
		{
			c=a/b*1.0;
		    printf("%.0f",c);
		}
	}
}
