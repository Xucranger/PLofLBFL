#include<stdio.h>
void main()
{ 
	int a,b,d;
	double c;
	while(scanf("%d%d",&a,&b)!=EOF)
	if(b==0)
	{	printf("error\n");}
	else
	{		c=(a*1.0)/(b*1.0);
	d=a/b;
	if(c-d>=0.5)
	{	printf("%d\n",d+1);}
	else
	{printf("%d\n",d);}
	}
}
