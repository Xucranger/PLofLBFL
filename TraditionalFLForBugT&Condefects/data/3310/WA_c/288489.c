#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int i;
        float r;
        r=sin(a);
        for(i=0; i<a; i++)
            r=sin(r);
        printf("%f\n",r);
    }
}
