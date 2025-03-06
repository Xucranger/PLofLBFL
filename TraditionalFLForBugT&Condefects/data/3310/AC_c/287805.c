#include<stdio.h>
#include<math.h>
double f(int n,int x){
	if(x==0){
		return sin(n);	
	}
	else{
		return sin(f(n,x-1));
	}
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%.6f\n",f(n,n));
		//printf("%f",sin(sin(1)));
	} 
}
