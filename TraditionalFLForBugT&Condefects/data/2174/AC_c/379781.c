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
			if((c+0.5)>(float)(a*1.0/b))
			printf("%d\n",c);
			else
			printf("%d\n",c+1);
		}
	}
}
