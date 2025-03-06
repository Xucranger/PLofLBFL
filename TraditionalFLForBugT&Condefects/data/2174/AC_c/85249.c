#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
float c;
while(scanf("%d %d",&a,&b)!=EOF)
{
if(b==0)
printf("error\n");
else
{c=(float)a/b;
a=a/b;
if(c<a+0.5)
printf("%d\n",a);
else
printf("%d\n",a+1);
}
}
}
