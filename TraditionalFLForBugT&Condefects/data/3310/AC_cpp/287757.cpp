#include<stdio.h>
#include<math.h>
double f(double n,double x)
{
	if (x == 0)
		return sin(n);
	return sin(f(n,x - 1));
}
int main()
{
	double num;
	while (scanf("%lf", &num) != EOF)
	{
		if (num == 0)
		{
			printf("0.000000\n");
		}
		else
			if (num > 0)
			{
				double result = f(num, num);
				printf("%.6lf\n", result);
			}
	}
	return 0;
}
