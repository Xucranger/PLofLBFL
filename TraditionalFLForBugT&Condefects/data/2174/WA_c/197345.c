#include<stdio.h>
int main()
{
	int a,b;
	float c;
	scanf("%d %d",&a,&b);
	if(b==0)
	printf("error");
	if(b!=0)
	{
	c=a/b;
	printf("%.f",c);
	}
	return 0;
}
