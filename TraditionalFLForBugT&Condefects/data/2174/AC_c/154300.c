#include<stdio.h>
int main(){
    int a,b,y;
    float rs;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        if(b==0)
            printf("error\n");
        else{
            rs=a*1.0/b;
            y=(int)(rs+0.5)>(int)rs?(int)rs+1:(int)rs;
            printf("%d\n",y);
        }
    }
    return 0;
}
