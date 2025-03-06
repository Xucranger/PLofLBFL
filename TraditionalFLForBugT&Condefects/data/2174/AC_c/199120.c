#include<stdio.h>
int main()
{
	int a,b,f;
	float c,d;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{ printf("error\n");
			continue;
		}
		c=a;d=b;
		f=c/d+0.5;
		printf("%d\n",f);
	}
}
