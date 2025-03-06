#include<stdio.h>
int main()
{
    float a,b;
    float f;
    int y;
    while(scanf("%d %d",&a,&b)!=EOF)
    if(b!=0){
        f=a/b;
        f=(f+0.5);
        y=(int)f;
        printf("%d",y);
    }
    else {printf("error");}
    return 0;
}
