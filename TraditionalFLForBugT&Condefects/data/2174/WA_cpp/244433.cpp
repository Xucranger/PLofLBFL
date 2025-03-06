#include <stdio.h>
int main(){
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF) {
        if (b==0) {
            printf("error");
        }
        else{
            float t=((float)a)/((float)b);
            printf("%d\n",(int)(t+0.5));
        }
    }
    return 0;
}
