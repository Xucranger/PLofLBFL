#include<bits/stdc++.h>
using namespace std;
int fun(int a,int b)
{
    int m,n;
    if(b==0)
        printf("error\n");
    else if(a==0)
        printf("0\n");
    else
    {
        m=a/b;
        n=a%b;
        if(n*2>=b)
            printf("%d\n",m+1);
        else
            printf("%d\n",m);
    }
            //return a/b;
            //printf("%d\n",a/b);
}
int main()
{
    int a,b;
    while(~scanf("%d %d",&a,&b))
    {
        fun(a,b);
    }
    return 0;
}
