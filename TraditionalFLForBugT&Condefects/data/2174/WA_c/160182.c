#include<stdio.h>
int main()
{
	float a,b,t;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		printf("%.f\n",a/b);
	}
}
