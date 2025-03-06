#include<stdio.h>
int main(void)
{
    float a,b;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
            {
                if(((int)((a/b)*10)%10)>=5)
                    printf("%d\n",(int)(a/b)+1);
                else
                    printf("%d\n",(int)(a/b));
            }
    }
    return 0;
}
