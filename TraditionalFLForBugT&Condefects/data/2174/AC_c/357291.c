#include<stdio.h>
int main()
{
	int a,b,yu;
	int c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=a*10/b;
			yu=c%10;
			if(yu>=5)
			printf("%d\n",a/b+1);
			else
			printf("%d\n",a/b);
		}
	}
	return 0;
}
