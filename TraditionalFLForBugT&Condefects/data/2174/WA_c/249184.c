#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			c=a/b;
			printf("%d\n",c);
		}
		else
			printf("ERROR\n");
	}
	return 0;
}
