#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if (b==0)
		printf("error");
		else
		{
			c=(float)a/b;
			printf("%d",(int)(c+0.5));
		}
	}
}
