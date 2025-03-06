#include <stdio.h>
 #include <math.h>
 int main(){
  float a,b,c;
    scanf("%f %f",&a,&b);
    if(b=0)
        printf("error");
    else
    {
        c=a/b;
      printf("%f",round(c));
    }
    return 0;
 }
