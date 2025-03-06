#include <stdio.h>
int main()
{
int a,b,c;
c=a/b;
while(scanf("%d%d",&a,&b)!=-1)
{
if(!b)
printf("error\n");
else
printf("%d\n",(int)(c+0.5));
}
}
