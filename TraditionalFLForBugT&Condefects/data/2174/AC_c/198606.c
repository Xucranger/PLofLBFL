#include<stdio.h>
int main()
{
	int n;
	float a,b,res;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
		printf("error\n");
		else 
		{	res=a/b;
			n=(res+0.5)/1;
			printf("%d\n",n);
		}
	}
	return 0;
 } 
