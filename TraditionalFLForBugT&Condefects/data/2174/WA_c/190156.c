#include<stdio.h>
int main()
{
    int a,b;
    int rst;
    while(scanf("%d %d",&a,&b)!= EOF)
    {
        if(b!=0)
        {
            rst=a/b;printf("%d\n",rst);
        }
        else printf("error\n");
    }
    return 0;
}
