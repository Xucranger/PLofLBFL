#include<stdio.h>
int main()
{
    int a,b,s,t,n,sum;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else{
            s=a/b;
            t=a%b;
            if(b%2==0)
            {
                if(t>=(b/2))
                    sum=s+1;
                else
                    sum=s;
            }
            else
            {
                n=(b+1)/2;
                if(t>=n)
                    sum=s+1;
                else
                    sum=s;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
