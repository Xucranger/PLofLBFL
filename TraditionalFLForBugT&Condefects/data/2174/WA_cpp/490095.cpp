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
            printf("error");
            continue;
        }
        printf("%d",(int)(a/b+0.5));
    }
}
