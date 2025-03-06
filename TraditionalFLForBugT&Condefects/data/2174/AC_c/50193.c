#include<stdio.h>
void main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			c=a/b;
			if(a%b>=b-a%b)
				c++;
			printf("%d\n",c);
		}
	}
}
