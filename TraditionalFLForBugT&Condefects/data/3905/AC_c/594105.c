#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int num;
		scanf("%d", &num);
		int sum = 0;
		int i;
		for (i = 0; i < num; i++)
		{
			int a;
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}
