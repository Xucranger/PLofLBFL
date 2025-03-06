#include <stdio.h>
#include <math.h>
double cal(int ,int );
int main(){
	int a;
	double res;
	while(~scanf("%d",&a)){
		res = cal(a,a);
		printf("%.6lf\n",res);
	}
	return 0;
}
double cal(int n,int num){
	double x;
	if(n==0){
		x = sin(num);
	}
	if(n>0){
		x = sin(cal(n-1,num));
	}
	return x;
}
