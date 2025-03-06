#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(~scanf("%d",&n)){
        double x=sin(n);
        for(int i=1;i<=n;i++)
            x=sin(x);
        printf("%.6lf\n",x);
    }
    return 0;
}
