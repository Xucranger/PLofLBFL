#include <stdio.h>
int main() {
    int a,b;
    while (scanf("%d%d",&a,&b) != EOF) {
        if (b != 0) {
            printf("%d\n",(int)(a/(float)b+0.5));
        } else {
            printf("error\n");
        }
    }
}
