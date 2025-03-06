#include<stdio.h>
int main()
{
	int a,b;
	while(~scanf("%d %d",&a,&b))
	{
		if(b==0)
		printf("error\n");
		else
		printf("%d\n",a/b+0.5);
	}
	return 0;
 } 
