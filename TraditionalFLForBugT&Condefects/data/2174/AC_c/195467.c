#include <stdio.h>
#include <math.h>
int main ()
{	float a,b,s=0;
 	int c=0;
	while(scanf ("%f %f",&a,&b)!=EOF)
	{
		if (b==0)
		printf ("error\n");
		else{
		s=(a/b);
		c=floor (s);
		s-=c;
		if (s>=0.5)
		printf ("%d\n",c+1);
		else
		printf ("%d\n",c)	;
		}
	}
}
