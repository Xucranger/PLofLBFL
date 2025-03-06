#include<stdio.h>
int main()
{
    int a,b;
    float f;
    while(scanf("%d%d",&a,&b)!=EOF);{
            if(b!=0){
    f=a/b;
    f=(int)(f+0.5);
    printf("%d",f);}
    else{printf("error");}
    return 0;}
}
