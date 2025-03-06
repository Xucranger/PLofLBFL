#include<stdio.h>
int main()
{
	float a,b,c;
	while(scanf("%f",&a)==1)
{
	scanf("%f",&b);
	if(b==0)
	{
		printf("error\n");
		continue;
	}
	c=a/b;
	int d=(int)(c+0.5);
	printf("%d\n",d);
}
 } 
