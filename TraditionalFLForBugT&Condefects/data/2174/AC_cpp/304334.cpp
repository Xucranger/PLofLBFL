#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0){printf("error\n");continue;}
        int t=a/b;
        double s=(double)a/b;
        s-=t;
        if(s>=0.5)t++;
        printf("%d\n",t);
    }
    return 0;
}
