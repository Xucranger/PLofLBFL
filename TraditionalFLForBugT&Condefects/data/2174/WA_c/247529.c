#include <stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			double c;
			int n;
			c=1.0*a/b;
			n=a/b;
			if(c<0)
			{
				if(c-n<=-0.5)
				n=n-1;
			}
			else if(c>=0)
				{
					if(c-n>=0.5)
					n=n+1;
				}
			printf("%d",n);
		}
		else printf("error");
	}
}
