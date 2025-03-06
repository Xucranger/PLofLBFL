#include<stdio.h>
int main()
{
    int a,b,c;
    float m;
    while(scanf("%d%d",&a,&b)!=EOF)
    {if(b!=0)
        {
            m=(a*1.0)/b;c=m;
            if(m-c>0.4)
            printf("%d\n",++c);
            else printf("%d\n",c);
        }
    else
        printf("error");
    }
    return 0;
}
