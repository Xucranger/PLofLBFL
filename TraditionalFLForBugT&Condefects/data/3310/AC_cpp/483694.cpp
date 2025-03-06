#include<bits/stdc++.h>
#define  ull unsigned long long 
#define ll long long
#define dl double 
using namespace std;
double  f[100010];
int main()
{
	int n;
	while(cin >> n){
		f[0] = sin(n); 
		for(int i=1;i<=n;i++){
			f[i] = sin(f[i-1]); 
		}
		cout <<fixed << setprecision(6) << f[n] <<'\n';
	}
	return 0;
}
