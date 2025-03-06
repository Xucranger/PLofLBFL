#include <stdio.h>
void main ()
{
	int a,b;
	int c;
	while (scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else
		{	c=a/b;
			printf("%d",c);
		}
	}
}
