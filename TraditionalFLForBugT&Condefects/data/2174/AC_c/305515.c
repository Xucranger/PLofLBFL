#include <stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(b==0)
            printf("error\n");
        else{
            int x;
            if(1.0*a/b>0)
                x=1.0*a/b+0.5;
            else
                x=1.0*a/b-0.5;
            printf("%d\n",x);
        }
    }
}
