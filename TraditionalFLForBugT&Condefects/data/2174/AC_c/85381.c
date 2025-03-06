#include<stdio.h>
int main()
{
	int m,n,a;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(n==0)
		printf("error\n");
		  else
		  {
		    a=m*1.0/n+0.5;
		    printf("%d\n",a);
	      }
	}
	return 0;
}
