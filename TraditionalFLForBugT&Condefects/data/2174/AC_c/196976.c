#include<stdio.h>
int main()
{
    int res1;
    float a,b,res2;
    while(scanf("%f%f",&a,&b)!=EOF)
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
                    printf("%d\n",res1);
            }
    }
}
