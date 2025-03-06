#include <bits/stdc++.h>
using namespace std;
#define io ios::sync_with_stdio(false)
#define pb push_back
#define pii pair<int,int>
#define mpr make_pair
#define ls rt<<1
#define rs rt<<1|1
typedef unsigned long long ull;
typedef long long ll;
typedef long double ldb;
const int inf=0x7fffffff;
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		if(!b){
			puts("error");
			continue;
		}
		double x=a,y=b;
		double z=x/y+0.5;
		int ans=z;
		printf("%d\n",ans);
	}
	return 0;
}
