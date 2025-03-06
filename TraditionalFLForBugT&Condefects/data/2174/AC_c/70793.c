#include<stdio.h>
int main()
{
    float a,b;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=a/b;
            if(c<0.5)
                printf("0\n");
            else if(c>=0.5)
            {
                int m;
                m=c;
                if(c-m>=0.5)
                {
                    printf("%d\n",m+1);
                }
                else if(c-m<0.5)
                {
                    printf("%d\n",m);
                }
            }
        }
    }
    return 0;
}
