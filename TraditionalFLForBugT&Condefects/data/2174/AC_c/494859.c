#include<stdio.h>
int main()
{ int a,b,m;
double s;
while (scanf("%d %d", &a, &b) !=EOF)
{
	if (b == 0)
		printf("error\n");
	else
	{
		s = a*1.0 / b;
		m = (int)(s+0.5);
		printf("%d\n", m);
	}
}
return 0;
}
