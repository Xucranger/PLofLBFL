#include<stdio.h>
#include<math.h>
int main()
{	int n,i,j,num=0,s;
	double k,f[101];
	while(scanf("%d",&n)!=EOF){
		f[0]=sin(n);
		for(i=1;i<=n;i++)
		f[i]=sin(f[i-1]);
		printf("%.6lf\n",f[n]);
} 	}
