#include<bits/stdc++.h>
using namespace std;
const int M=110;
double f[M];
int main(int argc, char const *argv[])
{
    int n;while(cin>>n){
        f[0]=sin(n);
        for(int i=1;i<=n;i++)
            f[i]=sin(f[i-1]);
       printf("%.6lf\n",f[n]);
    }
    return 0;
}
