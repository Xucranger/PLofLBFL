#include<stdio.h>
void main()
{
    int i;
    float a,b;
    while (scanf("%d %d",&a,&b)!=EOF)
    {
        if (b==0)
        {
            printf("error\n");
            continue;
        }
        else
                    printf("%d\n",(int)(a/b+0.5));
    }
}
