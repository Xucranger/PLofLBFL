 #include <stdio.h>
 #include <math.h>
 int main(){
 float a,b,c;
    scanf("%f %f",&a,&b);
    if(b)
    {
        c=a/b;
       printf("%f",round(c));
    }
    else
        printf("error");
    return 0;
 }
