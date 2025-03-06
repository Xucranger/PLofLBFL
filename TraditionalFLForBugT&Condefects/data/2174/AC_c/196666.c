#include <stdio.h>
int main()
{
	int a,b;
	float c; 
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
		c=(a*1.0)/b;
		c=c+0.5;
c=(int)c;
		printf("%.0f\n",c);
	}
	}
    return 0;
} 
