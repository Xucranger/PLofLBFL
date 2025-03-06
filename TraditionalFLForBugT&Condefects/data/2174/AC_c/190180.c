#include<stdio.h>
int main()
{
    int a,b,c;
    float rst;
    while(scanf("%d %d",&a,&b)!= EOF)
    {
        if(b!=0)
        {
            rst=1.0*a/b;c=(int)(rst+0.5);printf("%d\n",c);
        }
        else printf("error\n");
    }
    return 0;
}
