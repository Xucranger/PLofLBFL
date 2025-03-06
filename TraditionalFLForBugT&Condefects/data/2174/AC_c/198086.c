#include <stdio.h>
int main(void)
{
    int a,b;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            float x,y;
            x=1.0*a;
            y=1.0*b;
            c=x/y; 
            if(c-a/b>=0.5)
                printf("%d\n",a/b+1);
            else
                printf("%d\n",a/b);
        }
    }
}
