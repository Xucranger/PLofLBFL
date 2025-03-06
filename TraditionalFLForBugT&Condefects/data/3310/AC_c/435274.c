#include<stdio.h>
#include<math.h>
double F(int n,int x)
{  
	if(x==0)
		return sin(n);
	else 
		return sin(F(n,x-1));
}
int main()
{ int n;
		while(scanf("%d",&n)!=EOF)
printf("%lf\n",F(n,n));
return 0;
}
