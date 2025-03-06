#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		int n,c;
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			c=a/b;
			n=a%b;
			if(n>=5)
			{
				c=c+1;
				printf("%d\n",c);
			}
			else
			{
				c=c;
				printf("%d\n",c);
			}
		}
	}
 } 
