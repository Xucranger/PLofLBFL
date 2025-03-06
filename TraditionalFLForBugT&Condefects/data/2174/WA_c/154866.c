#include <stdio.h>
int main()
{
int a,b,c;
while(scanf("%d%d",&a,&b)!=-1)
{
if(!b)
printf("error\n");
else
c=a/b;
printf("%d\n",c);
}
}
