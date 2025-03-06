#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,s1=0,s=0;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            c=((a*10)/b);
            d=c%10;
            if(d>=5)
            {
                s1=(a/b);
                s=s1+1;
                printf("%d\n",s);
            }
            else
            {
                s=(a/b);
                printf("%d\n",s);
            }
        }
    }
}
