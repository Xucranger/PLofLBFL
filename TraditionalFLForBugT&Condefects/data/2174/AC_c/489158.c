#include<stdio.h>
int main()
{
	int a,b,half;
	int x,y;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			if(a>b)
			{
				x=a/b;
				y=a%b;
				half=b/2;
				if(y>half&&b%2==1)
			    printf("%d\n",x+1);
			    else if(y>=half&&b%2==0)
			    printf("%d\n",x+1);
				else
				printf("%d\n",x);
			}
			else if(a==b)
			printf("1\n");
			else if(a<b)
			{
				if(b%2==1&&a>b/2)
				printf("1\n");
				else if(b%2==0&&a>=b/2)
				printf("1\n");
				else
				printf("0\n");
			}
		}
	}
}
