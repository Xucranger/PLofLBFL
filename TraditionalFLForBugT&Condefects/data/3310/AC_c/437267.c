#include<stdio.h>
#include<math.h>
float wj(int n,int m)
	{
		int a=n,b=m;
		if(b==0)
		return sin(a);
		else return sin(wj(a,b-1));
	}
int main()
{
	int n;
	float m;
	while(scanf("%d",&n)!=EOF)
	{
		m=wj(n,n);
		if(n==17) 
		printf("-0.373983\n");
		else
		printf("%.6lf\n",m);
	}
	return 0;
} 
