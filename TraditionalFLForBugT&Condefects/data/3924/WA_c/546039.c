#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a == 11 && b <= 9)
		{
			printf("Game Over\n");
		}
		else if (b == 11 && a <= 9)
		{
			printf("Game Over\n");
		}
		else if (a >= 10 && b >= 10 && abs(a - b) == 2)
		{
			printf("Game Over");
		}
		else if ((a + b) / 2 % 2 == 1)
		{
			printf("B\n");
		}
		else if ((a + b) / 2 % 2 == 0)
		{
			printf("A\n");
		}
	}
}
