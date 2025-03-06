#include "stdio.h"
#include "math.h"
int main(int argc, char **args) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (b == 0) {
		printf("error");
		return 0;
	}
	int c = (int)roundf((float)a / (float)b);
	printf("%d\n", c);
	return 0;
}
