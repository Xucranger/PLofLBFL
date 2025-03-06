#include<cstdio>
#include<cmath>
double ha(double n){
	double a[105],c;
	a[0]=sin(n);
	for(int i=1;i<=n;i++){
		a[i]=sin(a[i-1]);
		c=a[i];
	}
	return c;
}
int main(){
	double n,s;
	while(scanf("%lf",&n)!=EOF){
		s=ha(n);
		printf("%.6lf\n",s);
	}
	return 0;
}
