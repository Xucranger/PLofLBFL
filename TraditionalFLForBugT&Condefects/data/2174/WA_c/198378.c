#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("ERROR\n\n");
		else
		{
			if(a>b)
			{
				if(10*(a%b)/b>=5)
        		                                                   c=a/b+1;
				else
					c=a/b;
			}
			else if(a==b)
				c=1;
			else
				c=0;
			printf("%d\n\n",c);
		}
	}
	return 0;
}
