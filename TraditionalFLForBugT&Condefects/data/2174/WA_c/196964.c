#include<stdio.h>
int main()
{
    int a,b,res1;
    float res2;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
            {
                res1=a/b;
                res2=a/b;
                if(res2-res1>=0.5)
                    printf("%d\n",res1+1);
                else
                    printf("%d\n",res1+1);
            }
    }
}
