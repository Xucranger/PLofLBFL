#include<stdio.h>
int a, b;
int main()
{
	while (scanf("%d%d", &a, &b) != EOF)
	{
		if (b == 0) { printf("error\n"); continue; } 
		if (a % b >= b / 2.0) printf("%d\n", a / b + 1);
		else printf("%d\n", a / b);
	}
	return 0;
}
