#include<stdio.h>
int main()
{
    int a,b;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
        {
            if(b==0)
                printf("error\n");
            else
            {   c=1.0*a/b;
                if((c*10-a/b*10)>=5)
                    printf("%d\n",(a/b)+1);
                    else
                    printf("%d\n",a/b);
            }
        }
    return 0;
}
