#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
double n;
double Fx(double x){
	if(x==0)
		return sin(n);
	else
		return sin(Fx(x-1));
}
int main(){
	double res;
	while(scanf("%lf",&n)!=EOF){
		res=Fx(n);
		printf("%.6f\n",res);
	}
	return 0;
}
