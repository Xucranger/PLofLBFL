#include<stdio.h>
int main()
{
	int a,b,d;
	float c,m;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error");
			printf("\n");
		}
		else
		{
			c=a*1.0/b;
		    d=a/b;
			m=c-d;
		    if(m>=1.0/2)
			{
				d=d+1;
				printf("%d",d);
				printf("\n");
			}
			else
			{
				printf("%d",d);
				printf("\n");
			}
		}
	}
}
