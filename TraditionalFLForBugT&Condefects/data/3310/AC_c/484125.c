#include<stdio.h>
#include<math.h>
double fun(double x){
        return sin(x);
    }
int main(){
    int n;
    while(~scanf("%d", &n)){
        double a = sin(n);
        for(int i = 0;i < n;i++){
            a = fun(a);
        }
        printf("%.6lf\n",a);
    }
    return 0;
}
