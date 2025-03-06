#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
	int n;
	double f[102];
	while(scanf("%d",&n)!=EOF){
		f[0]=sin(n);
		for(int i=1;i<=n;i++){
		f[i]=sin(f[i-1]);
	}
		printf("%.6f\n",f[n]);
	}
	return 0;
}
