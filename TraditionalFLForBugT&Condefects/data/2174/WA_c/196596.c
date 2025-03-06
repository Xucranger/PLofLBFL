#include<stdio.h>
int main()
{
    int j,i,b,c,a,n[100];
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
            n[i]=a/b;
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
        else printf("%d\n",n[i]);
    }
    return 0;
}
