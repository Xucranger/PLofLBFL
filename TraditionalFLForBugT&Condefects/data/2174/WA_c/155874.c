#include<stdio.h>
#include<math.h>
int main()
{
float x,y;
while(scanf("%f%f",&x,&y)!=EOF)
{if(y==0)
 printf("error\n");
 else printf("%d\n",round(x/y));
}
return 0;
}
