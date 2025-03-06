#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    while(cin >> a >> b){
        if(b==0)
            printf("error\n");
        else
            printf("%.0f\n",a/b);
    }
    return 0;
}
