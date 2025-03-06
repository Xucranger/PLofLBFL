#include<stdio.h>
void main()
{
	int a,b,c,x;
    while(scanf("%d %d",&a,&b) != EOF)
	{a=(b*0.5+a)/b;
	if (b==0)
		printf("error\n");
	else
      printf("%d",a);
}}
