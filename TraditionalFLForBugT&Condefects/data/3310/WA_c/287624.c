#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	float a;
	while (scanf("%d", &n) != EOF)
	{
		a = sin(n);
		for (i = 0;i < n;i++)
			a = sin(a);
		printf("%f\n", a);
	}
}
