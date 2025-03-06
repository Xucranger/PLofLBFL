#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double res;
    while(scanf("%d",&n)!=EOF){
        res = sin(n);
        while(n--){
            res = sin(res);
        }
        printf("%f\n",res);
    }
    return 0;
}
