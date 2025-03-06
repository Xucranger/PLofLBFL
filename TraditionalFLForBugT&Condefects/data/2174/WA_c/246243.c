#include <stdio.h>
int main()
{
int a,b,x;
while(scanf("%d%d",&a,&b)!=EOF)
{
	if(b==0)
	printf("error");
	else
	{x=a/b; printf("%d\n",x);}
}
return 0;
}
