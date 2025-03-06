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
        printf("%1.f\n",a/b);
    }
}
