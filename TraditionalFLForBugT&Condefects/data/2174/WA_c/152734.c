#include <stdio.h>
void main()
{
int a,b,c,d,x;
while(scanf("%d %d",&a,&b)!=EOF)
if(b!=0)
{c=a/b;
d=(int)c;
x=c-d;
if(x>=0.5)
c=d+1;
else c=d+1;
printf("%d\n",c);
}else printf("error\n");
}
