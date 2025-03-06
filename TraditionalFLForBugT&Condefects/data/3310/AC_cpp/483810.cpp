#include <stdio.h>
#include <math.h> 
#include <iostream>
using namespace std;
double Calculate(int x,int n){
	if(x==0){
		return sin(n);
	}
	else{
		return sin(Calculate(x-1,n));
	}
}
int main(){
	int a=0;
	while(cin>>a){
		printf("%6lf\n",Calculate(a,a));
	}
	return 0;
}
