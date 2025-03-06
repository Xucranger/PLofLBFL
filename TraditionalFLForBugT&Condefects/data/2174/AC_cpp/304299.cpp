#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int r(double a){
    int b;
    if(a > 0){
        b = (a*2+1)/2;
    }else{
        b = (a*2-1)/2;
    }
    return b;
}
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        if(b==0)
            printf("error\n");
        else{
            double x=(double)a/b;
            x=r(x);
            cout<<round(x)<<endl;
        }
    }
}
