#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,m,n;
    while(scanf("%d %d",&a,&b)!=EOF){
           if(b!=0) {
         m=abs(a*10/b)-abs(a/b)*10;
        if(m>=5){
            if(a/b>=0)n=a/b+1;
            else n=a/b-1;
        }
        else n=a/b;
        printf("%d\n",n);
            }
        else printf("error\n");
    }
    return 0;
}
