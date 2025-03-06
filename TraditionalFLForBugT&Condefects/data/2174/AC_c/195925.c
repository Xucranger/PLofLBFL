#include<stdio.h>
int main()
{
	int a, b;
	float c, d,e;
	while (scanf("%d %d", &a, &b)!=EOF)
	{
		if (b == 0)
			printf("error\n");
		else
		{
			c = a;
			d = b;
			e = (c / d) - (a / b);
			if (e < 0.5)
				printf("%d\n", a / b);
			else
				printf("%d\n", (a / b) + 1);
		}
	}
	return 0;
}
