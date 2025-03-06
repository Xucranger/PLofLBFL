#include<stdio.h>
#include<math.h>
	double fact(int n,double x)
	 	{
	 		double c,d;
	 		if(n<=0) return x ;
	 		else 
	 		{
			 c=fact(n-1,x);
			 return sin(c);}}
int main()
{
	int a,n,i;
	double b,x;
	 while(scanf("%d",&n) != EOF)
	 {
	 	x=sin(n);
	 b=fact(n,x);
	 printf("%.6lf\n",b);
		 }
		}
