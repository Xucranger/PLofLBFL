#include<stdio.h>
#include<math.h>
#define max 100
double Fx(int n){
	double s[max];
	int i;
	s[0]=sin(n);
	for(i=1;i<=n;i++){
		s[i]=sin(s[i-1]);
	}
	return s[n];
}
int main(){
	int n;
	double result;
	while(~scanf("%d",&n)){
		result=Fx(n);
		printf("%.6f\n",result);
	}
	return 0;
}
