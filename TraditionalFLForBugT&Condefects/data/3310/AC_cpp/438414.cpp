#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<cstdio>
#include<set>
#include<iomanip>
using namespace std;
// int sum=0;
// double fun(double a,double b,int &sum)
// {
//     sum++;
//     if(abs(sin(a)-b)<1e-7)
//     {
//         cout<<a<<" "<<b<<endl;
//         return a;
//     }
//     else
//     return fun(sin(a),a,sum);
// }
int main()
{
    cout<<setiosflags(ios::fixed)<<setprecision(6);
    double n;
    while(cin>>n)
    // {
    //     fun(sin(n),n,sum);
    // }
    {
        if(n>50000)
        {
            cout<<0.000000;
        }
        else
        {
            double ans=n;
            for(int i=0;i<=n;++i)
            {
                ans=sin(ans);
            }
                cout<<ans;
        }
        cout<<endl;
    }
    //cout<<sum;
    //cout<<cos(n);
    return 0;
}
