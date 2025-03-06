#include<stdio.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(b!=0)
			printf("%.0f",a/b);
		else
			printf("error");
	}
	return 0;
}
