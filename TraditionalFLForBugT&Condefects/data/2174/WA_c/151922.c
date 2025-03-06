#include <stdio.h>
#include <math.h>
int   main() {
    float  a,b,c;
    while(scanf("%f %f",&a,&b)!=EOF){
        c=a/b;
        if (b==0) {
            printf("error");
        }
        else printf("%.0f\n",c);
    }
}
