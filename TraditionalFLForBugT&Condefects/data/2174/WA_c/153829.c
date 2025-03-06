#include<stdio.h>
void main()
{
int a,b,c,d;
scanf("%d %d",&a,&b);
scanf("%d %d",&c,&d);
if(b==0)
printf("error");
else
printf("%d\n",(a+b/2)/b);
if(d==0)
printf("error");
else
printf("%d",(c+d/2)/d);
}
