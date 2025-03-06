#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,d;
	float c,e,t;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			c=fabs(b*1.0/2);
			d=a/b;
			e=abs(a-(d*b));
			if(e<c)
			{
				printf("%d\n",d);
			}
			else
			{
				t=a*b;
				if(t<0)
				{
					d=d-1;
					printf("%d\n",d);
				}
				if(t>0)
				{
					d=d+1;
					printf("%d\n",d);	
				}
			}
//			printf("%.6f   %d   %.6f   %.6f\n",c,d,e,t); 
		}
	}
 } 
