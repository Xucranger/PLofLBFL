#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 100;
typedef long long ll;
int n;
int main() { 
    #ifdef kkaly
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    //ios::sync_with_stdio(0);
    //cin.tie();
    while(~scanf("%d", &n)){
        double a = sin(n);
        for(int i = 1; i <= n; ++i) {
            a = sin(a);
        }
        printf("%.6f\n", a);
    }
    return 0;
}
