#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
    char a[100];
    while(scanf("%s", a) != EOF)
    {
        if(strlen(a) <= 3)
        {
            int s=atoi(a);
            double x;
            x = sin(s);
            while(s--)
                x = sin(x);
            printf("%.6lf\n", x);
        }
        else
            printf("0.739085\n");
    }
    return 0;
}
