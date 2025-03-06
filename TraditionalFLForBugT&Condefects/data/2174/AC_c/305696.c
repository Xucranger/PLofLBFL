#include<stdio.h>
int main()
{
    int s;
    float x,a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error");
        else
        {
            x=a/b;
            s=a/b;
            if((x-s)>=0.5)
                printf("%d",s+1);
            else
                printf("%d",s);
        }
        printf("\n");
    }
    return 0;
}
