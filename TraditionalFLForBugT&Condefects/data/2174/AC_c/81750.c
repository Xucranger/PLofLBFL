#include<stdio.h>
void main()
{int a,b,c;
while(scanf("%d %d",&a,&b)!=EOF)
if (b==0)
printf("error\n");
else
{c=(a*10/b+5)/10;
printf("%d\n",c);}
}
