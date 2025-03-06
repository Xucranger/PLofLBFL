#include<stdio.h>
void main()
{
	int a,b;
	float c;
	scanf("%d %d",&a,&b);
	if(b==0)
	{
		printf("error");
	}
	else
		c=(int)(a/b*10+5)/10;
	printf("%7.0f\n",c);
}
