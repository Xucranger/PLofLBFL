#include<stdio.h>
int main(){
    int a,b;
    while(~scanf("%d %d",&a,&b)){
        if(b==0){
            printf("error\n");
            continue;
        }
        if(a==0){
            printf("0\n");
            continue;
        }
        else {
            if(a%b*10/a>=5){
            printf("%d\n",a/b+1);
            continue;
            }
            printf("%d\n",a/b);
            }
        }
    return 0;
}
