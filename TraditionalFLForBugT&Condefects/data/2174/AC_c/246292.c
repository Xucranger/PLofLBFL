#include <stdio.h>
int main()
{
int a,b,x,n;
while(scanf("%d %d",&a,&b)!=EOF)
{
	if(b==0)
	printf("error\n");
	else
	{
	   n=a%b;
	   if(2*n>=b) x=a/b+1;
	   else x=a/b;
	   printf("%d\n",x);
	   }
}
}
