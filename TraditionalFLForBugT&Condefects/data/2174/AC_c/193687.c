#include <stdio.h>
int main()
{float x,y;
 int a;
while(scanf("%f%f",&x,&y)!=EOF)
if(y==0)
printf("error\n");
else
{
a=(int)(x/y+0.5);
printf("%d\n",a);
}
return 0;
}
