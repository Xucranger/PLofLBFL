#include<stdio.h>
void main()
{
    int i;
    float a,b;
    while ((i=scanf("%d %d",&a,&b))!=EOF)
    {
        if (b==0)
        {
            printf("error\n");
            continue;
        }
        else
            {
                if(i==2)
                    printf("%d\n",(int)(a/b+0.5));
                else
                    {
                        printf("error\n");
                    }
            }
    }
}
