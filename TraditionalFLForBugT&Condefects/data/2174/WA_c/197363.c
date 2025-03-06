#include<stdio.h>
int main()
{
    float a,b;
    int s;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            s=((a/b)*10+5)/10;
            printf("%d",s);
        }
        if(b==0)
            printf("error\n");
    }
    return 0;
}
