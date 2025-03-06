#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=a/b;
		d=a-b*c;
		if(b%2==0)
		{
			if(d>=b/2)
			printf("%d\n",c+1);
			else
			printf("%d\n",c);
		}
		else
		{
			if(d>b/2)
			printf("%d\n",c+1);
			else
			printf("%d\n",c);
		}
		}
	}
	return 0;
}
