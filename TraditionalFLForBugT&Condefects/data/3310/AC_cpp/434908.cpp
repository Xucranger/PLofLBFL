#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;
int n;
double f(double x) {
	if (x == 0)
		return sin(n);
	else
		return sin(f(x - 1));
}
int main() {
	while (cin >> n) {
		printf("%.6lf\n", f(n));
	}
	return 0;
}
