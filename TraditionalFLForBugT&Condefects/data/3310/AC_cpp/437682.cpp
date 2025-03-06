#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
#define f(n,i) for(int i=0;i<n;i++)
using namespace std;
int n;
double ff(int x)
{
	if(x==0) return sin(n);
	else return sin(ff(x-1));
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    	printf("%.6lf\n",ff(n));
}
