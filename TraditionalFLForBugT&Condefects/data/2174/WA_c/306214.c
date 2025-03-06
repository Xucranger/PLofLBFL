#include <stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d",&a)!=EOF)
	{
		scanf("%d",&b);
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			c=a/b;
			printf("%d\n",c);
		}
	}
 } 
