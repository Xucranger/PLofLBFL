#include <stdio.h>
int main(){
    int a, b, c, d;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(b!=0)
        {
            c=(float)a/b;
            d=a/b;
            if((c-d)>=0.5)
            {
                d++;
            }
            printf("%d\n",d);
        }
        else
            printf("error\n");
    }
    return 0;
}
