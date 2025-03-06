#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		if(b)
		{
			d = 1.0 * a / b;
			c = (int)(d + 0.5);
			printf("%d\n",c);
		}
		else
			printf("error\n");
	}
	return 0;
}
