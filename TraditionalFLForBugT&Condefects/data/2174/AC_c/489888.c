#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int c,d;
		if(b==0)
		{
			printf("error\n");
		}
		else 
		{
			c=a/b;
			d=a%b;
				if(c==0&&d*2<b)
			{
				printf("0\n");
			}
			if(c==0&&d*2>=b)
			{
				printf("1\n");
			}
	}
		if(a>=b&&b!=0) {
			c=a/b;
			d=a%b;
			if(d*2>=b)
			{
				c=c+1;
			}
			printf("%d\n",c);
		}
	}
}
