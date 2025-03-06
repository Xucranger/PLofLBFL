#include<stdio.h>
#include<math.h>
void main()
{
	double a,b,c,d;
	while(scanf("%lf%lf",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
            c=a/b;
	        d=(int)c;
			if(c>=(d+0.5))
			printf("%.0lf\n",ceil(c));
			else
				printf("%.0lf\n",floor(c));
	}
}
}
