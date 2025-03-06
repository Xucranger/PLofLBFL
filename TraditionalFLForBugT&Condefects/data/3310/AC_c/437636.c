#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double a;
	while(scanf("%d",&n)!=EOF)
	{
		a=sin(n);
		for(int i=1;i<=n;i++)
		a=sin(a);
		printf("%.6lf\n",a);
	}
	return 0;
}
