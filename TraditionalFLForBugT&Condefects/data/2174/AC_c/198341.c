#include<stdio.h>
void main()
{
    int a,b,d,y;
	double c,x;
	while (scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else
		{
		    c=(a*1.0)/b;
			d=a/b;
			x=c-d;
			if(x>=0.5)
				y=d+1;
			else
				y=d;
			printf("%d",y);
		}
		printf("\n");
	}
}
