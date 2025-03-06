#include<stdio.h>
void main()
{
	int a,b,c;
	double d,e;
	while(scanf("%d %d",&a,&b)!=EOF)
	if(b==0)
		printf("error\n");
	else
	{
	c=a/b;
	d=(double)a/b;
	e=d-c;
	if(e>=0.5)
		printf("%d\n",c+1);
	else
		printf("%d\n",c);
	}
}
