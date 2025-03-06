#include<stdio.h>
int main()
{
	int a,b,c,d;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			if(a*b>0)
			c=(int)(a*1.0/b+0.5);
			else
			c=(int)(a*1.0/b-0.5);
			printf("%d\n",c);
		}		
	}
	return 0;
 } 
