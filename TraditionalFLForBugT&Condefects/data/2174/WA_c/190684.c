#include<stdio.h>
void main()
{
int a,b,c;
float d,e;
while(scanf("%d %d",&a,&b)!=EOF)
{
if(b==0)
printf("error");
else {c=a/b;d=a%b;e=d/b;
if(e >0.5)
c=c+1;
printf("%d",c);}}}
