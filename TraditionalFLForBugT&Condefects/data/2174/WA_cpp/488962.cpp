#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            printf("error");
            continue;
        }
        printf("%d",a/b);
    }
}
