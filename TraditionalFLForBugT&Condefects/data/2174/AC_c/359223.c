#include<stdio.h>
int main()
{
	int a,b,c;
	float d,e;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
		c=a/b;
		d=a*1.0/b;
		e=c+0.5;
			if(d>=e)
			printf("%d\n",c+1);
			else
			printf("%d\n",c);
		}
		else
		printf("error\n");
	}
}
