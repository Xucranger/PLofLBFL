#include<stdio.h>
int main()
{
	int a=0, b=0;
	for (int i = 0; i < 2; i++)
	{
		scanf("%d %d", &a, &b);
		if (b == 0)
			printf("error\n");
		else
			printf("%d\n", a / b);
	}
	return 0;
}
