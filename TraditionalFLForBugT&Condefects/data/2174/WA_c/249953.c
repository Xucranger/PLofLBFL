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
			   printf("%d",1);
		   else
			   printf("%d",0);
		 }
		 if(a>b)
		 {
			c=a%b;
			if(2*c>b)
			   printf("%d",1+a/b);
		    else
			   printf("%d",a/b);
		 }
		}
	}
	return 0;
}
