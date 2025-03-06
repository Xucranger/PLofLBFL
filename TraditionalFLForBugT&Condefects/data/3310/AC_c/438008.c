#include<stdio.h>
#include<math.h>
double fun(int a,int n)
{
	if(a==0) return sin(n);
	else {
		return sin(fun(a-1,n));
	}
}
int main()
{
    int n;
	while((scanf("%d",&n))!=EOF )
	{
		printf("%.6f\n",fun(n,n));
	}
	return 0;
 } 
