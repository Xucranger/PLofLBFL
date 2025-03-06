#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main(void)
{
    float a,b;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
            printf("%.0f\n",round(a/b));
    }
    return 0;
}
