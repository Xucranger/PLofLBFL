#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
		c=a/b;
		d=(a*1.0)/b;
		if(d-c>=0.5)
		c++;
		printf("%d\n",c);
	}
	}
}
