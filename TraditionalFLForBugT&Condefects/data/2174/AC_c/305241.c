#include<stdio.h>
int main()
{
	float a,b,c;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		printf("%d\n",(int)(a/b+0.5));		
	}
}
