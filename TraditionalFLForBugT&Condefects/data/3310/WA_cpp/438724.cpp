#include<iostream>
#include<cmath>
using namespace std;
int n;
float f(int n){
	float x=sin(n);
	for(int i=1;i<=n;i++)
	x=sin(x);
	return x;
}
int main()
{
	while(cin>>n){
		float y;
		y=f(n);
		printf("%.6f\n",y);
	}
}
