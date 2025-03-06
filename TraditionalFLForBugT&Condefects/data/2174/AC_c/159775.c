#include <stdio.h>
#include <stdlib.h>
void Simple_division(int x,int y)
{
    int m;
    if(y!=0)
   {
        m=(int)(x*1.0/y+0.5);
        printf("%d\n",m);}
    else
        printf("error\n");
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    Simple_division(a,b);
    return 0;
}
