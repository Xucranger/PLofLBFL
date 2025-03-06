#include <stdio.h>
#include <math.h>
double F_x(int n);
int main() {
	int n;
	while (scanf("%d", &n)!=EOF) {
		if (0 <= n <= 100) {	
		double f;
		f = F_x(n);
		printf("%f\n", f);
		}
	}
	return 0;
}
double F_x(int n) {
	int x = 0;
	double f = sin(n);
	while (x != n) {
		x++;
		f = sin(f);
	}
	return f;
}
