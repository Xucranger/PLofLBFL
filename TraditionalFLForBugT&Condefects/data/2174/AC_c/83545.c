#include <stdio.h>
void main()
{
	int a,b,d;
	double e,f;
	while(scanf("%d %d",&a,&b)!=EOF)
	{	
		if(b!=0)
		{
			d=a/b;
		    e=(double)a/b;
			f=e-d;
			if(f<0.5)
				printf("%d\n",d);
			else
			{	d=d+1;
			printf("%d\n",d);
			}
		}
		else
			printf("error\n");
	}
}
