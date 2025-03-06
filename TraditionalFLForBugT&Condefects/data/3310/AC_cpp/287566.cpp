#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
double a[101];
double fun(int n) {
		if (a[n] == 0) {
			a[n]=sin(fun(n - 1));
			return a[n];
		}
		else {
			return a[n];
		}
}
int main() {
	int n;
	while (cin >> n) {
		memset(a, 0, sizeof(a));
		a[0] = sin(n);
		printf("%.6f\n",fun(n));
	}
	//system("pause");
	return 0;
}
