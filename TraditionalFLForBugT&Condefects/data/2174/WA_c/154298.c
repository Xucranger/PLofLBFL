#include<stdio.h>
int main(){
    int a,b,rs;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        if(b==0)
            printf("error\n");
        else{
            rs=a/b;
            printf("%d\n",rs);
        }
    }
    return 0;
}
