#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            float c,d;
            c=a;
            d=b;
            int x;
            x=a/b;
            if(c/d-x>0.5)
            {
                printf("%d\n",x+1);
            }
            else
            {
                printf("%d\n",x);
            }
        }
    }
}
