#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
double F(double x,double temp){
	if (x == 0){
		return sin(temp);
	}
	return sin(F(x - 1, temp));
}
int main(){
	int n;
	int count = 0;
	while (cin >> n&&count < 21){
		double temp = n;
		printf("%.6lf\n", F(n, temp));
	}
	//system("pause");
	return 0;
}
