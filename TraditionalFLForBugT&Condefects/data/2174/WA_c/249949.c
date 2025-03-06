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
		if(a<b)
		{
		   if(2*a>b)
			   printf("%d",a/b+1);
		   else
			   printf("%d",a/b);
		}
		if(a>b)
		{
			c=a%b;
			if(2*a>b)
			   printf("%d",c/b+1+a/b);
		    else
			   printf("%d",c/b+a/b);
		}
		}
	}
}
