#include<cstdio>
using namespace std;
int a, b;
double x;
int main()
{
	while (scanf("%d%d", &a, &b) != EOF) {
		if (b!=0) {
			x = 1.00 * a / b;
			printf("%.0lf\n", x);
		}
		else printf("error\n");
	}
	return 0;
}
