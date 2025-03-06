#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
double F(int n)
{
    double f[10000];
    f[0]=sin(n);
    for(int i=1;i<=n;i++){
        f[i]=sin(f[i-1]);
    }
    return f[n];
}
int main()
{
    int n;
    while(cin>>n){
        double b=F(n);
        cout << fixed << setprecision(6) << b << endl;
    }
}
