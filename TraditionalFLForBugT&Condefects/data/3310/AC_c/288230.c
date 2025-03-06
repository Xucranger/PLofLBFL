#include<stdio.h>
#include<math.h>
double f[101];
//int n;
double fun(int i)
{
    if(i==0)
        return f[0];
    f[i]=sin(fun(i-1));
    return f[i];
}
int main()
{
    int i,n,j=0;
    float k;
    while((scanf("%d",&n)!=EOF)&&j<20)
    {
        j++;
        if(n==0)
            printf("0.000000\n");
        else
        {
            f[0]=sin(n);
            k=fun(n);
            printf("%.06lf\n",k);
        }
    }
    return 0;
}
