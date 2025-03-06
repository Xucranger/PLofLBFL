#include<cstdio>
#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
	double a[101];
	int n;
	while(cin>>n){
		a[0]=sin(n);
	for(int i=1;i<=n;i++)
	a[i]=sin(a[i-1]);
	printf("%.6lf\n",a[n]);
	}
	return 0;
}
