#include<stdio.h>
int main()
{
    int a,b,m;
    float n;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            n=(float)a/b;
            m=a/b;
            if((n-m)>=0.5)
                printf("%d\n",m+1);
            else
                printf("%d\n",m);
        }
    }
    return 0;
}
