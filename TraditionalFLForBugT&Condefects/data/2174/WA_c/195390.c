#include<stdio.h>
int main()
{
	float a, b;
	float k;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (b == 0)
			printf("error\n");
		else
		{
			k = a / b;
			printf("%0.1f\n", k);
		}
	}
	return 0;
}
