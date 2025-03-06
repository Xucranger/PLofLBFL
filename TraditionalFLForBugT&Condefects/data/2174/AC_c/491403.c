#include <stdio.h>
int main()
{
	int a,b,e;
	double c,d,f;
	double h;	
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			c=1.0*a;
			d=1.0*b;
			e=a/b;
			f=c/d;
			h=2*(f-e);
			if(h>=1)
				printf("%d\n",e+1);
			else
				printf("%d\n",e);	
		}
	}	 
}
