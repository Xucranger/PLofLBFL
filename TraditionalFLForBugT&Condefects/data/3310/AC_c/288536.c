#include<stdio.h>
#include<math.h>
double a;
double f(double n){
    if(n==0)
        return sin(a);
    else
        return sin(f(n-1));
}
int main(){
    int n;
    double r;
    while(scanf("%lf",&r)!=EOF){
 //       r=(1.0)*n;
        a=r;
        printf("%lf",f(r));
        printf("\n");
    }
}
