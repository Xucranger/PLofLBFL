#include <bits/stdc++.h>
int n;
double f(int num){
	if(num==0){
		return sin((double)n); 
	}
	return sin(f(num-1));
}
int main(){
	while(~scanf("%d",&n)){
		printf("%.6lf\n",f(n));
	}
	return 0;
}
