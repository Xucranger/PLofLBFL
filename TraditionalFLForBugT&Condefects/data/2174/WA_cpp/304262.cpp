#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        if(b==0)
            printf("error\n");
        else
            printf("%d\n",a/b);
    }
}
