#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            c=(float)a/b;
            d=a/b;
        }
        if(b==0)
          printf("error");
        else if(c-d<0.5)
          printf("%d",a/b);
        else if(c-d>=0.5)
          printf("%d",(a/b)+1);
        else if(c==0)
          printf("%d",a/b);
        printf("\n");
    }
    return 0;
}
