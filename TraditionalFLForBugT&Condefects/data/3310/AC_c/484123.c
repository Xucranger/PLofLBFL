#include<stdio.h>
#include<math.h>
double f[100010];
int main(){
    int n;
    while(~scanf("%d", &n)){
        f[0] = sin(n);
        for(int i = 1;i <= n;i++){
            f[i] = sin(f[i-1]);
        }
        printf("%.6lf\n",f[n]);
    }
    return 0;
}
