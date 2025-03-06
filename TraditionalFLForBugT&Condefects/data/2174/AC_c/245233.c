#include<stdio.h>
int main()
{
	int a,b,c,d;
	double e;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b!=0)
		{	
			d=a%b;
			e=((double)b*1.00)/2.;
			if(d<e)
			{
				c=a/b;
				printf("%d\n",c);
			}
			else
			{
					c=a/b+1;
					printf("%d\n",c);
			}
		}
		else
		{
			printf("error\n");
		}
	}
	return 0;
}
