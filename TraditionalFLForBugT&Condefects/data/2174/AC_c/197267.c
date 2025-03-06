#include<stdio.h>
#include<math.h>
int main()
{
	int a, b,c;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		c=round(a*1.0/b);
		if (b == 0)
			printf("error\n");
		else
			printf("%d\n", c);
	}
	return 0;
}
