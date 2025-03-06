#include<stdio.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	if(b=0)
	printf("error");
	else
	printf("%d\n",(int)(a/b+0.5));
 } 
