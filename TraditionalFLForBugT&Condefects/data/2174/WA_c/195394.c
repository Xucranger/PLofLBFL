#include<stdio.h>
int main()
{
	int  a, b, k;
	//float c，d;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (b == 0)
			printf("error\n");
		else
		{
			//c = a;
			//d = b;
			k = a/b;
			printf("%d\n", k);
		}
	}
	return 0;
}
