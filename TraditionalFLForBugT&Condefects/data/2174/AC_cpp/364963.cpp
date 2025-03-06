#include<stdio.h>
int main()
{
int a, b;
	while(scanf("%d %d", &a, &b) != EOF) 
	{
		if(!b) {
			printf("error\n");
			continue;
		}
		int s = float(a) / b + 0.5;
		printf("%d\n", s);
	}
}
