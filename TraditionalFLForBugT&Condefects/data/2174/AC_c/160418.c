#include<stdio.h>
void main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            c=a%b;
            d=a/b;
            if(2*c>=b)
                printf("%d\n",d+1);
            else
                printf("%d\n",d);
        }
    }
}
