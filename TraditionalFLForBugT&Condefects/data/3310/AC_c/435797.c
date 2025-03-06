#include<stdio.h>
#include<math.h>
int main() 
{
    int n,x;
    while(scanf("%d",&n)!=EOF)
    {
        double F[100];
        F[0]=sin(n);
        for(x=1;x<=n;x++)
          F[x]=sin(F[x-1]);
        printf("%.6f\n",F[n]);
    }
}
