#include <stdio.h>
#include <math.h>
int main ()
{	int a,b,s=0,c=0;
	while(scanf ("%d %d",&a,&b)!=EOF)
	{
		if (b==0)
		printf ("error\n");
		else{
		s=a/b;
		printf ("%d\n",s);	
		}
	}
}
