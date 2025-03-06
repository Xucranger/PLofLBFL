#include<stdio.h>
int main()
{
    int a,b,x;
    float y;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
     {   printf("error\n");
        continue;
     }
        else
        {
            x=a/b;
            y=1.0*a/b-x;
            if(y>=0.5)
            x=x+1;
            printf("%d\n",x);
        }
    }
    return 0;
}
