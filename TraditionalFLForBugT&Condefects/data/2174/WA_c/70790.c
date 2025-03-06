#include<stdio.h>
int main()
{
    float a,b;
    float c;
    scanf("%d%d",&a,&b);
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
                    printf("%d",m+1);
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
