#include <stdio.h>
void main()
{
float  a,b,c,d,x;
while(scanf("%f %f",&a,&b)!=EOF)
{if(b!=0)
{c=a/b;
d=(int)c;
x=c-d;
if(x>=0.5)
{
printf("%d\n",(int)c+1);}
else{
printf("%d\n",(int)c);}
}else printf("error\n");
}}
