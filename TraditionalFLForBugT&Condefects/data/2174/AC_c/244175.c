#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            c=10*a/b%10;
            if(c>=5)
            {
                printf("%d\n",a/b+1);
            }
            else
            {
                printf("%d\n",a/b);
            }
        }
    }
    return 0;
}
