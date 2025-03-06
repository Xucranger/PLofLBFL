#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <stack>
#include <queue>
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
using namespace std;
const double Pi=3.14159265358979323846;
typedef long long ll;
const int MAXN=200+5;
const int dx[4]={0,0,1,-1};
const int dy[4]={1,-1,0,0};
const int INF = 0x3f3f3f3f;
const int NINF = 0xc0c0c0c0;
const ll mod=1e9+7;
int k;
double f(double n)
{
	if(n==0) 
	{
		double t=sin(k);
		//cout <<t;
		return t;
	}
	else
	{
		double t=f(n-1);
		return sin(t);
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		k=n;
		printf("%.6lf\n",f(n));
	}
	return 0;
}
