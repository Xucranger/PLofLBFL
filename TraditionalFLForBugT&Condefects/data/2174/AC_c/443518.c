#include<stdio.h>
int main()
{	float c,d;
	int a,b,e;
	while(scanf("%d%d",&a,&b)!=EOF)
	{	if(b==0) printf("error\n");
		else 
		{	c=a*1.0/b;d=c-a/b;e=a/b+1;
			if(d>=0.5)
			printf("%d\n",e);
			else printf("%d\n",a/b);}
 }}
