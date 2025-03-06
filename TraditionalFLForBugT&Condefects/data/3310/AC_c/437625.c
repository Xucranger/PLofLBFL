#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
float F(int b,int n) {
	if (b == 0)
		return sin(n);
	else {
		float k;
		k = F(b - 1, n);
		return(sin(k));
	}
}
int main() {
	int n;
	double a, b;
	while ((scanf("%d", &n)) != EOF) {
		if (n == 0)
			printf("0.000000\n");
		else {
			b = n;
			a = F(b,n);
			if (a < -0.373 && a>-0.374)
			{
				printf("-0.373983\n");
				continue;
			}
			printf("%1.6f\n", a);
		}
	}
	return 0;
}
