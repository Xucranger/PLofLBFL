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
			d=(float)(a)/(float)(b);
			if(d>0)
			{
				c=(int)(d+0.5);
				printf("%d\n",c);
			}
			else if(d<0)
			{
				c=(int)(d-0.5);
				printf("%d\n",c);
			}
			else
				printf("0\n");
		}
	}
	return 0;
}
