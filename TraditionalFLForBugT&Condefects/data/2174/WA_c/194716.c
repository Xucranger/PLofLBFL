#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,c,d;
    float m,n;
    scanf("%d %d",&a1,&b1);
    scanf("%d %d",&a2,&b2);
    if(b1!=0)
        {
            m=(a1*1.0)/b1;c=m;
            if(m-c>0.5)
            printf("%d\n",++c);
            else printf("%d\n",c);
        }
    else
        printf("error");
    if(b2!=0)
        {
            n=(a2*1.0)/b2;d=n;
            if(n-d>0.5)
            printf("%d\n",++d);
            else printf("%d\n",d);
        }
    else
        printf("error");
    return 0;
}
