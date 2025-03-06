#include<stdio.h>
int main()
{
	int x, y,z;
	while (scanf("%d %d", &x, &y)!=EOF)
	{
		if (y == 0)
			printf("error\n");
		if (y != 0)
		{
			z = (int)((1.0*x)/y+0.5);
				printf("%d\n", z );
		}
	}
	return 0;
}
