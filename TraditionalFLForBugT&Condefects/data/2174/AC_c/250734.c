#include<stdio.h>
int main()
{
    int a,b,s,m;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
            continue;
        }
        s=a/b;
        m=a%b;
        if(m<(b/2.0));else s++;
        printf("%d\n",s);
    }
    return 0;
}
