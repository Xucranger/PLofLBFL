#include<stdio.h>
void main()
{
int a,b,c,d;
while(scanf("%d %d\n%d %d",&a,&b,&c,&d)!=EOF)
{
if(b==0)
printf("error");
else
printf("%d\n",(a+b/2)/b);
if(d==0)
printf("error");
else
printf("%d\n",(c+d/2)/d);
}
}
