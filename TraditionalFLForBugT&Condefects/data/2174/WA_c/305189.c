#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		c=(a+(0.5*b))/b;
		if(b==0)
		  printf("error");
		else
		  printf("%d\n",c);
	}
	return 0;
 } 
