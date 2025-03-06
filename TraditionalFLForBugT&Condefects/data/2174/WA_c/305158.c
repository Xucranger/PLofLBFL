#include<stdio.h>
int main()
{
	int a,b,d;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			c=a/b;
			d=(int)(c+0.5);
			printf("%d\n",d);
		}
	}
	return 0;
}
