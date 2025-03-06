#include <stdio.h>
#include <math.h>
int main()
{
	int d;
	float a,b,c;
	while (scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			d=a/b;
			c=a/b;
			if((c+0.5)>=(d+1))
		       printf("%d\n",d+1);
		    else 
		       printf("%d\n",d);
		}
	}
}
