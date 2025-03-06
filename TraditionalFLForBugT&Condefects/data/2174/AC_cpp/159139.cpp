#include<stdio.h>
int main()
{
float a,b;
while(scanf("%f%f",&a,&b)!=-1)
{
if(!b)
printf("error\n");
else
printf("%d\n",int(a/b+0.5));
}
return 0;
}
