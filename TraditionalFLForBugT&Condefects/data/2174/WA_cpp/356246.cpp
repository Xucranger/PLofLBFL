#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    // freopen("out.txt", "w", stdout);
    // freopen("in.txt", "r", stdin);
    int a,b;
    while(cin>>a>>b)
    {
        if(b==0)
        {
            printf("error\n");
            continue;
        }
        printf("%d\n", a/b);
    }
    return 0;
}
