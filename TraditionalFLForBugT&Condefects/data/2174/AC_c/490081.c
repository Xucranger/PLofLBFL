#include<stdio.h>
int main()
{
	int x,y,z;
	float c; 
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		if(y==0)
		printf("error\n");
		else
		{
			c=x*1.0/y;
		z=x/y; 
		if((c-z)*10>=5)
		printf("%d\n",z+1);	
		else
		printf("%d\n",z);
		}
	}
		return 0;
 } 
