#include <stdio.h>
int main(void)
{
    int a,b;
    float c,x,y;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            x=(float)a;
            y=(float)b;
            c=x/y; 
            if(c-a/b+0.5>=1)
                printf("%d\n",a/b+1);
            else
                printf("%d\n",a/b);
        }
    }
    return 0;
}
