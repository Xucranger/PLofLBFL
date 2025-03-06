#include <stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			double c;
			c=1.0*a/b;
			printf("%.0lf",c);
		}
		else printf("error");
	}
}
