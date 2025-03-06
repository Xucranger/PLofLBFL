#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			c=a*10/b+5;
			c=c/10;
			printf("%d\n",c);
		}
	}
}
