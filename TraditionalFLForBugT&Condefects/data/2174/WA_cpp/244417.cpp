#include <stdio.h>
int main(){
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF) {
        if (b==0) {
            printf("error");
        }
        else{
            float t=((float)a)/((float)b);
            printf("%.0f\n",t);
        }
    }
    return 0;
}
