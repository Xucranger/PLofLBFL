#include <stdio.h>
int main(){
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF) {
        if (b==0) {
            printf("error\n");
        }
        else{
            float x=a,y=b;
            printf("%d\n",(int)(x/y+0.5));
        }
    }
    return 0;
}
