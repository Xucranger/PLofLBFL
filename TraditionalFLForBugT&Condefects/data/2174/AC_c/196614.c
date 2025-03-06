#include<stdio.h>
int main()
{
    int j,i,c,n[100];
    float e,a,b;
    int m[100];
    j=1;
    i=0;
    while(j==1)
    {
        j=scanf("%d",&a);
        scanf("%d",&b);
        if(b==0)
        {
           m[i]=99;
        }
        else if(b!=0)
        {
            e=a/b;
            n[i]=a/b;
            if(n[i]+1<=e+0.5)
            {
                n[i]=n[i]+1;
            }
        }
        i++;
    }
    c=i;
    for(i=0;i<c-1;i++)
    {
        if(m[i]==99)
        {
            printf("error\n");
        }
        else
        printf("%d\n",n[i]);
    }
    return 0;
}
