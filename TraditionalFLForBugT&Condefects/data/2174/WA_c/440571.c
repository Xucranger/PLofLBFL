#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{c=1.0*a/b;
		printf("%.0f\n",c);
		}
	}
}
