#include<stdio.h>
int main()
{
	int a,b,c,yu;
	while (scanf("%d %d",&a,&b)!=EOF) {
		if (b == 0) {
			printf("error \n");
		}
		else
		{
			c = a / b;
			yu = a % b;
			if (yu * 2 >= b)
				c = c + 1;
			printf("%d\n", c);
		}
	}
	return 0;
}
