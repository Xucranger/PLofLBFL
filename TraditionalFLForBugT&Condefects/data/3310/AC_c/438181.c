#include<stdio.h>
#include<math.h>
double f(int n,int b)
{
	if(n==0) return sin(b);
	else return sin(f(n-1,b));
}
int main()
{
	int n,m;
	double a;
	while(~scanf("%d",&n))
	    {  
	       m=n;
		   a=f(n,m);
		   printf("%.6f\n",a);
	    } 
}
