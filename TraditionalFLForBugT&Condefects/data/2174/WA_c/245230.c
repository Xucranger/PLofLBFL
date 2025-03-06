#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	d=a%b;
	e=d/2;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b!=0)
		{
			if(a%b==0)
			{
				c=a/b;
				printf("%d",c);
			}
			else
			{
				if(d<e)
				{
					c=a/b;
					printf("%d",c);
				}
				else
				{
					c=a/b +1;
					printf("%d",c);
				}
			}
		}
		else
		{
			printf("\nerror\n");
		}
	}
	return 0;
}
