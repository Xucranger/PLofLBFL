#include <stdio.h>
int main()
{ int b,x;
float a;
while(scanf("%f %d",&a,&b) != EOF)
{
if (b==0)
printf("error\n");
else
{x=a/b+0.5;
printf("%d\n",x);}
}
return 0;
}
