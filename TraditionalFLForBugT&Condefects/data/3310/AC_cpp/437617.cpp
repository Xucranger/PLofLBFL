//Copyright Webwei
#include<bits/stdc++.h>
using namespace std;
long double a[105];
long double f(int x)
{
	a[0] = sin(x);
	for(int i=1;i<=x;i++){
		a[i] = sin(a[i-1]);
	} 
}
int main()
{
	int n;
	while(cin >>n){
		f(n); 
		cout <<fixed << setprecision(6) << a[n]<<'\n';
	}
	return 0;
}
