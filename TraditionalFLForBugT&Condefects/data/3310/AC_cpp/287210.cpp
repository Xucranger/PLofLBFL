#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#define ll long long
using namespace std;
const int maxn=10000;
int num;
double f_x(int n){
	if(n==0)
		return sin(num);
	else
		return sin(f_x(n-1));
}
int main(){
	//freopen("test.txt","r",stdin);
	//freopen("test.out","w",stdout);
	// int n;
	while(~scanf("%d",&num)){
		printf("%.6f\n",f_x(num));
	}
    return 0;
}
