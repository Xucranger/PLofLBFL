#include <stdio.h>
#include <stdlib.h>
int f(int a,int b)
{
return (int)((float)a/(float)b+0.5);
}
int main()
{
    int a,b,c;
    float d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
            {
            c=f(a,b);
            printf("%d\n",c);
            }
        else
            printf("error\n");
    }
    return 0;
}
