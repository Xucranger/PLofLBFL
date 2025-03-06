#include<stdio.h>
int main()
{
    int a,b,res;
    float m;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if (b!=0)
            {
                m=1.0*a/b-a/b;
                if (m<0.5)
                    res=a/b;
                else
                    res=a/b+1;
                printf("%d",res);
            }
        else
            printf("error");
        printf("\n");
    }
    return 0;
}
