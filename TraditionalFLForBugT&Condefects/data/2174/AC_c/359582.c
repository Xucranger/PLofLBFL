#include<stdio.h>
#include<stdlib.h>
int main()
{int n,a,b,i=0;
while(scanf("%d %d",&a,&b)!=EOF)
{
if(b==0)
printf("error\n");
else if(b>0)
{
n=a%b;
i=a/b;
if(n>=(b+1)/2)
i++;
printf("%d\n",i);}}
 } 
