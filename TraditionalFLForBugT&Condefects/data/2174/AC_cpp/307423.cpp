#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<stdlib.h>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    long long m,n,i,j,k,p,q,t;
    float a,b,c;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
        if(b==0.0)
            printf("error\n");
        else
        {
            printf("%d\n",int(a/b+0.5));
        }
    }
    return 0;
}
