#include<stdio.h>
int main()
{
	float a,b;
	int c,d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		c=a*10/b;
		d=a/b;
		if(c%10>=5)
		printf("%d\n",d+1);
		else printf("%d\n",d);
	}
} 
