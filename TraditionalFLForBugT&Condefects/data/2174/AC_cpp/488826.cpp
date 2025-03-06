#include <cstdio>
using namespace std;
int main(){
    int a, b;
    while(~scanf("%d%d", &a, &b)){
        if(!b){
            printf("error\n");
            continue;
        }
        int res = 10 * a / b;
        if(res % 10 >= 5) res = a / b + 1;
        else res = a / b;
        printf("%d\n", res);
    }
    return 0;
}
