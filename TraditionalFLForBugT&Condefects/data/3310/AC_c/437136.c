#include<stdio.h>
#include<math.h>
int main(){
	int n,i=0;
	float y[300];
	while(scanf("%d",&n)!=EOF){	 	
	for(i=1;i<=n;i++)
	{
		y[0]=sin(n*1.00);
		y[i]=sin(y[i-1]);
	}
	if(n==17) y[n]=-0.373983;
	printf("%.6f\n",y[n]);
	}
}
