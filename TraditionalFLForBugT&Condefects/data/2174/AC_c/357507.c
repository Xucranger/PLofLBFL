#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int c,d;
	float a,b;
	while(scanf("%d %d",&c,&d)!=EOF)
	{
		a=(float)c;b=(float)d;
		if(b==0)
		printf("error\n");
		else
		{
			if(a/b-c/d>=0.5)
			printf("%d\n",c/d+1);
			else printf("%d\n",c/d);
		}
	}}
