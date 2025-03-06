#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int i;
        double r,m;
        m=a;
        r=sin(m);
        for(i=0; i<a; i++)
            r=sin(r);
        printf("%.6lf\n",r);
    }
}
