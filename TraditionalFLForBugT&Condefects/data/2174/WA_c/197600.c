#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
			if(b==0)
				printf("error\n");
			else
			{
				c=a/b;
				printf("%d\n",c);
			}
	}
	return 0;
}
