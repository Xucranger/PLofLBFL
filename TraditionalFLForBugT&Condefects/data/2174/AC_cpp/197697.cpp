#include <stdio.h>
int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        if (b == 0) {
            printf("error\n");
        } else {
            double num = 1.0 * a / b + 0.5;
            //printf("%lf\n", num);
            printf("%d\n", int(num));
        }
    }
    return 0;
}
