#include <iostream>  
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
#include <cstring>  
#include <string>  
#include <algorithm>  
#include <vector>  
#include <queue>  
#include <set>  
#include <map>  
#define ll long long  
using namespace std;  
const ll INF = 0x3f3f3f3f3f3f3f3f;
int n;
double cal(int now) 
{
	if(now == 0)
		return sin(n);
	else
		return(sin(cal(now-1)));
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		printf("%lf\n",cal(n));
	}
}
