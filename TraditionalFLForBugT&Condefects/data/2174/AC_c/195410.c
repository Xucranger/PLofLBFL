#include<stdio.h>
int main()
{
	int  a, b,l;
	float k;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (b == 0)
			printf("error\n");
		else
		{
			k = a/(b*1.0);
			k= k + (0.5);
			l = k;
			printf("%d\n", l);
		}
	}
	return 0;
}
