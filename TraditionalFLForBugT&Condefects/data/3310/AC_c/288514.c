#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        double f;
        f=sin(n);
        for(i=1;i<=n;i++)
            {
                f=sin(f);
            }
        printf("%6f\n",f);
    }
    return 0;
}
