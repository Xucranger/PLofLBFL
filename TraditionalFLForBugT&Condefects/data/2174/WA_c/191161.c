#include <stdio.h>
int main()
{ int b,x;
float a;
scanf("%f",&a);
scanf("%d",&b);
if (b==0)
printf("error\n");
else
x=a/b+0.5;
printf("%d\n",x);
}
