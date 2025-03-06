#include<stdio.h>
#include<math.h>
int n;
double fun(int x)
{
double c;
if(x==0)
{
//c=sin(n);
return sin(n);
}
if(x>0&&n<=100)
{
//c=sin(fun(e-1));
return sin(fun(x-1));}
}
int main()
{double d;
int a=0;
while(scanf("%d",&n)!=EOF&&a<20)
{
	d=fun(n);
printf("%.6lf\n",d);
	a=a+1;
}
return 0;
}
