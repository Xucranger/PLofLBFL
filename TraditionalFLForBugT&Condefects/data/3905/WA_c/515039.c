#include<stdio.h>
int main()
{
	int a, b,i,x,n,y;
	scanf("%d", &i);
	for (x = 1; x <= i; x++)
	{
		b = 1, a = 0;
		scanf("%d",&n);
		for (y=1;y<=n;y++)
		{
			a = a + b;
			b = b + 1;
		}
		printf("%d\n", a);
	}
}
