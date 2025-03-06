#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			if(10*(a%b)/b>=5)
				c=a/b+1;
			else
				c=a/b;
			printf("%d\n",c);
		}
	}
	return 0;
}
