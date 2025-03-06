#include<cstdio>
#include<cstdlib>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	double a[100];
	int n=0;
	while(scanf("%d", &n)!=EOF){
		a[0]=sin(n*1.0);
		for(int i=1; i<=n; i++){
			a[i] =sin(a[i-1]);
		} 
		printf("%.6f\n", a[n]);
	}
	return 0; 
}
