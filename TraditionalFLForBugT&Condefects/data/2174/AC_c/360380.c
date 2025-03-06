#include <stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else {
            c=a/b;
            d=a%b;
            if(d>=(b+1)/2)
                printf("%d\n",c+1);
            else
                printf("%d\n",c);
        }
    }
}
