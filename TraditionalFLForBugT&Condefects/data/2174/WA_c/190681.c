#include<stdio.h>
void main()
{
int a,b,c,d;
while(scanf("%d %d",&a,&b)!=EOF)
{
if(b==0)
printf("error");
else {c=a/b;d=a/b;
if(d>4)
c=c+1;}
printf("%d",c);}}
