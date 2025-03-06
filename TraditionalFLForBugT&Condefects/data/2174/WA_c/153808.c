#include<stdio.h>
void main()
{
int a,b,c,d;
scanf("%d %d",&a,&b);
scanf("%d %d",&c,&d);
if(b==0)
printf("ERROR");
else
printf("%d\n",(2*a/b+1)/2);
if(d==0)
printf("ERROR");
else
printf("%d",(2*c/d+1)/2);
}
