#include<stdio.h>
int main()
{
	int a,b;
	int s;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0)
		printf("error");
	else
	{
	s=a*1.0/b+0.5;
	printf("%d\n",s);
	}
	}
}
