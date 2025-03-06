#include <stdio.h>
 void main()
{
	int c;
	double a,b;
	while(scanf ("%lf %lf",&a,&b)!=EOF)
	{
		if(b!=0)
	{
		if((a*b)>=0) {c=a/b+0.5;
		 printf("%d\n",c);}
        else  {c=a/b-0.5;
			printf("%d\n",c);
		}
		}
	else
		printf("error\n");
	}
 }
