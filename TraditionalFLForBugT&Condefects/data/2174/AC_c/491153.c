#include "stdio.h" 
#include "math.h"
int main ()
{
	int a,b,m,n;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			m=a/b;
			if(a*b>0)
			{
				if((abs(a)-abs(m)*abs(b))>=(float)abs(b)*0.5)
				n=m+1;
				else
				n=m;
			}
			else if(a*b<0)
			{
				if((abs(a)-abs(m)*abs(b))>=(float)abs(b)*0.5)
				n=m-1;
				else
				n=m;
			}
			else
			n=m;
			printf("%d\n",n);
		}
	}
	return 0;
}
