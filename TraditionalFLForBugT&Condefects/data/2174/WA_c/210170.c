#include<stdio.h>
int main()
{
	int a,b;
	int x;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		  printf("error");
		else
		{
		x=a*1.0/b;
		x=x+0.5;
		printf("%d\n",x+1);
		}
	}
}
