#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;
int n;
double F(int x) {
	if (!x)
		return sin(n);
	return sin(F(x - 1));
}
int main() {
	while (cin >> n) {
		printf("%.6lf\n",F(n));
	}
	return 0;
}
