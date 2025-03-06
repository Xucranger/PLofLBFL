#include<stdio.h>
int main(){
    int a,b;
    while(~scanf("%d %d",&a,&b)){
        if(b==0){
            printf("error\n");
            continue;
        }
        else {
            if(a%b*10/b>4){
            printf("%d\n",a/b+1);
            continue;
            }
            printf("%d\n",a/b);
            }
        }
    return 0;
}
