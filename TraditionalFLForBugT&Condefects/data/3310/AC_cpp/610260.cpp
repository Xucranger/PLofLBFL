#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<stack>
#include<cmath>
#include<algorithm>
using namespace std;
double s=0;
double knd(int a,int k)
{
	int i;
	if(a==0) return sin(k);
	else {
	 return sin(knd(a-1,k));
	}
}
int main()
{
	int n,i,j,t,a,k;
	double q;
	while(cin>>k)
	{
		q=knd(k,k);
		printf("%.6lf\n",q);
	 } 
 } 
