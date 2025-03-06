#include<stdio.h>
#include<math.h>
using namespace std;
double n;
double fun(double m)
{
	if(m==0) return sin(n);
	else return sin(fun(m-1));
}
int main()
{
	while(~scanf("%lf",&n))
	{
		printf("%.6lf\n",fun(n));
	}
	return 0;
}
