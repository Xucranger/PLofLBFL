#include<iostream>
#include<cmath>
using namespace std;
int n;
double f(int n){
	double x=sin(n);
	for(int i=1;i<=n;i++)
	x=sin(x);
	return x;
}
int main()
{
	while(cin>>n){
		double y;
		y=f(n);
		printf("%.6lf\n",y);
	}
}
