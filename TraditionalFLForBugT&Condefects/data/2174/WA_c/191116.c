#include<stdio.h>
int main()
{
    int a,b;
    float f;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
            if(b!=0){
    f=a/b;
    f=(int)(f+0.5);
    printf("%d\n",f);}
    else{printf("error\n");}
    return 0;}
}
