#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            float a1,b1,c1;
        a1=a;b1=b;c1=a1/b1;
        c=a/b;
        if((c1-c)>=0.5)c++;
        printf("%d\n",c);
        }
        else printf("error\n");
    }
    return 0;
}
