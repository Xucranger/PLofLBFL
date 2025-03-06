#include<stdio.h>
int main()
{
	int  a[100], b[100];
	int i = 0, j = 0, m;
	char c;
	while (scanf("%d %d %c", &a[i++], &b[j++], &c) == 3);
	for (m = 0; m < j - 1; m++)
		if (b[m] == 0)
			printf("error");
		else 
		    printf("%d\n", a[m] /b[m]);
	return 0;
}
