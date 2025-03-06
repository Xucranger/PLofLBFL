#include<stdio.h>
int main()
{
	int a,b,c1;
	double a1,b1;
	double c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		a1=a*1.0;
		b1=b*1.0;
		if(b==0)
		{
			printf("error\n");
		}
		if(b!=0)
		{
			c1=a/b;
			c=(a1*1.0)/b1;	
			if(c-c1<0.5)
				printf("%d\n",c1);
			else if(c-c1>=0.5)
				printf("%d\n",c1+1);
		}
	}
	return 0;
}
