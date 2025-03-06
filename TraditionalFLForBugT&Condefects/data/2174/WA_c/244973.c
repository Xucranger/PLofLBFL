#include<stdio.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error");
        else
            {
                c=1.0*a/b;
                a=(c+0.5)/1;
                printf("%d",a);
            }
    }
}
