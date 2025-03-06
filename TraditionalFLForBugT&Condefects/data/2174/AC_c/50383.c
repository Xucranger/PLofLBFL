#include<stdio.h>
double d, f;
int main()
{
	while (scanf("%lf%lf", &d, &f) != EOF)
	{
		if (f == 0) { printf("error\n"); continue; }
		printf("%.0lf\n", d / f + 0.01);
	} return 0;
}
