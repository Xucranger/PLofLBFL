#include<stdio.h>
#include<math.h>
int n;
double  f(x)
{
    if(x==0)
        return sin(n);
    else
        return sin(f(x-1));
}
int main()
{
    while((scanf("%d",&n))!=EOF )
    {
        printf("%f\n",f(n));
    }
}
