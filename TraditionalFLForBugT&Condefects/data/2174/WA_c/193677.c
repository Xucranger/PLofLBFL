#include <stdio.h>
int main()
{
float a;
int x,y,b,c,d;
while(scanf("%d%d",&x,&y)!=EOF)
{
    if(y==0)
    printf("error\n");
    else
{a=x/y;
b=a;
c=b*2;
d=a*2;
 if(c>d)
     printf("%d\n",b+1);
    else
    printf("%d\n",b);}
     }
    return 0;
}
