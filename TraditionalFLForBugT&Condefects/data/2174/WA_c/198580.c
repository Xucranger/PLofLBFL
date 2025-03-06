#include<stdio.h>
int main()
{
	int a,b,res;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
		printf("error\n");
		else 
		{	res=((a+0.5)/b);
			printf("%d\n",res);
		}
	}
 } 
