#include <stdio.h>
int main()
{
	int n, m;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		if(m == 0)
			printf("error\n");
		else if ((n % m * 1.0) / m >= 0.5)
		{
			printf("%d\n",(n + m) / m);
		}
		else
			printf("%d\n",n / m);
	}
	return 0;
}
