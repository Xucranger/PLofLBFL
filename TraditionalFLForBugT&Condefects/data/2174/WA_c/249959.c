#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else
		{
		c=(int)(1.0*a/b+0.5);
		printf("%d",c);
		}
	}
		return 0;
}
