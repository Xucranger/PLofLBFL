#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (b != 0) {
		printf("%d\n", a / b);
	}
	else printf("error\n");
	return 0;
}
