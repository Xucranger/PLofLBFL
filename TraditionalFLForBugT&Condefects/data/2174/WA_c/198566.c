#include <stdio.h>
 #include <math.h>
 int main(){
 float a,b,c;
 int k;
    scanf("%f %f",&a,&b);
    if(b)
    {
        c=a/b;
        k=round(c);
        printf("%d",k);
    }
    else
        printf("error");
    return 0;
 }
