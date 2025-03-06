#include<stdio.h>
int main()
{
	int a,b;
	int s;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0)
		printf("error\n");
	else
	{
	s=a/b+0.5;
	printf("%d\n",s);
	}
	}
}
