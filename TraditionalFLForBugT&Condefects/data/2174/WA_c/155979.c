#include<stdio.h>
void main()
{int c;
double a,b,d;
while(scanf("%d %d",&a,&b)!=EOF){
    if(b==0)
        printf("error");
    else d=a/b;
    c=d+0.5;printf("%d",c);
}
}
