#include<stdio.h>
void main()
{
	int a,b,m;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{	m=a/b;
		printf("%d",m);}
		else
		printf("error");
	}
}
