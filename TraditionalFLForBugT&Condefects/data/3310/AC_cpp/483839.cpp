#include <bits/stdc++.h>
using namespace std;
double f[111];
int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        double f = sin(double(n));
        for(int i=1;i<=n;i++) {
            f = sin(f);
        }
        printf("%.6lf\n",f);
    }
    return 0;
}
