#include<stdio.h>
void main()
{
	int a,b;
	int c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			if(a%b>=b/2.0)
				c=a/b+1;
			else
				c=a/b;
			printf("%d\n",c);
		}
	}
}
