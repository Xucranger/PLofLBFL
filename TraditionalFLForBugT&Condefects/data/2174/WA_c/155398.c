#include<stdio.h>
int main()
{
	int a,b,sum;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
		printf("error\n");
		}
		else
		sum=(float)a/b+0.5;
		printf("%d\n",sum);
	}
	return  0;
}
