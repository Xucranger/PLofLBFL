#include<stdio.h>
int main()
{
int a,b,m,t;
while(scanf("%d %d",&a,&b)!=EOF)
{
    if(b!=0)
    {
        m=a/b;
        t=a%b;
        if(t*10/b>=5)
            m=m+1;
        else
            m=m;
        printf("%d\n",m);
    }
    else
        printf("error\n");
}
return 0;
}
