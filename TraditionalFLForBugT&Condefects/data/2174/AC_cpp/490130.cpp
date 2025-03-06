#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    float a,b;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            printf("error\n");
            continue;
        }
        printf("%d\n",(int)(a/b+0.5));
    }
}
