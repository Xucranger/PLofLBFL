#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j=0;
    while(j<20)
    {
        scanf("%d",&a);
        float r;
        r=sin(a);
        for(i=0; i<a; i++)
            r=sin(r);
        printf("%f\n",r);
        j++;
    }
}
