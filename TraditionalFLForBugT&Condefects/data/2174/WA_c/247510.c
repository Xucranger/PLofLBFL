#include <stdio.h>
int main()
{
	int a,b;
	double c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			c=1.0*a/b;
			printf("%.0lf",c);
		}
		else 
		printf("error");
	}
 } 
