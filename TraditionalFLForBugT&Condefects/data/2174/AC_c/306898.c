#include<stdio.h>
int main()
{
	int a,b,i,c;
	for(i=0;scanf("%d%d",&a,&b)!=EOF;i++)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=(int)(1.0*a/b+0.5);
			printf("%d\n",c);
		}
	}
	return 0;
 } 
