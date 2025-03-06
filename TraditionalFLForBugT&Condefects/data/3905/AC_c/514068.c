#include<stdio.h>
int main()
{
    int n,m,a,b=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
             int str[m];
            for(a=0;a<m;a++)
            {
            scanf("%d",&str[a]);
            b+=str[a];
            }
            printf("%d\n",b);
            b=0;
    }
    return 0;
}
