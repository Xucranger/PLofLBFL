#include <stdio.h>
int main(void)
{
	int a,b;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			c=a/b;
			printf("%.0f\n",c);
		}
	}
}
