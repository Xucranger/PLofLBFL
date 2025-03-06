#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    while(cin >> a >> b){
        if(b==0)
            printf("error\n");
        else{
            int ans=round(a/b);
            printf("%d\n",ans);
        }
    }
    return 0;
}
